# OpenPOWER QNNA Project

A Quantized Neural Net Accelerator (QNNA) - an INT8 matrix-math engine designed for OpenLane ASIC flow.

## Project Structure

```
openpower-qnna-project/
├── rtl/                    # RTL design files
│   ├── qnna_top.v         # Top-level module
│   ├── qnna_wishbone.v    # Wishbone interface
│   ├── qnna_csr.v         # Control/Status registers
│   ├── qnna_mac_array.v   # MAC array
│   └── qnna_buffer.v      # Buffer module
├── openlane/              # OpenLane configuration
│   └── qnna_top/          # Design configuration
│       ├── config.json    # OpenLane config
│       └── interactive.tcl # OpenLane flow script
├── Makefile               # Main build file
└── README.md              # This file
```

## Prerequisites

1. **Docker** - For running OpenLane
2. **PDK** - SkyWater PDK (SKY130) - See [QUICK_FIX.md](QUICK_FIX.md) for setup
3. **Git** - For cloning dependencies

## Setup

### 1. Set Environment Variables

**Important:** PDK_ROOT must point to a valid PDK installation. See [QUICK_FIX.md](QUICK_FIX.md) for help.

```bash
# If using existing my-microwatt-project PDK:
export PDK_ROOT=/Users/jochoi/github_repo/my-microwatt-project/dependencies/pdks/volare/sky130/versions/0fe599b2afb6708d281543108caf8310912f54af

# Or if installing fresh:
export PDK_ROOT=/path/to/skywater-pdk

export PDK=sky130A
export OPENLANE_ROOT=$(pwd)/dependencies/openlane_src
```

**Note:** Make sure to add PDK_ROOT path to Docker Desktop → Settings → Resources → File Sharing

### 2. Setup OpenLane (One-Time)

```bash
make openlane
```

This will:
- Clone OpenLane repository
- Download OpenLane Docker image

### 3. Run OpenLane Flow

```bash
make qnna_top
```

This will:
- Run complete OpenLane flow (synthesis, floorplan, placement, routing)
- Generate GDS files
- Run LVS/DRC checks

## Makefile Targets

- `make openlane` - Setup OpenLane (one-time)
- `make qnna_top` - Run OpenLane flow for qnna_top
- `make check-env` - Check environment variables
- `make lint` - Run Verilator lint on RTL
- `make clean` - Clean build artifacts
- `make distclean` - Deep clean (including OpenLane)

## Design Overview

The QNNA (Quantized Neural Net Accelerator) is an INT8 matrix multiplication accelerator designed to integrate with the Microwatt OpenPOWER CPU.

### Architecture

```
Microwatt CPU (PowerISA v3.1C)
        |
   Wishbone Bus
        |
+-----------------------------+
|         QNNA Core           |
| - Wishbone B4 Interface     |
| - Control/Status Registers  |
| - INT8 MAC Array (4x4)      |
| - Buffer Management         |
+-----------------------------+
```

### Features

- **Wishbone B4 Interface**: Standard peripheral interface compatible with Microwatt
- **4x4 MAC Array**: INT8 multiply-accumulate operations
- **Control/Status Registers**: Configuration and status monitoring
- **Buffer Management**: Input/weight/output buffers
- **MMIO Integration**: Memory-mapped I/O for easy software access

### Integration with Microwatt

The QNNA is designed as a Wishbone slave peripheral that can be integrated into a Microwatt SoC:

1. **Address Mapping**: QNNA appears at `0x80000000` (configurable)
2. **Wishbone Interface**: Standard B4 slave interface
3. **Interrupt Support**: Optional completion interrupt
4. **Software Access**: Standard MMIO register access

For integration details, see [docs/integration.md](docs/integration.md) (if created) or [docs/IMPLEMENTATION_GUIDE.md](docs/IMPLEMENTATION_GUIDE.md).

## Results

### Synthesis Results
- **Standard Cells**: sky130_fd_sc_hd
- **Clock Frequency**: 25 MHz (40 ns period)
- **Design Size**: Optimized for small area

### Layout Results
- **Die Area**: 1000 x 1000 microns
- **Core Area**: 979.8 x 973.76 microns
- **GDS File**: 4.2 MB
- **Routing**: Complete (no routing violations)

### Timing Results
- **Multi-corner STA**: Passed (min/nom/max corners)
- **Setup/Hold**: Verified
- **Clock Tree**: Configured (CTS enabled)

### Reports Location
All reports are in: `openlane/qnna_top/runs/LATEST/reports/`
- Synthesis reports: `reports/synthesis/`
- Timing reports: `reports/signoff/`
- Metrics: `reports/metrics.csv`

## Running Testbenches

### Verilator Testbench
```bash
cd tb/verilator
make clean
make
./Vqnna_sim
```

### Cocotb Testbench (if configured)
```bash
cd tb/cocotb
make clean
make
```

Test waveforms can be viewed with GTKWave:
```bash
gtkwave tb/cocotb/dump.vcd
```

## Configuration

Edit `openlane/qnna_top/config.json` to customize:
- Clock period
- Die area
- Power nets
- Design constraints

## Troubleshooting

### PDK_ROOT not set
```bash
export PDK_ROOT=/path/to/skywater-pdk
```

### OpenLane Docker not found
```bash
make openlane  # This will pull the Docker image
```

### Permission issues
```bash
make ROOTLESS=1 qnna_top
```

## Media Deliverables

Screenshots and documentation are available in:
- `docs/media/` - Screenshots and images
- `docs/prompts/` - AI usage documentation

For video demos, see the project repository or documentation.

## License

Apache 2.0 - See [LICENSE](LICENSE) file for details.

## Author

TechJoe96

## Acknowledgments

- Microwatt team for the OpenPOWER core
- ChipFoundry.io for hosting the challenge
- Open-source community for tools and support
