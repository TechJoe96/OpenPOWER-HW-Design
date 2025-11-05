#!/bin/bash
# Add Microwatt to Repository
# This script adds Microwatt as a git submodule or copies it to dependencies/
# Author: TechJoe96

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
MICROWATT_REPO="${MICROWATT_REPO:-https://github.com/antonblanchard/microwatt.git}"
MICROWATT_DIR="${MICROWATT_DIR:-$PROJECT_ROOT/dependencies/microwatt}"
USE_SUBMODULE="${USE_SUBMODULE:-1}"

echo "========================================="
echo "  Add Microwatt to Repository"
echo "========================================="
echo ""

# Check if Microwatt already exists
if [ -d "$MICROWATT_DIR" ] && [ -d "$MICROWATT_DIR/.git" ]; then
    echo "Microwatt already exists at: $MICROWATT_DIR"
    echo ""
    read -p "Do you want to update it? (y/n) " -n 1 -r
    echo ""
    if [[ $REPLY =~ ^[Yy]$ ]]; then
        echo "Updating Microwatt..."
        cd "$MICROWATT_DIR"
        git pull origin main || git pull origin master
        cd "$PROJECT_ROOT"
        echo "✓ Microwatt updated"
    else
        echo "Keeping existing Microwatt"
        exit 0
    fi
else
    # Create dependencies directory
    mkdir -p "$(dirname "$MICROWATT_DIR")"
    
    # Check if this is a git repository
    if [ -d "$PROJECT_ROOT/.git" ] && [ "$USE_SUBMODULE" = "1" ]; then
        echo "Adding Microwatt as git submodule..."
        echo ""
        
        # Add as submodule
        cd "$PROJECT_ROOT"
        git submodule add "$MICROWATT_REPO" "$MICROWATT_DIR" || {
            echo "⚠ Submodule add failed, trying to clone instead..."
            cd "$(dirname "$MICROWATT_DIR")"
            git clone "$MICROWATT_REPO" "$(basename "$MICROWATT_DIR")"
            cd "$PROJECT_ROOT"
        }
        
        echo "✓ Microwatt added as git submodule"
        echo ""
        echo "To initialize submodules when cloning this repo:"
        echo "  git submodule update --init --recursive"
    else
        echo "Cloning Microwatt to dependencies/..."
        echo ""
        
        cd "$(dirname "$MICROWATT_DIR")"
        git clone "$MICROWATT_REPO" "$(basename "$MICROWATT_DIR")"
        cd "$PROJECT_ROOT"
        
        echo "✓ Microwatt cloned to: $MICROWATT_DIR"
        echo ""
        echo "Note: Microwatt is now part of this repository"
        echo "      (It's a full copy, not a submodule)"
    fi
fi

# Update integration script to use local Microwatt
echo ""
echo "Updating integration script to use local Microwatt..."
INTEGRATION_SCRIPT="$PROJECT_ROOT/scripts/integrate_microwatt.sh"

if [ -f "$INTEGRATION_SCRIPT" ]; then
    # Update default MICROWATT_DIR to use local copy
    sed -i.bak "s|MICROWATT_DIR=\"\${MICROWATT_DIR:-.*}\"|MICROWATT_DIR=\"\${MICROWATT_DIR:-$PROJECT_ROOT/dependencies/microwatt}\"|g" "$INTEGRATION_SCRIPT"
    rm -f "$INTEGRATION_SCRIPT.bak"
    echo "✓ Integration script updated"
fi

# Create .gitignore entry if needed
GITIGNORE="$PROJECT_ROOT/.gitignore"
if [ ! -f "$GITIGNORE" ] || ! grep -q "dependencies/microwatt" "$GITIGNORE"; then
    # Only add to .gitignore if NOT using submodule
    if [ "$USE_SUBMODULE" != "1" ]; then
        echo "" >> "$GITIGNORE"
        echo "# Microwatt (if not using submodule)" >> "$GITIGNORE"
        echo "# dependencies/microwatt/" >> "$GITIGNORE"
    fi
fi

# Summary
echo ""
echo "========================================="
echo "  Microwatt Added Successfully!"
echo "========================================="
echo ""
echo "Microwatt location: $MICROWATT_DIR"
echo ""

if [ -d "$PROJECT_ROOT/.git" ] && [ -f "$MICROWATT_DIR/.git" ]; then
    echo "✓ Added as git submodule"
    echo ""
    echo "To update submodules:"
    echo "  git submodule update --init --recursive"
    echo ""
    echo "To initialize when cloning:"
    echo "  git clone --recursive <repo-url>"
else
    echo "✓ Cloned to dependencies/microwatt"
    echo ""
    echo "Note: Full Microwatt repository is now included"
fi

echo ""
echo "Next steps:"
echo "  1. Run integration script: ./scripts/integrate_microwatt.sh"
echo "  2. Microwatt will use local copy automatically"
echo ""

