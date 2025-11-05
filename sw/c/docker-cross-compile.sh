#!/bin/bash
#
# Docker-based PowerPC cross-compilation helper
# For macOS users who don't have native PowerPC toolchain
#

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Source file
SRC="qnna_demo.c"

# Output binary
OUTPUT="qnna_demo"

# Docker image
IMAGE="ubuntu:22.04"

echo "=========================================="
echo "PowerPC Cross-Compilation via Docker"
echo "=========================================="
echo ""
echo "This will use Docker to cross-compile $SRC"
echo "for PowerPC 64-bit little-endian (Microwatt)"
echo ""

# Check if Docker is available
if ! command -v docker &> /dev/null; then
    echo "❌ Error: Docker is not installed"
    echo ""
    echo "Please install Docker Desktop:"
    echo "  https://www.docker.com/products/docker-desktop"
    exit 1
fi

echo "✓ Docker is available"
echo ""

# Run Docker container with PowerPC cross-compiler
echo "Running Docker container..."
echo ""

docker run --rm \
    -v "$SCRIPT_DIR:/work" \
    -w /work \
    "$IMAGE" \
    bash -c "
        echo 'Updating package list...'
        apt-get update -qq > /dev/null 2>&1
        
        echo 'Installing PowerPC cross-compiler...'
        apt-get install -y -qq gcc-powerpc64le-linux-gnu > /dev/null 2>&1
        
        echo 'Cross-compiling $SRC...'
        powerpc64le-linux-gnu-gcc -O2 -Wall -Wextra -std=c99 -o $OUTPUT $SRC
        
        if [ \$? -eq 0 ]; then
            echo ''
            echo '✓ Compilation successful!'
            echo ''
            echo 'Output: $OUTPUT'
            ls -lh $OUTPUT
            echo ''
            echo 'File type:'
            file $OUTPUT
        else
            echo '❌ Compilation failed'
            exit 1
        fi
    "

if [ $? -eq 0 ]; then
    echo ""
    echo "=========================================="
    echo "✓ Cross-compilation complete!"
    echo "=========================================="
    echo ""
    echo "Binary: $SCRIPT_DIR/$OUTPUT"
    echo ""
    echo "To transfer to Microwatt:"
    echo "  scp $OUTPUT user@microwatt-system:/path/to/demo"
    echo ""
else
    echo ""
    echo "=========================================="
    echo "❌ Cross-compilation failed"
    echo "=========================================="
    exit 1
fi

