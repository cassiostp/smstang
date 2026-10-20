// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_OPLL__SYMS_H_
#define VERILATED_VTB_OPLL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_opll.h"

// INCLUDE MODULE CLASSES
#include "Vtb_opll___024root.h"
#include "Vtb_opll___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_opll__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_opll* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_opll___024root             TOP;

    // CONSTRUCTORS
    Vtb_opll__Syms(VerilatedContext* contextp, const char* namep, Vtb_opll* modelp);
    ~Vtb_opll__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
