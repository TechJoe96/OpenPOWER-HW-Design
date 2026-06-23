// QNNA Top Module - Quantized Neural Net Accelerator
// Author: TechJoe96
// Description: Top-level module for INT8 matrix multiplication accelerator

module qnna_top #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter MAC_SIZE = 4,  // 4x4 or 8x8 MAC array
    parameter BUFFER_DEPTH = 256
)(
    // Wishbone interface
    input wire                      wb_clk_i,
    input wire                      wb_rst_i,
    input wire [ADDR_WIDTH-1:0]     wb_adr_i,
    input wire [DATA_WIDTH-1:0]     wb_dat_i,
    output wire [DATA_WIDTH-1:0]    wb_dat_o,
    input wire                      wb_we_i,
    input wire [3:0]                wb_sel_i,
    input wire                      wb_stb_i,
    input wire                      wb_cyc_i,
    output wire                     wb_ack_o,
    output wire                     wb_err_o,
    
    // Optional interrupt
    output wire                     irq_o
);

    // Internal signals
    wire                    csr_kick;
    wire                    csr_done;
    wire                    csr_busy;
    wire [31:0]             csr_ctrl;
    wire [31:0]             csr_status;
    wire [15:0]             csr_dim_m, csr_dim_n, csr_dim_k;
    wire                    csr_relu_en;
    
    // MAC array signals
    wire                    mac_start;
    wire                    mac_done;
    wire [7:0]              input_data[MAC_SIZE-1:0];
    wire [7:0]              weight_data[MAC_SIZE-1:0][MAC_SIZE-1:0];
    wire [31:0]             output_data[MAC_SIZE-1:0];
    
    // Buffer control signals
    wire [ADDR_WIDTH-1:0]   input_addr;
    wire [ADDR_WIDTH-1:0]   weight_addr;
    wire [ADDR_WIDTH-1:0]   output_addr;
    wire                    input_rd_en;
    wire                    weight_rd_en;
    wire                    output_wr_en;
    
    // Instantiate Wishbone interface
    qnna_wishbone #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) u_wishbone (
        .wb_clk_i       (wb_clk_i),
        .wb_rst_i       (wb_rst_i),
        .wb_adr_i       (wb_adr_i),
        .wb_dat_i       (wb_dat_i),
        .wb_dat_o       (wb_dat_o),
        .wb_we_i        (wb_we_i),
        .wb_sel_i       (wb_sel_i),
        .wb_stb_i       (wb_stb_i),
        .wb_cyc_i       (wb_cyc_i),
        .wb_ack_o       (wb_ack_o),
        .wb_err_o       (wb_err_o),
        
        // CSR interface
        .csr_kick       (csr_kick),
        .csr_done       (csr_done),
        .csr_busy       (csr_busy),
        .csr_ctrl       (csr_ctrl),
        .csr_status     (csr_status),
        .csr_dim_m      (csr_dim_m),
        .csr_dim_n      (csr_dim_n),
        .csr_dim_k      (csr_dim_k),
        .csr_relu_en    (csr_relu_en),
        
        // Buffer access
        .input_addr     (input_addr),
        .weight_addr    (weight_addr),
        .output_addr    (output_addr),
        .output_data    (output_data[0]), // Only first element needed
        .input_rd_en    (input_rd_en),
        .weight_rd_en   (weight_rd_en),
        .output_wr_en   (output_wr_en)
    );
    
    // Instantiate CSR block
    qnna_csr #(
        .DATA_WIDTH(DATA_WIDTH)
    ) u_csr (
        .clk            (wb_clk_i),
        .rst            (wb_rst_i),
        
        .csr_kick       (csr_kick),
        .csr_done       (csr_done),
        .csr_busy       (csr_busy),
        .csr_ctrl       (csr_ctrl),
        .csr_status     (csr_status),
        .csr_dim_m      (csr_dim_m),
        .csr_dim_n      (csr_dim_n),
        .csr_dim_k      (csr_dim_k),
        .csr_relu_en    (csr_relu_en),
        
        .mac_start      (mac_start),
        .mac_done       (mac_done),
        .irq_o          (irq_o)
    );
    
    // Instantiate MAC array
    qnna_mac_array #(
        .MAC_SIZE(MAC_SIZE)
    ) u_mac_array (
        .clk            (wb_clk_i),
        .rst            (wb_rst_i),
        
        .start          (mac_start),
        .done           (mac_done),
        
        .dim_m          (csr_dim_m),
        .dim_n          (csr_dim_n),
        .dim_k          (csr_dim_k),
        
        .input_data     (input_data),
        .weight_data    (weight_data),
        .output_data    (output_data),
        
        .relu_en        (csr_relu_en)
    );
    
    // Instantiate input buffer
    qnna_buffer #(
        .DATA_WIDTH(8),
        .ADDR_WIDTH(10),
        .DEPTH(BUFFER_DEPTH),
        .NUM_PORTS(MAC_SIZE)
    ) u_input_buffer (
        .clk            (wb_clk_i),
        .rst            (wb_rst_i),
        
        .wr_en          (1'b0), // Write through Wishbone
        .wr_addr        ('0),
        .wr_data        ('0),
        
        .rd_en          (input_rd_en),
        .rd_addr        (input_addr[9:0]),
        .rd_data        (input_data)
    );
    
    // Intermediate signal for weight buffer output (flattened)
    wire [7:0] weight_buffer_out[MAC_SIZE * MAC_SIZE - 1:0];
    
    // Instantiate weight buffer
    qnna_buffer #(
        .DATA_WIDTH(8),
        .ADDR_WIDTH(10),
        .DEPTH(BUFFER_DEPTH * MAC_SIZE),
        .NUM_PORTS(MAC_SIZE * MAC_SIZE)
    ) u_weight_buffer (
        .clk            (wb_clk_i),
        .rst            (wb_rst_i),
        
        .wr_en          (1'b0), // Write through Wishbone
        .wr_addr        ('0),
        .wr_data        ('0),
        
        .rd_en          (weight_rd_en),
        .rd_addr        (weight_addr[9:0]),
        .rd_data        (weight_buffer_out)
    );
    
    // Convert flattened array back to 2D for MAC array
    genvar wi, wj;
    generate
        for (wi = 0; wi < MAC_SIZE; wi = wi + 1) begin : weight_row
            for (wj = 0; wj < MAC_SIZE; wj = wj + 1) begin : weight_col
                assign weight_data[wi][wj] = weight_buffer_out[wi * MAC_SIZE + wj];
            end
        end
    endgenerate
    
    // Instantiate output buffer
    // Note: For simplicity, we write the first output value
    // In a real implementation, would need multiple write ports or sequential writes
    qnna_buffer #(
        .DATA_WIDTH(32),
        .ADDR_WIDTH(10),
        .DEPTH(BUFFER_DEPTH),
        .NUM_PORTS(MAC_SIZE)
    ) u_output_buffer (
        .clk            (wb_clk_i),
        .rst            (wb_rst_i),
        
        .wr_en          (output_wr_en),
        .wr_addr        (output_addr[9:0]),
        .wr_data        (output_data[0]),  // Write first element of array
        
        .rd_en          (1'b0), // Read through Wishbone
        .rd_addr        ('0),
        .rd_data        ()
    );

endmodule
