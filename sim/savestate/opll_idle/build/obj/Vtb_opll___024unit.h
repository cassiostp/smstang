// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_opll.h for the primary calling header

#ifndef VERILATED_VTB_OPLL___024UNIT_H_
#define VERILATED_VTB_OPLL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_opll__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_opll___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_opll__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_opll___024unit();
    ~Vtb_opll___024unit();
    void ctor(Vtb_opll__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_opll___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
