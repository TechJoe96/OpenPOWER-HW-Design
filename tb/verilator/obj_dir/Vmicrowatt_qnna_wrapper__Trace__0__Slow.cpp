// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmicrowatt_qnna_wrapper__Syms.h"


VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_init_sub__TOP__0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_init_sub__TOP__0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+179,0,"debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+181,0,"debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+182,0,"dbg_pc_internal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+184,0,"dbg_valid_internal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"ext_mem_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"ext_mem_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"ext_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"ext_mem_adr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"ext_mem_dat_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"ext_mem_dat_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"ext_mem_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"qnna_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"qnna_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"qnna_operations",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("microwatt_qnna_wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"RAM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"RESET_ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"MAC_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+179,0,"debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+181,0,"debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+182,0,"dbg_pc_internal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+184,0,"dbg_valid_internal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"ext_mem_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"ext_mem_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"ext_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"ext_mem_adr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"ext_mem_dat_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"ext_mem_dat_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"ext_mem_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"qnna_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"qnna_cycles",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"qnna_operations",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"wb_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"wb_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"wb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wb_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wb_dat_m2s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"wb_dat_s2m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"wb_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"wb_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wb_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"mem_wb_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"mem_wb_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"mem_wb_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"mem_wb_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"qnna_wb_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"qnna_wb_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"qnna_wb_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"qnna_wb_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"uart_wb_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"uart_wb_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"uart_wb_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"uart_wb_dat_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"MEMORY_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"MEMORY_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"QNNA_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"QNNA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"UART_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"UART_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"wb_cyc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"wb_stb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"wb_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wb_adr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"wb_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"wb_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"wb_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wb_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+182,0,"dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+184,0,"dbg_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"ext_irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("main_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("qnna_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"MAC_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wb_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"csr_kick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"csr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"csr_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"csr_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"csr_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"csr_dim_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"csr_dim_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"csr_dim_k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"csr_relu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mac_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"mac_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("input_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+40,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+44,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+48,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+60,0,"input_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"weight_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"output_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"input_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"weight_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"output_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("weight_buffer_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"csr_kick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"csr_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"csr_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"csr_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"csr_status",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"csr_dim_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"csr_dim_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"csr_dim_k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"csr_relu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mac_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"mac_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+215,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"RUNNING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+217,0,"WAIT_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"COMPLETE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+219,0,"ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"operation_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"error_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+84,0,"auto_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"continuous_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"total_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"active_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_input_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"NUM_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+223,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+211,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("rd_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+224,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mac_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"MAC_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"dim_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"dim_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"dim_k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("input_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+40,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+44,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+48,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+33,0,"relu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("accumulator", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+90,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+94,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+98,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+102,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("input_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weight_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+110,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+114,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+118,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+122,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+123,0,"computing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("horizontal_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+124,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+128,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+132,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+136,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vertical_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+140,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+144,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+148,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+152,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+229,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+230,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"COMPUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+232,0,"DRAIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+156,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"load_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+158,0,"compute_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"drain_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_output_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"NUM_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+161,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("rd_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+162+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+233,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_weight_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"NUM_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+223,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+212,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("rd_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+236,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wishbone", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+175,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"wb_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"csr_kick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"csr_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"csr_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"csr_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"csr_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"csr_dim_m",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"csr_dim_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"csr_dim_k",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"csr_relu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"input_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"weight_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"output_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"output_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"input_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"weight_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"output_wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"CTRL_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+238,0,"STATUS_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+239,0,"DIM_M_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+240,0,"DIM_N_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+241,0,"DIM_K_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+242,0,"INPUT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+243,0,"WEIGHT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+244,0,"OUTPUT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+245,0,"KICK_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+246,0,"INT_EN_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+247,0,"INT_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"INPUT_BUF_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+249,0,"INPUT_BUF_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+250,0,"WEIGHT_BUF_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+251,0,"WEIGHT_BUF_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+252,0,"OUTPUT_BUF_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+253,0,"OUTPUT_BUF_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+167,0,"int_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"int_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"wb_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("uart_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+173,0,"tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wb_intercon", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"m_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"m_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"m_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"m_adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"m_dat_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"m_dat_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"m_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"m_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"m_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"m_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"s0_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"s0_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"s1_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"s1_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"s2_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s2_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s0_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s1_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s2_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"s0_adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"s1_adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"s2_adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"s0_dat_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"s1_dat_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"s2_dat_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"s0_dat_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"s1_dat_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"s2_dat_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"s0_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"s1_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"s2_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"s0_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s1_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s2_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"MEMORY_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"MEMORY_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"QNNA_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"QNNA_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"UART_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"UART_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"slave_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_init_top(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_init_top\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmicrowatt_qnna_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmicrowatt_qnna_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmicrowatt_qnna_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_register(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_register\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmicrowatt_qnna_wrapper___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmicrowatt_qnna_wrapper___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmicrowatt_qnna_wrapper___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmicrowatt_qnna_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_const_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_const_0\n"); );
    // Init
    Vmicrowatt_qnna_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmicrowatt_qnna_wrapper___024root*>(voidSelf);
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmicrowatt_qnna_wrapper___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_const_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_const_0_sub_0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+197,(0x4000U),32);
    bufp->fullIData(oldp+198,(0U),32);
    bufp->fullIData(oldp+199,(4U),32);
    bufp->fullIData(oldp+200,(0x100U),32);
    bufp->fullCData(oldp+201,(0xfU),4);
    bufp->fullBit(oldp+202,(0U));
    bufp->fullIData(oldp+203,(0x10000U),32);
    bufp->fullIData(oldp+204,(0x80000000U),32);
    bufp->fullIData(oldp+205,(0x1000U),32);
    bufp->fullIData(oldp+206,(0xc0000000U),32);
    bufp->fullIData(oldp+207,(0x100U),32);
    bufp->fullIData(oldp+208,(0x1000U),32);
    bufp->fullIData(oldp+209,(0xcU),32);
    bufp->fullIData(oldp+210,(0x20U),32);
    bufp->fullBit(oldp+211,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_rd_en));
    bufp->fullBit(oldp+212,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_rd_en));
    bufp->fullBit(oldp+213,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_wr_en));
    bufp->fullCData(oldp+214,(0U),3);
    bufp->fullCData(oldp+215,(1U),3);
    bufp->fullCData(oldp+216,(2U),3);
    bufp->fullCData(oldp+217,(3U),3);
    bufp->fullCData(oldp+218,(4U),3);
    bufp->fullCData(oldp+219,(5U),3);
    bufp->fullIData(oldp+220,(8U),32);
    bufp->fullIData(oldp+221,(0xaU),32);
    bufp->fullSData(oldp+222,(0U),10);
    bufp->fullCData(oldp+223,(0U),8);
    bufp->fullIData(oldp+224,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__j),32);
    bufp->fullCData(oldp+225,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg[0]),8);
    bufp->fullCData(oldp+226,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg[1]),8);
    bufp->fullCData(oldp+227,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg[2]),8);
    bufp->fullCData(oldp+228,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg[3]),8);
    bufp->fullCData(oldp+229,(0U),2);
    bufp->fullCData(oldp+230,(1U),2);
    bufp->fullCData(oldp+231,(2U),2);
    bufp->fullCData(oldp+232,(3U),2);
    bufp->fullIData(oldp+233,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__j),32);
    bufp->fullIData(oldp+234,(0x400U),32);
    bufp->fullIData(oldp+235,(0x10U),32);
    bufp->fullIData(oldp+236,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__j),32);
    bufp->fullSData(oldp+237,(0U),12);
    bufp->fullSData(oldp+238,(4U),12);
    bufp->fullSData(oldp+239,(8U),12);
    bufp->fullSData(oldp+240,(0xcU),12);
    bufp->fullSData(oldp+241,(0x10U),12);
    bufp->fullSData(oldp+242,(0x14U),12);
    bufp->fullSData(oldp+243,(0x18U),12);
    bufp->fullSData(oldp+244,(0x1cU),12);
    bufp->fullSData(oldp+245,(0x20U),12);
    bufp->fullSData(oldp+246,(0x24U),12);
    bufp->fullSData(oldp+247,(0x28U),12);
    bufp->fullSData(oldp+248,(0x100U),12);
    bufp->fullSData(oldp+249,(0x4ffU),12);
    bufp->fullSData(oldp+250,(0x500U),12);
    bufp->fullSData(oldp+251,(0x8ffU),12);
    bufp->fullSData(oldp+252,(0x900U),12);
    bufp->fullSData(oldp+253,(0xcffU),12);
    bufp->fullIData(oldp+254,(0xfffffffU),32);
    bufp->fullIData(oldp+255,(0x80000fffU),32);
    bufp->fullIData(oldp+256,(0xc00000ffU),32);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_full_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_full_0\n"); );
    // Init
    Vmicrowatt_qnna_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmicrowatt_qnna_wrapper___024root*>(voidSelf);
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmicrowatt_qnna_wrapper___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_full_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_full_0_sub_0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i),32);
    bufp->fullBit(oldp+5,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc));
    bufp->fullBit(oldp+6,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we));
    bufp->fullIData(oldp+7,(((IData)(0x80000000U) + 
                             VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),32);
    bufp->fullIData(oldp+8,(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state),32);
    bufp->fullIData(oldp+9,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m),32);
    bufp->fullBit(oldp+10,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack));
    bufp->fullBit(oldp+11,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_err));
    bufp->fullBit(oldp+12,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_cyc));
    bufp->fullBit(oldp+13,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_stb));
    bufp->fullBit(oldp+14,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack));
    bufp->fullIData(oldp+15,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_dat_r),32);
    bufp->fullBit(oldp+16,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc));
    bufp->fullBit(oldp+17,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb));
    bufp->fullBit(oldp+18,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack));
    bufp->fullIData(oldp+19,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r),32);
    bufp->fullBit(oldp+20,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc));
    bufp->fullBit(oldp+21,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb));
    bufp->fullBit(oldp+22,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_ack));
    bufp->fullIData(oldp+23,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_dat_r),32);
    bufp->fullIData(oldp+24,(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc),32);
    bufp->fullSData(oldp+25,((0xfffU & (((IData)(0x80000000U) 
                                         + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                        >> 2U))),12);
    bufp->fullBit(oldp+26,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick));
    bufp->fullBit(oldp+27,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done));
    bufp->fullBit(oldp+28,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy));
    bufp->fullIData(oldp+29,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl),32);
    bufp->fullSData(oldp+30,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m),16);
    bufp->fullSData(oldp+31,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n),16);
    bufp->fullSData(oldp+32,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k),16);
    bufp->fullBit(oldp+33,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en));
    bufp->fullBit(oldp+34,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start));
    bufp->fullBit(oldp+35,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done));
    bufp->fullCData(oldp+36,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[0]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[1]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[2]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[3]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [0U][0U]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [0U][1U]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [0U][2U]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [0U][3U]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [1U][0U]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [1U][1U]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [1U][2U]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [1U][3U]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [2U][0U]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [2U][1U]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [2U][2U]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [2U][3U]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [3U][0U]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [3U][1U]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [3U][2U]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                             [3U][3U]),8);
    bufp->fullIData(oldp+56,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[0]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[1]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[2]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[3]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr),32);
    bufp->fullIData(oldp+61,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr),32);
    bufp->fullIData(oldp+62,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr),32);
    bufp->fullCData(oldp+63,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[1]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[2]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[3]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[4]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[5]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[6]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[7]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[8]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[9]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[10]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[11]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[12]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[13]),8);
    bufp->fullCData(oldp+77,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[14]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[15]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state),3);
    bufp->fullIData(oldp+80,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter),32);
    bufp->fullIData(oldp+81,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count),32);
    bufp->fullBit(oldp+82,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag));
    bufp->fullCData(oldp+83,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code),8);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                  >> 1U))));
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                  >> 2U))));
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                  >> 3U))));
    bufp->fullIData(oldp+87,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles),32);
    bufp->fullIData(oldp+88,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles),32);
    bufp->fullSData(oldp+89,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)),10);
    bufp->fullIData(oldp+90,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [0U][0U]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [0U][1U]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [0U][2U]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [0U][3U]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [1U][0U]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [1U][1U]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [1U][2U]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [1U][3U]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [2U][0U]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                             [2U][1U]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [2U][2U]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [2U][3U]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [3U][0U]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [3U][1U]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [3U][2U]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                              [3U][3U]),32);
    bufp->fullCData(oldp+106,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [0U][0U]),8);
    bufp->fullCData(oldp+107,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [0U][1U]),8);
    bufp->fullCData(oldp+108,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [0U][2U]),8);
    bufp->fullCData(oldp+109,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [0U][3U]),8);
    bufp->fullCData(oldp+110,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [1U][0U]),8);
    bufp->fullCData(oldp+111,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [1U][1U]),8);
    bufp->fullCData(oldp+112,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [1U][2U]),8);
    bufp->fullCData(oldp+113,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [1U][3U]),8);
    bufp->fullCData(oldp+114,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [2U][0U]),8);
    bufp->fullCData(oldp+115,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [2U][1U]),8);
    bufp->fullCData(oldp+116,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [2U][2U]),8);
    bufp->fullCData(oldp+117,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [2U][3U]),8);
    bufp->fullCData(oldp+118,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [3U][0U]),8);
    bufp->fullCData(oldp+119,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [3U][1U]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [3U][2U]),8);
    bufp->fullCData(oldp+121,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                              [3U][3U]),8);
    bufp->fullSData(oldp+122,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count),16);
    bufp->fullBit(oldp+123,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing));
    bufp->fullCData(oldp+124,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [0U][0U]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [0U][1U]),8);
    bufp->fullCData(oldp+126,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [0U][2U]),8);
    bufp->fullCData(oldp+127,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [0U][3U]),8);
    bufp->fullCData(oldp+128,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [1U][0U]),8);
    bufp->fullCData(oldp+129,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [1U][1U]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [1U][2U]),8);
    bufp->fullCData(oldp+131,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [1U][3U]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [2U][0U]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [2U][1U]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [2U][2U]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [2U][3U]),8);
    bufp->fullCData(oldp+136,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [3U][0U]),8);
    bufp->fullCData(oldp+137,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [3U][1U]),8);
    bufp->fullCData(oldp+138,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [3U][2U]),8);
    bufp->fullCData(oldp+139,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                              [3U][3U]),8);
    bufp->fullCData(oldp+140,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [0U][0U]),8);
    bufp->fullCData(oldp+141,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [0U][1U]),8);
    bufp->fullCData(oldp+142,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [0U][2U]),8);
    bufp->fullCData(oldp+143,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [0U][3U]),8);
    bufp->fullCData(oldp+144,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [1U][0U]),8);
    bufp->fullCData(oldp+145,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [1U][1U]),8);
    bufp->fullCData(oldp+146,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [1U][2U]),8);
    bufp->fullCData(oldp+147,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [1U][3U]),8);
    bufp->fullCData(oldp+148,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [2U][0U]),8);
    bufp->fullCData(oldp+149,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [2U][1U]),8);
    bufp->fullCData(oldp+150,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [2U][2U]),8);
    bufp->fullCData(oldp+151,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [2U][3U]),8);
    bufp->fullCData(oldp+152,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [3U][0U]),8);
    bufp->fullCData(oldp+153,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [3U][1U]),8);
    bufp->fullCData(oldp+154,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [3U][2U]),8);
    bufp->fullCData(oldp+155,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                              [3U][3U]),8);
    bufp->fullCData(oldp+156,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state),2);
    bufp->fullSData(oldp+157,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count),16);
    bufp->fullSData(oldp+158,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count),16);
    bufp->fullSData(oldp+159,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count),16);
    bufp->fullSData(oldp+160,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr)),10);
    bufp->fullIData(oldp+161,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data
                              [0U]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[0]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[1]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[2]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[3]),32);
    bufp->fullSData(oldp+166,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)),10);
    bufp->fullIData(oldp+167,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable),32);
    bufp->fullIData(oldp+168,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status),32);
    bufp->fullBit(oldp+169,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access));
    bufp->fullSData(oldp+170,((0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),12);
    bufp->fullCData(oldp+171,((0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),8);
    bufp->fullCData(oldp+172,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data),8);
    bufp->fullBit(oldp+173,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid));
    bufp->fullCData(oldp+174,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select),3);
    bufp->fullBit(oldp+175,(vlSelfRef.clk));
    bufp->fullBit(oldp+176,(vlSelfRef.rst));
    bufp->fullBit(oldp+177,(vlSelfRef.uart_rx));
    bufp->fullBit(oldp+178,(vlSelfRef.uart_tx));
    bufp->fullQData(oldp+179,(vlSelfRef.debug_pc),64);
    bufp->fullBit(oldp+181,(vlSelfRef.debug_valid));
    bufp->fullQData(oldp+182,(vlSelfRef.dbg_pc_internal),64);
    bufp->fullBit(oldp+184,(vlSelfRef.dbg_valid_internal));
    bufp->fullBit(oldp+185,(vlSelfRef.ext_mem_cyc));
    bufp->fullBit(oldp+186,(vlSelfRef.ext_mem_stb));
    bufp->fullBit(oldp+187,(vlSelfRef.ext_mem_we));
    bufp->fullIData(oldp+188,(vlSelfRef.ext_mem_adr),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ext_mem_dat_w),32);
    bufp->fullIData(oldp+190,(vlSelfRef.ext_mem_dat_r),32);
    bufp->fullBit(oldp+191,(vlSelfRef.ext_mem_ack));
    bufp->fullBit(oldp+192,(vlSelfRef.qnna_irq));
    bufp->fullIData(oldp+193,(vlSelfRef.qnna_cycles),32);
    bufp->fullIData(oldp+194,(vlSelfRef.qnna_operations),32);
    bufp->fullIData(oldp+195,(vlSelfRef.qnna_irq),32);
    bufp->fullIData(oldp+196,((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code) 
                                << 0x10U) | (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state) 
                                              << 9U) 
                                             | (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.qnna_irq) 
                                                    << 6U) 
                                                   | (((0x18U 
                                                        & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                                           << 2U)) 
                                                       | ((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy)))))))),32);
}
