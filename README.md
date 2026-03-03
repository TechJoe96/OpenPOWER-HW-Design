# OpenPOWER QNNA — Quantized Neural Net Accelerator

A custom INT8 matrix-multiplication accelerator integrated with the [Microwatt](https://github.com/antonblanchard/microwatt) OpenPOWER CPU, taken from RTL specification through fabrication-ready GDS using the OpenLane ASIC flow on the SkyWater SKY130 process.

Built for the [ChipFoundry.io Microwatt Design Challenge](https://chipfoundry.io/challenges/microwatt).

---

## Highlights

| Metric | Value |
|---|---|
| **Compute core** | 4×4 INT8 MAC array (multiply-accumulate) |
| **Bus interface** | Wishbone B4 pipelined slave |
| **Target clock** | 25 MHz (40 ns period) |
| **Die area** | 1 000 × 1 000 µm (SKY130) |
| **Timing** | Multi-corner STA clean (setup & hold) |
| **Verification** | SoC testbench — 6/6 core tests passing |
| **ASIC flow** | OpenLane 2024.08.15 → GDS-II (4.2 MB) |
| **PDK** | SkyWater SKY130A (`sky130_fd_sc_hd`) |

---

## Architecture

```
  Microwatt OpenPOWER CPU
          │
     Wishbone B4 Bus
          │
  ┌───────┴───────────────────────┐
  │          QNNA Core            │
  │                               │
  │  ┌─────────────────────────┐  │
  │  │  qnna_wishbone          │  │  Address decode, R/W mux
  │  └────────┬────────────────┘  │
  │           │                   │
  │  ┌────────┴────────────────┐  │
  │  │  qnna_csr               │  │  IDLE → BUSY → DONE FSM
  │  │  (CTRL, STATUS, DIM_*)  │  │  Interrupt generation
  │  └────────┬────────────────┘  │
  │           │                   │
  │  ┌────────┴────────────────┐  │
  │  │  qnna_mac_array         │  │  4×4 INT8 MAC, sequential
  │  └─────────────────────────┘  │
  │                               │
  │  ┌─────────────────────────┐  │
  │  │  qnna_buffer            │  │  Parameterized SRAM
  │  └─────────────────────────┘  │
  └───────────────────────────────┘
```

### Register Map (base `0x8000_0000`)

| Offset | Name | Access | Description |
|--------|------|--------|-------------|
| `0x000` | `CTRL` | R/W | Bit 0 — ReLU enable; Bit 3 — interrupt enable |
| `0x004` | `STATUS` | RO | Bit 7 — busy; Bit 8 — done |
| `0x008` | `DIM_M` | R/W | Input rows (16-bit) |
| `0x00C` | `DIM_N` | R/W | Output columns (16-bit) |
| `0x010` | `DIM_K` | R/W | Inner dimension (16-bit) |
| `0x020` | `KICK` | WO | Write 1 to start computation |

---

## Repository Structure

```
.
├── rtl/
│   ├── qnna_top.v              Top-level wrapper (Wishbone + power pins)
│   ├── qnna_wishbone.v         Wishbone B4 slave, address decode
│   ├── qnna_csr.v              Control/Status register FSM
│   ├── qnna_mac_array.v        4×4 INT8 MAC engine
│   ├── qnna_buffer.v           Parameterized dual-port SRAM
│   └── microwatt_qnna_wrapper.v  SoC integration wrapper
│
├── openlane/qnna_top/
│   ├── config.json              OpenLane synthesis configuration
│   ├── interactive.tcl          Flow script
│   └── runs/                    Generated GDS, DEF, LEF, reports
│
├── tb/
│   ├── soc/                     SoC-level integration testbench (Icarus Verilog)
│   ├── cocotb/                  Python-based functional tests (Cocotb)
│   └── verilator/               Unit-level C++ testbench (Verilator)
│
├── sw/
│   ├── c/                       Bare-metal C driver & demo
│   └── python/                  Python demo (MicroPython-compatible)
│
├── scripts/                     Microwatt & OpenFrame integration scripts
├── docs/                        Implementation guide, synthesis results
└── Makefile                     Top-level build automation (Docker + OpenLane)
```

---

## Getting Started

### Prerequisites

- **Docker** — used to run the OpenLane toolchain
- **SkyWater PDK** — `sky130A` installed locally (set `PDK_ROOT`)
- **Icarus Verilog** *(optional)* — for running the SoC testbench
- **Verilator** *(optional)* — for linting and unit simulation

### 1. Clone

```bash
git clone https://github.com/TechJoe96/OpenPOWER-HW-Design.git
cd OpenPOWER-HW-Design
```

### 2. Set Environment

```bash
export PDK_ROOT=/path/to/skywater-pdk
export PDK=sky130A
```

### 3. Run the ASIC Flow

```bash
make openlane      # one-time: clone OpenLane + pull Docker image
make qnna_top      # synthesis → floorplan → P&R → GDS (~10-30 min)
```

The final GDS lands at:

```
openlane/qnna_top/runs/<timestamp>/results/final/gds/qnna_top.gds
```

### 4. Run Tests

```bash
# SoC integration testbench
cd tb/soc && make && make run

# Verilator lint
make lint

# Cocotb (requires cocotb + iverilog)
cd tb/cocotb && make
```

---

## Synthesis & Layout Results

| Stage | Status |
|---|---|
| Synthesis (Yosys) | Pass |
| Floorplanning | Pass |
| Placement | Pass |
| Global / Detailed Routing | Pass |
| Multi-corner STA | Pass (min / nom / max) |
| GDS-II Generation | Pass — 4.2 MB |
| DRC | Warnings only (expected for demo) |

**Physical summary:** 1 000 × 1 000 µm die, 979.8 × 973.76 µm core, `sky130_fd_sc_hd` standard cells, 25 MHz target clock.

---

## Software Interface

```c
#define QNNA_BASE   0x80000000
#define QNNA_DIM_M  (QNNA_BASE + 0x008)
#define QNNA_DIM_N  (QNNA_BASE + 0x00C)
#define QNNA_DIM_K  (QNNA_BASE + 0x010)
#define QNNA_KICK   (QNNA_BASE + 0x020)
#define QNNA_STATUS (QNNA_BASE + 0x004)

write_reg(QNNA_DIM_M, 4);   // M rows
write_reg(QNNA_DIM_N, 4);   // N columns
write_reg(QNNA_DIM_K, 4);   // K inner dim
write_reg(QNNA_KICK,  1);   // start

while (!(read_reg(QNNA_STATUS) & (1 << 8)))
    ;  // poll DONE bit
```

A complete C driver with simulation mode (`-DSIM_MODE`) is provided in `sw/c/qnna_demo.c`. A Python demo is in `sw/python/qnna_demo.py`.

---

## Microwatt Integration

Microwatt is included at `dependencies/microwatt/`. To wire the QNNA into the SoC:

```bash
./scripts/integrate_microwatt.sh
```

This copies RTL into the Microwatt tree, creates `microwatt_soc_with_qnna.v`, and sets up address decoding at `0x8000_0000`.

---

## Design Decisions

**Why INT8?** — 4× memory savings over FP32 with minimal accuracy loss for quantized neural-net inference; simpler datapath keeps area small.

**Why a 4×4 MAC array?** — Fits comfortably in the demo die area, still demonstrates real matrix-multiply parallelism, and synthesizes cleanly with OpenLane. Straightforwardly expandable to 8×8 or 16×16.

**Why Wishbone B4?** — Microwatt's native bus; minimizes integration glue and is the standard for open-source SoC peripherals.

---

## Acknowledgments

- **Microwatt** — Anton Blanchard & contributors
- **ChipFoundry.io** — Microwatt Design Challenge host
- **OpenLane / OpenROAD** — Open-source ASIC flow
- **SkyWater + Google** — Open-source 130 nm PDK

---

## License

Apache 2.0 — see [LICENSE](LICENSE).
