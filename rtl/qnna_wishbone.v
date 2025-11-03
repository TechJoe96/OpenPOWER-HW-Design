// QNNA Wishbone Interface
// Author: TechJoe96
// Description: Wishbone B4 slave interface for QNNA

module qnna_wishbone (
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
    
    // CSR interface
    output reg                      csr_kick,
    input wire                      csr_done,
    input wire                      csr_busy,
    output reg [31:0]               csr_ctrl,
    input wire [31:0]               csr_status,
    output reg [15:0]               csr_dim_m,
    output reg [15:0]               csr_dim_n,
    output reg [15:0]               csr_dim_k,
    output wire                     csr_relu_en
);

    // Register offsets
    localparam CTRL_REG = 12'h000;
    localparam STATUS_REG = 12'h004;
    localparam DIM_M_REG = 12'h008;
    localparam DIM_N_REG = 12'h00C;
    localparam DIM_K_REG = 12'h010;
    localparam KICK_REG = 12'h020;
    
    // Address decoding
    wire [11:0] reg_addr = wb_adr_i[11:0];
    wire valid_addr = wb_cyc_i && wb_stb_i;
    
    // Control register bits
    assign csr_relu_en = csr_ctrl[0];
    
    // Wishbone state machine
    always @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            wb_ack_o <= 1'b0;
            wb_err_o <= 1'b0;
            wb_dat_o <= 32'h0;
            csr_kick <= 1'b0;
            csr_ctrl <= 32'h0;
            csr_dim_m <= 16'h0;
            csr_dim_n <= 16'h0;
            csr_dim_k <= 16'h0;
        end else begin
            wb_ack_o <= 1'b0;
            wb_err_o <= 1'b0;  // No errors in this implementation
            csr_kick <= 1'b0;
            
            if (valid_addr && !wb_ack_o) begin
                wb_ack_o <= 1'b1;
                
                if (wb_we_i) begin
                    // Write cycle
                    case (reg_addr)
                        CTRL_REG: csr_ctrl <= wb_dat_i;
                        DIM_M_REG: csr_dim_m <= wb_dat_i[15:0];
                        DIM_N_REG: csr_dim_n <= wb_dat_i[15:0];
                        DIM_K_REG: csr_dim_k <= wb_dat_i[15:0];
                        KICK_REG: csr_kick <= wb_dat_i[0];
                        default: ;
                    endcase
                end else begin
                    // Read cycle
                    case (reg_addr)
                        CTRL_REG: wb_dat_o <= csr_ctrl;
                        STATUS_REG: wb_dat_o <= csr_status;
                        DIM_M_REG: wb_dat_o <= {16'h0, csr_dim_m};
                        DIM_N_REG: wb_dat_o <= {16'h0, csr_dim_n};
                        DIM_K_REG: wb_dat_o <= {16'h0, csr_dim_k};
                        default: wb_dat_o <= 32'h0;
                    endcase
                end
            end
        end
    end

endmodule
