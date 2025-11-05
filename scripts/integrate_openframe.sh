#!/bin/bash
# OpenFrame Integration Script
# This script integrates QNNA with OpenFrame project wrapper
# Author: TechJoe96

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

echo "========================================="
echo "  OpenFrame + QNNA Integration Script"
echo "========================================="
echo ""

# Check if OpenFrame project exists
OPENFRAME_PROJECT="${OPENFRAME_PROJECT:-../my-microwatt-project}"
if [ ! -d "$OPENFRAME_PROJECT" ]; then
    echo "OpenFrame project not found: $OPENFRAME_PROJECT"
    echo ""
    echo "Set OPENFRAME_PROJECT environment variable:"
    echo "  export OPENFRAME_PROJECT=/path/to/openframe/project"
    echo ""
    exit 1
fi

OPENFRAME_PROJECT="$(cd "$OPENFRAME_PROJECT" && pwd)"
echo "OpenFrame project: $OPENFRAME_PROJECT"
echo "QNNA project: $PROJECT_ROOT"
echo ""

# Step 1: Copy QNNA RTL files to OpenFrame project
echo "Step 1: Copying QNNA RTL files to OpenFrame project..."
OPENFRAME_RTL_DIR="$OPENFRAME_PROJECT/verilog/rtl"
mkdir -p "$OPENFRAME_RTL_DIR"

cp "$PROJECT_ROOT/rtl/qnna_top.v" "$OPENFRAME_RTL_DIR/"
cp "$PROJECT_ROOT/rtl/qnna_wishbone.v" "$OPENFRAME_RTL_DIR/"
cp "$PROJECT_ROOT/rtl/qnna_csr.v" "$OPENFRAME_RTL_DIR/"
cp "$PROJECT_ROOT/rtl/qnna_mac_array.v" "$OPENFRAME_RTL_DIR/"
cp "$PROJECT_ROOT/rtl/qnna_buffer.v" "$OPENFRAME_RTL_DIR/"

echo "✓ QNNA RTL files copied to $OPENFRAME_RTL_DIR"
echo ""

# Step 2: Copy GDS and LEF files
echo "Step 2: Copying GDS and LEF files..."
OPENFRAME_GDS_DIR="$OPENFRAME_PROJECT/gds"
OPENFRAME_LEF_DIR="$OPENFRAME_PROJECT/lef"
mkdir -p "$OPENFRAME_GDS_DIR"
mkdir -p "$OPENFRAME_LEF_DIR"

# Find latest GDS file
LATEST_RUN=$(ls -td "$PROJECT_ROOT/openlane/qnna_top/runs"/*/ 2>/dev/null | head -1)
if [ -n "$LATEST_RUN" ] && [ -f "$LATEST_RUN/results/final/gds/qnna_top.gds" ]; then
    cp "$LATEST_RUN/results/final/gds/qnna_top.gds" "$OPENFRAME_GDS_DIR/"
    echo "✓ GDS file copied: $OPENFRAME_GDS_DIR/qnna_top.gds"
else
    echo "⚠ Warning: GDS file not found in latest run"
    echo "  Run 'make qnna_top' first to generate GDS"
fi

# Find latest LEF file
if [ -n "$LATEST_RUN" ] && [ -f "$LATEST_RUN/results/final/lef/qnna_top.lef" ]; then
    cp "$LATEST_RUN/results/final/lef/qnna_top.lef" "$OPENFRAME_LEF_DIR/"
    echo "✓ LEF file copied: $OPENFRAME_LEF_DIR/qnna_top.lef"
else
    echo "⚠ Warning: LEF file not found in latest run"
fi

echo ""

# Step 3: Update OpenFrame config.json
echo "Step 3: Updating OpenFrame config.json..."
OPENFRAME_CONFIG="$OPENFRAME_PROJECT/openlane/openframe_project_wrapper/config.json"

if [ -f "$OPENFRAME_CONFIG" ]; then
    echo "Found OpenFrame config: $OPENFRAME_CONFIG"
    echo ""
    echo "Please manually add QNNA to config.json:"
    echo ""
    echo "1. Add QNNA RTL files to VERILOG_FILES:"
    echo '   "dir::../../verilog/rtl/qnna_top.v",'
    echo '   "dir::../../verilog/rtl/qnna_wishbone.v",'
    echo '   "dir::../../verilog/rtl/qnna_csr.v",'
    echo '   "dir::../../verilog/rtl/qnna_mac_array.v",'
    echo '   "dir::../../verilog/rtl/qnna_buffer.v",'
    echo ""
    echo "2. Add QNNA GDS to EXTRA_GDS_FILES:"
    echo '   "dir::../../gds/qnna_top.gds",'
    echo ""
    echo "3. Add QNNA LEF to EXTRA_LEFS:"
    echo '   "dir::../../lef/qnna_top.lef",'
    echo ""
else
    echo "⚠ OpenFrame config not found: $OPENFRAME_CONFIG"
    echo "  Create config.json manually or run OpenFrame setup first"
fi

echo ""

# Step 4: Create integration documentation
echo "Step 4: Creating integration documentation..."
cat > "$PROJECT_ROOT/docs/OPENFRAME_INTEGRATION.md" << 'DOCEOF'
# OpenFrame Integration Guide

## Overview

This guide explains how to integrate QNNA accelerator with OpenFrame project wrapper for ChipIgnite tape-out.

## Integration Steps

### 1. Prerequisites

- OpenFrame project set up (see ChipIgnite documentation)
- QNNA GDS and LEF files generated
- OpenLane flow completed

### 2. Run Integration Script

```bash
cd openpower-qnna-project
./scripts/integrate_openframe.sh
```

This will:
- Copy QNNA RTL files to OpenFrame project
- Copy GDS and LEF files
- Provide instructions for updating config.json

### 3. Update OpenFrame config.json

Edit `openlane/openframe_project_wrapper/config.json`:

#### Add QNNA RTL Files

```json
"VERILOG_FILES": [
    "dir::../../verilog/rtl/qnna_top.v",
    "dir::../../verilog/rtl/qnna_wishbone.v",
    "dir::../../verilog/rtl/qnna_csr.v",
    "dir::../../verilog/rtl/qnna_mac_array.v",
    "dir::../../verilog/rtl/qnna_buffer.v",
    // ... other files
]
```

#### Add QNNA GDS Files

```json
"EXTRA_GDS_FILES": [
    "dir::../../gds/qnna_top.gds",
    // ... other GDS files
]
```

#### Add QNNA LEF Files

```json
"EXTRA_LEFS": [
    "dir::../../lef/qnna_top.lef",
    // ... other LEF files
]
```

### 4. Integrate in SoC

Update SoC integration file to include QNNA in the project wrapper.

### 5. Run OpenLane Flow

```bash
cd openframe_project
make openframe_project_wrapper
```

## File Locations

After integration:
- **RTL**: `verilog/rtl/qnna_*.v`
- **GDS**: `gds/qnna_top.gds`
- **LEF**: `lef/qnna_top.lef`

## Verification

1. Check that all files are copied correctly
2. Verify config.json includes QNNA files
3. Run OpenLane flow and check for errors
4. Verify QNNA appears in final layout

## Troubleshooting

### Issue: GDS file not found
**Solution**: Run `make qnna_top` first to generate GDS

### Issue: LEF file not found
**Solution**: Run `make qnna_top` first to generate LEF

### Issue: Config.json not found
**Solution**: Run OpenFrame setup first or create manually

### Issue: Synthesis errors
**Solution**: Check RTL file paths in config.json are correct
DOCEOF

echo "✓ Integration documentation created"
echo ""

# Summary
echo "========================================="
echo "  OpenFrame Integration Complete!"
echo "========================================="
echo ""
echo "Files created/modified:"
echo "  ✓ QNNA RTL files: $OPENFRAME_RTL_DIR/"
echo "  ✓ GDS file: $OPENFRAME_GDS_DIR/qnna_top.gds"
echo "  ✓ LEF file: $OPENFRAME_LEF_DIR/qnna_top.lef"
echo "  ✓ Documentation: $PROJECT_ROOT/docs/OPENFRAME_INTEGRATION.md"
echo ""
echo "Next steps:"
echo "  1. Update $OPENFRAME_CONFIG to include QNNA files"
echo "  2. Run OpenLane flow: cd $OPENFRAME_PROJECT && make openframe_project_wrapper"
echo "  3. Verify QNNA appears in final layout"
echo ""

