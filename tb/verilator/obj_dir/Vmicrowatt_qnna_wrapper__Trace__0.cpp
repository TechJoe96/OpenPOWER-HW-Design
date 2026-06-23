// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmicrowatt_qnna_wrapper__Syms.h"


void Vmicrowatt_qnna_wrapper___024root__trace_chg_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmicrowatt_qnna_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_chg_0\n"); );
    // Init
    Vmicrowatt_qnna_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmicrowatt_qnna_wrapper___024root*>(voidSelf);
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmicrowatt_qnna_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmicrowatt_qnna_wrapper___024root__trace_chg_0_sub_0(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_chg_0_sub_0\n"); );
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+4,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_cyc));
        bufp->chgBit(oldp+5,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_we));
        bufp->chgIData(oldp+6,(((IData)(0x80000000U) 
                                + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),32);
        bufp->chgIData(oldp+7,(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state),32);
        bufp->chgIData(oldp+8,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_dat_s2m),32);
        bufp->chgBit(oldp+9,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_ack));
        bufp->chgBit(oldp+10,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_err));
        bufp->chgBit(oldp+11,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_cyc));
        bufp->chgBit(oldp+12,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_stb));
        bufp->chgBit(oldp+13,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_ack));
        bufp->chgIData(oldp+14,(vlSelfRef.microwatt_qnna_wrapper__DOT__mem_wb_dat_r),32);
        bufp->chgBit(oldp+15,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_cyc));
        bufp->chgBit(oldp+16,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_stb));
        bufp->chgBit(oldp+17,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_ack));
        bufp->chgIData(oldp+18,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_wb_dat_r),32);
        bufp->chgBit(oldp+19,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_cyc));
        bufp->chgBit(oldp+20,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_stb));
        bufp->chgBit(oldp+21,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_ack));
        bufp->chgIData(oldp+22,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_wb_dat_r),32);
        bufp->chgIData(oldp+23,(vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__pc),32);
        bufp->chgSData(oldp+24,((0xfffU & (((IData)(0x80000000U) 
                                            + VL_SHIFTL_III(32,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U)) 
                                           >> 2U))),12);
        bufp->chgBit(oldp+25,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick));
        bufp->chgBit(oldp+26,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done));
        bufp->chgBit(oldp+27,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy));
        bufp->chgIData(oldp+28,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl),32);
        bufp->chgSData(oldp+29,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m),16);
        bufp->chgSData(oldp+30,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n),16);
        bufp->chgSData(oldp+31,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k),16);
        bufp->chgBit(oldp+32,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en));
        bufp->chgBit(oldp+33,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start));
        bufp->chgBit(oldp+34,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done));
        bufp->chgCData(oldp+35,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[0]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[1]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[2]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data[3]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [0U][0U]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [0U][1U]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [0U][2U]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [0U][3U]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [1U][0U]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [1U][1U]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [1U][2U]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [1U][3U]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [2U][0U]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [2U][1U]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [2U][2U]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [2U][3U]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [3U][0U]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [3U][1U]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [3U][2U]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data
                                [3U][3U]),8);
        bufp->chgIData(oldp+55,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[0]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[1]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[2]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data[3]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr),32);
        bufp->chgIData(oldp+60,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr),32);
        bufp->chgIData(oldp+61,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr),32);
        bufp->chgCData(oldp+62,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[0]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[1]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[2]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[3]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[4]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[5]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[6]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[7]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[8]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[9]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[10]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[11]),8);
        bufp->chgCData(oldp+74,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[12]),8);
        bufp->chgCData(oldp+75,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[13]),8);
        bufp->chgCData(oldp+76,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[14]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out[15]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state),3);
        bufp->chgIData(oldp+79,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter),32);
        bufp->chgIData(oldp+80,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count),32);
        bufp->chgBit(oldp+81,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag));
        bufp->chgCData(oldp+82,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code),8);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                     >> 1U))));
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                     >> 2U))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl 
                                     >> 3U))));
        bufp->chgIData(oldp+86,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles),32);
        bufp->chgIData(oldp+87,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles),32);
        bufp->chgSData(oldp+88,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr)),10);
        bufp->chgIData(oldp+89,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [0U][0U]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [0U][1U]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [0U][2U]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [0U][3U]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [1U][0U]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [1U][1U]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [1U][2U]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [1U][3U]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [2U][0U]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [2U][1U]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                [2U][2U]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                 [2U][3U]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                 [3U][0U]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                 [3U][1U]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                 [3U][2U]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator
                                 [3U][3U]),32);
        bufp->chgCData(oldp+105,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [0U][0U]),8);
        bufp->chgCData(oldp+106,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [0U][1U]),8);
        bufp->chgCData(oldp+107,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [0U][2U]),8);
        bufp->chgCData(oldp+108,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [0U][3U]),8);
        bufp->chgCData(oldp+109,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [1U][0U]),8);
        bufp->chgCData(oldp+110,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [1U][1U]),8);
        bufp->chgCData(oldp+111,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [1U][2U]),8);
        bufp->chgCData(oldp+112,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [1U][3U]),8);
        bufp->chgCData(oldp+113,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [2U][0U]),8);
        bufp->chgCData(oldp+114,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [2U][1U]),8);
        bufp->chgCData(oldp+115,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [2U][2U]),8);
        bufp->chgCData(oldp+116,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [2U][3U]),8);
        bufp->chgCData(oldp+117,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [3U][0U]),8);
        bufp->chgCData(oldp+118,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [3U][1U]),8);
        bufp->chgCData(oldp+119,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [3U][2U]),8);
        bufp->chgCData(oldp+120,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg
                                 [3U][3U]),8);
        bufp->chgSData(oldp+121,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count),16);
        bufp->chgBit(oldp+122,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing));
        bufp->chgCData(oldp+123,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [0U][0U]),8);
        bufp->chgCData(oldp+124,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [0U][1U]),8);
        bufp->chgCData(oldp+125,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [0U][2U]),8);
        bufp->chgCData(oldp+126,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [0U][3U]),8);
        bufp->chgCData(oldp+127,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [1U][0U]),8);
        bufp->chgCData(oldp+128,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [1U][1U]),8);
        bufp->chgCData(oldp+129,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [1U][2U]),8);
        bufp->chgCData(oldp+130,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [1U][3U]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [2U][0U]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [2U][1U]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [2U][2U]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [2U][3U]),8);
        bufp->chgCData(oldp+135,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [3U][0U]),8);
        bufp->chgCData(oldp+136,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [3U][1U]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [3U][2U]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data
                                 [3U][3U]),8);
        bufp->chgCData(oldp+139,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [0U][0U]),8);
        bufp->chgCData(oldp+140,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [0U][1U]),8);
        bufp->chgCData(oldp+141,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [0U][2U]),8);
        bufp->chgCData(oldp+142,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [0U][3U]),8);
        bufp->chgCData(oldp+143,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [1U][0U]),8);
        bufp->chgCData(oldp+144,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [1U][1U]),8);
        bufp->chgCData(oldp+145,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [1U][2U]),8);
        bufp->chgCData(oldp+146,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [1U][3U]),8);
        bufp->chgCData(oldp+147,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [2U][0U]),8);
        bufp->chgCData(oldp+148,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [2U][1U]),8);
        bufp->chgCData(oldp+149,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [2U][2U]),8);
        bufp->chgCData(oldp+150,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [2U][3U]),8);
        bufp->chgCData(oldp+151,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [3U][0U]),8);
        bufp->chgCData(oldp+152,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [3U][1U]),8);
        bufp->chgCData(oldp+153,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [3U][2U]),8);
        bufp->chgCData(oldp+154,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data
                                 [3U][3U]),8);
        bufp->chgCData(oldp+155,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state),2);
        bufp->chgSData(oldp+156,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count),16);
        bufp->chgSData(oldp+157,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count),16);
        bufp->chgSData(oldp+158,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count),16);
        bufp->chgSData(oldp+159,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr)),10);
        bufp->chgIData(oldp+160,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data
                                 [0U]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[0]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[1]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[2]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data[3]),32);
        bufp->chgSData(oldp+165,((0x3ffU & vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr)),10);
        bufp->chgIData(oldp+166,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable),32);
        bufp->chgIData(oldp+167,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status),32);
        bufp->chgBit(oldp+168,(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access));
        bufp->chgSData(oldp+169,((0xfffU & VL_SHIFTL_III(12,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),12);
        bufp->chgCData(oldp+170,((0xffU & VL_SHIFTL_III(8,32,32, vlSelfRef.microwatt_qnna_wrapper__DOT__cpu__DOT__state, 2U))),8);
        bufp->chgCData(oldp+171,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data),8);
        bufp->chgBit(oldp+172,(vlSelfRef.microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid));
        bufp->chgCData(oldp+173,(vlSelfRef.microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select),3);
    }
    bufp->chgBit(oldp+174,(vlSelfRef.clk));
    bufp->chgBit(oldp+175,(vlSelfRef.rst));
    bufp->chgBit(oldp+176,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+177,(vlSelfRef.uart_tx));
    bufp->chgQData(oldp+178,(vlSelfRef.debug_pc),64);
    bufp->chgBit(oldp+180,(vlSelfRef.debug_valid));
    bufp->chgQData(oldp+181,(vlSelfRef.dbg_pc_internal),64);
    bufp->chgBit(oldp+183,(vlSelfRef.dbg_valid_internal));
    bufp->chgBit(oldp+184,(vlSelfRef.ext_mem_cyc));
    bufp->chgBit(oldp+185,(vlSelfRef.ext_mem_stb));
    bufp->chgBit(oldp+186,(vlSelfRef.ext_mem_we));
    bufp->chgIData(oldp+187,(vlSelfRef.ext_mem_adr),32);
    bufp->chgIData(oldp+188,(vlSelfRef.ext_mem_dat_w),32);
    bufp->chgIData(oldp+189,(vlSelfRef.ext_mem_dat_r),32);
    bufp->chgBit(oldp+190,(vlSelfRef.ext_mem_ack));
    bufp->chgBit(oldp+191,(vlSelfRef.qnna_irq));
    bufp->chgIData(oldp+192,(vlSelfRef.qnna_cycles),32);
    bufp->chgIData(oldp+193,(vlSelfRef.qnna_operations),32);
    bufp->chgIData(oldp+194,(vlSelfRef.qnna_irq),32);
    bufp->chgIData(oldp+195,((((IData)(vlSelfRef.microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code) 
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

void Vmicrowatt_qnna_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmicrowatt_qnna_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vmicrowatt_qnna_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmicrowatt_qnna_wrapper___024root*>(voidSelf);
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
