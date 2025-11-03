# Differences Between `make openlane` and `make qnna_top`

## Overview

These two commands serve different purposes in the ASIC design flow:

### `make openlane` - Setup (One-Time)

**Purpose:** Initial setup to prepare the OpenLane environment

**What it does:**
1. Clones the OpenLane repository from GitHub
2. Downloads the OpenLane Docker image (`efabless/openlane:2024.08.15`)
3. Sets up the OpenLane source code in `dependencies/openlane_src/`

**When to run:**
- **Once** when setting up the project for the first time
- When you need to update OpenLane to a different version
- After running `make distclean`

**Example output:**
```
Setting up OpenLane...
Cloning into 'dependencies/openlane_src'...
2024.08.15: Pulling from efabless/openlane
Status: Image is up to date
```

**Time:** ~2-5 minutes (depends on internet speed)

---

### `make qnna_top` - Run ASIC Flow

**Purpose:** Execute the complete ASIC design flow for your design

**What it does:**
1. Checks environment variables (PDK_ROOT, OPENLANE_ROOT)
2. Runs OpenLane Docker container with your design
3. Executes the complete ASIC flow:
   - Synthesis (RTL → gates)
   - Floorplanning
   - Placement
   - Clock Tree Synthesis (CTS)
   - Routing
   - GDS generation
   - LVS/DRC checks (if enabled)

**When to run:**
- **Every time** you want to synthesize your design
- After making RTL changes
- To generate new GDS files

**Example output:**
```
Running OpenLane flow for qnna_top...
[INFO] Running synthesis...
[INFO] Running floorplan...
[INFO] Running placement...
[INFO] Running routing...
[INFO] Generating GDS...
```

**Time:** ~30 minutes to several hours (depends on design complexity)

---

## Workflow

```
First Time Setup:
1. make openlane          ← Setup OpenLane (one-time)
2. export PDK_ROOT=...   ← Set PDK path
3. make qnna_top         ← Run ASIC flow

Subsequent Runs:
1. make qnna_top         ← Run ASIC flow (OpenLane already set up)
```

## Key Differences

| Aspect | `make openlane` | `make qnna_top` |
|--------|----------------|----------------|
| **Purpose** | Setup | Execution |
| **Frequency** | One-time | Every synthesis |
| **Requires** | Git, Docker | OpenLane setup, PDK |
| **Time** | 2-5 min | 30 min - hours |
| **Output** | OpenLane source | GDS files, reports |

## Common Issues

### Issue: "PDK_ROOT not set"
**Solution:** Set the PDK_ROOT environment variable:
```bash
export PDK_ROOT=/path/to/skywater-pdk
```

### Issue: "Docker mount denied"
**Solution:** 
1. Make sure PDK_ROOT path exists
2. Add path to Docker Desktop → Preferences → Resources → File Sharing

### Issue: "OpenLane not found"
**Solution:** Run `make openlane` first to set up OpenLane

