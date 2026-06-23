// QNNA MAC Array - INT8 Matrix Multiply-Accumulate Array
// Author: TechJoe96
// Description: Systolic array for INT8 matrix multiplication with INT32 accumulation

module qnna_mac_array #(
    parameter MAC_SIZE = 4  // 4x4 or 8x8 array
)(
    input wire                  clk,
    input wire                  rst,
    
    // Control signals
    input wire                  start,
    output reg                  done,
    
    // Matrix dimensions
    input wire [15:0]           dim_m,  // Output rows
    input wire [15:0]           dim_n,  // Output columns  
    input wire [15:0]           dim_k,  // Inner dimension
    
    // Data interfaces
    input wire [7:0]            input_data[MAC_SIZE-1:0],
    input wire [7:0]            weight_data[MAC_SIZE-1:0][MAC_SIZE-1:0],
    output wire [31:0]          output_data[MAC_SIZE-1:0],
    
    // Optional ReLU
    input wire                  relu_en
);

    // Internal signals
    reg [31:0]                  accumulator[MAC_SIZE-1:0][MAC_SIZE-1:0];
    reg [7:0]                   input_reg[MAC_SIZE-1:0];
    reg [7:0]                   weight_reg[MAC_SIZE-1:0][MAC_SIZE-1:0];
    reg [15:0]                  cycle_count;
    reg                         computing;
    
    // Systolic data flow registers
    reg [7:0]                   horizontal_data[MAC_SIZE-1:0][MAC_SIZE-1:0];
    reg [7:0]                   vertical_data[MAC_SIZE-1:0][MAC_SIZE-1:0];
    
    // State machine
    localparam IDLE = 2'b00;
    localparam LOAD = 2'b01;
    localparam COMPUTE = 2'b10;
    localparam DRAIN = 2'b11;
    
    reg [1:0]                   state;
    reg [15:0]                  load_count;
    reg [15:0]                  compute_count;
    reg [15:0]                  drain_count;
    
    // MAC computation
    genvar i, j;
    generate
        for (i = 0; i < MAC_SIZE; i = i + 1) begin : row_gen
            for (j = 0; j < MAC_SIZE; j = j + 1) begin : col_gen
                
                // Single MAC unit
                always @(posedge clk) begin
                    if (rst) begin
                        accumulator[i][j] <= 32'b0;
                        horizontal_data[i][j] <= 8'b0;
                        vertical_data[i][j] <= 8'b0;
                    end else if (state == LOAD) begin
                        // Load weights stationary
                        weight_reg[i][j] <= weight_data[i][j];
                        accumulator[i][j] <= 32'b0;
                    end else if (state == COMPUTE) begin
                        // Systolic data movement
                        if (j == 0) begin
                            horizontal_data[i][j] <= input_data[i];
                        end else begin
                            horizontal_data[i][j] <= horizontal_data[i][j-1];
                        end
                        
                        // MAC operation: signed INT8 multiplication
                        accumulator[i][j] <= accumulator[i][j] + 
                            ($signed(horizontal_data[i][j]) * $signed(weight_reg[i][j]));
                    end
                end
                
            end
        end
    endgenerate
    
    // Output assignment with optional ReLU
    generate
        for (i = 0; i < MAC_SIZE; i = i + 1) begin : output_gen
            assign output_data[i] = relu_en ? 
                (accumulator[i][0][31] ? 32'b0 : accumulator[i][0]) : 
                accumulator[i][0];
        end
    endgenerate
    
    // Control FSM
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            done <= 1'b0;
            computing <= 1'b0;
            cycle_count <= 16'b0;
            load_count <= 16'b0;
            compute_count <= 16'b0;
            drain_count <= 16'b0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        state <= LOAD;
                        load_count <= 16'b0;
                        computing <= 1'b1;
                    end
                end
                
                LOAD: begin
                    // Load weights and prepare
                    load_count <= load_count + 1;
                    if (load_count >= MAC_SIZE - 1) begin
                        state <= COMPUTE;
                        compute_count <= 16'b0;
                    end
                end
                
                COMPUTE: begin
                    // Perform systolic computation
                    compute_count <= compute_count + 1;
                    if (compute_count >= dim_k + MAC_SIZE - 1) begin
                        state <= DRAIN;
                        drain_count <= 16'b0;
                    end
                end
                
                DRAIN: begin
                    // Drain pipeline and output results
                    drain_count <= drain_count + 1;
                    if (drain_count >= MAC_SIZE - 1) begin
                        state <= IDLE;
                        done <= 1'b1;
                        computing <= 1'b0;
                    end
                end
            endcase
        end
    end
    
    // Cycle counter for performance monitoring
    always @(posedge clk) begin
        if (rst || !computing) begin
            cycle_count <= 16'b0;
        end else begin
            cycle_count <= cycle_count + 1;
        end
    end

endmodule
