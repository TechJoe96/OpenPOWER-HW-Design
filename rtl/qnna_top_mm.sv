`timescale 1ns/1ps
// =============================================================================
// qnna_top_mm : QNNA accelerator top, integrated with the REAL matmul datapath.
//
// This is a clean, self-contained, Wishbone-accessible accelerator built around
// the proven qnna_matmul (which actually multiplies, unlike the qnna_mac_array
// placeholder). It is added ALONGSIDE the original qnna_top.v; nothing is
// overwritten. Point your build/sim at qnna_top_mm to use the working datapath.
//
// Compute: C = A * B for SIZE x SIZE signed INT8 matrices, optional ReLU on read.
//
// Register map (Wishbone, 32-bit, byte addresses; offset = wb_adr_i[11:0]):
//   0x000  CTRL    R/W   [0] relu_en (applied on C read), [3] irq_en
//   0x004  STATUS  RO    [0] busy, [1] done
//   0x020  KICK    WO    write 1 -> start computation
//   0x100+ A_BUF   R/W   16 words: A[i][j] at 0x100 + (i*SIZE + j)*4  (low 8 bits, signed)
//   0x200+ B_BUF   R/W   16 words: B[i][j] at 0x200 + (i*SIZE + j)*4  (low 8 bits, signed)
//   0x300+ C_BUF   RO    16 words: C[i][j] at 0x300 + (i*SIZE + j)*4  (32-bit signed)
// =============================================================================
module qnna_top_mm #(
    parameter int SIZE  = 4,
    parameter int IN_W  = 8,
    parameter int ACC_W = 32
)(
    // Wishbone B4 slave
    input  wire        wb_clk_i,
    input  wire        wb_rst_i,
    input  wire [31:0] wb_adr_i,
    input  wire [31:0] wb_dat_i,
    output reg  [31:0] wb_dat_o,
    input  wire        wb_we_i,
    input  wire [3:0]  wb_sel_i,   // byte selects (unused; full-word access)
    input  wire        wb_stb_i,
    input  wire        wb_cyc_i,
    output reg         wb_ack_o,
    output wire        wb_err_o,
    output wire        irq_o
);
    assign wb_err_o = 1'b0;        // this slave never errors

    // ---- Operand / result storage --------------------------------------------
    logic signed [IN_W-1:0]  a_mat [SIZE][SIZE];  // written by SW, feeds matmul
    logic signed [IN_W-1:0]  b_mat [SIZE][SIZE];  // written by SW, feeds matmul
    logic signed [ACC_W-1:0] c_mat [SIZE][SIZE];  // driven by matmul (result)

    // ---- Control / status ----------------------------------------------------
    logic [31:0] ctrl;
    wire         relu_en = ctrl[0];
    wire         irq_en  = ctrl[3];
    logic        busy;
    logic        start_pulse;
    wire         done;

    // ---- Compute core (the proven, verified matmul) --------------------------
    qnna_matmul #(.SIZE(SIZE), .IN_W(IN_W), .ACC_W(ACC_W)) u_mm (
        .clk   (wb_clk_i),
        .rst   (wb_rst_i),
        .start (start_pulse),
        .a_mat (a_mat),
        .b_mat (b_mat),
        .done  (done),
        .c_mat (c_mat)
    );

    // busy: set when we kick, cleared when the matmul reports done
    always_ff @(posedge wb_clk_i) begin
        if (wb_rst_i)            busy <= 1'b0;
        else if (start_pulse)    busy <= 1'b1;
        else if (done)           busy <= 1'b0;
    end

    assign irq_o = done & irq_en;

    // ---- Address decode ------------------------------------------------------
    wire [11:0] off    = wb_adr_i[11:0];
    wire        access = wb_cyc_i & wb_stb_i & ~wb_ack_o;  // 1-cycle request
    wire [3:0]  idx    = off[5:2];          // 0..15 within a 16-word region
    wire [1:0]  row    = idx[3:2];
    wire [1:0]  col    = idx[1:0];

    integer ri, ci;
    always_ff @(posedge wb_clk_i) begin
        if (wb_rst_i) begin
            wb_ack_o    <= 1'b0;
            wb_dat_o    <= 32'b0;
            ctrl        <= 32'b0;
            start_pulse <= 1'b0;
            for (ri = 0; ri < SIZE; ri++)
                for (ci = 0; ci < SIZE; ci++) begin
                    a_mat[ri][ci] <= '0;
                    b_mat[ri][ci] <= '0;
                end
        end else begin
            wb_ack_o    <= 1'b0;   // default: ack low
            start_pulse <= 1'b0;   // default: kick is a 1-cycle pulse

            if (access) begin
                wb_ack_o <= 1'b1;  // single-cycle acknowledge

                if (wb_we_i) begin
                    // -------- writes --------
                    if      (off == 12'h000) ctrl        <= wb_dat_i;
                    else if (off == 12'h020) start_pulse <= wb_dat_i[0];           // KICK
                    else if (off[11:8] == 4'h1) a_mat[row][col] <= wb_dat_i[IN_W-1:0]; // A_BUF
                    else if (off[11:8] == 4'h2) b_mat[row][col] <= wb_dat_i[IN_W-1:0]; // B_BUF
                end else begin
                    // -------- reads --------
                    if      (off == 12'h000) wb_dat_o <= ctrl;
                    else if (off == 12'h004) wb_dat_o <= {30'b0, done, busy};      // STATUS
                    else if (off[11:8] == 4'h3)                                    // C_BUF
                        wb_dat_o <= (relu_en && c_mat[row][col][ACC_W-1])
                                        ? 32'b0
                                        : c_mat[row][col];
                    else wb_dat_o <= 32'b0;
                end
            end
        end
    end
endmodule
