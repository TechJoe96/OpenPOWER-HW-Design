# Setup Instructions

## Prerequisites

1. **Docker** - Install Docker Desktop or Docker Engine
2. **PDK** - SkyWater PDK (SKY130)
3. **Git** - For cloning dependencies

## Quick Start

### 1. Set Environment Variables

```bash
export PDK_ROOT=/path/to/skywater-pdk
export PDK=sky130A
export OPENLANE_ROOT=$(pwd)/dependencies/openlane_src
```

### 2. Setup OpenLane (One-Time)

```bash
make openlane
```

This will:
- Clone OpenLane repository
- Download OpenLane Docker image (efabless/openlane:2024.08.15)

### 3. Run OpenLane Flow

```bash
make qnna_top
```

This will:
- Run complete OpenLane flow
- Generate GDS files
- Run LVS/DRC checks

## Verification

### Check RTL

```bash
make lint
```

### Check Environment

```bash
make check-env
```

## Troubleshooting

### PDK_ROOT not set
Set the PDK_ROOT environment variable:
```bash
export PDK_ROOT=/path/to/skywater-pdk
```

### Docker permission issues
Run with ROOTLESS mode:
```bash
make ROOTLESS=1 qnna_top
```

### OpenLane not found
Run setup:
```bash
make openlane
```

## Expected Output

After running `make qnna_top`, you should see:
- Synthesis completed
- Floorplan completed
- Placement completed
- Routing completed
- GDS files generated in `openlane/qnna_top/runs/`

## Notes

- The design uses simplified MAC array for compatibility
- Power pins (vdd, vss) are defined but not used in RTL
- This is intentional for OpenLane compatibility
