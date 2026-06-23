# Makefile for Verilator Simulation
# Author: TechJoe96

# Verilator settings
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -j 0
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += -Wall -Wno-fatal
VERILATOR_FLAGS += --top-module microwatt_qnna_wrapper
VERILATOR_FLAGS += -CFLAGS "-std=c++14 -Wall -O3"
VERILATOR_FLAGS += -LDFLAGS "-lpthread"

# Directories
RTL_DIR = ../../rtl
OBJ_DIR = obj_dir
BUILD_DIR = build

# Verilog sources
VERILOG_SRCS = \
	$(RTL_DIR)/microwatt_qnna_wrapper.v \
	$(RTL_DIR)/qnna_top.v \
	$(RTL_DIR)/qnna_wishbone.v \
	$(RTL_DIR)/qnna_csr.v \
	$(RTL_DIR)/qnna_mac_array.v \
	$(RTL_DIR)/qnna_buffer.v \
	$(RTL_DIR)/microwatt_verilog_wrapper.v

# C++ testbench
CPP_TB = tb_qnna.cpp

# Output executable
TARGET = Vqnna_sim

# Default target
all: $(TARGET)

# Create Microwatt Verilog wrapper from VHDL
$(RTL_DIR)/microwatt_verilog_wrapper.v: 
	@echo "Creating Microwatt Verilog wrapper..."
	@echo "// Placeholder for Microwatt CPU wrapper" > $@
	@echo "// In real implementation, use actual Microwatt with VHDL-Verilog bridge" >> $@
	@echo "module microwatt_verilog_wrapper (" >> $@
	@echo "    input clk, rst," >> $@
	@echo "    output wb_cyc_o, wb_stb_o, wb_we_o," >> $@
	@echo "    output [31:0] wb_adr_o, wb_dat_o," >> $@
	@echo "    output [3:0] wb_sel_o," >> $@
	@echo "    input [31:0] wb_dat_i," >> $@
	@echo "    input wb_ack_i, wb_err_i, wb_stall_i," >> $@
	@echo "    output [63:0] dbg_pc," >> $@
	@echo "    output dbg_valid," >> $@
	@echo "    input [31:0] ext_irq" >> $@
	@echo ");" >> $@
	@echo "    // Simplified CPU model for testing" >> $@
	@echo "    reg [31:0] pc;" >> $@
	@echo "    reg [31:0] state;" >> $@
	@echo "    assign dbg_pc = {32'h0, pc};" >> $@
	@echo "    assign dbg_valid = 1'b1;" >> $@
	@echo "    // Simple test sequence" >> $@
	@echo "    always @(posedge clk) begin" >> $@
	@echo "        if (rst) begin" >> $@
	@echo "            pc <= 32'h0;" >> $@
	@echo "            state <= 0;" >> $@
	@echo "        end else begin" >> $@
	@echo "            pc <= pc + 4;" >> $@
	@echo "            state <= state + 1;" >> $@
	@echo "        end" >> $@
	@echo "    end" >> $@
	@echo "    assign wb_cyc_o = (state >= 10 && state < 100);" >> $@
	@echo "    assign wb_stb_o = wb_cyc_o;" >> $@
	@echo "    assign wb_we_o = (state >= 10 && state < 50);" >> $@
	@echo "    assign wb_adr_o = 32'h80000000 + (state << 2);" >> $@
	@echo "    assign wb_dat_o = state;" >> $@
	@echo "    assign wb_sel_o = 4'hF;" >> $@
	@echo "endmodule" >> $@

# Build with Verilator
$(TARGET): $(VERILOG_SRCS) $(CPP_TB) $(RTL_DIR)/microwatt_verilog_wrapper.v
	@echo "Building with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRCS) $(CPP_TB) -o $(TARGET)
	@cp obj_dir/$(TARGET) .
	@echo "Build complete: $(TARGET)"

# Run simulation
run: $(TARGET)
	@echo "Running simulation..."
	./$(TARGET)

# Run with waveform
wave: $(TARGET)
	@echo "Running simulation with waveform..."
	./$(TARGET) --trace
	@echo "Opening waveform..."
	gtkwave qnna_sim.vcd &

# Run specific test
test: $(TARGET)
	./$(TARGET) --test "Basic MatMul"

# Run all tests with coverage
test-all: $(TARGET)
	./$(TARGET) --trace
	@echo "All tests completed"

# Lint the design
lint: $(VERILOG_SRCS)
	@echo "Running Verilator lint..."
	$(VERILATOR) --lint-only -Wall $(VERILOG_SRCS)

# Clean
clean:
	rm -rf obj_dir
	rm -f $(TARGET)
	rm -f *.vcd
	rm -f $(RTL_DIR)/microwatt_verilog_wrapper.v
	rm -rf $(BUILD_DIR)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Performance profiling
profile: $(TARGET)
	@echo "Running with profiling..."
	valgrind --tool=callgrind ./$(TARGET)
	@echo "View with: kcachegrind callgrind.out.*"

# Help
help:
	@echo "Verilator Simulation Makefile"
	@echo "============================="
	@echo "Targets:"
	@echo "  all      - Build simulation executable"
	@echo "  run      - Run simulation"
	@echo "  wave     - Run with waveform generation"
	@echo "  test     - Run specific test"
	@echo "  test-all - Run all tests"
	@echo "  lint     - Check RTL with Verilator"
	@echo "  clean    - Remove build artifacts"
	@echo "  profile  - Run with profiling"
	@echo "  help     - Show this help"

.PHONY: all run wave test test-all lint clean profile help
