// Placeholder for Microwatt CPU wrapper
// In real implementation, use actual Microwatt with VHDL-Verilog bridge
module microwatt_verilog_wrapper (
    input clk, rst,
    output wb_cyc_o, wb_stb_o, wb_we_o,
    output [31:0] wb_adr_o, wb_dat_o,
    output [3:0] wb_sel_o,
    input [31:0] wb_dat_i,
    input wb_ack_i, wb_err_i, wb_stall_i,
    output [63:0] dbg_pc,
    output dbg_valid,
    input [31:0] ext_irq
);
    // Simplified CPU model for testing
    reg [31:0] pc;
    reg [31:0] state;
    assign dbg_pc = {32'h0, pc};
    assign dbg_valid = 1'b1;
    // Simple test sequence
    always @(posedge clk) begin
        if (rst) begin
            pc <= 32'h0;
            state <= 0;
        end else begin
            pc <= pc + 4;
            state <= state + 1;
        end
    end
    assign wb_cyc_o = (state >= 10 && state < 100);
    assign wb_stb_o = wb_cyc_o;
    assign wb_we_o = (state >= 10 && state < 50);
    assign wb_adr_o = 32'h80000000 + (state << 2);
    assign wb_dat_o = state;
    assign wb_sel_o = 4'hF;
endmodule
