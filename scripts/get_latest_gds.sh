#!/bin/bash
# Get Latest GDS File
# This script finds and optionally copies the latest GDS file
# Author: TechJoe96

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
OPENLANE_RUNS_DIR="$PROJECT_ROOT/openlane/qnna_top/runs"

echo "========================================="
echo "  Get Latest GDS File"
echo "========================================="
echo ""

# Check if runs directory exists
if [ ! -d "$OPENLANE_RUNS_DIR" ]; then
    echo "No OpenLane runs found!"
    echo ""
    echo "Run OpenLane flow first:"
    echo "  make qnna_top"
    exit 1
fi

# Find latest run directory
LATEST_RUN=$(ls -td "$OPENLANE_RUNS_DIR"/*/ 2>/dev/null | head -1)

if [ -z "$LATEST_RUN" ]; then
    echo "No OpenLane runs found!"
    echo ""
    echo "Run OpenLane flow first:"
    echo "  make qnna_top"
    exit 1
fi

LATEST_RUN=$(basename "$LATEST_RUN")
GDS_FILE="$OPENLANE_RUNS_DIR/$LATEST_RUN/results/final/gds/qnna_top.gds"

echo "Latest run: $LATEST_RUN"
echo ""

# Check if GDS file exists
if [ -f "$GDS_FILE" ]; then
    FILE_SIZE=$(ls -lh "$GDS_FILE" | awk '{print $5}')
    echo "✓ GDS file found:"
    echo "  Location: $GDS_FILE"
    echo "  Size: $FILE_SIZE"
    echo ""
    
    # Ask if user wants to copy to root
    read -p "Copy GDS file to project root for manual upload? (y/n) " -n 1 -r
    echo ""
    if [[ $REPLY =~ ^[Yy]$ ]]; then
        cp "$GDS_FILE" "$PROJECT_ROOT/qnna_top.gds"
        echo "✓ GDS file copied to: $PROJECT_ROOT/qnna_top.gds"
        echo ""
        echo "You can now upload: qnna_top.gds"
    else
        echo ""
        echo "GDS file location:"
        echo "  $GDS_FILE"
        echo ""
        echo "You can copy it manually:"
        echo "  cp $GDS_FILE ./qnna_top.gds"
    fi
else
    echo "⚠ GDS file not found in latest run!"
    echo ""
    echo "Latest run: $LATEST_RUN"
    echo "Expected location: $GDS_FILE"
    echo ""
    echo "Possible reasons:"
    echo "  1. OpenLane flow didn't complete"
    echo "  2. GDS generation step failed"
    echo ""
    echo "Try running OpenLane flow again:"
    echo "  make qnna_top"
fi

echo ""
echo "========================================="
echo "  Summary"
echo "========================================="
echo ""
echo "Latest GDS file:"
echo "  $GDS_FILE"
echo ""
echo "To copy for manual upload:"
echo "  cp $GDS_FILE ./qnna_top.gds"
echo ""

