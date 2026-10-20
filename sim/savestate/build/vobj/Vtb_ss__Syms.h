// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SS__SYMS_H_
#define VERILATED_VTB_SS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ss.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ss___024root.h"
#include "Vtb_ss___024unit.h"
#include "Vtb_ss_vdp__M3f.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_ss__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ss* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_ss___024root               TOP;
    Vtb_ss_vdp__M3f                TOP__tb_ss__DOT__sys__DOT__vdp2_inst;
    Vtb_ss_vdp__M3f                TOP__tb_ss__DOT__sys__DOT__vdp_inst;

    // CONSTRUCTORS
    Vtb_ss__Syms(VerilatedContext* contextp, const char* namep, Vtb_ss* modelp);
    ~Vtb_ss__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
