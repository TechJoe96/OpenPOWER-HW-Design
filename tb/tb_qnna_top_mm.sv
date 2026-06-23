`timescale 1ns/1ps
// =============================================================================
// Self-checking testbench for qnna_top_mm.
// Loads A and B over Wishbone, kicks the accelerator, polls STATUS.done,
// reads C back over Wishbone, and compares against a software reference.
// Also spot-checks ReLU.  Run with:
//   iverilog -g2012 -o mm.out rtl/qnna_matmul.sv rtl/qnna_mac.sv \
//            rtl/qnna_top_mm.sv tb/tb_qnna_top_mm.sv && vvp mm.out
// =============================================================================
module tb_qnna_top_mm;
    localparam int SIZE = 4, IN_W = 8, ACC_W = 32;

    // Register map
    localparam [31:0] CTRL=32'h000, STATUS=32'h004, KICK=32'h020,
                      A_BUF=32'h100, B_BUF=32'h200, C_BUF=32'h300;

    logic        clk = 0, rst;
    logic [31:0] adr, dat_w, dat_o;
    logic        we, stb, cyc, ack, err, irq;
    logic [3:0]  sel;

    qnna_top_mm #(.SIZE(SIZE), .IN_W(IN_W), .ACC_W(ACC_W)) dut (
        .wb_clk_i(clk), .wb_rst_i(rst), .wb_adr_i(adr), .wb_dat_i(dat_w),
        .wb_dat_o(dat_o), .wb_we_i(we), .wb_sel_i(sel), .wb_stb_i(stb),
        .wb_cyc_i(cyc), .wb_ack_o(ack), .wb_err_o(err), .irq_o(irq)
    );

    always #5 clk = ~clk;   // 100 MHz

    // ---- Wishbone driver tasks (drive on negedge, level-sample ack) ----------
    task automatic wb_write(input [31:0] addr, input [31:0] data);
        begin
            @(negedge clk); cyc=1; stb=1; we=1; sel=4'hF; adr=addr; dat_w=data;
            @(posedge clk); wait (ack==1);
            @(negedge clk); cyc=0; stb=0; we=0;
        end
    endtask

    task automatic wb_read(input [31:0] addr, output [31:0] data);
        begin
            @(negedge clk); cyc=1; stb=1; we=0; sel=4'hF; adr=addr;
            @(posedge clk); wait (ack==1); data = dat_o;
            @(negedge clk); cyc=0; stb=0;
        end
    endtask

    // ---- Reference + bookkeeping ---------------------------------------------
    logic signed [IN_W-1:0]  A [SIZE][SIZE], B [SIZE][SIZE];
    logic signed [ACC_W-1:0] exp_c;
    logic [31:0] rd;
    int errors = 0, checks = 0;

    function automatic logic signed [ACC_W-1:0] ref_c(input int i, input int j);
        logic signed [ACC_W-1:0] s; s = '0;
        for (int k = 0; k < SIZE; k++) s = s + A[i][k]*B[k][j];
        return s;
    endfunction

    task automatic load_and_run(input bit relu);
        // randomize operands and push them in
        for (int i=0;i<SIZE;i++) for (int j=0;j<SIZE;j++) begin
            A[i][j] = $random; B[i][j] = $random;
            wb_write(A_BUF + (i*SIZE+j)*4, {{24{A[i][j][IN_W-1]}}, A[i][j]});
            wb_write(B_BUF + (i*SIZE+j)*4, {{24{B[i][j][IN_W-1]}}, B[i][j]});
        end
        wb_write(CTRL, relu ? 32'h1 : 32'h0);
        wb_write(KICK, 32'h1);
        // poll STATUS.done (bit 1), with a guard
        begin int g=0; do begin wb_read(STATUS, rd); g++; end
                       while (!rd[1] && g<2000); end
        // read back and check
        for (int i=0;i<SIZE;i++) for (int j=0;j<SIZE;j++) begin
            wb_read(C_BUF + (i*SIZE+j)*4, rd);
            exp_c = ref_c(i,j);
            if (relu && exp_c < 0) exp_c = '0;
            checks++;
            if ($signed(rd) !== exp_c) begin
                errors++;
                $display("  MISMATCH C[%0d][%0d]=%0d exp=%0d (relu=%0b)",
                         i, j, $signed(rd), exp_c, relu);
            end
        end
    endtask

    initial begin
        rst=1; cyc=0; stb=0; we=0; adr=0; dat_w=0; sel=0;
        repeat (4) @(negedge clk); rst=0;

        load_and_run(1'b0);   // plain matmul
        load_and_run(1'b0);   // again, new random data
        load_and_run(1'b1);   // with ReLU

        if (errors==0) $display("PASS: all %0d element checks correct", checks);
        else           $display("FAIL: %0d/%0d wrong", errors, checks);
        $finish;
    end

    initial begin #200000; $display("TIMEOUT"); $finish; end
endmodule
