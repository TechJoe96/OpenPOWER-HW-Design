// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmicrowatt_qnna_wrapper.h for the primary calling header

#include "Vmicrowatt_qnna_wrapper__pch.h"
#include "Vmicrowatt_qnna_wrapper___024root.h"

void Vmicrowatt_qnna_wrapper___024root___eval_act(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_act\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmicrowatt_qnna_wrapper___024root___nba_sequent__TOP__0(Vmicrowatt_qnna_wrapper___024root* vlSelf);

void Vmicrowatt_qnna_wrapper___024root___eval_nba(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_nba\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmicrowatt_qnna_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vmicrowatt_qnna_wrapper___024root___nba_sequent__TOP__0(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___nba_sequent__TOP__0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state = 0;
    CData/*0:0*/ __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack;
    __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack = 0;
    CData/*0:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr = 0;
    CData/*0:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status = 0;
    CData/*2:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0;
    CData/*0:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count = 0;
    CData/*0:0*/ __Vdly__qnna_irq;
    __Vdly__qnna_irq = 0;
    IData/*31:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles = 0;
    CData/*1:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count = 0;
    SData/*15:0*/ __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0;
    __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0;
    __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1;
    __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1;
    __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2;
    __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2 = 0;
    SData/*11:0*/ __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2;
    __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3;
    __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3 = 0;
    SData/*11:0*/ __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3;
    __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v1 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v1 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v4;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v4 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v5;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v2 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v7 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v8;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v8 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v3 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v10;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v10 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v11;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v8;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v8 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v12;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v12 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v13;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v13 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v4;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v4 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v5;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v5 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v16;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v16 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v17;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v17 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v6;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v6 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v19;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v19 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v20;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v20 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v7 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v22;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v22 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v23;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v23 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v16;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v16 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v24;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v24 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v25;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v25 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v8;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v8 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v9;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v9 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v28;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v28 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v29;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v29 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v10;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v10 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v31;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v31 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v32;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v32 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v11;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v11 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v34;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v34 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v35;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v35 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v24;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v24 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v36;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v36 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v37;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v37 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v12;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v12 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v13;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v13 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v40;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v40 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v41;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v41 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v14;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v14 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v43;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v43 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v44;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v44 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v15;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v15 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v46;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v46 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31 = 0;
    IData/*31:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v47;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v47 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v2 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v4;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v4 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v6;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v6 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v0 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v2 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v4;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v4 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v6;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v6 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v8;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v8 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v10;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v10 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v12;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v12 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v14;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v14 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v16;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v16 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v18;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v18 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v20;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v20 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v22;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v22 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v24;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v24 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v26;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v26 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v28;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v28 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v30;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v30 = 0;
    CData/*7:0*/ __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31;
    __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v0;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v0 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v1;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v1 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v2;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v2 = 0;
    CData/*0:0*/ __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v3;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v3 = 0;
    // Body
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v4 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v5 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v6 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v7 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v8 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v9 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v10 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v11 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v12 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v13 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v14 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v15 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v4 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v6 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7 = 0U;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count;
    __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack;
    __VdlySet__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v8 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v16 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v24 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25 = 0U;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15 = 0U;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count;
    __Vdly__qnna_irq = vlSelfRef.qnna_irq;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v12 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v13 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v24 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v25 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v36 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v37 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v4 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v7 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v10 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v16 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v19 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v22 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v28 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v31 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v34 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v40 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v43 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v46 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v0 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v2 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v4 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v6 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v8 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v10 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v12 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v14 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v16 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v18 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v20 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v22 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v24 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v26 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v28 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v30 = 0U;
    __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31 = 0U;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable;
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((1U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [0U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [0U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [0U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [0U][3U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [1U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [1U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [1U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [1U][3U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [2U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [2U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [2U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [2U][3U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [3U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [3U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [3U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                [3U][3U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15 = 1U;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles = 0U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v1 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v2 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v3 = 1U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc = 0U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v1 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v2 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v3 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v4 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v5 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v6 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v7 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v8 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v9 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v10 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v11 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v12 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v13 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v14 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v15 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v2 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v4 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v6 = 1U;
        __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state = 0U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v8 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v16 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v24 = 1U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count = 0U;
        __Vdly__qnna_irq = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status = 0U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v12 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v24 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v36 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v0 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v2 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v4 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v6 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v8 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v10 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v12 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v14 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v16 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v18 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v20 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v22 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v24 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v26 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v28 = 1U;
        __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v30 = 1U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick = 0U;
        vlSelfRef.uart_tx = 1U;
        __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_dat_r = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_dat_r = 0U;
    } else {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles);
        vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc 
            = ((IData)(4U) + vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc);
        if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_rd_en) {
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1 
                = ((0x100U > (0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem
                   [(0xffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3 
                = ((0x100U > ((IData)(1U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem
                   [(0xffU & ((IData)(1U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5 
                = ((0x100U > ((IData)(2U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem
                   [(0xffU & ((IData)(2U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7 
                = ((0x100U > ((IData)(3U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem
                   [(0xffU & ((IData)(3U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7 = 1U;
        }
        __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
        if ((1U != (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
                __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data
                    [0U];
                __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1 = 1U;
                __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data
                    [1U];
                __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9 = 1U;
                __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data
                    [2U];
                __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17 = 1U;
                __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data
                    [3U];
                __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25 = 1U;
            }
        }
        if (((IData)(vlSelfRef.qnna_irq) & (~ (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                               >> 3U)))) {
            __Vdly__qnna_irq = 0U;
        }
        if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles 
                = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles);
        }
        if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status 
                = (1U | __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status);
        } else if (((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we) 
                      & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb)) 
                     & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc)) 
                    & (0x28U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status 
                   & (~ vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state));
        }
        if ((1U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v1 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v13 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v25 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v37 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v4 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v7 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v10 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v16 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v19 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v22 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v28 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v31 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v34 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v40 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v43 = 1U;
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v46 = 1U;
        } else if ((2U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [0U][0U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [0U][0U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [0U][0U]));
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [1U][0U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [1U][0U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [1U][0U]));
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [2U][0U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [2U][0U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [2U][0U]));
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [3U][0U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [3U][0U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [3U][0U]));
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [0U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v5 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [0U][1U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [0U][1U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [0U][1U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [0U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v8 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [0U][2U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [0U][2U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [0U][2U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [0U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v11 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [0U][3U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [0U][3U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [0U][3U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [1U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v17 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [1U][1U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [1U][1U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [1U][1U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [1U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v20 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [1U][2U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [1U][2U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [1U][2U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [1U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v23 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [1U][3U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [1U][3U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [1U][3U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [2U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v29 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [2U][1U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [2U][1U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [2U][1U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [2U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v32 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [2U][2U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [2U][2U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [2U][2U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [2U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v35 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [2U][3U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [2U][3U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [2U][3U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [3U][0U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v41 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [3U][1U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [3U][1U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [3U][1U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [3U][1U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v44 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [3U][2U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [3U][2U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [3U][2U]));
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                [3U][2U];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v47 
                = (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                   [3U][3U] + (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                               [3U][3U] * vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                               [3U][3U]));
        }
        if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_rd_en) {
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                [(0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)];
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3 
                = ((0x400U > ((IData)(1U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5 
                = ((0x400U > ((IData)(2U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(2U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7 
                = ((0x400U > ((IData)(3U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(3U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9 
                = ((0x400U > ((IData)(4U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(4U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11 
                = ((0x400U > ((IData)(5U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(5U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13 
                = ((0x400U > ((IData)(6U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(6U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15 
                = ((0x400U > ((IData)(7U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(7U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17 
                = ((0x400U > ((IData)(8U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(8U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19 
                = ((0x400U > ((IData)(9U) + (0x3ffU 
                                             & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(9U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21 
                = ((0x400U > ((IData)(0xaU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xaU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23 
                = ((0x400U > ((IData)(0xbU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xbU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25 
                = ((0x400U > ((IData)(0xcU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xcU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27 
                = ((0x400U > ((IData)(0xdU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xdU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29 
                = ((0x400U > ((IData)(0xeU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xeU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29 = 1U;
            __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31 
                = ((0x400U > ((IData)(0xfU) + (0x3ffU 
                                               & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)))
                    ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem
                   [(0x3ffU & ((IData)(0xfU) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr))]
                    : 0U);
            __VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31 = 1U;
        }
        if (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick) 
             & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy))) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick = 0U;
        }
        __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack = 0U;
        if ((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_cyc) 
              & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_stb)) 
             & (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack)))) {
            if (vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we) {
                __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 
                    = (0xffU & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 
                    = (0xfffU & (((IData)(0x80000000U) 
                                  + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                 >> 2U));
                __VdlySet__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0 = 1U;
                __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1 
                    = (0xffU & (vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state 
                                >> 8U));
                __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1 
                    = (0xfffU & (((IData)(0x80000000U) 
                                  + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                 >> 2U));
                __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2 
                    = (0xffU & (vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state 
                                >> 0x10U));
                __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2 
                    = (0xfffU & (((IData)(0x80000000U) 
                                  + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                 >> 2U));
                __VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3 
                    = (vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state 
                       >> 0x18U);
                __VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3 
                    = (0xfffU & (((IData)(0x80000000U) 
                                  + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                 >> 2U));
            } else {
                vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_dat_r 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram
                    [(0xfffU & (((IData)(0x80000000U) 
                                 + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                >> 2U))];
            }
            __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack = 1U;
        }
        if ((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc) 
              & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb)) 
             & (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we)))) {
            vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_dat_r 
                = ((0U == (0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                    ? (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data)
                    : ((4U == (0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                        ? (1U & (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid)))
                        : 0U));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc) 
              & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb)) 
             & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we))) {
            if ((0U == (0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data 
                    = (0xffU & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
            }
        }
    }
    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count 
        = ((1U & ((IData)(vlSelfRef.rst) | (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing))))
            ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count))));
    if (vlSelfRef.rst) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = 0U;
        __Vdly__qnna_irq = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count = 0U;
        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count = 0U;
    } else {
        if ((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc) 
              & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb)) 
             & (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access)))) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access = 1U;
            vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack = 1U;
            if (vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we) {
                if (((((((((0U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                           | (8U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                          | (0xcU == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                         | (0x10U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                        | (0x14U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                       | (0x18U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                      | (0x1cU == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                     | (0x20U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
                    if ((0U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                            = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
                        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en 
                            = (1U & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                    } else if ((8U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m 
                            = (0xffffU & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                    } else if ((0xcU == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n 
                            = (0xffffU & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                    } else if ((0x10U == (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k 
                            = (0xffffU & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                    } else if ((0x14U == (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr 
                            = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
                    } else if ((0x18U == (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr 
                            = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
                    } else if ((0x1cU == (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr 
                            = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
                    } else {
                        __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick 
                            = (1U & vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state);
                    }
                } else if ((0x24U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable 
                        = vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state;
                } else if (((0x100U <= (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                            & (0x4ffU >= (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr 
                        = (0xfffU & (VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U) 
                                     - (IData)(0x100U)));
                } else if (((0x500U <= (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                            & (0x8ffU >= (0xfffU & 
                                          VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr 
                        = (0xfffU & (VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U) 
                                     - (IData)(0x500U)));
                }
            } else if (((((((((0U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                              | (4U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                             | (8U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                            | (0xcU == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                           | (0x10U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                          | (0x14U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                         | (0x18U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) 
                        | (0x1cU == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r 
                    = ((0U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                        ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl
                        : ((4U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                            ? (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done) 
                                << 1U) | (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy))
                            : ((8U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                                ? (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m)
                                : ((0xcU == (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                                    ? (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n)
                                    : ((0x10U == (0xfffU 
                                                  & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                                        ? (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k)
                                        : ((0x14U == 
                                            (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                                            ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr
                                            : ((0x18U 
                                                == 
                                                (0xfffU 
                                                 & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))
                                                ? vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr
                                                : vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr)))))));
            } else if ((0x20U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick;
            } else if ((0x24U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable;
            } else if ((0x28U == (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status;
            } else if (((0x900U <= (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                        & (0xcffU >= (0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr 
                    = (0xfffU & (VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U) 
                                 - (IData)(0x900U)));
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data
                    [0U];
            } else {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r = 0xdeadbeefU;
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc)) 
                          | (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb))))) {
            vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack = 0U;
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access = 0U;
        }
        if ((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc) 
              & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb)) 
             & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we))) {
            if ((0U == (0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = 0U;
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 0U;
                if ((8U & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl)) {
                    __Vdly__qnna_irq = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick)))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0U;
                }
            } else {
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 1U;
                if ((8U & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl)) {
                    __Vdly__qnna_irq = 1U;
                }
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = 0U;
                if ((2U & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl)) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 0U;
                } else if (((vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                             >> 2U) & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 0U;
                } else {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter 
                    = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter);
                if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count 
                        = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count);
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 4U;
                }
            } else {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter 
                    = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter);
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = 0U;
                if ((0xffffU < vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter)) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 5U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = 3U;
                } else if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state))) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 2U;
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = 1U;
        } else {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = 0U;
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter = 0U;
            if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick) {
                if ((((0U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m)) 
                      | (0U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n))) 
                     | (0U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k)))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 5U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = 1U;
                } else if ((((0x100U < (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m)) 
                             | (0x100U < (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n))) 
                            | (0x100U < (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k)))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 5U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = 2U;
                } else {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = 0U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = 0U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = 0U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count)));
                if ((3U <= (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 0U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done = 1U;
                    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing = 0U;
                }
            } else {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count)));
                if (((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count) 
                     >= ((IData)(3U) + (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k)))) {
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 3U;
                    __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state))) {
            __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count)));
            if ((3U <= (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count))) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 2U;
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count = 0U;
            }
        } else {
            vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done = 0U;
            if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start) {
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = 1U;
                __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count = 0U;
                vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing = 1U;
            }
        }
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_ack 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc) 
                                                 & (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb)));
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[0U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[0U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[0U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[0U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v4) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[1U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[1U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[1U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[1U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v8) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[2U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[2U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v10) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[2U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v11) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[2U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v12) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[3U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[3U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v14) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[3U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[3U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v1;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v3;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v4) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v5;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data__v7;
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles;
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[0U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v0;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[0U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v1;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[0U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v2;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[0U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v3;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[1U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v4;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[1U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v5;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[1U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v6;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[1U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v7;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[2U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v8;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[2U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v9;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[2U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v10;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[2U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v11;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[3U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v12;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[3U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v13;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[3U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v14;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[3U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg__v15;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v1;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[0U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v8) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v9;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[1U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v16) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v17;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[2U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v24) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v25;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v2;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v4) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v5;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v8;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v10) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[0U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v11;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v12) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v14;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v16) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v11) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v17;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v18) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v19) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v20;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v21) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v22) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[1U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v23;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v24) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v25) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v26;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v27) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v28) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v19) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v29;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v30) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v31) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v21) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v32;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v33) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v34) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v23) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[2U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v35;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v36) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v37) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v38;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v39) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v40) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v27) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v41;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v42) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v43) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v29) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v44;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v45) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v46) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[3U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data__v31;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[3U][3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator__v47;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v1;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v2) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[1U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[1U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v3;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v4) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[2U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[2U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v5;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v6) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[3U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[3U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v7;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v8) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[4U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[4U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v9;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v10) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[5U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[5U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v11;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v12) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[6U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[6U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v13;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v14) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[7U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[7U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v15;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v16) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[8U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[8U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v17;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v18) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[9U] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[9U] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v19;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v20) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xaU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xaU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v21;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v22) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xbU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xbU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v23;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v24) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xcU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xcU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v25;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v26) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xdU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xdU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v27;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v28) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xeU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xeU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v29;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v30) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xfU] = 0U;
    }
    if (__VdlySet__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0xfU] 
            = __VdlyVal__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out__v31;
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack 
        = __Vdly__microwatt_qnna_wrapper__DOT__mem_wb_ack;
    if (__VdlySet__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram
                [__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0]) 
               | (IData)(__VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v0));
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1] 
            = ((0xffff00ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram
                [__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v1) 
                  << 8U));
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2] 
            = ((0xff00ffffU & vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram
                [__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v2) 
                  << 0x10U));
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3] 
            = ((0xffffffU & vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram
                [__VdlyDim0__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__microwatt_qnna_wrapper__DOT__main_ram__DOT__ram__v3) 
                  << 0x18U));
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr;
    vlSelfRef.debug_pc = (QData)((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc));
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[0U][0U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[0U][1U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [1U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[0U][2U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [2U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[0U][3U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [3U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[1U][0U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [4U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[1U][1U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [5U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[1U][2U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [6U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[1U][3U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [7U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[2U][0U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [8U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[2U][1U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [9U];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[2U][2U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xaU];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[2U][3U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xbU];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[3U][0U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xcU];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[3U][1U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xdU];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[3U][2U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xeU];
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[3U][3U] 
        = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out
        [0xfU];
    if (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[0U] 
            = ((vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                [0U][0U] >> 0x1fU) ? 0U : vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
               [0U][0U]);
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[1U] 
            = ((vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                [1U][0U] >> 0x1fU) ? 0U : vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
               [1U][0U]);
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[2U] 
            = ((vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                [2U][0U] >> 0x1fU) ? 0U : vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
               [2U][0U]);
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[3U] 
            = ((vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                [3U][0U] >> 0x1fU) ? 0U : vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
               [3U][0U]);
    } else {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[0U] 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
            [0U][0U];
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[1U] 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
            [1U][0U];
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[2U] 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
            [2U][0U];
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[3U] 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
            [3U][0U];
    }
    vlSelfRef.dbg_pc_internal = vlSelfRef.debug_pc;
    vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state 
        = __Vdly__microwatt_qnna_wrapper__DOT__cpu__DOT__state;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n;
    vlSelfRef.qnna_irq = __Vdly__qnna_irq;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick;
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we = 
        ((0xaU <= vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state) 
         & (0x32U > vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state));
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc = 
        ((0xaU <= vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state) 
         & (0x64U > vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state));
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select = 0U;
    if ((0xfffffffU >= ((IData)(0x80000000U) + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select = 1U;
    } else if (((0x80000000U <= ((IData)(0x80000000U) 
                                 + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                & (0x80000fffU >= ((IData)(0x80000000U) 
                                   + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select = 2U;
    } else if (((0xc0000000U <= ((IData)(0x80000000U) 
                                 + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))) 
                & (0xc00000ffU >= ((IData)(0x80000000U) 
                                   + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select = 4U;
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_cyc = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_stb = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_err = 0U;
    if ((1U != (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
        if ((2U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
            vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
            vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb 
                = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
        }
        if ((2U != (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
            if ((4U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
                vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
            }
            if ((4U != (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
                vlSelfRef.microwatt_qnna_wrapper__DOT__wb_err 
                    = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
            }
        }
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m = 0U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack = 0U;
    if ((1U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_cyc 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
        vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_stb 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc;
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_dat_r;
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack;
    } else if ((2U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r;
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack;
    } else if ((4U == (IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select))) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_dat_r;
        vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack 
            = vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_ack;
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k;
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state 
        = __Vdly__microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state;
}

void Vmicrowatt_qnna_wrapper___024root___eval_triggers__act(Vmicrowatt_qnna_wrapper___024root* vlSelf);

bool Vmicrowatt_qnna_wrapper___024root___eval_phase__act(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_phase__act\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmicrowatt_qnna_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmicrowatt_qnna_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmicrowatt_qnna_wrapper___024root___eval_phase__nba(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_phase__nba\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmicrowatt_qnna_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__nba(Vmicrowatt_qnna_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__act(Vmicrowatt_qnna_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vmicrowatt_qnna_wrapper___024root___eval(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmicrowatt_qnna_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../rtl/microwatt_qnna_wrapper.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmicrowatt_qnna_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../rtl/microwatt_qnna_wrapper.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmicrowatt_qnna_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmicrowatt_qnna_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmicrowatt_qnna_wrapper___024root___eval_debug_assertions(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_debug_assertions\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY(((vlSelfRef.ext_mem_ack & 0xfeU)))) {
        Verilated::overWidthError("ext_mem_ack");}
}
#endif  // VL_DEBUG
