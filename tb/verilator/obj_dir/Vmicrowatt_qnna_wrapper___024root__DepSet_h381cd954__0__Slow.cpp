// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmicrowatt_qnna_wrapper.h for the primary calling header

#include "Vmicrowatt_qnna_wrapper__pch.h"
#include "Vmicrowatt_qnna_wrapper___024root.h"

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_static(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_static\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_initial__TOP(Vmicrowatt_qnna_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root____Vm_traceActivitySetAll(Vmicrowatt_qnna_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_initial(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_initial\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmicrowatt_qnna_wrapper___024root___eval_initial__TOP(vlSelf);
    Vmicrowatt_qnna_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_initial__TOP(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_initial__TOP\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<IData/*31:0*/, 256> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__mem;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__mem[__Vi0] = 0;
    }
    // Body
    vlSelfRef.qnna_cycles = 0U;
    vlSelfRef.qnna_operations = 0U;
    vlSelfRef.dbg_valid_internal = 1U;
    vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[(0xfffU 
                                                                   & vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i)) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem[(0xffU 
                                                                                & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i)] = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i);
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i)) {
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem[(0x3ffU 
                                                                                & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i)] = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i);
    }
    vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i)) {
        microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__mem[(0xffU 
                                                                                & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i)] = 0U;
        vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i 
            = ((IData)(1U) + vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i);
    }
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_final(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_final\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__stl(Vmicrowatt_qnna_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmicrowatt_qnna_wrapper___024root___eval_phase__stl(Vmicrowatt_qnna_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_settle(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_settle\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmicrowatt_qnna_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../rtl/microwatt_qnna_wrapper.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmicrowatt_qnna_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__stl(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___dump_triggers__stl\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___stl_sequent__TOP__0(Vmicrowatt_qnna_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_stl(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_stl\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmicrowatt_qnna_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        Vmicrowatt_qnna_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___stl_sequent__TOP__0(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debug_valid = vlSelfRef.dbg_valid_internal;
    vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we = 
        ((0xaU <= vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state) 
         & (0x32U > vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state));
    vlSelfRef.debug_pc = (QData)((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc));
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
    vlSelfRef.dbg_pc_internal = vlSelfRef.debug_pc;
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
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___eval_triggers__stl(Vmicrowatt_qnna_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vmicrowatt_qnna_wrapper___024root___eval_phase__stl(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___eval_phase__stl\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmicrowatt_qnna_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmicrowatt_qnna_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__act(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___dump_triggers__act\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___dump_triggers__nba(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___dump_triggers__nba\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root____Vm_traceActivitySetAll(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root____Vm_traceActivitySetAll\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root___ctor_var_reset(Vmicrowatt_qnna_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root___ctor_var_reset\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->debug_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4804012649788666537ull);
    vlSelf->debug_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7647291609480641113ull);
    vlSelf->dbg_pc_internal = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17672213832962941550ull);
    vlSelf->dbg_valid_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2064979658249813844ull);
    vlSelf->ext_mem_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8516765309204256845ull);
    vlSelf->ext_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 864122013841180658ull);
    vlSelf->ext_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6296378867193465256ull);
    vlSelf->ext_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2124815580282406697ull);
    vlSelf->ext_mem_dat_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3725436258247764133ull);
    vlSelf->ext_mem_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3698028989902529636ull);
    vlSelf->ext_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10160006514511401041ull);
    vlSelf->qnna_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14066915140094487758ull);
    vlSelf->qnna_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9797882015238201635ull);
    vlSelf->qnna_operations = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14985645922970046655ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17956515336298697539ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11540208050505111906ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_dat_s2m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6418654359897601647ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14763908947858408115ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8177815455469715713ull);
    vlSelf->microwatt_qnna_wrapper__DOT__mem_wb_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288513669705773894ull);
    vlSelf->microwatt_qnna_wrapper__DOT__mem_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11720476527189523065ull);
    vlSelf->microwatt_qnna_wrapper__DOT__mem_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18392519274383365174ull);
    vlSelf->microwatt_qnna_wrapper__DOT__mem_wb_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3191051890777095422ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_wb_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13167821140030550988ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282096638759658866ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7350406921142887422ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_wb_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1951323685987066246ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_wb_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2971133159199356822ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5423414084137390860ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12847841027144035689ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_wb_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13579060000488082749ull);
    vlSelf->microwatt_qnna_wrapper__DOT__cpu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11915876406683877511ull);
    vlSelf->microwatt_qnna_wrapper__DOT__cpu__DOT__state = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9678013844617532181ull);
    vlSelf->microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3420075829454448964ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__main_ram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14670679877296573498ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8985523216905484064ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10524568120974581564ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15541472843300215672ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424286567734539567ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13766055888501225536ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17177422822550744877ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6615117134053225471ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12769324099930659481ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8318964419771082128ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515256404304137345ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17508994744937445341ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12420452160853247955ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10709385036726810080ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2322728736736366712ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13929878003058528770ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8047395275729244102ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2561340809567819184ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 639857471886615625ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4595934977808550779ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13815717808633633218ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17895457202235374017ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6256236011648267152ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7003166532450852597ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18117575519162038544ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1335456764963067756ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2166331129630156045ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1479340478635862598ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16989417284136672401ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15212395574240558236ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11279591219860372901ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10349215985591842074ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15059487974381967442ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2472121674965667992ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7462529780657649192ull);
        }
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11064889556666641162ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7099780635978209232ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6662404045875724415ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4383465062992715119ull);
        }
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 401240530859284996ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12427734929779204865ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14698052523451889059ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11805263120213253383ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12752105063840243472ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6128188540980730849ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2290661402125759437ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7508655470141141593ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3822469052958751398ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3295765430555029902ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3783471780547066070ull);
    }
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17043349801415057798ull);
    vlSelf->microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12324846652062323653ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1319151538738230287ull);
    vlSelf->microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14478168591667566501ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
