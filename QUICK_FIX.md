# Quick Fix for PDK_ROOT Issue

## Problem
You're getting this error:
```
Warning: PDK_ROOT directory does not exist: /path/to/skywater-pdk
docker: Error response from daemon: Mounts denied
```

## Solution

### Option 1: Use Existing PDK from my-microwatt-project

If you have the my-microwatt-project with PDK installed:

```bash
export PDK_ROOT=/Users/jochoi/github_repo/my-microwatt-project/dependencies/pdks/volare/sky130/versions/0fe599b2afb6708d281543108caf8310912f54af
export PDK=sky130A
```

Then add this path to Docker Desktop:
1. Open Docker Desktop
2. Go to Settings → Resources → File Sharing
3. Add `/Users/jochoi/github_repo/my-microwatt-project/dependencies/pdks`
4. Click "Apply & Restart"

### Option 2: Install PDK with volare

```bash
# Install volare (PDK manager)
pip install volare

# List available PDK versions
volare ls

# Install SKY130 PDK
volare enable --pdk sky130 --pdk-root $(pwd)/dependencies/pdks

# Set environment
export PDK_ROOT=$(pwd)/dependencies/pdks/volare/sky130/versions/*/sky130A
export PDK=sky130A
```

### Option 3: Use SkyWater PDK Directly

```bash
# Clone SkyWater PDK
git clone https://github.com/google/skywater-pdk.git dependencies/pdks

# Set environment
export PDK_ROOT=$(pwd)/dependencies/pdks
export PDK=sky130A
```

## Verify Setup

```bash
# Check if PDK_ROOT is set
echo $PDK_ROOT

# Check if directory exists
ls -la $PDK_ROOT

# Run check
make check-env
```

## Then Run

```bash
make qnna_top
```
