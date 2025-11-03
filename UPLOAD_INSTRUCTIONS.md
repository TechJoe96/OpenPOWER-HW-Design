# How to Upload to GitHub Repository

## Quick Start (Replace Existing Repository)

### Step 1: Navigate to Project
```bash
cd /Users/jochoi/github_repo/openpower-qnna-project
```

### Step 2: Initialize Git
```bash
git init
```

### Step 3: Add Remote Repository
```bash
# Replace with your actual repository URL
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git

# If remote already exists, update it:
# git remote set-url origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git
```

### Step 4: Add All Files
```bash
git add .
```

### Step 5: Commit
```bash
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful

- Complete RTL design (5 modules, ~821 lines)
- OpenLane configuration for SKY130A
- Docker-based build system
- Full ASIC flow completed: Synthesis → Routing → GDS
- Generated GDS files (4.2MB layout)
- Comprehensive documentation
- Status: SUCCESSFUL ✅"
```

### Step 6: Force Push (Replace Existing Files)
```bash
# ⚠️ WARNING: This will REPLACE all existing files in the repository!
git push -f origin main
```

---

## Alternative: Use the Upload Script

### Interactive Script
```bash
./UPLOAD_COMMANDS.sh
```

### Quick Script (Edit URL first)
```bash
# Edit quick_upload.sh to set your repository URL
nano quick_upload.sh

# Then run:
./quick_upload.sh
```

---

## What Files Will Be Uploaded

### Included (Source Files)
- ✅ RTL design files (`rtl/*.v`)
- ✅ OpenLane configuration (`openlane/qnna_top/config.json`, `interactive.tcl`)
- ✅ Makefile
- ✅ Documentation (`*.md` files)
- ✅ Testbench structure (`tb/`)

### Excluded (Large Generated Files)
- ❌ OpenLane runs (`openlane/*/runs/`)
- ❌ Generated GDS files (`*.gds`)
- ❌ Generated DEF files (`*.def`)
- ❌ Generated LEF files (`*.lef`)
- ❌ Build artifacts (`build/`, `obj_dir/`)
- ❌ Dependencies (`dependencies/`)
- ❌ Large generated files

**Note:** The `.gitignore` file is configured to exclude large generated files. Only source code and configuration files will be uploaded.

---

## Authentication

### Using Personal Access Token (Recommended)
1. Go to GitHub → Settings → Developer settings → Personal access tokens
2. Generate new token (classic) with `repo` scope
3. When prompted for password, use the token instead

### Using SSH
```bash
# Change remote to SSH
git remote set-url origin git@github.com:TechJoe96/OpenPOWER-HW-Design.git

# Then push
git push -f origin main
```

---

## Complete Command Sequence

```bash
cd /Users/jochoi/github_repo/openpower-qnna-project

# Initialize
git init

# Add remote (replace URL with yours)
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git

# Add files
git add .

# Commit
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful

- Complete RTL design (5 modules)
- OpenLane configuration
- Docker-based build system
- Full ASIC flow completed ✅"

# Force push (replace existing files)
git push -f origin main
```

---

## Safety: Create Backup First

Before force pushing, backup the existing repository:

```bash
cd /Users/jochoi/github_repo
git clone https://github.com/TechJoe96/OpenPOWER-HW-Design.git OpenPOWER-HW-Design-backup
```

---

## Check Before Pushing

```bash
# See what files will be committed
git status

# See file sizes
git ls-files | xargs ls -lh | head -20

# Preview commit
git log --oneline -1
```

---

## Troubleshooting

### "Repository not found"
- Check repository URL is correct
- Verify you have push access

### "Permission denied"
- Use Personal Access Token instead of password
- Or set up SSH keys

### "Updates were rejected"
- You're trying to push to a branch that has different history
- Use `git push -f` to force (if you want to replace everything)

---

## ⚠️ Important Notes

1. **Force Push Warning**: `git push -f` will **replace all existing files** in the repository
2. **Backup First**: Consider backing up the existing repository
3. **Large Files**: Generated GDS files are excluded from git (too large)
4. **Authentication**: GitHub requires Personal Access Token or SSH keys

---

## Summary

**Quickest way:**
```bash
cd /Users/jochoi/github_repo/openpower-qnna-project
git init
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git
git add .
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful"
git push -f origin main
```

**Or use the script:**
```bash
./quick_upload.sh
```
(Edit the repository URL in the script first)

