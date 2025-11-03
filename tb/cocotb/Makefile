# Makefile for QNNA Cocotb Tests
# Author: TechJoe96

# Simulator selection
SIM ?= icarus

# Python module containing tests
MODULE = test_qnna

# Top level module
TOPLEVEL = qnna_top

# Verilog sources
VERILOG_SOURCES = \
	../../rtl/qnna_top.v \
	../../rtl/qnna_wishbone.v \
	../../rtl/qnna_csr.v \
	../../rtl/qnna_mac_array.v \
	../../rtl/qnna_buffer.v

# Module parameters
COMPILE_ARGS += -PMAC_SIZE=4
COMPILE_ARGS += -PBUFFER_DEPTH=256

# Waveform dumping
PLUSARGS += +vcd

# Include cocotb's make rules
include $(shell cocotb-config --makefiles)/Makefile.sim

# Custom targets
.PHONY: clean wave debug

wave:
	gtkwave dump.vcd &

debug:
	$(MAKE) SIM_BUILD=sim_build_debug COMPILE_ARGS+="-DDEBUG"

clean::
	rm -rf sim_build*
	rm -f dump.vcd
	rm -f results.xml
	rm -f *.pyc
