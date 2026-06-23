// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMICROWATT_QNNA_WRAPPER_H_
#define VERILATED_VMICROWATT_QNNA_WRAPPER_H_  // guard

#include "verilated.h"

class Vmicrowatt_qnna_wrapper__Syms;
class Vmicrowatt_qnna_wrapper___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vmicrowatt_qnna_wrapper VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmicrowatt_qnna_wrapper__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&uart_rx,0,0);
    VL_OUT8(&uart_tx,0,0);
    VL_OUT8(&debug_valid,0,0);
    VL_OUT8(&dbg_valid_internal,0,0);
    VL_OUT8(&ext_mem_cyc,0,0);
    VL_OUT8(&ext_mem_stb,0,0);
    VL_OUT8(&ext_mem_we,0,0);
    VL_IN8(&ext_mem_ack,0,0);
    VL_OUT8(&qnna_irq,0,0);
    VL_OUT(&ext_mem_adr,31,0);
    VL_OUT(&ext_mem_dat_w,31,0);
    VL_IN(&ext_mem_dat_r,31,0);
    VL_OUT(&qnna_cycles,31,0);
    VL_OUT(&qnna_operations,31,0);
    VL_OUT64(&debug_pc,63,0);
    VL_OUT64(&dbg_pc_internal,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmicrowatt_qnna_wrapper___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmicrowatt_qnna_wrapper(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmicrowatt_qnna_wrapper(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmicrowatt_qnna_wrapper();
  private:
    VL_UNCOPYABLE(Vmicrowatt_qnna_wrapper);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
