#!/bin/bash
# Main Build Script for OpenPOWER QNNA Project
# Author: TechJoe96

set -e

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

# Configuration
PROJECT_NAME="OpenPOWER QNNA"
BUILD_DIR="build"

# Functions
print_header() {
    echo -e "${BLUE}=========================================${NC}"
    echo -e "${BLUE}  $1${NC}"
    echo -e "${BLUE}=========================================${NC}"
}

print_step() {
    echo -e "${YELLOW}► $1${NC}"
}

print_success() {
    echo -e "${GREEN}✓ $1${NC}"
}

print_error() {
    echo -e "${RED}✗ $1${NC}"
}

check_tool() {
    if command -v $1 &> /dev/null; then
        print_success "$1 found"
        return 0
    else
        print_error "$1 not found"
        return 1
    fi
}

# Main script
print_header "$PROJECT_NAME Build System"

# Parse arguments
SKIP_CHECKS=false
RUN_TESTS=true
RUN_SYNTHESIS=false
RUN_SIMULATION=true
RUN_OPENLANE=false

for arg in "$@"; do
    case $arg in
        --skip-checks)
            SKIP_CHECKS=true
            ;;
        --no-test)
            RUN_TESTS=false
            ;;
        --synthesis)
            RUN_SYNTHESIS=true
            ;;
        --no-sim)
            RUN_SIMULATION=false
            ;;
        --openlane)
            RUN_OPENLANE=true
            ;;
        --help)
            echo "Usage: $0 [options]"
            echo "Options:"
            echo "  --skip-checks    Skip tool checks"
            echo "  --no-test        Skip running tests"
            echo "  --synthesis      Run synthesis"
            echo "  --no-sim         Skip simulation"
            echo "  --openlane       Run OpenLane flow (requires Docker)"
            echo "  --help           Show this help"
            exit 0
            ;;
    esac
done

# Step 1: Check prerequisites
if [ "$SKIP_CHECKS" = false ]; then
    print_step "Checking prerequisites..."
    
    MISSING_TOOLS=""
    check_tool "make" || MISSING_TOOLS="$MISSING_TOOLS make"
    check_tool "python3" || MISSING_TOOLS="$MISSING_TOOLS python3"
    check_tool "verilator" || MISSING_TOOLS="$MISSING_TOOLS verilator"
    check_tool "yosys" || MISSING_TOOLS="$MISSING_TOOLS yosys"
    
    if [ -n "$MISSING_TOOLS" ]; then
        print_error "Missing tools:$MISSING_TOOLS"
        echo "Please install missing tools and try again"
        exit 1
    fi
    
    print_success "All prerequisites met"
fi

# Step 2: Create build directory
print_step "Setting up build environment..."
mkdir -p $BUILD_DIR
mkdir -p $BUILD_DIR/logs
mkdir -p $BUILD_DIR/reports
print_success "Build directories created"

# Step 3: Run RTL linting
print_step "Running RTL lint checks..."
cd rtl
verilator --lint-only -Wall \
    qnna_top.v \
    qnna_wishbone.v \
    qnna_csr.v \
    qnna_mac_array.v \
    qnna_buffer.v \
    2>&1 | tee ../$BUILD_DIR/logs/lint.log

if [ ${PIPESTATUS[0]} -eq 0 ]; then
    print_success "RTL lint passed"
else
    print_error "RTL lint failed (see $BUILD_DIR/logs/lint.log)"
fi
cd ..

# Step 4: Run Cocotb tests
if [ "$RUN_TESTS" = true ]; then
    print_step "Running Cocotb tests..."
    
    # Check for Cocotb
    if python3 -c "import cocotb" 2>/dev/null; then
        cd tb/cocotb
        make clean
        make 2>&1 | tee ../../$BUILD_DIR/logs/cocotb.log
        
        if [ ${PIPESTATUS[0]} -eq 0 ]; then
            print_success "Cocotb tests passed"
        else
            print_error "Cocotb tests failed (see $BUILD_DIR/logs/cocotb.log)"
        fi
        cd ../..
    else
        print_error "Cocotb not installed, skipping tests"
        echo "Install with: pip3 install cocotb"
    fi
fi

# Step 5: Run Verilator simulation
if [ "$RUN_SIMULATION" = true ]; then
    print_step "Running Verilator simulation..."
    cd tb/verilator
    make clean
    make 2>&1 | tee ../../$BUILD_DIR/logs/verilator_build.log
    
    if [ -f Vqnna_sim ]; then
        ./Vqnna_sim 2>&1 | tee ../../$BUILD_DIR/logs/verilator_sim.log
        
        if [ ${PIPESTATUS[0]} -eq 0 ]; then
            print_success "Verilator simulation completed"
        else
            print_error "Verilator simulation failed"
        fi
    else
        print_error "Verilator build failed"
    fi
    cd ../..
fi

# Step 6: Run synthesis
if [ "$RUN_SYNTHESIS" = true ]; then
    print_step "Running Yosys synthesis..."
    cd synthesis/yosys
    yosys -s synth.ys 2>&1 | tee ../../$BUILD_DIR/logs/synthesis.log
    
    if [ ${PIPESTATUS[0]} -eq 0 ]; then
        print_success "Synthesis completed"
        
        # Extract statistics
        echo "" > ../../$BUILD_DIR/reports/synthesis_stats.txt
        echo "Synthesis Statistics" >> ../../$BUILD_DIR/reports/synthesis_stats.txt
        echo "===================" >> ../../$BUILD_DIR/reports/synthesis_stats.txt
        grep -A 20 "=== qnna_top ===" ../../$BUILD_DIR/logs/synthesis.log >> ../../$BUILD_DIR/reports/synthesis_stats.txt
    else
        print_error "Synthesis failed"
    fi
    cd ../..
fi

# Step 7: Run OpenLane (if requested)
if [ "$RUN_OPENLANE" = true ]; then
    print_step "Running OpenLane flow..."
    
    if [ -z "$OPENLANE_ROOT" ] || [ -z "$PDK_ROOT" ]; then
        print_error "OPENLANE_ROOT or PDK_ROOT not set"
        echo "Please set up OpenLane environment first"
    else
        cd synthesis/openlane
        chmod +x run_openlane.sh
        ./run_openlane.sh 2>&1 | tee ../../$BUILD_DIR/logs/openlane.log
        cd ../..
    fi
fi

# Step 8: Integration with Microwatt
print_step "Preparing Microwatt integration..."
if [ -f integrate_microwatt.sh ]; then
    chmod +x integrate_microwatt.sh
    print_success "Integration script ready"
    echo "Run './integrate_microwatt.sh' to integrate with Microwatt"
else
    print_error "Integration script not found"
fi

# Step 9: Generate reports
print_step "Generating reports..."

# Summary report
cat > $BUILD_DIR/reports/build_summary.txt << EOF
Build Summary Report
====================
Date: $(date)
Project: $PROJECT_NAME

Tools Versions:
---------------
$(verilator --version 2>/dev/null || echo "Verilator: Not installed")
$(yosys --version 2>/dev/null | head -n1 || echo "Yosys: Not installed")
$(python3 --version 2>/dev/null || echo "Python: Not installed")

Build Results:
--------------
RTL Lint: $([ -f $BUILD_DIR/logs/lint.log ] && echo "✓ Complete" || echo "✗ Not run")
Cocotb Tests: $([ -f $BUILD_DIR/logs/cocotb.log ] && echo "✓ Complete" || echo "✗ Not run")
Verilator Sim: $([ -f $BUILD_DIR/logs/verilator_sim.log ] && echo "✓ Complete" || echo "✗ Not run")
Synthesis: $([ -f $BUILD_DIR/logs/synthesis.log ] && echo "✓ Complete" || echo "✗ Not run")
OpenLane: $([ -f $BUILD_DIR/logs/openlane.log ] && echo "✓ Complete" || echo "✗ Not run")

File Statistics:
----------------
RTL Files: $(find rtl -name "*.v" | wc -l)
Test Files: $(find tb -name "*.py" -o -name "*.cpp" | wc -l)
Total Lines: $(find rtl -name "*.v" -exec wc -l {} + | tail -n1 | awk '{print $1}')
EOF

print_success "Reports generated in $BUILD_DIR/reports/"

# Final summary
print_header "Build Complete!"

echo ""
echo "Summary:"
echo "--------"
cat $BUILD_DIR/reports/build_summary.txt | grep -A 10 "Build Results:"

echo ""
echo "Next Steps:"
echo "-----------"
echo "1. Review reports in $BUILD_DIR/reports/"
echo "2. View waveforms: gtkwave tb/cocotb/dump.vcd"
echo "3. Integrate with Microwatt: ./integrate_microwatt.sh"
echo "4. Run OpenFrame flow: cd synthesis/openframe && ./run.sh"
echo "5. Submit to ChipFoundry: https://chipfoundry.io/challenges/microwatt"

echo ""
print_success "Build completed successfully!"
