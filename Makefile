# OpenPOWER QNNA Project Makefile
# Uses Docker from Microwatt repo pattern
# Author: TechJoe96

SHELL := /bin/bash
MAKEFLAGS+=--warn-undefined-variables

export OPENLANE_RUN_TAG = $(shell date '+%y_%m_%d_%H_%M')
OPENLANE_TAG ?= 2024.08.15
OPENLANE_IMAGE_NAME ?= efabless/openlane:$(OPENLANE_TAG)

# Check if OPENLANE_ROOT is set
OPENLANE_ROOT ?= $(PWD)/dependencies/openlane_src
# PDK_ROOT should be set by user or will try to detect
ifndef PDK_ROOT
PDK_ROOT = $(PWD)/dependencies/pdks
endif
PDK ?= sky130A

ROOTLESS ?= 0
USER_ARGS = -u $$(id -u $$USER):$$(id -g $$USER)
ifeq ($(ROOTLESS), 1)
	USER_ARGS =
endif

# OpenLane command for qnna_top
openlane_cmd = \
	"flow.tcl \
	-design $$(realpath ./openlane/qnna_top) \
	-save_path $$(realpath .) \
	-save \
	-tag $(OPENLANE_RUN_TAG) \
	-overwrite \
	-ignore_mismatches"

# Only mount PDK if it exists
PDK_MOUNT = $(if $(wildcard $(PDK_ROOT)),-v $(PDK_ROOT):$(PDK_ROOT),)

docker_mounts = \
	-v $$(realpath $(PWD)):$$(realpath $(PWD)) \
	$(PDK_MOUNT) \
	-v $(HOME)/.ipm:$(HOME)/.ipm \
	-v $(OPENLANE_ROOT):/openlane

docker_env = \
	-e PDK_ROOT=$(PDK_ROOT) \
	-e PDK=$(PDK) \
	-e MISMATCHES_OK=1 \
	-e OPENLANE_RUN_TAG=$(OPENLANE_RUN_TAG)

docker_startup_mode = $(shell test -t 0 && echo "-it" || echo "--rm" )
docker_run = \
	docker run $(docker_startup_mode) \
	$(USER_ARGS) \
	$(docker_mounts) \
	$(docker_env)

.PHONY: help
help:
	@echo "OpenPOWER QNNA Project Makefile"
	@echo "================================"
	@echo "Targets:"
	@echo "  openlane          - Setup OpenLane (one-time)"
	@echo "  qnna_top         - Run OpenLane flow for qnna_top"
	@echo "  check-env        - Check environment variables"
	@echo "  clean            - Clean build artifacts"
	@echo ""
	@echo "Environment:"
	@echo "  OPENLANE_ROOT   - Path to OpenLane (default: ./dependencies/openlane_src)"
	@echo "  PDK_ROOT         - Path to PDK (default: ./dependencies/pdks)"
	@echo "  PDK              - PDK variant (default: sky130A)"

.PHONY: check-env
check-env:
	@echo "Checking environment..."
	@if [ -z "$(PDK_ROOT)" ] || [ "$(PDK_ROOT)" = "$(PWD)/dependencies/pdks" ]; then \
		echo "Warning: PDK_ROOT not properly set"; \
		echo "Please set PDK_ROOT environment variable:"; \
		echo "  export PDK_ROOT=/path/to/skywater-pdk"; \
		echo ""; \
		echo "Or if using volare/pdk-manager:"; \
		echo "  export PDK_ROOT=\$$(pdk list-installed | grep sky130 | head -1 | awk '{print \$$4}')"; \
		echo ""; \
		echo "Current PDK_ROOT: $(PDK_ROOT)"; \
	fi
	@if [ -d "$(PDK_ROOT)" ]; then \
		echo "✓ PDK_ROOT found: $(PDK_ROOT)"; \
	else \
		echo "✗ PDK_ROOT directory does not exist: $(PDK_ROOT)"; \
		echo "  Please install PDK or set PDK_ROOT correctly"; \
	fi
	@echo "PDK: $(PDK)"
	@echo "OPENLANE_ROOT: $(OPENLANE_ROOT)"

.PHONY: openlane
openlane: check-openlane-env
	@echo "Setting up OpenLane..."
	@if [ -d "$(OPENLANE_ROOT)" ]; then \
		echo "Deleting existing $(OPENLANE_ROOT)" && \
		rm -rf $(OPENLANE_ROOT) && sleep 2; \
	fi
	@mkdir -p $$(dirname $(OPENLANE_ROOT))
	git clone https://github.com/The-OpenROAD-Project/OpenLane -b $(OPENLANE_TAG) --depth=1 $(OPENLANE_ROOT) && \
		cd $(OPENLANE_ROOT) && \
		export OPENLANE_IMAGE_NAME=efabless/openlane:$(OPENLANE_TAG) && \
		export IMAGE_NAME=efabless/openlane:$(OPENLANE_TAG) && \
		$(MAKE) pull-openlane

.PHONY: check-openlane-env
check-openlane-env:
	@if [ -z "$(OPENLANE_ROOT)" ]; then \
		echo "Please export OPENLANE_ROOT or set it in Makefile"; \
		exit 1; \
	fi

.PHONY: qnna_top
qnna_top: check-openlane-env
	@echo "Running OpenLane flow for qnna_top..."
	@if [ ! -d "$(PDK_ROOT)" ] || [ -z "$(PDK_ROOT)" ] || [ "$(PDK_ROOT)" = "$(PWD)/dependencies/pdks" ]; then \
		echo "Error: PDK_ROOT must be set and point to a valid PDK installation"; \
		echo "Please run: export PDK_ROOT=/path/to/skywater-pdk"; \
		echo "Or check if PDK is installed with: pdk list-installed"; \
		exit 1; \
	fi
	@mkdir -p ./openlane/qnna_top/runs/$(OPENLANE_RUN_TAG)
	@rm -f ./openlane/qnna_top/runs/qnna_top
	@ln -sf $$(realpath ./openlane/qnna_top/runs/$(OPENLANE_RUN_TAG)) ./openlane/qnna_top/runs/qnna_top
	@if [[ -f ./openlane/qnna_top/interactive.tcl ]]; then \
		$(docker_run) \
			$(OPENLANE_IMAGE_NAME) sh -c "flow.tcl -it -file $$(realpath ./openlane/qnna_top/interactive.tcl)"; \
	else \
		$(docker_run) \
			$(OPENLANE_IMAGE_NAME) sh -c $(openlane_cmd); \
	fi
	@mkdir -p ./signoff/qnna_top
	@cp ./openlane/qnna_top/runs/qnna_top/OPENLANE_VERSION ./signoff/qnna_top/ 2>/dev/null || true
	@cp ./openlane/qnna_top/runs/qnna_top/PDK_SOURCES ./signoff/qnna_top/ 2>/dev/null || true
	@cp ./openlane/qnna_top/runs/qnna_top/reports/*.csv ./signoff/qnna_top/ 2>/dev/null || true

.PHONY: lint
lint:
	@echo "Running Verilator lint..."
	verilator --lint-only -Wall \
		--top-module qnna_top \
		rtl/qnna_top.v rtl/qnna_wishbone.v rtl/qnna_csr.v rtl/qnna_mac_array.v rtl/qnna_buffer.v

.PHONY: clean
clean:
	@echo "Cleaning build artifacts..."
	rm -rf ./openlane/qnna_top/runs/*
	rm -rf ./signoff
	rm -rf ./build

.PHONY: distclean
distclean: clean
	@echo "Deep cleaning..."
	rm -rf ./dependencies/openlane_src

.DEFAULT_GOAL := help
