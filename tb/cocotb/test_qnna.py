#!/usr/bin/env python3
"""
QNNA Cocotb Testbench
Author: TechJoe96
Description: Comprehensive testbench for QNNA accelerator
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles
from cocotb.result import TestFailure
import numpy as np
import random

# Test constants
CLK_PERIOD = 10  # ns
BASE_ADDR = 0x80000000

# Register offsets
CTRL_REG = 0x000
STATUS_REG = 0x004
DIM_M_REG = 0x008
DIM_N_REG = 0x00C
DIM_K_REG = 0x010
INPUT_ADDR = 0x014
WEIGHT_ADDR = 0x018
OUTPUT_ADDR = 0x01C
KICK_REG = 0x020
INT_EN_REG = 0x024
INT_STATUS = 0x028

class QNNADriver:
    """Driver class for QNNA peripheral"""
    
    def __init__(self, dut):
        self.dut = dut
        
    async def reset(self):
        """Reset the DUT"""
        self.dut.wb_rst_i.value = 1
        await ClockCycles(self.dut.wb_clk_i, 5)
        self.dut.wb_rst_i.value = 0
        await ClockCycles(self.dut.wb_clk_i, 5)
        
    async def write_reg(self, addr, data):
        """Write to a register via Wishbone"""
        self.dut.wb_cyc_i.value = 1
        self.dut.wb_stb_i.value = 1
        self.dut.wb_we_i.value = 1
        self.dut.wb_adr_i.value = BASE_ADDR + addr
        self.dut.wb_dat_i.value = data
        self.dut.wb_sel_i.value = 0xF
        
        await RisingEdge(self.dut.wb_clk_i)
        while not self.dut.wb_ack_o.value:
            await RisingEdge(self.dut.wb_clk_i)
            
        self.dut.wb_cyc_i.value = 0
        self.dut.wb_stb_i.value = 0
        self.dut.wb_we_i.value = 0
        await RisingEdge(self.dut.wb_clk_i)
        
    async def read_reg(self, addr):
        """Read from a register via Wishbone"""
        self.dut.wb_cyc_i.value = 1
        self.dut.wb_stb_i.value = 1
        self.dut.wb_we_i.value = 0
        self.dut.wb_adr_i.value = BASE_ADDR + addr
        self.dut.wb_sel_i.value = 0xF
        
        await RisingEdge(self.dut.wb_clk_i)
        while not self.dut.wb_ack_o.value:
            await RisingEdge(self.dut.wb_clk_i)
            
        data = self.dut.wb_dat_o.value
        
        self.dut.wb_cyc_i.value = 0
        self.dut.wb_stb_i.value = 0
        await RisingEdge(self.dut.wb_clk_i)
        
        return data
        
    async def load_matrix(self, base_addr, matrix):
        """Load a matrix into buffer memory"""
        flat_matrix = matrix.flatten()
        for i, val in enumerate(flat_matrix):
            addr = base_addr + (i * 4)
            await self.write_reg(addr, int(val))
            
    async def read_matrix(self, base_addr, shape):
        """Read a matrix from buffer memory"""
        size = np.prod(shape)
        data = []
        for i in range(size):
            addr = base_addr + (i * 4)
            val = await self.read_reg(addr)
            data.append(val)
        return np.array(data).reshape(shape)
        
    async def wait_done(self, timeout=1000):
        """Wait for operation to complete"""
        cycles = 0
        while cycles < timeout:
            status = await self.read_reg(STATUS_REG)
            if status & 0x2:  # Check done bit
                return True
            await ClockCycles(self.dut.wb_clk_i, 1)
            cycles += 1
        return False

@cocotb.test()
async def test_basic_multiply(dut):
    """Test basic matrix multiplication"""
    
    # Create clock
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    # Initialize driver
    driver = QNNADriver(dut)
    
    # Reset
    await driver.reset()
    
    # Test 4x4 matrix multiplication
    m, n, k = 4, 4, 4
    
    # Create test matrices (INT8 range: -128 to 127)
    np.random.seed(42)
    input_matrix = np.random.randint(-128, 128, (m, k), dtype=np.int8)
    weight_matrix = np.random.randint(-128, 128, (k, n), dtype=np.int8)
    
    # Expected result
    expected = np.matmul(input_matrix.astype(np.int32), 
                        weight_matrix.astype(np.int32))
    
    # Load matrices into buffers
    await driver.load_matrix(0x100, input_matrix)
    await driver.load_matrix(0x500, weight_matrix)
    
    # Configure dimensions
    await driver.write_reg(DIM_M_REG, m)
    await driver.write_reg(DIM_N_REG, n)
    await driver.write_reg(DIM_K_REG, k)
    
    # Set buffer addresses
    await driver.write_reg(INPUT_ADDR, 0)
    await driver.write_reg(WEIGHT_ADDR, 0)
    await driver.write_reg(OUTPUT_ADDR, 0)
    
    # Enable operation without ReLU
    await driver.write_reg(CTRL_REG, 0x00)
    
    # Kick off computation
    await driver.write_reg(KICK_REG, 1)
    
    # Wait for completion
    done = await driver.wait_done()
    assert done, "Operation timed out"
    
    # Read results
    result = await driver.read_matrix(0x900, (m, n))
    
    # Compare results (with tolerance for rounding)
    np.testing.assert_array_almost_equal(result, expected, decimal=0)
    
    dut._log.info("Basic multiply test passed!")

@cocotb.test()
async def test_relu_activation(dut):
    """Test ReLU activation function"""
    
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    driver = QNNADriver(dut)
    await driver.reset()
    
    # Create test matrices with negative values
    m, n, k = 4, 4, 4
    input_matrix = np.array([[-1, 2, -3, 4]] * 4, dtype=np.int8)
    weight_matrix = np.eye(4, dtype=np.int8) * 2
    
    # Load matrices
    await driver.load_matrix(0x100, input_matrix)
    await driver.load_matrix(0x500, weight_matrix)
    
    # Configure with ReLU enabled
    await driver.write_reg(DIM_M_REG, m)
    await driver.write_reg(DIM_N_REG, n)
    await driver.write_reg(DIM_K_REG, k)
    await driver.write_reg(CTRL_REG, 0x01)  # Enable ReLU
    
    # Run computation
    await driver.write_reg(KICK_REG, 1)
    done = await driver.wait_done()
    assert done, "ReLU operation timed out"
    
    # Read and verify results
    result = await driver.read_matrix(0x900, (m, n))
    
    # Check that all negative values are zero
    assert np.all(result >= 0), "ReLU failed to zero negative values"
    
    dut._log.info("ReLU test passed!")

@cocotb.test()
async def test_interrupt_generation(dut):
    """Test interrupt generation on completion"""
    
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    driver = QNNADriver(dut)
    await driver.reset()
    
    # Enable interrupts
    await driver.write_reg(INT_EN_REG, 0x01)
    
    # Configure small operation
    await driver.write_reg(DIM_M_REG, 2)
    await driver.write_reg(DIM_N_REG, 2)
    await driver.write_reg(DIM_K_REG, 2)
    
    # Check interrupt is initially low
    assert dut.irq_o.value == 0, "Interrupt should be low initially"
    
    # Start operation
    await driver.write_reg(KICK_REG, 1)
    
    # Wait for interrupt
    timeout = 100
    cycles = 0
    while cycles < timeout:
        if dut.irq_o.value == 1:
            break
        await ClockCycles(dut.wb_clk_i, 1)
        cycles += 1
        
    assert dut.irq_o.value == 1, "Interrupt was not generated"
    
    # Clear interrupt by reading status
    status = await driver.read_reg(INT_STATUS)
    await driver.write_reg(INT_STATUS, status)
    
    dut._log.info("Interrupt test passed!")

@cocotb.test()
async def test_continuous_mode(dut):
    """Test continuous operation mode"""
    
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    driver = QNNADriver(dut)
    await driver.reset()
    
    # Enable continuous mode
    await driver.write_reg(CTRL_REG, 0x04)  # Set continuous mode bit
    
    # Configure dimensions
    await driver.write_reg(DIM_M_REG, 2)
    await driver.write_reg(DIM_N_REG, 2)
    await driver.write_reg(DIM_K_REG, 2)
    
    # Run multiple operations
    for i in range(3):
        await driver.write_reg(KICK_REG, 1)
        done = await driver.wait_done()
        assert done, f"Operation {i} failed in continuous mode"
        dut._log.info(f"Continuous operation {i} completed")
        
    dut._log.info("Continuous mode test passed!")

@cocotb.test()
async def test_error_handling(dut):
    """Test error conditions and handling"""
    
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    driver = QNNADriver(dut)
    await driver.reset()
    
    # Test invalid dimensions (zero)
    await driver.write_reg(DIM_M_REG, 0)
    await driver.write_reg(DIM_N_REG, 4)
    await driver.write_reg(DIM_K_REG, 4)
    
    # Try to start operation
    await driver.write_reg(KICK_REG, 1)
    await ClockCycles(dut.wb_clk_i, 10)
    
    # Check for error in status
    status = await driver.read_reg(STATUS_REG)
    error_flag = (status >> 7) & 0x1
    assert error_flag == 1, "Error flag not set for invalid dimensions"
    
    dut._log.info("Error handling test passed!")

@cocotb.test()
async def test_performance(dut):
    """Measure performance metrics"""
    
    clock = Clock(dut.wb_clk_i, CLK_PERIOD, units="ns")
    cocotb.start_soon(clock.start())
    
    driver = QNNADriver(dut)
    await driver.reset()
    
    # Test different matrix sizes
    sizes = [(2, 2, 2), (4, 4, 4), (4, 4, 8)]
    
    for m, n, k in sizes:
        # Configure
        await driver.write_reg(DIM_M_REG, m)
        await driver.write_reg(DIM_N_REG, n)
        await driver.write_reg(DIM_K_REG, k)
        
        # Measure cycles
        start_time = cocotb.utils.get_sim_time('ns')
        await driver.write_reg(KICK_REG, 1)
        done = await driver.wait_done()
        end_time = cocotb.utils.get_sim_time('ns')
        
        if done:
            cycles = (end_time - start_time) / CLK_PERIOD
            ops = 2 * m * n * k  # MAC operations
            throughput = ops / cycles
            dut._log.info(f"Size {m}x{n}x{k}: {cycles} cycles, {throughput:.2f} ops/cycle")
    
    dut._log.info("Performance test completed!")

# Run all tests
if __name__ == "__main__":
    import sys
    sys.exit(cocotb.main())
