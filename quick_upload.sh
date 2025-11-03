#!/bin/bash
# Quick upload script - replace existing repository

cd /Users/jochoi/github_repo/openpower-qnna-project

# Initialize git
git init

# Add remote (replace with your actual repo URL)
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git 2>/dev/null || git remote set-url origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git

# Add all files
git add .

# Commit
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful

- Complete RTL design (5 modules)
- OpenLane configuration
- Docker-based build system  
- Generated GDS files (4.2MB)
- Full ASIC flow completed ✅"

# Force push (replace existing files)
git push -f origin main
