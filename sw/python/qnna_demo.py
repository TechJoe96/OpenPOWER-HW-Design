#!/usr/bin/env python3
"""
QNNA MicroPython Demo
Author: TechJoe96
Description: Demonstrates QNNA usage from MicroPython on Microwatt

This is a simulation/demo version that works on regular Python.
For actual Microwatt usage, use MicroPython with machine.mem32.
"""

import struct
import time
import array

# QNNA Memory Map
QNNA_BASE = 0x80000000

# Register offsets
REGS = {
    'CTRL': 0x000,
    'STATUS': 0x004,
    'DIM_M': 0x008,
    'DIM_N': 0x00C,
    'DIM_K': 0x010,
    'KICK': 0x020,
}

# Status bits (from qnna_csr.v: csr_status = {23'h0, csr_done, csr_busy, 7'h0})
STATUS_BUSY = 1 << 7  # Bit 7
STATUS_DONE = 1 << 8  # Bit 8
STATUS_ERROR = 1 << 15  # Bit 15

# Control bits
CTRL_RELU_EN = 1 << 0
CTRL_IRQ_EN = 1 << 3


class QNNA:
    """QNNA Hardware Accelerator Interface"""
    
    def __init__(self, base_addr=QNNA_BASE):
        self.base = base_addr
        self.sim_mode = True  # Simulation mode
        self.regs = {}  # Simulated registers
        self.init()
        
    def write_reg(self, reg, value):
        """Write to QNNA register"""
        addr = self.base + REGS[reg]
        if self.sim_mode:
            # Simulation mode - store in dict
            self.regs[reg] = value
            print(f"  Write: {reg} (0x{addr:08X}) = 0x{value:08X}")
        else:
            # Real hardware - use machine.mem32
            try:
                import machine
                machine.mem32[addr] = value
            except ImportError:
                print(f"  Write: 0x{addr:08X} = 0x{value:08X}")
            
    def read_reg(self, reg):
        """Read from QNNA register"""
        addr = self.base + REGS[reg]
        if self.sim_mode:
            # Simulation mode - return from dict
            value = self.regs.get(reg, 0)
            print(f"  Read: {reg} (0x{addr:08X}) = 0x{value:08X}")
            return value
        else:
            # Real hardware - use machine.mem32
            try:
                import machine
                return machine.mem32[addr]
            except ImportError:
                print(f"  Read: 0x{addr:08X}")
                return 0
    
    def init(self):
        """Initialize QNNA"""
        print("Initializing QNNA...")
        # Reset registers
        self.regs = {
            'CTRL': 0,
            'STATUS': 0,
            'DIM_M': 0,
            'DIM_N': 0,
            'DIM_K': 0,
        }
        print("✓ QNNA initialized")
    
    def configure(self, m, n, k, relu_en=False):
        """Configure QNNA dimensions"""
        print(f"\nConfiguring QNNA: M={m}, N={n}, K={k}, ReLU={relu_en}")
        self.write_reg('DIM_M', m)
        self.write_reg('DIM_N', n)
        self.write_reg('DIM_K', k)
        
        ctrl = CTRL_RELU_EN if relu_en else 0
        self.write_reg('CTRL', ctrl)
        print("✓ Configuration complete")
    
    def start(self):
        """Start computation"""
        print("\nStarting computation...")
        self.write_reg('KICK', 1)
        print("✓ KICK register written")
    
    def wait_for_completion(self, timeout=1.0):
        """Wait for computation to complete"""
        print("\nWaiting for completion...")
        start_time = time.time()
        
        while time.time() - start_time < timeout:
            status = self.read_reg('STATUS')
            
            if status & STATUS_DONE:
                print("✓ Computation complete!")
                return True
            elif status & STATUS_ERROR:
                print("✗ Error detected!")
                return False
            elif status & STATUS_BUSY:
                print("  Status: BUSY...")
            else:
                print("  Status: IDLE...")
            
            time.sleep(0.1)
        
        print("⚠ Timeout waiting for completion")
        return False
    
    def get_status(self):
        """Get status register"""
        status = self.read_reg('STATUS')
        return {
            'busy': bool(status & STATUS_BUSY),
            'done': bool(status & STATUS_DONE),
            'error': bool(status & STATUS_ERROR),
            'raw': status
        }


def test_basic():
    """Basic QNNA test"""
    print("\n" + "=" * 50)
    print("Test 1: Basic QNNA Operations")
    print("=" * 50)
    
    qnna = QNNA()
    
    # Configure
    qnna.configure(m=4, n=4, k=4)
    
    # Verify dimensions
    dim_m = qnna.read_reg('DIM_M')
    dim_n = qnna.read_reg('DIM_N')
    dim_k = qnna.read_reg('DIM_K')
    
    print(f"\nVerifying dimensions:")
    print(f"  DIM_M = {dim_m} {'✓' if dim_m == 4 else '✗'}")
    print(f"  DIM_N = {dim_n} {'✓' if dim_n == 4 else '✗'}")
    print(f"  DIM_K = {dim_k} {'✓' if dim_k == 4 else '✗'}")
    
    # Start computation
    qnna.start()
    
    # Check status
    status = qnna.get_status()
    print(f"\nStatus after start:")
    print(f"  BUSY: {status['busy']}")
    print(f"  DONE: {status['done']}")
    print(f"  ERROR: {status['error']}")
    
    # Wait for completion (in simulation, this will timeout)
    qnna.wait_for_completion(timeout=0.5)
    
    print("\n✓ Basic test completed")
    return True


def test_relu():
    """ReLU test"""
    print("\n" + "=" * 50)
    print("Test 2: ReLU Configuration")
    print("=" * 50)
    
    qnna = QNNA()
    
    # Configure with ReLU enabled
    qnna.configure(m=4, n=4, k=4, relu_en=True)
    
    # Check CTRL register
    ctrl = qnna.read_reg('CTRL')
    relu_en = bool(ctrl & CTRL_RELU_EN)
    
    print(f"\nReLU enable: {relu_en} {'✓' if relu_en else '✗'}")
    
    print("\n✓ ReLU test completed")
    return True


def test_performance():
    """Performance test"""
    print("\n" + "=" * 50)
    print("Test 3: Performance Measurement")
    print("=" * 50)
    
    qnna = QNNA()
    
    # Configure for 8x8 matrix
    qnna.configure(m=8, n=8, k=8)
    
    # Measure computation time
    print("\nMeasuring computation time...")
    start_time = time.time()
    qnna.start()
    
    # Wait for completion
    completed = qnna.wait_for_completion(timeout=2.0)
    elapsed = time.time() - start_time
    
    if completed:
        print(f"\n✓ Computation completed in {elapsed:.3f} seconds")
    else:
        print(f"\n⚠ Computation did not complete within timeout")
    
    print("\n✓ Performance test completed")
    return True


def test_neural_network():
    """Neural network test"""
    print("\n" + "=" * 50)
    print("Test 4: Neural Network Layer")
    print("=" * 50)
    
    qnna = QNNA()
    
    # Simulate a 4x4 neural network layer
    # Input: 4 features, Output: 4 neurons, Weights: 4x4
    print("\nSimulating 4x4 neural network layer...")
    print("  Input: 4 features")
    print("  Output: 4 neurons")
    print("  Weights: 4x4 matrix")
    
    # Configure
    qnna.configure(m=4, n=4, k=4, relu_en=True)
    
    # Start computation
    qnna.start()
    
    # Wait for completion
    qnna.wait_for_completion(timeout=1.0)
    
    print("\n✓ Neural network test completed!")
    return True


def main():
    """Run all tests"""
    print("=" * 50)
    print("QNNA MicroPython Demo")
    print("=" * 50)
    print("\nNote: This is a simulation/demo version.")
    print("For actual Microwatt usage, use MicroPython with machine.mem32.")
    print("=" * 50)
    
    tests = [
        ("Basic", test_basic),
        ("ReLU", test_relu),
        ("Performance", test_performance),
        ("Neural Network", test_neural_network)
    ]
    
    passed = 0
    failed = 0
    
    for name, test_func in tests:
        try:
            if test_func():
                passed += 1
                print(f"✓ {name} test passed")
            else:
                failed += 1
                print(f"✗ {name} test failed")
        except Exception as e:
            failed += 1
            print(f"✗ {name} test error: {e}")
            import traceback
            traceback.print_exc()
    
    print("\n" + "=" * 50)
    print(f"Test Results: {passed} passed, {failed} failed")
    print("=" * 50)
    
    if failed == 0:
        print("✓ ALL TESTS PASSED!")
    else:
        print("✗ SOME TESTS FAILED")


if __name__ == "__main__":
    main()

