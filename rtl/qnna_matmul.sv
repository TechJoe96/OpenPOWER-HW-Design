`timescale 1ns/1ps
// =============================================================================
// qnna_matmul : computes C = A * B for SIZE x SIZE signed-INT8 matrices,
// using one qnna_mac unit driven by a control FSM (one MAC op per cycle).
//
// For each output C[i][j]: clear the MAC, stream k = 0..SIZE-1 feeding
// A[i][k] and B[k][j], then store the accumulated dot product.
//
// This is a real, functional matmul (it actually multiplies), replacing the
// original counter that only modeled timing.
// =============================================================================
module qnna_matmul #(
    parameter int SIZE  = 4,
    parameter int IN_W  = 8,
    parameter int ACC_W = 32
)(
    input  logic                    clk,
    input  logic                    rst,
    input  logic                    start,
    input  logic signed [IN_W-1:0]  a_mat [SIZE][SIZE], // A[row][col]
    input  logic signed [IN_W-1:0]  b_mat [SIZE][SIZE], // B[row][col]
    output logic                    done,
    output logic signed [ACC_W-1:0] c_mat [SIZE][SIZE]  // C[row][col]
);
    typedef enum logic [1:0] {IDLE, CLR, MAC, STORE} st_t;
    st_t state;
    int unsigned i, j, k;

    // MAC unit
    logic clear, en;
    logic signed [IN_W-1:0]  a_op, b_op;
    logic signed [ACC_W-1:0] acc;

    qnna_mac #(.IN_W(IN_W), .ACC_W(ACC_W)) u_mac (
        .clk(clk), .rst(rst), .clear(clear), .en(en),
        .a(a_op), .b(b_op), .acc(acc)
    );

    assign a_op  = a_mat[i][k];
    assign b_op  = b_mat[k][j];
    assign clear = (state == CLR);
    assign en    = (state == MAC);

    always_ff @(posedge clk) begin
        if (rst) begin
            state <= IDLE; i <= 0; j <= 0; k <= 0; done <= 1'b0;
        end else begin
            case (state)
                IDLE:  if (start) begin done <= 1'b0; i <= 0; j <= 0; k <= 0; state <= CLR; end
                CLR:   begin k <= 0; state <= MAC; end
                MAC:   if (k == SIZE-1) state <= STORE;
                       else             k <= k + 1;
                STORE: begin
                           c_mat[i][j] <= acc;            // dot product complete
                           if (j < SIZE-1)      begin j <= j + 1;            state <= CLR; end
                           else if (i < SIZE-1) begin j <= 0; i <= i + 1;    state <= CLR; end
                           else                 begin state <= IDLE; done <= 1'b1;        end
                       end
            endcase
        end
    end
endmodule
