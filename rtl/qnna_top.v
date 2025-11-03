// QNNA Top Module - Quantized Neural Net Accelerator
// Author: TechJoe96
// Description: Top-level module for INT8 matrix multiplication accelerator

module qnna_top (
    // Wishbone interface
    input wire                      wb_clk_i,
    input wire                      wb_rst_i,
    input wire [31:0]               wb_adr_i,
    input wire [31:0]               wb_dat_i,
    output reg [31:0]               wb_dat_o,
    input wire                      wb_we_i,
    input wire [3:0]                wb_sel_i,
    input wire                      wb_stb_i,
    input wire                      wb_cyc_i,
    output reg                      wb_ack_o,
    output reg                      wb_err_o,
    
    // Optional interrupt
    output wire                     irq_o,
    
    // Power pins (required for OpenLane, but not used in RTL)
    input wire                      vdd,  // verilator lint_off UNUSEDSIGNAL
    input wire                      vss   // verilator lint_off UNUSEDSIGNAL
);

    // Internal signals
    wire                    csr_kick;
    wire                    csr_done;
    wire                    csr_busy;
    wire [31:0]             csr_ctrl;
    wire [31:0]             csr_status;
    wire [15:0]             csr_dim_m, csr_dim_n, csr_dim_k;
    wire                    csr_relu_en;
    
    // MAC array signals
    wire                    mac_start;
    wire                    mac_done;
    
    // Wishbone error signal
    wire                    wb_err_o_int;
    
    // Wishbone interface
    qnna_wishbone u_wishbone (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_we_i(wb_we_i),
        .wb_sel_i(wb_sel_i),
        .wb_stb_i(wb_stb_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_ack_o(wb_ack_o),
        .wb_err_o(wb_err_o_int),
        .csr_kick(csr_kick),
        .csr_done(csr_done),
        .csr_busy(csr_busy),
        .csr_ctrl(csr_ctrl),
        .csr_status(csr_status),
        .csr_dim_m(csr_dim_m),
        .csr_dim_n(csr_dim_n),
        .csr_dim_k(csr_dim_k),
        .csr_relu_en(csr_relu_en)
    );
    
    // Control/Status registers
    qnna_csr u_csr (
        .clk(wb_clk_i),
        .rst(wb_rst_i),
        .csr_kick(csr_kick),
        .csr_done(csr_done),
        .csr_busy(csr_busy),
        .csr_ctrl(csr_ctrl),
        .csr_status(csr_status),
        .csr_dim_m(csr_dim_m),
        .csr_dim_n(csr_dim_n),
        .csr_dim_k(csr_dim_k),
        .csr_relu_en(csr_relu_en),
        .mac_done(mac_done),
        .mac_start(mac_start),
        .irq_o(irq_o)
    );
    
    // MAC array
    qnna_mac_array u_mac_array (
        .clk(wb_clk_i),
        .rst(wb_rst_i),
        .start(mac_start),
        .done(mac_done),
        .dim_m(csr_dim_m),
        .dim_n(csr_dim_n),
        .dim_k(csr_dim_k),
        .relu_en(csr_relu_en)
    );
    
    // Connect error signal from wishbone
    always @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            wb_err_o <= 1'b0;
        end else begin
            wb_err_o <= wb_err_o_int;
        end
    end

endmodule
