# OpenPOWER QNNA Project - Step-by-Step Implementation Guide

## Overview
This guide provides step-by-step instructions to run the OpenPOWER QNNA (Quantized Neural Net Accelerator) project. This guide skips FPGA steps as requested and focuses on simulation, verification, and ASIC synthesis.

## Prerequisites

### Required Tools
1. **Verilator** (v5.0+) - For RTL simulation
2. **Yosys** (v0.23+) - For synthesis
3. **Python 3.8+** - For Cocotb tests
4. **Cocotb** - Python-based verification framework
5. **Make** - Build automation
6. **GHDL** (optional) - For Microwatt VHDL simulation

### Installing Dependencies

#### macOS (using Homebrew)
```bash
# Install Verilator
brew install verilator

# Install Yosys
brew install yosys

# Install Python packages
pip3 install cocotb pytest
```

#### Linux (Ubuntu/Debian)
```bash
# Install Verilator
sudo apt-get install verilator

# Install Yosys
sudo apt-get install yosys

# Install Python packages
pip3 install cocotb pytest
```

### Verify Installation
```bash
verilator --version
yosys --version
python3 --version
python3 -c "import cocotb; print('Cocotb version:', cocotb.__version__)"
```

---

## Step 1: Clone and Setup Project

### 1.1 Clone Repository
```bash
cd /path/to/your/workspace
git clone https://github.com/TechJoe96/OpenPOWER-HW-Design.git
cd OpenPOWER-HW-Design
```

### 1.2 Verify Project Structure
```bash
ls -la
# Should see:
# - rtl/          (RTL design files)
# - tb/           (Testbenches)
# - sw/           (Software examples)
# - docs/         (Documentation)
# - synthesis/    (Synthesis scripts)
# - Makefile      (Main build file)
```

---

## Step 2: RTL Linting

### 2.1 Run Verilator Lint
```bash
cd OpenPOWER-HW-Design
make lint
```

**Expected Output:**
- Warnings are acceptable (PINCONNECTEMPTY, UNUSEDSIGNAL, etc.)
- No errors should be present
- Exit code should be 0

**Common Issues:**
- If you see syntax errors, check the RTL files in `rtl/` directory
- Some warnings about unused signals are normal

---

## Step 3: Verilator Simulation

### 3.1 Build Verilator Simulation
```bash
cd tb/verilator
make clean
make
```

**Expected Output:**
```
Build complete: Vqnna_sim
```

### 3.2 Run Simulation
```bash
./Vqnna_sim
```

**Expected Output:**
- Simulation runs with test cases
- May show timeout warnings (this is normal for some test scenarios)
- Tests execute and report results

**Note:** The simulation may show timeout warnings if the testbench doesn't complete within expected cycles. This is acceptable for basic functionality verification.

---

## Step 4: Cocotb Tests (Optional)

### 4.1 Setup Cocotb Environment
```bash
cd tb/cocotb

# Verify Cocotb is available
cocotb-config --help
```

**Note:** If `cocotb-config` is not found, you may need to:
```bash
pip3 install --user cocotb
export PATH=$PATH:$HOME/.local/bin
```

### 4.2 Run Cocotb Tests
```bash
cd tb/cocotb
make clean
make
```

**Expected Output:**
- Tests run with Icarus Verilog or Verilator
- Test results are displayed
- Coverage information may be shown

**Common Issues:**
- If `cocotb-config` is not found, install Cocotb properly
- Make sure Python 3.8+ is being used

---

## Step 5: Yosys Synthesis (ASIC - No FPGA)

### 5.1 Generic Synthesis (No PDK Required)
```bash
cd synthesis/yosys

# Run synthesis script
yosys -s synth.ys
```

**Expected Output:**
- Yosys reads all RTL files
- Performs generic synthesis
- Shows statistics (LUTs, flip-flops, etc.)
- Generates `qnna_synth.v` (synthesized netlist)

### 5.2 Manual Synthesis (Alternative)
```bash
cd OpenPOWER-HW-Design
mkdir -p build/asic
cd build/asic

yosys << EOF
# Read RTL files
read_verilog ../../rtl/qnna_top.v
read_verilog ../../rtl/qnna_wishbone.v
read_verilog ../../rtl/qnna_csr.v
read_verilog ../../rtl/qnna_mac_array.v
read_verilog ../../rtl/qnna_buffer.v

# Set top module
hierarchy -check -top qnna_top

# Generic synthesis
synth -top qnna_top

# Optimize
opt -fast
opt_clean -purge

# Show statistics
stat

# Write output
write_verilog qnna_synth.v
write_json qnna.json
EOF
```

### 5.3 SKY130 PDK Synthesis (Optional - Requires PDK)
If you have SKY130 PDK installed:

```bash
export PDK_ROOT=/path/to/skywater-pdk
export PDK=sky130A

cd synthesis/yosys
yosys -s synth.ys
```

**Note:** You need to uncomment the SKY130 library lines in `synth.ys` if you have PDK installed.

---

## Step 6: Integration with Microwatt (Optional)

### 6.1 Clone Microwatt
```bash
cd OpenPOWER-HW-Design
git clone https://github.com/antonblanchard/microwatt.git
cd microwatt
git submodule update --init --recursive
cd ..
```

### 6.2 Run Integration Script
```bash
chmod +x integrate_microwatt.sh
./integrate_microwatt.sh
```

**Expected Output:**
- Microwatt is cloned (if not present)
- Wrapper is created
- Integrated design is built

**Note:** This requires GHDL for VHDL support or a Verilog wrapper.

---

## Step 7: Build Summary

### 7.1 Run Complete Build Script
```bash
chmod +x build.sh
./build.sh
```

**Options:**
```bash
./build.sh --no-test      # Skip tests
./build.sh --synthesis    # Include synthesis
./build.sh --no-sim       # Skip simulation
```

### 7.2 Check Build Results
```bash
# View build summary
cat build/reports/build_summary.txt

# View logs
ls build/logs/

# Check synthesis results
ls build/asic/
```

---

## Step 8: Software Demos

### 8.1 Compile C Demo
```bash
cd sw/c

# For cross-compilation (PowerPC)
powerpc64le-linux-gnu-gcc -O2 -o qnna_demo qnna_demo.c

# Or for native compilation (if running on PowerPC)
gcc -O2 -o qnna_demo qnna_demo.c
```

### 8.2 Run Python Demo
```bash
cd sw/python
python3 qnna_demo.py
```

---

## Common Issues and Solutions

### Issue 1: Cocotb Not Found
**Solution:**
```bash
pip3 install --user cocotb
export PATH=$PATH:$HOME/.local/bin
```

### Issue 2: Verilator Build Errors
**Solution:**
- Check that all RTL files are present
- Verify Verilator version (v5.0+)
- Check for syntax errors in RTL

### Issue 3: Yosys Synthesis Errors
**Solution:**
- Check RTL syntax (some Verilog features may not be supported)
- Try generic synthesis first (without PDK)
- Verify all RTL files are readable

### Issue 4: Missing Dependencies
**Solution:**
```bash
# Install all dependencies
make deps
```

---

## Project Structure Reference

```
OpenPOWER-HW-Design/
├── rtl/                    # RTL design files
│   ├── qnna_top.v         # Top-level module
│   ├── qnna_wishbone.v    # Wishbone interface
│   ├── qnna_csr.v         # Control/Status registers
│   ├── qnna_mac_array.v   # MAC array implementation
│   ├── qnna_buffer.v      # SRAM buffers
│   └── microwatt_qnna_wrapper.v  # Microwatt integration
├── tb/                     # Testbenches
│   ├── cocotb/            # Python testbenches
│   │   ├── test_qnna.py   # Test cases
│   │   └── Makefile       # Cocotb build file
│   └── verilator/         # C++ testbenches
│       ├── tb_qnna.cpp    # Testbench source
│       └── Makefile        # Verilator build file
├── sw/                     # Software examples
│   ├── c/                 # C drivers and demos
│   └── python/            # MicroPython support
├── synthesis/              # Synthesis scripts
│   ├── yosys/             # Yosys scripts
│   ├── openlane/          # OpenLane flow (requires setup)
│   └── openframe/         # OpenFrame config
├── docs/                   # Documentation
│   ├── overview.md        # Design overview
│   ├── arch.md            # Architecture details
│   └── integration.md      # Integration guide
├── build/                  # Build outputs (generated)
│   ├── logs/              # Build logs
│   ├── reports/           # Build reports
│   └── asic/              # Synthesis outputs
├── Makefile               # Main build file
├── build.sh              # Build script
└── integrate_microwatt.sh # Integration script
```

---

## Quick Reference Commands

### Linting
```bash
make lint
```

### Simulation
```bash
make sim              # Run Cocotb tests
cd tb/verilator && make && ./Vqnna_sim  # Verilator simulation
```

### Synthesis
```bash
make asic             # ASIC synthesis (requires PDK)
cd synthesis/yosys && yosys -s synth.ys  # Generic synthesis
```

### Clean
```bash
make clean            # Clean build artifacts
make distclean        # Deep clean
```

### Help
```bash
make help             # Show all available targets
```

---

## Next Steps

### For ASIC Tape-out (Advanced)

#### Step 1: Set Up OpenLane Environment

**Prerequisites:**
```bash
# Install Docker (if not installed)
# macOS: Download Docker Desktop
# Linux: sudo apt-get install docker.io

# Verify Docker
docker --version
docker ps
```

**Set Environment Variables:**
```bash
cd openpower-qnna-project

# Set PDK path (use existing or install new)
export PDK_ROOT=/path/to/skywater-pdk

# Or if using existing Microwatt PDK:
export PDK_ROOT=/Users/jochoi/github_repo/my-microwatt-project/dependencies/pdks/volare/sky130/versions/0fe599b2afb670d281543108caf8310912f54af

# Set PDK version
export PDK=sky130A

# Set OpenLane root
export OPENLANE_ROOT=$(pwd)/dependencies/openlane_src
```

**Add PDK_ROOT to Docker File Sharing (macOS):**
1. Open Docker Desktop
2. Go to Settings → Resources → File Sharing
3. Add `PDK_ROOT` path
4. Click "Apply & Restart"

**Setup OpenLane (One-Time):**
```bash
cd openpower-qnna-project
make openlane
```

This will:
- Clone OpenLane repository to `dependencies/openlane_src/`
- Download OpenLane Docker image (`efabless/openlane:2024.08.15`)

**Time:** ~5-10 minutes (depends on internet speed)

#### Step 2: Configure SKY130 PDK

**Verify PDK Installation:**
```bash
# Check if PDK exists
ls -la $PDK_ROOT

# Should see:
# - sky130A/
# - sky130B/
# - etc.
```

**Verify PDK in Docker:**
```bash
# Test Docker access to PDK
docker run --rm \
  -v $PDK_ROOT:$PDK_ROOT \
  -e PDK_ROOT=$PDK_ROOT \
  -e PDK=$PDK \
  efabless/openlane:2024.08.15 \
  sh -c "ls -la $PDK_ROOT"
```

**Check OpenLane Configuration:**
```bash
# View OpenLane config
cat openlane/qnna_top/config.json | grep -E "PDK|STD_CELL"
```

**Expected:**
```json
"PDK": "sky130A",
"STD_CELL_LIBRARY": "sky130_fd_sc_hd",
```

#### Step 3: Run Place and Route

**Run Complete OpenLane Flow:**
```bash
cd openpower-qnna-project
make qnna_top
```

**What this does:**
1. **Synthesis** - RTL → Gates (Yosys)
2. **Floorplanning** - Define chip area
3. **Placement** - Place standard cells
4. **Clock Tree Synthesis** - Distribute clock
5. **Routing** - Connect cells with wires
6. **Signoff** - Final verification

**Time:** ~10-30 minutes (depends on system)

**Output:**
- Logs: `openlane/qnna_top/runs/[TIMESTAMP]/logs/`
- Reports: `openlane/qnna_top/runs/[TIMESTAMP]/reports/`
- Results: `openlane/qnna_top/runs/[TIMESTAMP]/results/`

**Monitor Progress:**
```bash
# Watch logs in real-time
tail -f openlane/qnna_top/runs/[LATEST]/openlane.log

# Or check specific step
tail -f openlane/qnna_top/runs/[LATEST]/logs/routing/12-detailed.log
```

**Check Results:**
```bash
# Check if flow completed
ls -la openlane/qnna_top/runs/[LATEST]/results/final/

# Should see:
# - gds/qnna_top.gds
# - def/qnna_top.def
# - lef/qnna_top.lef
# - verilog/gl/qnna_top.v
# - spef/qnna_top.spef
```

#### Step 4: Generate GDS Files

**GDS File Location:**
After running `make qnna_top`, GDS file is automatically generated:

```bash
# Find latest GDS file
ls -lh openlane/qnna_top/runs/*/results/final/gds/qnna_top.gds | tail -1

# Or use helper script
./scripts/get_latest_gds.sh
```

**Location:**
```
openlane/qnna_top/runs/[LATEST_TIMESTAMP]/results/final/gds/qnna_top.gds
```

**Size:** ~4.2 MB

**Copy GDS for Manual Upload:**
```bash
# Option 1: Use helper script
./scripts/get_latest_gds.sh
# Type 'y' when prompted

# Option 2: Manual copy
LATEST=$(ls -td openlane/qnna_top/runs/*/ | head -1 | xargs basename)
cp "openlane/qnna_top/runs/$LATEST/results/final/gds/qnna_top.gds" ./qnna_top.gds
```

**View GDS File:**
```bash
# Using KLayout (if installed)
klayout openlane/qnna_top/runs/[LATEST]/results/final/gds/qnna_top.gds

# Or install KLayout
brew install klayout  # macOS
sudo apt-get install klayout  # Linux
```

**Verify GDS File:**
```bash
# Check file size (should be ~4.2MB)
ls -lh openlane/qnna_top/runs/[LATEST]/results/final/gds/qnna_top.gds

# Check file type
file openlane/qnna_top/runs/[LATEST]/results/final/gds/qnna_top.gds
```

**Quick Reference for ASIC Tape-out:**
```bash
# 1. Setup
export PDK_ROOT=/path/to/skywater-pdk
export PDK=sky130A
make openlane

# 2. Run flow
make qnna_top

# 3. Get GDS
./scripts/get_latest_gds.sh
```

### For FPGA (Not covered in this guide)
1. Configure FPGA family
2. Run FPGA synthesis
3. Run place and route
4. Generate bitstream

### For Integration
1. Integrate with Microwatt SoC
2. Configure memory map
3. Test with software
4. Measure performance

---

## Performance Metrics

### Expected Results
- **4×4 MAC Array**: ~64 ops/cycle
- **Clock Frequency**: 100-200 MHz (simulation)
- **Area**: ~0.5 mm² (SKY130, estimated)
- **Power**: ~50 mW @ 100 MHz (estimated)

### Benchmarking
Run the performance test in Verilator simulation:
```bash
cd tb/verilator
./Vqnna_sim
# Look for performance metrics in output
```

---

## Troubleshooting

### Check Logs
```bash
# View build logs
cat build/logs/*.log

# View specific log
cat build/logs/cocotb.log
cat build/logs/verilator_sim.log
cat build/logs/synthesis.log
```

### Verify RTL
```bash
# Check for syntax errors
verilator --lint-only rtl/*.v

# Check module hierarchy
grep -r "module\|endmodule" rtl/
```

### Check Environment
```bash
# Verify tools
which verilator yosys python3 make

# Check versions
verilator --version
yosys --version
python3 --version
```

---

## Additional Resources

- **Project Repository**: https://github.com/TechJoe96/OpenPOWER-HW-Design
- **Microwatt Repository**: https://github.com/antonblanchard/microwatt
- **ChipFoundry Challenge**: https://chipfoundry.io/challenges/microwatt
- **Documentation**: See `docs/` directory for detailed documentation

---

## Summary

This guide has covered:
1. ✅ Prerequisites and installation
2. ✅ RTL linting
3. ✅ Verilator simulation
4. ✅ Cocotb tests (optional)
5. ✅ Yosys synthesis (ASIC, no FPGA)
6. ✅ Microwatt integration (optional)
7. ✅ Build automation
8. ✅ Software demos

**Note:** FPGA steps are skipped as requested. For FPGA synthesis, refer to the Makefile `fpga` target, but this guide focuses on simulation and ASIC synthesis only.

---

*Last Updated: Based on project README and build scripts*
*Version: 1.0*

