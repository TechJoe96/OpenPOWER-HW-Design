// QNNA CSR Block - Control and Status Registers
// Author: TechJoe96
// Description: Control logic and status management for QNNA

module qnna_csr #(
    parameter DATA_WIDTH = 32
)(
    input wire                  clk,
    input wire                  rst,
    
    // CSR interface from Wishbone
    input wire                  csr_kick,
    output reg                  csr_done,
    output reg                  csr_busy,
    input wire [31:0]           csr_ctrl,
    output reg [31:0]           csr_status,
    input wire [15:0]           csr_dim_m,
    input wire [15:0]           csr_dim_n,
    input wire [15:0]           csr_dim_k,
    input wire                  csr_relu_en,
    
    // MAC array interface
    output reg                  mac_start,
    input wire                  mac_done,
    
    // Interrupt output
    output reg                  irq_o
);

    // State machine states
    localparam IDLE         = 3'b000;
    localparam INIT         = 3'b001;
    localparam RUNNING      = 3'b010;
    localparam WAIT_MAC     = 3'b011;
    localparam COMPLETE     = 3'b100;
    localparam ERROR        = 3'b101;
    
    reg [2:0]                   state;
    reg [31:0]                  cycle_counter;
    reg [31:0]                  operation_count;
    reg                         error_flag;
    reg [7:0]                   error_code;
    
    // Control bits from csr_ctrl
    wire                        auto_clear;
    wire                        continuous_mode;
    wire                        irq_enable;
    
    assign auto_clear = csr_ctrl[1];
    assign continuous_mode = csr_ctrl[2];
    assign irq_enable = csr_ctrl[3];
    
    // Status register composition
    always @(*) begin
        csr_status = {
            8'b0,               // Reserved [31:24]
            error_code,         // Error code [23:16]
            4'b0,               // Reserved [15:12]
            state,              // Current state [11:9]
            1'b0,               // Reserved [8]
            error_flag,         // Error flag [7]
            irq_o,              // IRQ status [6]
            1'b0,               // Reserved [5]
            continuous_mode,    // Continuous mode [4]
            auto_clear,         // Auto clear [3]
            csr_relu_en,        // ReLU enabled [2]
            csr_done,           // Operation done [1]
            csr_busy            // Busy flag [0]
        };
    end
    
    // Main FSM
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            csr_busy <= 1'b0;
            csr_done <= 1'b0;
            mac_start <= 1'b0;
            cycle_counter <= 32'b0;
            operation_count <= 32'b0;
            error_flag <= 1'b0;
            error_code <= 8'b0;
            irq_o <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    mac_start <= 1'b0;
                    cycle_counter <= 32'b0;
                    
                    if (csr_kick) begin
                        // Validate dimensions
                        if (csr_dim_m == 0 || csr_dim_n == 0 || csr_dim_k == 0) begin
                            state <= ERROR;
                            error_flag <= 1'b1;
                            error_code <= 8'h01;  // Invalid dimensions
                        end else if (csr_dim_m > 256 || csr_dim_n > 256 || csr_dim_k > 256) begin
                            state <= ERROR;
                            error_flag <= 1'b1;
                            error_code <= 8'h02;  // Dimensions too large
                        end else begin
                            state <= INIT;
                            csr_busy <= 1'b1;
                            csr_done <= 1'b0;
                            error_flag <= 1'b0;
                            error_code <= 8'b0;
                        end
                    end
                end
                
                INIT: begin
                    // Initialize operation
                    state <= RUNNING;
                    mac_start <= 1'b1;
                end
                
                RUNNING: begin
                    mac_start <= 1'b0;
                    cycle_counter <= cycle_counter + 1;
                    
                    // Check for timeout (configurable)
                    if (cycle_counter > 32'hFFFF) begin
                        state <= ERROR;
                        error_flag <= 1'b1;
                        error_code <= 8'h03;  // Timeout
                    end else if (mac_done) begin
                        state <= WAIT_MAC;
                    end
                end
                
                WAIT_MAC: begin
                    // Wait for MAC array to complete
                    cycle_counter <= cycle_counter + 1;
                    if (mac_done) begin
                        state <= COMPLETE;
                        operation_count <= operation_count + 1;
                    end
                end
                
                COMPLETE: begin
                    csr_done <= 1'b1;
                    csr_busy <= 1'b0;
                    
                    // Generate interrupt if enabled
                    if (irq_enable) begin
                        irq_o <= 1'b1;
                    end
                    
                    // Auto-clear or continuous mode handling
                    if (auto_clear) begin
                        state <= IDLE;
                        csr_done <= 1'b0;
                    end else if (continuous_mode && csr_kick) begin
                        state <= INIT;
                        csr_busy <= 1'b1;
                        csr_done <= 1'b0;
                    end else begin
                        state <= IDLE;
                    end
                end
                
                ERROR: begin
                    csr_busy <= 1'b0;
                    csr_done <= 1'b0;
                    
                    // Generate error interrupt if enabled
                    if (irq_enable) begin
                        irq_o <= 1'b1;
                    end
                    
                    // Wait for kick to be cleared
                    if (!csr_kick) begin
                        state <= IDLE;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end
    
    // Interrupt clearing
    always @(posedge clk) begin
        if (rst) begin
            irq_o <= 1'b0;
        end else if (irq_o && !irq_enable) begin
            irq_o <= 1'b0;  // Clear interrupt if disabled
        end
    end
    
    // Performance counter
    reg [31:0] total_cycles;
    reg [31:0] active_cycles;
    
    always @(posedge clk) begin
        if (rst) begin
            total_cycles <= 32'b0;
            active_cycles <= 32'b0;
        end else begin
            total_cycles <= total_cycles + 1;
            if (csr_busy) begin
                active_cycles <= active_cycles + 1;
            end
        end
    end

endmodule
