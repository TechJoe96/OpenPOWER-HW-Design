// QNNA Control/Status Registers
// Author: TechJoe96
// Description: Control and status register management

module qnna_csr #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input wire                      clk,
    input wire                      rst,
    input wire                      csr_kick,
    output reg                      csr_done,
    output reg                      csr_busy,
    input wire [31:0]               csr_ctrl,
    output wire [31:0]              csr_status,
    input wire [15:0]               csr_dim_m,
    input wire [15:0]               csr_dim_n,
    input wire [15:0]               csr_dim_k,
    output wire                     csr_relu_en,
    input wire                      mac_done,
    output reg                      mac_start,
    output wire                     irq_o
);
    
    // Status register bits
    assign csr_status = {23'h0, csr_done, csr_busy, 7'h0};
    assign csr_relu_en = csr_ctrl[0];
    
    // Control state machine
    always @(posedge clk) begin
        if (rst) begin
            csr_done <= 1'b0;
            csr_busy <= 1'b0;
            mac_start <= 1'b0;
        end else begin
                    mac_start <= 1'b0;
            
            if (csr_kick && !csr_busy) begin
                            csr_busy <= 1'b1;
                            csr_done <= 1'b0;
                    mac_start <= 1'b1;
            end else if (mac_done && csr_busy) begin
                csr_busy <= 1'b0;
                    csr_done <= 1'b1;
            end
        end
    end
    
    // Interrupt generation
    assign irq_o = csr_done && csr_ctrl[3]; // INT_EN bit

endmodule
