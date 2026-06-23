// QNNA Buffer Module - SRAM Buffer for Input/Weight/Output Storage
// Author: TechJoe96
// Description: Parameterizable SRAM buffer with multi-port access

module qnna_buffer #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10,
    parameter DEPTH = 256,
    parameter NUM_PORTS = 4
)(
    input wire                      clk,
    input wire                      rst,
    
    // Write port
    input wire                      wr_en,
    input wire [ADDR_WIDTH-1:0]     wr_addr,
    input wire [DATA_WIDTH-1:0]     wr_data,
    
    // Read ports (multiple for parallel access)
    input wire                      rd_en,
    input wire [ADDR_WIDTH-1:0]     rd_addr,
    output reg [DATA_WIDTH-1:0]     rd_data[NUM_PORTS-1:0]
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [DEPTH-1:0];
    
    // Initialize memory
    integer i, j;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            mem[i] = {DATA_WIDTH{1'b0}};
        end
    end
    
    // Write logic
    always @(posedge clk) begin
        if (wr_en && !rst) begin
            mem[wr_addr[ADDR_WIDTH-1:0]] <= wr_data;
        end
    end
    
    // Read logic (multiple ports)
    genvar port;
    generate
        for (port = 0; port < NUM_PORTS; port = port + 1) begin : read_port_gen
            always @(posedge clk) begin
                if (rst) begin
                    rd_data[port] <= {DATA_WIDTH{1'b0}};
                end else if (rd_en) begin
                    // Each port reads from offset address
                    // Calculate address for this port (with bounds checking)
                    if ((rd_addr + port) < DEPTH) begin
                        rd_data[port] <= mem[rd_addr + port];
                    end else begin
                        rd_data[port] <= {DATA_WIDTH{1'b0}};
                    end
                end
            end
        end
    endgenerate
    
    // Optional: Debug/test pattern initialization
    `ifdef TEST_INIT
    initial begin
        // Initialize with test pattern for simulation
        for (i = 0; i < DEPTH && i < 16; i = i + 1) begin
            mem[i] = i[DATA_WIDTH-1:0];
        end
    end
    `endif

endmodule

// Dual-port version for more complex access patterns
module qnna_buffer_dp #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10,
    parameter DEPTH = 256
)(
    input wire                      clk,
    input wire                      rst,
    
    // Port A (Read/Write)
    input wire                      a_wr_en,
    input wire [ADDR_WIDTH-1:0]     a_addr,
    input wire [DATA_WIDTH-1:0]     a_wr_data,
    output reg [DATA_WIDTH-1:0]     a_rd_data,
    
    // Port B (Read/Write)
    input wire                      b_wr_en,
    input wire [ADDR_WIDTH-1:0]     b_addr,
    input wire [DATA_WIDTH-1:0]     b_wr_data,
    output reg [DATA_WIDTH-1:0]     b_rd_data
);

    // Memory array
    reg [DATA_WIDTH-1:0] mem [DEPTH-1:0];
    
    // Initialize memory
    integer i;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            mem[i] = {DATA_WIDTH{1'b0}};
        end
    end
    
    // Port A logic
    always @(posedge clk) begin
        if (rst) begin
            a_rd_data <= {DATA_WIDTH{1'b0}};
        end else begin
            if (a_wr_en) begin
                mem[a_addr] <= a_wr_data;
                a_rd_data <= a_wr_data;  // Write-through
            end else begin
                a_rd_data <= mem[a_addr];
            end
        end
    end
    
    // Port B logic
    always @(posedge clk) begin
        if (rst) begin
            b_rd_data <= {DATA_WIDTH{1'b0}};
        end else begin
            if (b_wr_en) begin
                mem[b_addr] <= b_wr_data;
                b_rd_data <= b_wr_data;  // Write-through
            end else begin
                b_rd_data <= mem[b_addr];
            end
        end
    end

endmodule

// FIFO buffer for streaming data
module qnna_fifo #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4
)(
    input wire                      clk,
    input wire                      rst,
    
    // Write interface
    input wire                      wr_en,
    input wire [DATA_WIDTH-1:0]     wr_data,
    output wire                     full,
    output wire                     almost_full,
    
    // Read interface
    input wire                      rd_en,
    output reg [DATA_WIDTH-1:0]     rd_data,
    output wire                     empty,
    output wire                     almost_empty,
    
    // Status
    output reg [ADDR_WIDTH:0]       count
);

    // Memory and pointers
    reg [DATA_WIDTH-1:0] mem [DEPTH-1:0];
    reg [ADDR_WIDTH-1:0] wr_ptr;
    reg [ADDR_WIDTH-1:0] rd_ptr;
    reg [ADDR_WIDTH:0] fifo_count;
    
    // Status flags
    assign full = (fifo_count == DEPTH);
    assign almost_full = (fifo_count >= DEPTH - 2);
    assign empty = (fifo_count == 0);
    assign almost_empty = (fifo_count <= 2);
    
    always @(posedge clk) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            fifo_count <= 0;
            count <= 0;
        end else begin
            // Write logic
            if (wr_en && !full) begin
                mem[wr_ptr] <= wr_data;
                wr_ptr <= wr_ptr + 1;
                if (!rd_en || empty) begin
                    fifo_count <= fifo_count + 1;
                end
            end
            
            // Read logic
            if (rd_en && !empty) begin
                rd_data <= mem[rd_ptr];
                rd_ptr <= rd_ptr + 1;
                if (!wr_en || full) begin
                    fifo_count <= fifo_count - 1;
                end
            end
            
            count <= fifo_count;
        end
    end

endmodule
