// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmicrowatt_qnna_wrapper__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmicrowatt_qnna_wrapper::Vmicrowatt_qnna_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmicrowatt_qnna_wrapper__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , uart_rx{vlSymsp->TOP.uart_rx}
    , uart_tx{vlSymsp->TOP.uart_tx}
    , debug_valid{vlSymsp->TOP.debug_valid}
    , dbg_valid_internal{vlSymsp->TOP.dbg_valid_internal}
    , ext_mem_cyc{vlSymsp->TOP.ext_mem_cyc}
    , ext_mem_stb{vlSymsp->TOP.ext_mem_stb}
    , ext_mem_we{vlSymsp->TOP.ext_mem_we}
    , ext_mem_ack{vlSymsp->TOP.ext_mem_ack}
    , qnna_irq{vlSymsp->TOP.qnna_irq}
    , ext_mem_adr{vlSymsp->TOP.ext_mem_adr}
    , ext_mem_dat_w{vlSymsp->TOP.ext_mem_dat_w}
    , ext_mem_dat_r{vlSymsp->TOP.ext_mem_dat_r}
    , qnna_cycles{vlSymsp->TOP.qnna_cycles}
    , qnna_operations{vlSymsp->TOP.qnna_operations}
    , debug_pc{vlSymsp->TOP.debug_pc}
    , dbg_pc_internal{vlSymsp->TOP.dbg_pc_internal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmicrowatt_qnna_wrapper::Vmicrowatt_qnna_wrapper(const char* _vcname__)
    : Vmicrowatt_qnna_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmicrowatt_qnna_wrapper::~Vmicrowatt_qnna_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmicrowatt_qnna_wrapper___024root___eval_debug_assertions(Vmicrowatt_qnna_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vmicrowatt_qnna_wrapper___024root___eval_static(Vmicrowatt_qnna_wrapper___024root* vlSelf);
void Vmicrowatt_qnna_wrapper___024root___eval_initial(Vmicrowatt_qnna_wrapper___024root* vlSelf);
void Vmicrowatt_qnna_wrapper___024root___eval_settle(Vmicrowatt_qnna_wrapper___024root* vlSelf);
void Vmicrowatt_qnna_wrapper___024root___eval(Vmicrowatt_qnna_wrapper___024root* vlSelf);

void Vmicrowatt_qnna_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmicrowatt_qnna_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmicrowatt_qnna_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmicrowatt_qnna_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vmicrowatt_qnna_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vmicrowatt_qnna_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmicrowatt_qnna_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmicrowatt_qnna_wrapper::eventsPending() { return false; }

uint64_t Vmicrowatt_qnna_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmicrowatt_qnna_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmicrowatt_qnna_wrapper___024root___eval_final(Vmicrowatt_qnna_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper::final() {
    Vmicrowatt_qnna_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmicrowatt_qnna_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vmicrowatt_qnna_wrapper::modelName() const { return "Vmicrowatt_qnna_wrapper"; }
unsigned Vmicrowatt_qnna_wrapper::threads() const { return 1; }
void Vmicrowatt_qnna_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vmicrowatt_qnna_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmicrowatt_qnna_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmicrowatt_qnna_wrapper___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmicrowatt_qnna_wrapper___024root__trace_init_top(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmicrowatt_qnna_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmicrowatt_qnna_wrapper___024root*>(voidSelf);
    Vmicrowatt_qnna_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmicrowatt_qnna_wrapper___024root__trace_decl_types(tracep);
    Vmicrowatt_qnna_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper___024root__trace_register(Vmicrowatt_qnna_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmicrowatt_qnna_wrapper::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmicrowatt_qnna_wrapper::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmicrowatt_qnna_wrapper___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
