// QNNA Buffer Module
// Author: TechJoe96
// Description: Simple dual-port SRAM buffer for QNNA (Yosys-compatible)

module qnna_buffer #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10,
    parameter DEPTH = 256
)(
    input wire                      clk,
    input wire                      rst,
    input wire                      wr_en,
    input wire [ADDR_WIDTH-1:0]     wr_addr,
    input wire [DATA_WIDTH-1:0]     wr_data,
    input wire                      rd_en,
    input wire [ADDR_WIDTH-1:0]     rd_addr,
    output reg [DATA_WIDTH-1:0]     rd_data
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    
    // Write logic
    always @(posedge clk) begin
        if (rst) begin
            // Reset handled by synthesis
        end else begin
            if (wr_en && wr_addr < DEPTH) begin
                mem[wr_addr] <= wr_data;
            end
        end
    end
    
    // Read logic
    always @(posedge clk) begin
        if (rst) begin
            rd_data <= {DATA_WIDTH{1'b0}};
        end else begin
            if (rd_en && rd_addr < DEPTH) begin
                rd_data <= mem[rd_addr];
            end
        end
    end

endmodule
