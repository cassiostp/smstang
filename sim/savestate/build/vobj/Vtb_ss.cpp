// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ss__pch.h"

//============================================================
// Constructors

Vtb_ss::Vtb_ss(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ss__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT__tb_ss__DOT__sys__DOT__vdp_inst{vlSymsp->TOP.__PVT__tb_ss__DOT__sys__DOT__vdp_inst}
    , __PVT__tb_ss__DOT__sys__DOT__vdp2_inst{vlSymsp->TOP.__PVT__tb_ss__DOT__sys__DOT__vdp2_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ss::Vtb_ss(const char* _vcname__)
    : Vtb_ss(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ss::~Vtb_ss() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ss___024root___eval_debug_assertions(Vtb_ss___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___eval_static(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___eval_initial(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD bool Vtb_ss___024root___eval_stl(Vtb_ss___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_ss___024root___eval_sample(Vtb_ss___024root* vlSelf);
bool Vtb_ss___024root___eval_ico(Vtb_ss___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_ss___024root___eval_act(Vtb_ss___024root* vlSelf);
bool Vtb_ss___024root___eval_inact(Vtb_ss___024root* vlSelf);
bool Vtb_ss___024root___eval_nba(Vtb_ss___024root* vlSelf);
bool Vtb_ss___024root___eval_obs(Vtb_ss___024root* vlSelf);
bool Vtb_ss___024root___eval_react(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___eval_postponed(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_final(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__stl(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__ico(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__act(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__nba(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__obs(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__react(Vtb_ss___024root* vlSelf);

void Vtb_ss::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ss::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_ss::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ss___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_ss::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_ss::evalStatic() {
    Vtb_ss___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_ss::evalInitial() {
    Vtb_ss___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_ss::evalStl(bool firstIteration) {
    return Vtb_ss___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_ss::evalSample() {
    Vtb_ss___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_ss::evalIco(bool firstIteration) {
    return Vtb_ss___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_ss::evalAct() {
    return Vtb_ss___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_ss::evalInact() {
    return Vtb_ss___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_ss::evalNba() {
    return Vtb_ss___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_ss::evalObs() {
    return Vtb_ss___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_ss::evalReact() {
    return Vtb_ss___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_ss::evalPostponed() {
    Vtb_ss___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_ss::evalFinal() {
    Vtb_ss___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersStl() {
    Vtb_ss___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersIco() {
    Vtb_ss___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersAct() {
    Vtb_ss___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersNba() {
    Vtb_ss___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersObs() {
    Vtb_ss___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_ss::dumpTriggersReact() {
    Vtb_ss___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_ss::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_ss::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ss::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_ss::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ss::hierName() const { return vlSymsp->name(); }
const char* Vtb_ss::modelName() const { return "Vtb_ss"; }
unsigned Vtb_ss::threads() const { return 1; }
void Vtb_ss::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ss::atClone() const {
    contextp()->threadPoolpOnClone();
}
