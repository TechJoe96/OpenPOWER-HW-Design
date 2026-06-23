// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmicrowatt_qnna_wrapper.h for the primary calling header

#ifndef VERILATED_VMICROWATT_QNNA_WRAPPER___024ROOT_H_
#define VERILATED_VMICROWATT_QNNA_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"


class Vmicrowatt_qnna_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmicrowatt_qnna_wrapper___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(uart_rx,0,0);
        VL_OUT8(uart_tx,0,0);
        VL_OUT8(debug_valid,0,0);
        VL_OUT8(dbg_valid_internal,0,0);
        VL_OUT8(ext_mem_cyc,0,0);
        VL_OUT8(ext_mem_stb,0,0);
        VL_OUT8(ext_mem_we,0,0);
        VL_IN8(ext_mem_ack,0,0);
        VL_OUT8(qnna_irq,0,0);
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__wb_cyc;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__wb_we;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__wb_ack;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__wb_err;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__mem_wb_cyc;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__mem_wb_stb;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__mem_wb_ack;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_wb_cyc;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_wb_stb;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_wb_ack;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__uart_wb_cyc;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__uart_wb_stb;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__uart_wb_ack;
        CData/*2:0*/ microwatt_qnna_wrapper__DOT__wb_intercon__DOT__slave_select;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_kick;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_done;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_busy;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_relu_en;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_start;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__mac_done;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_rd_en;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_rd_en;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_wr_en;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__wb_access;
        CData/*2:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__state;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_flag;
        CData/*7:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__error_code;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__computing;
        CData/*1:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__state;
        CData/*7:0*/ microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_data;
        CData/*0:0*/ microwatt_qnna_wrapper__DOT__uart_inst__DOT__tx_valid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_m;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_n;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_dim_k;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__cycle_count;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__load_count;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__compute_count;
        SData/*15:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__drain_count;
        VL_OUT(ext_mem_adr,31,0);
        VL_OUT(ext_mem_dat_w,31,0);
        VL_IN(ext_mem_dat_r,31,0);
        VL_OUT(qnna_cycles,31,0);
        VL_OUT(qnna_operations,31,0);
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__wb_dat_s2m;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__mem_wb_dat_r;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_wb_dat_r;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__uart_wb_dat_r;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__cpu__DOT__pc;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__cpu__DOT__state;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__main_ram__DOT__unnamedblk1__DOT__i;
    };
    struct {
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__csr_ctrl;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_addr;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_addr;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_addr;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_enable;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_wishbone__DOT__int_status;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__cycle_counter;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__operation_count;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__total_cycles;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_csr__DOT__active_cycles;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__i;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__j;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__i;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__j;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__i;
        IData/*31:0*/ microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__j;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(debug_pc,63,0);
        VL_OUT64(dbg_pc_internal,63,0);
        VlUnpacked<IData/*31:0*/, 4096> microwatt_qnna_wrapper__DOT__main_ram__DOT__ram;
        VlUnpacked<CData/*7:0*/, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__input_data;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_data;
        VlUnpacked<IData/*31:0*/, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__output_data;
        VlUnpacked<CData/*7:0*/, 16> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__weight_buffer_out;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__accumulator;
        VlUnpacked<CData/*7:0*/, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__input_reg;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__weight_reg;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__horizontal_data;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_mac_array__DOT__vertical_data;
        VlUnpacked<CData/*7:0*/, 256> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_input_buffer__DOT__mem;
        VlUnpacked<CData/*7:0*/, 1024> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_weight_buffer__DOT__mem;
        VlUnpacked<IData/*31:0*/, 4> microwatt_qnna_wrapper__DOT__qnna_inst__DOT__u_output_buffer__DOT__rd_data;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmicrowatt_qnna_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmicrowatt_qnna_wrapper___024root(Vmicrowatt_qnna_wrapper__Syms* symsp, const char* v__name);
    ~Vmicrowatt_qnna_wrapper___024root();
    VL_UNCOPYABLE(Vmicrowatt_qnna_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
