// Verilator Testbench for QNNA
// Author: TechJoe96
// Description: C++ testbench for Verilator simulation of QNNA with Microwatt

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmicrowatt_qnna_wrapper.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <functional>
#include <algorithm>

#define RESET_CYCLES 10
#define MAX_SIM_CYCLES 1000000

// Memory map
#define MEMORY_BASE 0x00000000
#define QNNA_BASE   0x80000000
#define UART_BASE   0xC0000000

// QNNA registers
#define QNNA_CTRL       (QNNA_BASE + 0x000)
#define QNNA_STATUS     (QNNA_BASE + 0x004)
#define QNNA_DIM_M      (QNNA_BASE + 0x008)
#define QNNA_DIM_N      (QNNA_BASE + 0x00C)
#define QNNA_DIM_K      (QNNA_BASE + 0x010)
#define QNNA_KICK       (QNNA_BASE + 0x020)

// Test firmware (PowerPC instructions)
const uint32_t test_firmware[] = {
    // Simple QNNA test program
    0x3C600000,  // lis  r3, 0x8000      # Load QNNA base high
    0x60638000,  // ori  r3, r3, 0x0000  # Load QNNA base low
    0x38800004,  // li   r4, 4           # Matrix dimension
    0x90830008,  // stw  r4, 0x08(r3)    # Store to DIM_M
    0x9083000C,  // stw  r4, 0x0C(r3)    # Store to DIM_N
    0x90830010,  // stw  r4, 0x10(r3)    # Store to DIM_K
    0x38800001,  // li   r4, 1           # Kick value
    0x90830020,  // stw  r4, 0x20(r3)    # Start operation
    // Wait loop
    0x80830004,  // lwz  r4, 0x04(r3)    # Read STATUS
    0x70840002,  // andi. r4, r4, 0x02   # Check DONE bit
    0x4182FFF8,  // beq  -8              # Loop if not done
    // Done
    0x60000000,  // nop
    0x4BFFFFFC   // b    -4              # Infinite loop
};

class QNNATestbench {
private:
    Vmicrowatt_qnna_wrapper* dut;
    VerilatedVcdC* tfp;
    vluint64_t sim_time;
    bool trace_enabled;
    
public:
    QNNATestbench(bool enable_trace = false) : sim_time(0), trace_enabled(enable_trace) {
        // Create DUT
        dut = new Vmicrowatt_qnna_wrapper;
        
        // Initialize trace
        if (trace_enabled) {
            Verilated::traceEverOn(true);
            tfp = new VerilatedVcdC;
            dut->trace(tfp, 99);
            tfp->open("qnna_sim.vcd");
        }
        
        // Initialize signals
        dut->clk = 0;
        dut->rst = 1;
        dut->uart_rx = 1;
    }
    
    ~QNNATestbench() {
        if (trace_enabled && tfp) {
            tfp->close();
            delete tfp;
        }
        delete dut;
    }
    
    void tick() {
        // Toggle clock
        dut->clk = 0;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(sim_time++);
    }
    
    void reset() {
        std::cout << "Resetting DUT..." << std::endl;
        dut->rst = 1;
        for (int i = 0; i < RESET_CYCLES; i++) {
            tick();
        }
        dut->rst = 0;
        std::cout << "Reset complete" << std::endl;
    }
    
    bool load_firmware(const uint32_t* firmware, size_t size) {
        std::cout << "Loading firmware (" << size << " words)..." << std::endl;
        
        // In real implementation, would load via Wishbone or backdoor
        // For now, this is a placeholder
        
        return true;
    }
    
    void run_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            tick();
            
            // Check for debug output
            if (dut->debug_valid) {
                std::cout << "PC: 0x" << std::hex << std::setfill('0') 
                         << std::setw(16) << dut->debug_pc << std::dec << std::endl;
            }
        }
    }
    
    bool test_basic_matmul() {
        std::cout << "\n=== Basic Matrix Multiplication Test ===" << std::endl;
        
        reset();
        
        // Load test firmware
        if (!load_firmware(test_firmware, sizeof(test_firmware)/sizeof(uint32_t))) {
            return false;
        }
        
        // Run simulation
        int cycles = 0;
        bool done = false;
        
        while (cycles < 10000 && !done) {
            tick();
            cycles++;
            
            // Check if QNNA operation completed
            if (dut->qnna_irq) {
                std::cout << "QNNA interrupt triggered at cycle " << cycles << std::endl;
                done = true;
            }
        }
        
        if (done) {
            std::cout << "Test completed successfully in " << cycles << " cycles" << std::endl;
            return true;
        } else {
            std::cout << "Test timeout after " << cycles << " cycles" << std::endl;
            return false;
        }
    }
    
    bool test_performance() {
        std::cout << "\n=== Performance Test ===" << std::endl;
        
        reset();
        
        // Test different matrix sizes
        int sizes[] = {4, 8, 16};
        
        for (int size : sizes) {
            std::cout << "Testing " << size << "x" << size << " matrix..." << std::endl;
            
            // Configure QNNA (would be done through CPU in real test)
            // For now, just run cycles
            run_cycles(1000);
            
            // Calculate theoretical performance
            int ops = 2 * size * size * size;
            std::cout << "  Operations: " << ops << std::endl;
        }
        
        return true;
    }
    
    void print_statistics() {
        std::cout << "\n=== Simulation Statistics ===" << std::endl;
        std::cout << "Total cycles: " << sim_time/2 << std::endl;
        
        // Note: Performance counters may not be implemented yet
        // if (dut->qnna_cycles > 0) {
        //     std::cout << "QNNA active cycles: " << dut->qnna_cycles << std::endl;
        //     std::cout << "QNNA operations: " << dut->qnna_operations << std::endl;
        // }
    }
};

// Helper function to run a test
bool run_test(const std::string& name, std::function<bool(QNNATestbench*)> test_func, 
              QNNATestbench* tb) {
    std::cout << "\nRunning test: " << name << std::endl;
    std::cout << std::string(50, '-') << std::endl;
    
    bool result = test_func(tb);
    
    if (result) {
        std::cout << "✓ " << name << " PASSED" << std::endl;
    } else {
        std::cout << "✗ " << name << " FAILED" << std::endl;
    }
    
    return result;
}

int main(int argc, char** argv) {
    // Parse command line arguments
    Verilated::commandArgs(argc, argv);
    
    bool enable_trace = false;
    bool run_all_tests = true;
    std::vector<std::string> selected_tests;
    
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "--trace") {
            enable_trace = true;
        } else if (std::string(argv[i]) == "--test") {
            if (i + 1 < argc) {
                selected_tests.push_back(argv[++i]);
                run_all_tests = false;
            }
        }
    }
    
    std::cout << "========================================" << std::endl;
    std::cout << "    QNNA + Microwatt Testbench         " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Trace enabled: " << (enable_trace ? "Yes" : "No") << std::endl;
    
    // Create testbench
    QNNATestbench tb(enable_trace);
    
    // Run tests
    int passed = 0;
    int failed = 0;
    
    // Define test suite
    std::vector<std::pair<std::string, std::function<bool(QNNATestbench*)>>> tests = {
        {"Basic MatMul", [](QNNATestbench* tb) { return tb->test_basic_matmul(); }},
        {"Performance", [](QNNATestbench* tb) { return tb->test_performance(); }}
    };
    
    // Run selected tests
    for (const auto& test : tests) {
        if (run_all_tests || 
            std::find(selected_tests.begin(), selected_tests.end(), test.first) != selected_tests.end()) {
            if (run_test(test.first, test.second, &tb)) {
                passed++;
            } else {
                failed++;
            }
        }
    }
    
    // Print summary
    tb.print_statistics();
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "Test Summary: " << passed << " passed, " << failed << " failed" << std::endl;
    std::cout << "========================================" << std::endl;
    
    return failed > 0 ? 1 : 0;
}

// Matrix multiplication reference implementation
void reference_matmul_int8(const int8_t* A, const int8_t* B, int32_t* C, 
                           int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int32_t sum = 0;
            for (int k = 0; k < K; k++) {
                sum += (int32_t)A[i * K + k] * (int32_t)B[k * N + j];
            }
            C[i * N + j] = sum;
        }
    }
}

// Test vector generation
void generate_test_matrices(int8_t* A, int8_t* B, int M, int N, int K) {
    // Generate reproducible test patterns
    for (int i = 0; i < M * K; i++) {
        A[i] = (i % 256) - 128;
    }
    
    for (int i = 0; i < K * N; i++) {
        B[i] = ((i * 3) % 256) - 128;
    }
}

// Result comparison with tolerance
bool compare_results(const int32_t* expected, const int32_t* actual, 
                    int size, int tolerance = 0) {
    for (int i = 0; i < size; i++) {
        int32_t diff = abs(expected[i] - actual[i]);
        if (diff > tolerance) {
            std::cout << "Mismatch at index " << i 
                     << ": expected=" << expected[i] 
                     << ", actual=" << actual[i] << std::endl;
            return false;
        }
    }
    return true;
}
