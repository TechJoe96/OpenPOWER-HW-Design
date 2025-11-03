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

The QNNA (Quantized Neural Net Accelerator) is a simple INT8 matrix multiplication accelerator with:

- **Wishbone B4 Interface**: Standard peripheral interface
- **4x4 MAC Array**: Multiply-accumulate operations
- **Control/Status Registers**: Configuration and status
- **Buffer Management**: Input/weight/output buffers

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

## License

Apache 2.0

## Author

TechJoe96
