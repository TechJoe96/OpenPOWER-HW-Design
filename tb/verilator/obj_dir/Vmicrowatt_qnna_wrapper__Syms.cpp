// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmicrowatt_qnna_wrapper__pch.h"
#include "Vmicrowatt_qnna_wrapper.h"
#include "Vmicrowatt_qnna_wrapper___024root.h"

// FUNCTIONS
Vmicrowatt_qnna_wrapper__Syms::~Vmicrowatt_qnna_wrapper__Syms()
{
}

Vmicrowatt_qnna_wrapper__Syms::Vmicrowatt_qnna_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vmicrowatt_qnna_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1686);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
