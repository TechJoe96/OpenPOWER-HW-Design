# How to Upload to GitHub Repository

## Option 1: Replace Existing Repository (Recommended)

### Step 1: Initialize Git (if not already done)
```bash
cd /Users/jochoi/github_repo/openpower-qnna-project
git init
```

### Step 2: Add Remote Repository
```bash
# Replace with your actual repository URL
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git

# Or if you want to replace the remote:
# git remote set-url origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git
```

### Step 3: Check Current State
```bash
git status
```

### Step 4: Add All Files
```bash
git add .
```

### Step 5: Commit
```bash
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful"
```

### Step 6: Force Push (Replace Existing Files)
```bash
# WARNING: This will replace all existing files in the repository
git push -f origin main
```

**Or if your default branch is `master`:**
```bash
git push -f origin master
```

---

## Option 2: Push to New Branch First (Safer)

### Step 1-4: Same as above

### Step 5: Push to New Branch
```bash
git push -u origin main:new-qnna-project
```

### Step 6: Merge on GitHub
1. Go to your repository on GitHub
2. Create a Pull Request from `new-qnna-project` to `main`
3. Merge the PR

---

## Option 3: Create New Repository

### Step 1: Create New Repo on GitHub
1. Go to GitHub
2. Click "New repository"
3. Name it (e.g., `openpower-qnna-project`)
4. Don't initialize with README

### Step 2: Initialize and Push
```bash
cd /Users/jochoi/github_repo/openpower-qnna-project
git init
git add .
git commit -m "Initial commit: OpenPOWER QNNA project - RTL to GDS"
git branch -M main
git remote add origin https://github.com/YOUR_USERNAME/openpower-qnna-project.git
git push -u origin main
```

---

## Files to Exclude (Already in .gitignore)

The `.gitignore` file already excludes:
- Build artifacts (`build/`, `runs/`)
- Generated files (`*.gds`, `*.def`, `*.lef`)
- Object files (`*.o`, `*.a`)
- Python cache (`__pycache__/`, `*.pyc`)
- IDE files (`.vscode/`, `.idea/`)

---

## Before Pushing - Check What Will Be Committed

```bash
# See what files will be committed
git status

# Preview what will be pushed
git log --oneline

# See file sizes
git ls-files | xargs ls -lh | head -20
```

---

## Complete Workflow (Replace Existing Repo)

```bash
cd /Users/jochoi/github_repo/openpower-qnna-project

# Initialize git (if needed)
git init

# Add remote (replace URL with yours)
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git

# Add all files
git add .

# Commit
git commit -m "Complete OpenPOWER QNNA project - Successful RTL to GDS flow

- Complete RTL design (5 modules)
- OpenLane configuration
- Docker-based build system
- Generated GDS files (4.2MB)
- Comprehensive documentation
- Full ASIC flow: RTL → GDS ✅"

# Force push (WARNING: replaces existing files)
git push -f origin main
```

---

## Safety Check Before Force Push

Before using `git push -f`, check what's in the remote:

```bash
# Fetch from remote
git fetch origin

# See what branches exist
git branch -a

# See remote commits
git log origin/main --oneline -10
```

---

## If You Get Authentication Errors

### Using Personal Access Token
```bash
# GitHub no longer accepts passwords, use a token:
# 1. Go to GitHub Settings → Developer settings → Personal access tokens
# 2. Generate new token
# 3. Use token as password when prompted

git push -f origin main
# Username: YOUR_USERNAME
# Password: YOUR_TOKEN
```

### Using SSH
```bash
# Change remote to SSH
git remote set-url origin git@github.com:TechJoe96/OpenPOWER-HW-Design.git

# Push
git push -f origin main
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

## Recommended: Create Backup First

Before force pushing, backup the existing repository:

```bash
cd /Users/jochoi/github_repo
git clone https://github.com/TechJoe96/OpenPOWER-HW-Design.git OpenPOWER-HW-Design-backup
```

---

## Summary

**Quickest way to replace existing repo:**
```bash
cd /Users/jochoi/github_repo/openpower-qnna-project
git init
git remote add origin https://github.com/TechJoe96/OpenPOWER-HW-Design.git
git add .
git commit -m "Complete OpenPOWER QNNA project - RTL to GDS successful"
git push -f origin main
```

**⚠️ WARNING:** `git push -f` will **replace all existing files** in the repository. Make sure you want to do this!

