#!/bin/bash
# Script to upload OpenPOWER QNNA project to GitHub
# This will REPLACE existing files in the repository

set -e

echo "=========================================="
echo "  OpenPOWER QNNA Project Upload Script"
echo "=========================================="
echo ""
echo "⚠️  WARNING: This will REPLACE all files in your GitHub repository!"
echo ""
read -p "Enter your GitHub repository URL (e.g., https://github.com/TechJoe96/OpenPOWER-HW-Design.git): " REPO_URL

if [ -z "$REPO_URL" ]; then
    echo "Error: Repository URL is required"
    exit 1
fi

echo ""
echo "Repository URL: $REPO_URL"
read -p "Continue? (yes/no): " CONFIRM

if [ "$CONFIRM" != "yes" ]; then
    echo "Cancelled."
    exit 0
fi

echo ""
echo "Step 1: Initializing git..."
git init

echo ""
echo "Step 2: Adding remote repository..."
git remote add origin "$REPO_URL" 2>/dev/null || git remote set-url origin "$REPO_URL"

echo ""
echo "Step 3: Adding files..."
git add .

echo ""
echo "Step 4: Committing..."
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful

- Complete RTL design (5 modules, ~821 lines)
- OpenLane configuration for SKY130A
- Docker-based build system
- Full ASIC flow: Synthesis → Routing → GDS
- Generated GDS files (4.2MB layout)
- Comprehensive documentation
- Status: SUCCESSFUL ✅"

echo ""
echo "Step 5: Checking current branch..."
BRANCH=$(git branch --show-current 2>/dev/null || echo "main")
if [ -z "$BRANCH" ]; then
    BRANCH="main"
    git branch -M main
fi

echo ""
echo "Step 6: Force pushing to $BRANCH..."
echo "⚠️  This will REPLACE all existing files!"
read -p "Final confirmation - type 'REPLACE' to continue: " FINAL_CONFIRM

if [ "$FINAL_CONFIRM" = "REPLACE" ]; then
    git push -f origin "$BRANCH"
    echo ""
    echo "✅ Successfully uploaded to GitHub!"
    echo "Repository: $REPO_URL"
else
    echo "Cancelled."
    exit 0
fi
