# SoC-Level Testbench Makefile
# Tests QNNA integration with Microwatt CPU

IVERILOG = iverilog
VVP = vvp
GTKWAVE = gtkwave

TB_SRC = tb_qnna_soc.v
RTL_SRC = ../../rtl/qnna_top.v \
          ../../rtl/qnna_wishbone.v \
          ../../rtl/qnna_csr.v \
          ../../rtl/qnna_mac_array.v \
          ../../rtl/qnna_buffer.v

TB_BIN = tb_qnna_soc.vvp
VCD_FILE = tb_qnna_soc.vcd

.PHONY: all run clean view

all: $(TB_BIN)

$(TB_BIN): $(TB_SRC) $(RTL_SRC)
	$(IVERILOG) -g2012 -o $(TB_BIN) -s tb_qnna_soc $(TB_SRC) $(RTL_SRC)

run: $(TB_BIN)
	$(VVP) $(TB_BIN)

view: $(VCD_FILE)
	$(GTKWAVE) $(VCD_FILE) &

clean:
	rm -f $(TB_BIN) $(VCD_FILE)

help:
	@echo "SoC-Level Testbench Makefile"
	@echo ""
	@echo "Targets:"
	@echo "  make       - Compile testbench"
	@echo "  make run   - Run testbench"
	@echo "  make view  - View waveforms"
	@echo "  make clean - Clean build files"
	@echo ""

