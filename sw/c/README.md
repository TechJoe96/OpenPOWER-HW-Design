# QNNA C Demo

C implementation of the QNNA hardware accelerator interface for Microwatt.

## Overview

This C demo provides a complete interface to the QNNA (Quantized Neural Net Accelerator) hardware. It can be compiled for both PowerPC (Microwatt target) and native platforms, with optional simulation mode for testing.

## Prerequisites

### For Cross-Compilation (PowerPC)

Install PowerPC cross-compiler:

**Ubuntu/Debian:**
```bash
sudo apt-get update
sudo apt-get install gcc-powerpc64le-linux-gnu g++-powerpc64le-linux-gnu
```

**macOS (using Homebrew):**
```bash
# Install Homebrew if not already installed
# /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install PowerPC cross-compiler
brew install gcc

# Note: Native macOS GCC doesn't support PowerPC cross-compilation
# You may need to use a Linux VM or Docker container for PowerPC cross-compilation
# Alternatively, use Docker with a PowerPC toolchain:
docker run --rm -v $(pwd):/work -w /work ubuntu:22.04 bash -c "apt-get update && apt-get install -y gcc-powerpc64le-linux-gnu && powerpc64le-linux-gnu-gcc -O2 -o qnna_demo qnna_demo.c"
```

**Alternative: Use Docker for Cross-Compilation:**
```bash
# Create a Dockerfile for PowerPC cross-compilation
# Or use a pre-built image with PowerPC toolchain
docker run --rm -v $(pwd):/work -w /work ubuntu:22.04 \
  bash -c "apt-get update && apt-get install -y gcc-powerpc64le-linux-gnu && powerpc64le-linux-gnu-gcc -O2 -o qnna_demo qnna_demo.c"
```

**Verify Installation:**
```bash
powerpc64le-linux-gnu-gcc --version
```

### For Native Compilation

Standard GCC compiler:
```bash
gcc --version  # Should be 4.8+
```

## Building

### Cross-Compilation (PowerPC)

```bash
cd sw/c

# For PowerPC 64-bit little-endian (Microwatt default)
make powerpc64le

# Or manually:
powerpc64le-linux-gnu-gcc -O2 -o qnna_demo qnna_demo.c
```

### Native Compilation

```bash
cd sw/c

# Build with default compiler
make

# Or manually:
gcc -O2 -o qnna_demo qnna_demo.c
```

### Simulation Mode (for testing)

```bash
cd sw/c

# Build in simulation mode
make sim

# Or manually:
gcc -O2 -DSIM_MODE -o qnna_demo qnna_demo.c
```

## Running

### On Real Hardware (Microwatt)

1. Cross-compile the demo:
   ```bash
   make powerpc64le
   ```

2. Transfer to Microwatt system:
   ```bash
   scp qnna_demo user@microwatt-system:/path/to/demo
   ```

3. Run on Microwatt:
   ```bash
   ./qnna_demo
   ```

### In Simulation Mode (for testing)

```bash
# Build and run
make run

# Or manually:
make sim
./qnna_demo
```

## Usage

The demo runs automatically and performs four tests:

1. **Basic Operations**: Configure QNNA, verify dimensions, start computation
2. **ReLU Configuration**: Test ReLU activation enable/disable
3. **Performance Measurement**: Measure computation time and throughput
4. **Neural Network Layer**: Simulate a complete neural network layer

### Example Output

```
==================================================
QNNA C Demo
==================================================

Running in SIMULATION mode
(No real hardware access)
==================================================

==================================================
Test 1: Basic QNNA Operations
==================================================
Initializing QNNA...
✓ QNNA initialized

Configuring QNNA: M=4, N=4, K=4, ReLU=disabled
✓ Configuration complete

Verifying dimensions:
  DIM_M = 4 ✓
  DIM_N = 4 ✓
  DIM_K = 4 ✓

Starting computation...
✓ KICK register written

Status after start:
  BUSY:  true
  DONE:  false
  ERROR: false

Waiting for completion...
  Status: BUSY...
✓ Computation complete!

✓ Basic test completed
✓ Basic test passed
...
==================================================
Test Results: 4 passed, 0 failed
==================================================
✓ ALL TESTS PASSED!
```

## API Reference

### Initialization

```c
void qnna_init(void);
```

Initializes the QNNA hardware and resets all registers.

### Configuration

```c
void qnna_configure(uint16_t m, uint16_t n, uint16_t k, bool relu_en);
```

Configures QNNA dimensions and ReLU activation:
- `m`: Matrix dimension M (rows)
- `n`: Matrix dimension N (columns)
- `k`: Matrix dimension K (inner dimension)
- `relu_en`: Enable ReLU activation

### Control

```c
void qnna_start(void);
```

Starts the computation by writing to the KICK register.

### Status

```c
bool qnna_wait_for_completion(uint32_t timeout_ms);
void qnna_get_status(uint32_t *status);
```

- `qnna_wait_for_completion()`: Waits for computation to complete, returns `true` on success
- `qnna_get_status()`: Reads the status register

### Status Bits

```c
#define STATUS_BUSY  (1 << 7)   // Bit 7: Computation in progress
#define STATUS_DONE  (1 << 8)   // Bit 8: Computation complete
#define STATUS_ERROR (1 << 15)  // Bit 15: Error detected
```

### Dimensions

```c
void qnna_read_dimensions(uint16_t *m, uint16_t *n, uint16_t *k);
```

Reads back the configured dimensions.

## Memory Map

The QNNA is memory-mapped at base address `0x80000000`:

| Offset | Register | Description |
|--------|----------|-------------|
| 0x000  | CTRL     | Control register |
| 0x004  | STATUS   | Status register |
| 0x008  | DIM_M    | Matrix dimension M |
| 0x00C  | DIM_N    | Matrix dimension N |
| 0x010  | DIM_K    | Matrix dimension K |
| 0x020  | KICK     | Start computation |

## Integration with Microwatt

1. **Compile the demo**:
   ```bash
   make powerpc64le
   ```

2. **Integrate with Microwatt build system**:
   - Copy `qnna_demo` to Microwatt's build directory
   - Or add it to Microwatt's Makefile

3. **Run on Microwatt**:
   - The demo will access QNNA at `0x80000000`
   - Ensure QNNA is integrated into the SoC (see `scripts/integrate_microwatt.sh`)

## Troubleshooting

### Cross-compiler not found

```bash
# Install PowerPC cross-compiler
sudo apt-get install gcc-powerpc64le-linux-gnu
```

### Compilation errors

Ensure you're using a C99-compatible compiler:
```bash
gcc -std=c99 -O2 -o qnna_demo qnna_demo.c
```

### Runtime errors on hardware

- Verify QNNA is integrated into the SoC
- Check memory map configuration
- Ensure QNNA is at base address `0x80000000`

## Makefile Targets

- `make` or `make all`: Build with default compiler
- `make powerpc64le`: Cross-compile for PowerPC 64-bit little-endian
- `make powerpc`: Cross-compile for PowerPC 32-bit
- `make native`: Build with native compiler
- `make sim`: Build in simulation mode
- `make run`: Build in sim mode and run
- `make clean`: Remove build artifacts
- `make help`: Show help message

## License

Apache 2.0 (same as main project)

