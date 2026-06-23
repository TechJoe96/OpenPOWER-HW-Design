`timescale 1ns/1ps
// =============================================================================
// qnna_mac : signed INT8 multiply-accumulate (MAC) unit.
//
// Each enabled cycle:  acc <- acc + a*b   (signed 8b x 8b, accumulated in ACC_W).
// `clear` zeroes the accumulator at the start of a new dot product.
//
// This is the real datapath that replaces the original placeholder
// (`accum <= accum + 1`, which did no multiplication).
// =============================================================================
module qnna_mac #(
    parameter int IN_W  = 8,
    parameter int ACC_W = 32
)(
    input  logic                    clk,
    input  logic                    rst,
    input  logic                    clear,
    input  logic                    en,
    input  logic signed [IN_W-1:0]  a,
    input  logic signed [IN_W-1:0]  b,
    output logic signed [ACC_W-1:0] acc
);
    logic signed [2*IN_W-1:0] prod;
    assign prod = a * b;               // signed * signed -> signed product

    always_ff @(posedge clk) begin
        if (rst)        acc <= '0;
        else if (clear) acc <= '0;
        else if (en)    acc <= acc + prod;   // prod sign-extended to ACC_W
    end
endmodule
