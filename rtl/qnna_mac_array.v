// QNNA MAC Array
// Author: TechJoe96
// Description: Simplified 4x4 INT8 multiply-accumulate array

module qnna_mac_array (
    input wire                      clk,
    input wire                      rst,
    input wire                      start,
    output reg                      done,
    input wire [15:0]               dim_m,
    input wire [15:0]               dim_n,
    input wire [15:0]               dim_k,
    input wire                      relu_en
);

    // Internal state
    reg [15:0] row_counter;
    reg [15:0] col_counter;
    reg [15:0] k_counter;
    reg [31:0] accum;
    reg running;
    
    // MAC computation
    always @(posedge clk) begin
        if (rst) begin
            done <= 1'b0;
            running <= 1'b0;
            row_counter <= 16'h0;
            col_counter <= 16'h0;
            k_counter <= 16'h0;
            accum <= 32'h0;
        end else begin
            if (start && !running) begin
                running <= 1'b1;
                done <= 1'b0;
                row_counter <= 16'h0;
                col_counter <= 16'h0;
                k_counter <= 16'h0;
                accum <= 32'h0;
            end else if (running) begin
                if (k_counter < dim_k) begin
                    // Perform MAC operation (simplified)
                    accum <= accum + 1;
                    k_counter <= k_counter + 1;
                end else begin
                    // Done with K dimension
                    k_counter <= 16'h0;
                    accum <= 32'h0;
                    col_counter <= col_counter + 1;
                    
                    // Check if done with all columns
                    if (col_counter >= dim_n - 1) begin
                        col_counter <= 16'h0;
                        row_counter <= row_counter + 1;
                        
                        // Check if done with all rows
                        if (row_counter >= dim_m - 1) begin
                            running <= 1'b0;
                            done <= 1'b1;
                        end
                    end
                end
            end
        end
    end

endmodule
