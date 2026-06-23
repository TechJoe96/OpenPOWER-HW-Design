// QNNA Wishbone Interface
// Author: TechJoe96
// Description: Wishbone slave interface for QNNA peripheral

module qnna_wishbone #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter BASE_ADDR = 32'h80000000
)(
    // Wishbone signals
    input wire                      wb_clk_i,
    input wire                      wb_rst_i,
    input wire [ADDR_WIDTH-1:0]     wb_adr_i,
    input wire [DATA_WIDTH-1:0]     wb_dat_i,
    output reg [DATA_WIDTH-1:0]     wb_dat_o,
    input wire                      wb_we_i,
    input wire [3:0]                wb_sel_i,
    input wire                      wb_stb_i,
    input wire                      wb_cyc_i,
    output reg                      wb_ack_o,
    output wire                     wb_err_o,
    
    // CSR interface
    output reg                      csr_kick,
    input wire                      csr_done,
    input wire                      csr_busy,
    output reg [31:0]               csr_ctrl,
    input wire [31:0]               csr_status,
    output reg [15:0]               csr_dim_m,
    output reg [15:0]               csr_dim_n,
    output reg [15:0]               csr_dim_k,
    output reg                      csr_relu_en,
    
    // Buffer access (simplified - data arrays not passed through wishbone)
    output reg [ADDR_WIDTH-1:0]     input_addr,
    output reg [ADDR_WIDTH-1:0]     weight_addr,
    output reg [ADDR_WIDTH-1:0]     output_addr,
    input wire [31:0]               output_data,  // Only single value needed
    output reg                      input_rd_en,
    output reg                      weight_rd_en,
    output reg                      output_wr_en
);

    // Address decode
    localparam CTRL_REG     = 12'h000;  // Control register
    localparam STATUS_REG   = 12'h004;  // Status register
    localparam DIM_M_REG    = 12'h008;  // Matrix dimension M
    localparam DIM_N_REG    = 12'h00C;  // Matrix dimension N
    localparam DIM_K_REG    = 12'h010;  // Matrix dimension K
    localparam INPUT_ADDR   = 12'h014;  // Input buffer address
    localparam WEIGHT_ADDR  = 12'h018;  // Weight buffer address
    localparam OUTPUT_ADDR  = 12'h01C;  // Output buffer address
    localparam KICK_REG     = 12'h020;  // Kick/start computation
    localparam INT_EN_REG   = 12'h024;  // Interrupt enable
    localparam INT_STATUS   = 12'h028;  // Interrupt status
    
    // Buffer memory regions
    localparam INPUT_BUF_START  = 12'h100;  // Input buffer start
    localparam INPUT_BUF_END    = 12'h4FF;  // Input buffer end (1KB)
    localparam WEIGHT_BUF_START = 12'h500;  // Weight buffer start
    localparam WEIGHT_BUF_END   = 12'h8FF;  // Weight buffer end (1KB)
    localparam OUTPUT_BUF_START = 12'h900;  // Output buffer start
    localparam OUTPUT_BUF_END   = 12'hCFF;  // Output buffer end (1KB)
    
    // Internal registers
    reg [31:0]                  int_enable;
    reg [31:0]                  int_status;
    reg                         wb_access;
    wire [11:0]                 addr_offset;
    
    // Address offset calculation
    assign addr_offset = wb_adr_i[11:0] - BASE_ADDR[11:0];
    assign wb_err_o = 1'b0;  // Never generate errors
    
    // Wishbone state machine
    always @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 32'b0;
            wb_access <= 1'b0;
        end else begin
            if (wb_cyc_i && wb_stb_i && !wb_access) begin
                wb_access <= 1'b1;
                wb_ack_o <= 1'b1;
                
                if (wb_we_i) begin
                    // Write operation
                    case (addr_offset)
                        CTRL_REG: begin
                            csr_ctrl <= wb_dat_i;
                            csr_relu_en <= wb_dat_i[0];
                        end
                        DIM_M_REG: csr_dim_m <= wb_dat_i[15:0];
                        DIM_N_REG: csr_dim_n <= wb_dat_i[15:0];
                        DIM_K_REG: csr_dim_k <= wb_dat_i[15:0];
                        INPUT_ADDR: input_addr <= wb_dat_i;
                        WEIGHT_ADDR: weight_addr <= wb_dat_i;
                        OUTPUT_ADDR: output_addr <= wb_dat_i;
                        KICK_REG: csr_kick <= wb_dat_i[0];
                        INT_EN_REG: int_enable <= wb_dat_i;
                        default: begin
                            // Check if accessing buffer memory
                            if (addr_offset >= INPUT_BUF_START && addr_offset <= INPUT_BUF_END) begin
                                // Write to input buffer
                                input_addr <= {20'b0, addr_offset - INPUT_BUF_START};
                            end else if (addr_offset >= WEIGHT_BUF_START && addr_offset <= WEIGHT_BUF_END) begin
                                // Write to weight buffer
                                weight_addr <= {20'b0, addr_offset - WEIGHT_BUF_START};
                            end
                        end
                    endcase
                end else begin
                    // Read operation
                    case (addr_offset)
                        CTRL_REG: wb_dat_o <= csr_ctrl;
                        STATUS_REG: wb_dat_o <= {30'b0, csr_done, csr_busy};
                        DIM_M_REG: wb_dat_o <= {16'b0, csr_dim_m};
                        DIM_N_REG: wb_dat_o <= {16'b0, csr_dim_n};
                        DIM_K_REG: wb_dat_o <= {16'b0, csr_dim_k};
                        INPUT_ADDR: wb_dat_o <= input_addr;
                        WEIGHT_ADDR: wb_dat_o <= weight_addr;
                        OUTPUT_ADDR: wb_dat_o <= output_addr;
                        KICK_REG: wb_dat_o <= {31'b0, csr_kick};
                        INT_EN_REG: wb_dat_o <= int_enable;
                        INT_STATUS: wb_dat_o <= int_status;
                        default: begin
                            // Check if accessing buffer memory
                            if (addr_offset >= OUTPUT_BUF_START && addr_offset <= OUTPUT_BUF_END) begin
                                // Read from output buffer
                                output_addr <= {20'b0, addr_offset - OUTPUT_BUF_START};
                                wb_dat_o <= output_data;  // Direct value, not array
                            end else begin
                                wb_dat_o <= 32'hDEADBEEF;  // Default value
                            end
                        end
                    endcase
                end
            end else if (!wb_cyc_i || !wb_stb_i) begin
                wb_ack_o <= 1'b0;
                wb_access <= 1'b0;
            end
        end
    end
    
    // Kick signal management
    always @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            csr_kick <= 1'b0;
        end else if (csr_kick && csr_busy) begin
            csr_kick <= 1'b0;  // Auto-clear kick when operation starts
        end
    end
    
    // Interrupt status management
    always @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            int_status <= 32'b0;
        end else begin
            if (csr_done) begin
                int_status[0] <= 1'b1;  // Set done interrupt
            end else if (wb_we_i && wb_stb_i && wb_cyc_i && addr_offset == INT_STATUS) begin
                int_status <= int_status & ~wb_dat_i;  // Clear on write
            end
        end
    end

endmodule
