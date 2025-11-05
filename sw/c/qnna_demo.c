/*
 * QNNA C Demo
 * Author: TechJoe96
 * Description: Demonstrates QNNA usage from C on Microwatt
 *
 * Compilation:
 *   Cross-compilation (PowerPC):
 *     powerpc64le-linux-gnu-gcc -O2 -o qnna_demo qnna_demo.c
 *
 *   Native compilation (if running on PowerPC):
 *     gcc -O2 -o qnna_demo qnna_demo.c
 *
 * For simulation/testing (without real hardware):
 *     gcc -O2 -DSIM_MODE -o qnna_demo qnna_demo.c
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#ifdef SIM_MODE
// Simulation mode - use memory-mapped array instead of real hardware
static uint32_t qnna_regs[256];  // 1KB register space
#define QNNA_MEM_BASE ((volatile uint32_t *)qnna_regs)
#else
// Real hardware - QNNA is memory-mapped at 0x80000000
#define QNNA_BASE 0x80000000
#define QNNA_MEM_BASE ((volatile uint32_t *)(QNNA_BASE))
#endif

// QNNA Register offsets
#define QNNA_CTRL   0x000
#define QNNA_STATUS 0x004
#define QNNA_DIM_M  0x008
#define QNNA_DIM_N  0x00C
#define QNNA_DIM_K  0x010
#define QNNA_KICK   0x020

// Status register bits (from qnna_csr.v: csr_status = {23'h0, csr_done, csr_busy, 7'h0})
#define STATUS_BUSY  (1 << 7)   // Bit 7
#define STATUS_DONE  (1 << 8)   // Bit 8
#define STATUS_ERROR (1 << 15)  // Bit 15

// Control register bits
#define CTRL_RELU_EN (1 << 0)
#define CTRL_IRQ_EN  (1 << 3)

// Helper macros for register access
#define QNNA_WRITE_REG(offset, value) \
    (QNNA_MEM_BASE[(offset) >> 2] = (value))

#define QNNA_READ_REG(offset) \
    (QNNA_MEM_BASE[(offset) >> 2])

// Utility functions
static inline uint64_t get_time_ms(void) {
#ifdef SIM_MODE
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000 + ts.tv_nsec / 1000000;
#else
    // On real hardware, use platform-specific timer
    // For now, return a simple counter
    static uint64_t counter = 0;
    return ++counter;
#endif
}

static inline void delay_ms(uint32_t ms) {
#ifdef SIM_MODE
    usleep(ms * 1000);
#else
    // On real hardware, use busy-wait or timer
    volatile uint32_t i;
    for (i = 0; i < ms * 1000; i++);
#endif
}

// QNNA Functions
void qnna_init(void) {
    printf("Initializing QNNA...\n");
    
#ifdef SIM_MODE
    // Clear all registers in simulation mode
    memset(qnna_regs, 0, sizeof(qnna_regs));
#endif
    
    // Reset QNNA by clearing CTRL register
    QNNA_WRITE_REG(QNNA_CTRL, 0);
    
    printf("✓ QNNA initialized\n");
}

void qnna_configure(uint16_t m, uint16_t n, uint16_t k, bool relu_en) {
    printf("\nConfiguring QNNA: M=%d, N=%d, K=%d, ReLU=%s\n",
           m, n, k, relu_en ? "enabled" : "disabled");
    
    // Write dimensions
    QNNA_WRITE_REG(QNNA_DIM_M, m);
    QNNA_WRITE_REG(QNNA_DIM_N, n);
    QNNA_WRITE_REG(QNNA_DIM_K, k);
    
    // Configure control register
    uint32_t ctrl = relu_en ? CTRL_RELU_EN : 0;
    QNNA_WRITE_REG(QNNA_CTRL, ctrl);
    
    printf("✓ Configuration complete\n");
}

void qnna_start(void) {
    printf("\nStarting computation...\n");
    QNNA_WRITE_REG(QNNA_KICK, 1);
    printf("✓ KICK register written\n");
}

bool qnna_wait_for_completion(uint32_t timeout_ms) {
    printf("\nWaiting for completion...\n");
    uint64_t start_time = get_time_ms();
    
    while (get_time_ms() - start_time < timeout_ms) {
        uint32_t status = QNNA_READ_REG(QNNA_STATUS);
        
        if (status & STATUS_DONE) {
            printf("✓ Computation complete!\n");
            return true;
        } else if (status & STATUS_ERROR) {
            printf("✗ Error detected!\n");
            return false;
        } else if (status & STATUS_BUSY) {
            printf("  Status: BUSY...\n");
        } else {
            printf("  Status: IDLE...\n");
        }
        
        delay_ms(100);
    }
    
    printf("⚠ Timeout waiting for completion\n");
    return false;
}

void qnna_get_status(uint32_t *status) {
    *status = QNNA_READ_REG(QNNA_STATUS);
}

void qnna_read_dimensions(uint16_t *m, uint16_t *n, uint16_t *k) {
    *m = (uint16_t)QNNA_READ_REG(QNNA_DIM_M);
    *n = (uint16_t)QNNA_READ_REG(QNNA_DIM_N);
    *k = (uint16_t)QNNA_READ_REG(QNNA_DIM_K);
}

// Test Functions
bool test_basic(void) {
    printf("\n");
    printf("==================================================\n");
    printf("Test 1: Basic QNNA Operations\n");
    printf("==================================================\n");
    
    qnna_init();
    
    // Configure
    qnna_configure(4, 4, 4, false);
    
    // Verify dimensions
    uint16_t dim_m, dim_n, dim_k;
    qnna_read_dimensions(&dim_m, &dim_n, &dim_k);
    
    printf("\nVerifying dimensions:\n");
    printf("  DIM_M = %d %s\n", dim_m, (dim_m == 4) ? "✓" : "✗");
    printf("  DIM_N = %d %s\n", dim_n, (dim_n == 4) ? "✓" : "✗");
    printf("  DIM_K = %d %s\n", dim_k, (dim_k == 4) ? "✓" : "✗");
    
    // Start computation
    qnna_start();
    
    // Check status
    uint32_t status;
    qnna_get_status(&status);
    printf("\nStatus after start:\n");
    printf("  BUSY:  %s\n", (status & STATUS_BUSY) ? "true" : "false");
    printf("  DONE:  %s\n", (status & STATUS_DONE) ? "true" : "false");
    printf("  ERROR: %s\n", (status & STATUS_ERROR) ? "true" : "false");
    
    // Wait for completion
    bool completed = qnna_wait_for_completion(500);
    
    printf("\n✓ Basic test completed\n");
    return completed;
}

bool test_relu(void) {
    printf("\n");
    printf("==================================================\n");
    printf("Test 2: ReLU Configuration\n");
    printf("==================================================\n");
    
    qnna_init();
    
    // Configure with ReLU enabled
    qnna_configure(4, 4, 4, true);
    
    // Check CTRL register
    uint32_t ctrl = QNNA_READ_REG(QNNA_CTRL);
    bool relu_en = (ctrl & CTRL_RELU_EN) != 0;
    
    printf("\nReLU enable: %s %s\n",
           relu_en ? "true" : "false",
           relu_en ? "✓" : "✗");
    
    printf("\n✓ ReLU test completed\n");
    return relu_en;
}

bool test_performance(void) {
    printf("\n");
    printf("==================================================\n");
    printf("Test 3: Performance Measurement\n");
    printf("==================================================\n");
    
    qnna_init();
    
    // Configure for 8x8 matrix
    qnna_configure(8, 8, 8, false);
    
    // Measure computation time
    printf("\nMeasuring computation time...\n");
    uint64_t start_time = get_time_ms();
    qnna_start();
    
    // Wait for completion
    bool completed = qnna_wait_for_completion(2000);
    uint64_t elapsed = get_time_ms() - start_time;
    
    if (completed) {
        printf("\n✓ Computation completed in %" PRIu64 " ms\n", elapsed);
        
        // Calculate performance metrics
        uint64_t ops = 2ULL * 8 * 8 * 8;  // MAC operations
        uint64_t throughput = (elapsed > 0) ? (ops * 1000 / elapsed) : 0;
        
        printf("  Operations: %" PRIu64 "\n", ops);
        printf("  Throughput: %" PRIu64 " ops/sec\n", throughput);
    } else {
        printf("\n⚠ Computation did not complete within timeout\n");
    }
    
    printf("\n✓ Performance test completed\n");
    return completed;
}

bool test_neural_network(void) {
    printf("\n");
    printf("==================================================\n");
    printf("Test 4: Neural Network Layer\n");
    printf("==================================================\n");
    
    qnna_init();
    
    // Simulate a 4x4 neural network layer
    // Input: 4 features, Output: 4 neurons, Weights: 4x4
    printf("\nSimulating 4x4 neural network layer...\n");
    printf("  Input: 4 features\n");
    printf("  Output: 4 neurons\n");
    printf("  Weights: 4x4 matrix\n");
    
    // Configure
    qnna_configure(4, 4, 4, true);
    
    // Start computation
    qnna_start();
    
    // Wait for completion
    bool completed = qnna_wait_for_completion(1000);
    
    printf("\n✓ Neural network test completed!\n");
    return completed;
}

int main(void) {
    printf("==================================================\n");
    printf("QNNA C Demo\n");
    printf("==================================================\n");
    
#ifdef SIM_MODE
    printf("\nRunning in SIMULATION mode\n");
    printf("(No real hardware access)\n");
#else
    printf("\nRunning in HARDWARE mode\n");
    printf("(Accessing QNNA at 0x%08X)\n", QNNA_BASE);
#endif
    
    printf("==================================================\n");
    
    // Run tests
    struct {
        const char *name;
        bool (*func)(void);
    } tests[] = {
        {"Basic", test_basic},
        {"ReLU", test_relu},
        {"Performance", test_performance},
        {"Neural Network", test_neural_network}
    };
    
    int passed = 0;
    int failed = 0;
    
    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        printf("\n");
        if (tests[i].func()) {
            passed++;
            printf("✓ %s test passed\n", tests[i].name);
        } else {
            failed++;
            printf("✗ %s test failed\n", tests[i].name);
        }
    }
    
    printf("\n");
    printf("==================================================\n");
    printf("Test Results: %d passed, %d failed\n", passed, failed);
    printf("==================================================\n");
    
    if (failed == 0) {
        printf("✓ ALL TESTS PASSED!\n");
        return 0;
    } else {
        printf("✗ SOME TESTS FAILED\n");
        return 1;
    }
}

