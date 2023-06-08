// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040210_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040210_top__Syms.h"
#include "Vysyx_22040210_top___024root.h"

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_static(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_initial__TOP(Vysyx_22040210_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_initial(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22040210_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

void Vysyx_22040210_top___024root____Vdpiimwrap_ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
extern const VlWide<11>/*351:0*/ Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0;

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_initial__TOP(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r = 0U;
    Vysyx_22040210_top___024root____Vdpiimwrap_ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tagway0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tagway1__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tagway0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tagway1__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__icache_bank0_way0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__icache_bank1_way0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__icache_bank0_way1__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__icache_bank1_way1__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__dcache_bank0_way0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__dcache_bank1_way0__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__dcache_bank0_way1__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 128, 64, 0, VL_CVT_PACK_STR_NW(11, Vysyx_22040210_top__ConstPool__CONST_hfeaf8029_0)
                 ,  &(vlSelf->ysyx_22040210_top__DOT__dcache_bank1_way1__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_final(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_triggers__stl(Vysyx_22040210_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__stl(Vysyx_22040210_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_stl(Vysyx_22040210_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_settle(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_22040210_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22040210_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_top.v", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_22040210_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__stl(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_22040210_top___024root____Vdpiimwrap_ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__checkdpicstop_TOP(QData/*63:0*/ dpic_o);
extern const VlUnpacked<SData/*8:0*/, 8> Vysyx_22040210_top__ConstPool__TABLE_h6db97ba3_0;
extern const VlUnpacked<SData/*8:0*/, 8> Vysyx_22040210_top__ConstPool__TABLE_h44a998aa_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040210_top__ConstPool__TABLE_h162b3b79_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22040210_top__ConstPool__TABLE_h354bd121_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22040210_top__ConstPool__TABLE_h871e97d2_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040210_top__ConstPool__TABLE_h89ef4126_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vysyx_22040210_top__ConstPool__TABLE_hd01aee27_0;

VL_ATTR_COLD void Vysyx_22040210_top___024root___stl_sequent__TOP__0(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf45d95b3__0;
    VlWide<8>/*255:0*/ __Vtemp_h37cdf5a6__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__0;
    VlWide<4>/*127:0*/ __Vtemp_hdd17100d__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__1;
    VlWide<4>/*127:0*/ __Vtemp_h420962d5__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__2;
    VlWide<4>/*127:0*/ __Vtemp_hd9e2a27a__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__3;
    VlWide<4>/*127:0*/ __Vtemp_h6b9895a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__4;
    VlWide<4>/*127:0*/ __Vtemp_h6da63e2a__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__5;
    VlWide<4>/*127:0*/ __Vtemp_h83187fec__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__6;
    VlWide<4>/*127:0*/ __Vtemp_h7594c90f__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f68cab9__7;
    VlWide<4>/*127:0*/ __Vtemp_h161ffa9d__0;
    // Body
    Vysyx_22040210_top___024root____Vdpiimwrap_ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__checkdpicstop_TOP((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dpicstop_r)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = 0U;
    if ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i = 3U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i = 0xffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i = 0ULL;
    } else if ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_wsel_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_awaddr_r;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i = 3U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i = 0xffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i 
            = ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))
                ? ((0xffffffffffffffe0ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_awaddr_r) 
                   | (QData)((IData)(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r) 
                                      << 3U)))) : 0ULL);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_wvaild_o 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
           & ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
              | (2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_hd37442a4__0 
        = ((3U > (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r)))
            : 3U);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h6256bf21__0 
        = ((0U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r))
            ? (3U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r) 
                     - (IData)(1U))) : 0U);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_w_last_i 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
           & ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
              | ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
                 & (3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r)))));
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_stop 
        = ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
            ? (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen))
            : ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                    ? (QData)((IData)(((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen) 
                                       << 3U))) : (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen) 
                                                                   << 2U))))
                : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                    ? (QData)((IData)(((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen) 
                                       << 1U))) : (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen)))));
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
        = (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_start 
           + vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w 
        = (1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_valid_r) 
                 >> (7U & ((IData)(2U) + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r
        [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[4U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[5U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[6U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[7U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__btb_fixwe_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_isjump_r) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[0U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[1U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o 
                   >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__rw_w_data_i 
        = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r))
            ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r))
                ? (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[6U])))
                : (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[4U]))))
            : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r))
                ? (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[2U])))
                : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))
                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_wdata_r
                    : (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r[0U]))))));
    vlSelf->__Vtableidx7 = vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize;
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_step 
        = Vysyx_22040210_top__ConstPool__TABLE_h6db97ba3_0
        [vlSelf->__Vtableidx7];
    vlSelf->__Vtableidx8 = vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize;
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_step 
        = Vysyx_22040210_top__ConstPool__TABLE_h44a998aa_0
        [vlSelf->__Vtableidx8];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
           & ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
              | (2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))));
    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_rready_o 
            = (1U & (IData)((0U == (3U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current)))));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = 3U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i = 0xffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i 
            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))
                ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))
                           ? 0ULL : ((0xffffffffffffffe0ULL 
                                      & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_inst_araddr_r) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r) 
                                                        << 3U))))));
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_rready_o 
            = (1U & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current) 
                      >> 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current)));
        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))) {
            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = 0U;
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i = 0xfU;
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i 
                    = (0xfffffffffffffff8ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncacheinst_araddr_r);
            } else {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = 3U;
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i = 0xffU;
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i 
                    = ((0xffffffffffffffe0ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_araddr_r) 
                       | (QData)((IData)(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r) 
                                          << 3U))));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = 0U;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_rsel_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i 
                = (0xfffffffffffffff8ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_araddr_r);
        } else {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = 3U;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i = 0xffU;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i = 0ULL;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                          >> 1U)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r 
                                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r
                                        : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r;
                        }
                    }
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                        = (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                        = (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                                } else {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                        = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                        = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r;
                        } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                = (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                = (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r;
                        }
                    }
                }
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r;
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata 
                                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r)
                                        : ((~ vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r) 
                                           & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r));
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = 3U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r;
                                }
                            } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = 2U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o 
                                    = (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r));
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))));
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o 
                                    = (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))));
                            }
                        }
                    }
                }
            }
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w 
                                        = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (VL_UNLIKELY(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dpicstop_r)) {
        VL_WRITEF("SIMU END \n JUMP INST is %8#\n GSHAREHIT is %8#\n BTBMISS   is %8#\n PRSUCCESS is %8#\n PRMISS    is %8#\n Miss Rate is %8#%%\n GSHAREHIT is %8#%%\n\n RET INST NUM  IS %8#\n RET MISS      IS %8#\n RET MISS2     IS %8#\n RET MISSRATE  IS %8#%%\n RET MISSRATE2 IS %8#%%\n\n BTB HIT IS   %8#\n BTB HIT2 IS  %8# \n HITrate is  %8#%%\n HITrate2 is %8#%%\n\n BTB MISS IS     %8#\n BTB MISSRET IS  %8# \n MISSrate is  %8#%%\n MISSRET is    %8#%%\n\n GHR MISS IS     %8#\n GHR MISSRATE IS  %8#%% \n\n",
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countergsharesuccess,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbprimiss,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countersuccess,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterprimiss,
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterprimiss), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump),
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countergsharesuccess), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump),
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss2,
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras),
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss2), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras),
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit2,
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit2), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbmiss,
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbretmiss,
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbmiss), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbretmiss), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),
                  64,vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterghrmiss,
                  64,VL_DIV_QQQ(64, (0x64ULL * vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterghrmiss), vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump));
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i 
        = (1U & ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))
                  ? (IData)((0U == (3U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))))
                  : (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current) 
                      >> 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__bus_readsuccess_r2) 
            | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success_r2)) 
           & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r2) 
                  | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r))) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1U][0U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1U][1U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1U][2U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1U][3U] 
        = vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h2d8fe2e4__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__bus_readsuccess_r2) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail_r2));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5 
        = ((5ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r) 
           | (1ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[0U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_lo_o);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[1U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_lo_o 
                   >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[2U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_hi_o);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[3U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_hi_o 
                   >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[2U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[0U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[2U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[0U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[2U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[0U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[2U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[0U])));
    __Vtemp_hf45d95b3__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                           >> 7U))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                              >> 6U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 5U))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 4U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r)))))))))))))));
    __Vtemp_hf45d95b3__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                            >> 7U))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                               >> 6U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 5U))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 4U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 3U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r) 
                                                                                >> 1U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r)))))))))))))) 
                                        >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U] 
        = __Vtemp_hf45d95b3__0[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U] 
        = __Vtemp_hf45d95b3__0[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[2U] = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[3U] = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel 
        = (1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__plru_r 
                         >> (0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                              >> 5U))))));
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way0_tmp_r) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
            = (0x3fffffffffffffULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_tmp_r);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_tmp_r;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[0U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[0U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[1U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[2U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[0U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[3U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
            = (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[0U]))));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
            [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                            >> 3U)))];
    }
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way1_tmp_r) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r
            [3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
            = (0x3fffffffffffffULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_tmp_r);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_tmp_r;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[0U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[0U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[1U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[2U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[0U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[3U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
            = (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[0U]))));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
            [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                            >> 3U)))];
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck 
        = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt))
            ? (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag1valid)
            : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag0valid));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____VdfgTmp_h4dee4f45__0 
        = ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)) 
           | (4U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump 
        = ((0x11U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
           | ((0x10U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
              | ((0xfU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                 | ((0xeU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                    | ((0x2eU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                       | ((0x2fU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                          | ((0xdU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                             | ((0xcU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                                | ((0xbU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)) 
                                   | (0xaU == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)))))))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r
        [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w 
        = (1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_valid_r) 
                 >> (7U & ((IData)(3U) + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_tailptr)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
        = (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r);
    if (((((((((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)) 
               | (2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
              | (4U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
             | (8U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
            | (0x10U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
           | (0x20U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
          | (0x40U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) 
         | (0x80U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)))) {
        if ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [0U][7U];
        } else if ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [1U][7U];
        } else if ((4U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [2U][7U];
        } else if ((8U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [3U][7U];
        } else if ((0x10U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [4U][7U];
        } else if ((0x20U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [5U][7U];
        } else if ((0x40U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [6U][7U];
        } else {
            __Vtemp_h37cdf5a6__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][0U];
            __Vtemp_h37cdf5a6__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][1U];
            __Vtemp_h37cdf5a6__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][2U];
            __Vtemp_h37cdf5a6__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][3U];
            __Vtemp_h37cdf5a6__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][4U];
            __Vtemp_h37cdf5a6__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][5U];
            __Vtemp_h37cdf5a6__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][6U];
            __Vtemp_h37cdf5a6__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
                [7U][7U];
        }
    } else {
        __Vtemp_h37cdf5a6__0[0U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[0U];
        __Vtemp_h37cdf5a6__0[1U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_h37cdf5a6__0[2U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_h37cdf5a6__0[3U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_h37cdf5a6__0[4U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_h37cdf5a6__0[5U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_h37cdf5a6__0[6U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_h37cdf5a6__0[7U] = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[0U] 
        = __Vtemp_h37cdf5a6__0[0U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[1U] 
        = __Vtemp_h37cdf5a6__0[1U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[2U] 
        = __Vtemp_h37cdf5a6__0[2U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[3U] 
        = __Vtemp_h37cdf5a6__0[3U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[4U] 
        = __Vtemp_h37cdf5a6__0[4U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[5U] 
        = __Vtemp_h37cdf5a6__0[5U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[6U] 
        = __Vtemp_h37cdf5a6__0[6U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[7U] 
        = __Vtemp_h37cdf5a6__0[7U];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w 
        = ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay 
            == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_tag) 
           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_valid_r[
              (7U & ((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay 
                              >> 2U)) >> 5U))] >> (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay 
                                                              >> 2U)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w 
        = (((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay) 
            == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_tag) 
           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_valid_r[
              (7U & ((IData)(((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay) 
                              >> 2U)) >> 5U))] >> (0x1fU 
                                                   & (IData)(
                                                             ((4ULL 
                                                               + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay) 
                                                              >> 2U)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag0valid) 
           & ((0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[0U])))) 
              == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                  >> 0xbU)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag1valid) 
           & ((0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[0U])))) 
              == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                  >> 0xbU)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel 
        = (1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__plru_r 
                         >> (0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                              >> 5U))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w = 0ULL;
    vlSelf->__Vtableidx5 = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i) 
                             << 7U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_awready) 
                                        << 6U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_wready) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wnext_state 
        = Vysyx_22040210_top__ConstPool__TABLE_h162b3b79_0
        [vlSelf->__Vtableidx5];
    vlSelf->__Vtableidx6 = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o) 
                             << 8U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_rready) 
                                        << 7U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_rvalid) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arready) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->rst)))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rnext_state 
        = Vysyx_22040210_top__ConstPool__TABLE_h354bd121_0
        [vlSelf->__Vtableidx6];
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success_r2) {
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_r2) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][3U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][3U];
        } else {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                >> 4U)))][3U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
                [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                >> 4U)))][3U];
        }
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h2d8fe2e4__0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2[3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2[3U];
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U] = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                          >> 1U)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? VL_SHIFTRS_QQI(64,64,5, 
                                                         VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r)), 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)))
                                        : ((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r)) 
                                           >> (0x1fU 
                                               & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))));
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                          >> 1U)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r = 1U;
                            }
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r = 1U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                                    = ((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r)) 
                                       << (0x1fU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)));
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 1U)))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                            = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)))
                                : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))));
                    }
                }
            } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                    = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                        ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                            ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                               << (0x3fU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)))
                            : (QData)((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                               < vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))))
                        : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                            ? (QData)((IData)(VL_LTS_IQQ(64, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)))
                            : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                               ^ vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)));
            } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                        ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                           | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                        : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                           & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_valid_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_doing_r)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r))));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                          >> 1U)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_doing_r)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w 
        = (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r)) 
            & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r)) 
           | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r)) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm 
        = (((- (QData)((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)(((0xfe0U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                          >> 7U))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr 
                                        = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r);
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr 
                                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                        : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r));
                            }
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr 
                                = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                        : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))
                                    : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                        ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                                        : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                           + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)));
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr 
                            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                                    : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))
                                : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                                    : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)));
                    }
                }
            }
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop1_wdata_r;
                                } else {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop1_wdata_r;
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                    = (0xfffffffffffffffeULL 
                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                          + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                    = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                                = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                   >= vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                    ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                    : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                                = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                   < vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                                = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                    ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                    : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                            = VL_GTES_IQQ(64, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                   + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                            = VL_LTS_IQQ(64, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                   + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                    }
                } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                            = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                               != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                   + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w 
                            = (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r);
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w 
                            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                   + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r)
                                : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prsuccess 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump) 
           & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1taken_r) 
               == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)) 
              & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)) 
                 | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w) 
                    & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1takenaddr_r 
                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump) 
           & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w) 
               != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1taken_r)) 
              | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w) 
                 & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1takenaddr_r 
                    != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[6U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[4U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[2U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o[0U])));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w)
            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_data
            : 0ULL);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w)
            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_data
            : 0ULL);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w) 
            | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                                   >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r))) 
                                               & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                                  >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r))))
                                         ? 1U : ((1U 
                                                  & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                                      >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r)) 
                                                     & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                                        >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r))))
                                                  ? 3U
                                                  : 0U)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__nextstate 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w) 
            & (0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)))
            ? 1U : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                     ? 2U : ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                              ? (((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                                  ? 3U : (((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                                           ? 1U : 3U))
                              : ((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                  ? ((0x7fU != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt))
                                      ? 1U : 4U) : 
                                 ((4U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                   ? ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w))
                                       ? 0U : 4U) : 0U)))));
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r) 
                             << 7U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o) 
                                        << 6U) | ((0x20U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w) 
                                                        | (0U 
                                                           == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)))) 
                                                      << 5U)) 
                                                  | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_next 
        = Vysyx_22040210_top__ConstPool__TABLE_h871e97d2_0
        [vlSelf->__Vtableidx3];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0) 
           | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w) 
              & ((3U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                 & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r[
                    ((3U & ((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                     >> 5U)) >> 4U)) 
                     | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel) 
                        >> 5U))] >> (0x1fU & ((0x7eU 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                           >> 5U)) 
                                                  << 1U)) 
                                              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag0valid) 
           & ((0x1fffffffffffffULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w) 
              == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                  >> 0xbU)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag1valid) 
           & ((0x1fffffffffffffULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w) 
              == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                  >> 0xbU)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r = 0ULL;
    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w 
                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r;
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 1U)))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_rem_w;
                        }
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_rem_w
                                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_div_w);
                    }
                } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                        = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_div_w
                            : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[2U])))));
                } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                        = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                            ? (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[2U])))
                            : (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w[0U]))));
                }
            } else if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 2U)))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                                    : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r 
                                       + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r))
                                : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r)
                                    : (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r)));
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 1U)))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                            = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                ? (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                   - vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r)
                                : (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r 
                                   + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r));
                    }
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r 
                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres;
            }
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
        if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr;
        }
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r 
            = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5 
        = ((5ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w) 
           | (1ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
    if ((0x40U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
        if ((0x20U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((0x10U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                        if ((0x1000U 
                                             & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                                = (QData)((IData)(
                                                                  (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                   >> 0x14U)));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x30U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w 
                                                = (QData)((IData)(
                                                                  (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                   >> 0x14U)));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 7U))));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0xfU))));
                                        } else {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                                = (QData)((IData)(
                                                                  (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                   >> 0x14U)));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x31U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w 
                                                = (QData)((IData)(
                                                                  (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                   >> 0x14U)));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 7U))));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0xfU))));
                                        }
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 6U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                            = (QData)((IData)(
                                                              (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                               >> 0x14U)));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x32U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 6U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w 
                                            = (QData)((IData)(
                                                              (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                               >> 0x14U)));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else {
                                        if ((1U != 
                                             (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                              >> 0x14U))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w = 0ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = 0x305ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = 0U;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w = 0x999ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = 1U;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = 1U;
                                            } else if (
                                                       (0x302U 
                                                        == 
                                                        (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                         >> 0x14U))) {
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w = 0ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = 0x341ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = 0U;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w = 0ULL;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = 0U;
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = 1U;
                                            }
                                        }
                                        if ((1U == 
                                             (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                        } else if (
                                                   (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                     >> 0x14U))) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2eU;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 6U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                        } else if (
                                                   (0x302U 
                                                    == 
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                     >> 0x14U))) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2fU;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 6U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((4U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x10U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                          >> 0x14U)))))));
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0U == (7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x11U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        }
                    }
                }
            } else if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x4000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xfU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xeU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xdU;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xcU;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        }
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    } else if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xbU;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0xaU;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        }
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
        if ((0x10U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((8U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((0x4000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                    if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                        if ((1U == 
                                             (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                              >> 0x19U))) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2dU;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 7U))));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0xfU))));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0x14U))));
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                        }
                                    } else if ((1U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2cU;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                    if ((0x20U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                   >> 0x19U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x21U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((0U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x20U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((1U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x29U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    }
                                } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x28U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                    if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1fU;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 7U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    }
                                } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                } else if ((0x20U == 
                                            (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                             >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x22U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x13U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0x20U) | ((QData)((IData)(
                                                             (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xcU))) 
                                             << 0xcU));
                    }
                }
            } else if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x4000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 2U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2bU;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                }
                            } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 3U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x2aU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((0x20U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 9U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 8U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x27U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            }
                        } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 4U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x26U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 6U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x25U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                            }
                        } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 5U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x24U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                    >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 7U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x23U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                        }
                    } else if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    } else if ((0x20U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                          >> 0x19U))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    } else if ((1U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x22U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1eU;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                } else {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1dU;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 7U))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0xfU))));
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                        = (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                              >> 0x14U))));
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1cU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1bU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            }
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 4U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
        if ((8U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0U == (7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 2U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        } else if ((1U == (7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1fU;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                    = (QData)((IData)(
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            }
                        } else if ((5U == (7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x20U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                    = (QData)((IData)(
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            } else if ((0x10U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x1aU))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x21U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 5U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 7U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xfU))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                    = (QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                    = (QData)((IData)(
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x14U))));
                            }
                        }
                    }
                }
            }
        } else if ((4U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x12U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 7U))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0xfU))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0x14U))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                        = (((- (QData)((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                >> 0x1fU)))) 
                            << 0x20U) | ((QData)((IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                          >> 0xcU))) 
                                         << 0xcU));
                }
            }
        } else if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((0x4000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 2U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 3U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        }
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                    } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 8U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        } else if ((0x10U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                              >> 0x1aU))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 9U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (QData)((IData)((0x3fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        }
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 4U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                            >> 0x14U))));
                    }
                } else if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 6U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                            >> 0x14U))));
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 5U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                            >> 0x14U))));
                    }
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x1aU))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 7U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (QData)((IData)((0x3fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                    }
                } else {
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 7U))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0xfU))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                        = (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0x14U))));
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                        = (((- (QData)((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x14U))));
                }
            }
        }
    } else if ((8U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
        if ((4U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x100fU == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x33U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = 0ULL;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                         >> 2U)))) {
        if ((2U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
            if ((1U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                if ((0x4000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                    if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                      >> 0xcU)))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x1aU;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 3U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        }
                    } else {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x19U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x18U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        }
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 3U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                    }
                } else {
                    if ((0x2000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x17U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x16U;
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 7U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))));
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x15U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                            >> 0x14U))));
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = 0x14U;
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 7U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0xfU))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                            = (QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                  >> 0x14U))));
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                            >> 0x14U))));
                    }
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = 3U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = 1U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = 0U;
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) 
         & (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [3U];
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) {
            __Vtemp_h4f68cab9__0[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__0[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__0[2U] = 0U;
            __Vtemp_h4f68cab9__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_hdd17100d__0, __Vtemp_h4f68cab9__0, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[(3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                                                >> 3U)))] 
                = (((((QData)((IData)(__Vtemp_hdd17100d__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_hdd17100d__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
                      [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                      >> 3U)))] & (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        }
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w) {
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
                [0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
                [1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
                [2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
                [3U];
        } else {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
                [0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
                [1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
                [2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3U] 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
                [3U];
        }
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3U] = 0ULL;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux 
        = ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate) 
               >> 2U)) & ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                           ? ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)) 
                              & ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck)))
                           : ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)) 
                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h1b7946de__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux 
        = ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
            ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                       ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                           ? 0ULL : (((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt))
                                          ? ((0xfffffffffffff800ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                                  << 0x2bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[0U])) 
                                                    << 0xbU))) 
                                             | (QData)((IData)(
                                                               (0x7e0U 
                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                                   << 4U)))))
                                          : ((0xfffffffffffff800ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                                  << 0x2bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[0U])) 
                                                    << 0xbU))) 
                                             | (QData)((IData)(
                                                               (0x7e0U 
                                                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                                   << 4U))))))
                                      : 0ULL)) : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)
                                                     ? 
                                                    ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
                                                      << 0xbU) 
                                                     | (QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))
                                                     : 
                                                    ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
                                                      << 0xbU) 
                                                     | (QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r))))))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w 
        = ((0xffffff80U & ((((0xffffffffffffffe0ULL 
                              & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                             == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                             [7U]) << 7U) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
           | ((0xffffffc0U & ((((0xffffffffffffffe0ULL 
                                 & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                [6U]) << 6U) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
              | ((0xffffffe0U & ((((0xffffffffffffffe0ULL 
                                    & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                   == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                   [5U]) << 5U) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
                 | ((0xfffffff0U & ((((0xffffffffffffffe0ULL 
                                       & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                      == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                      [4U]) << 4U) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
                    | ((0xfffffff8U & ((((0xffffffffffffffe0ULL 
                                          & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                         == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                         [3U]) << 3U) 
                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
                       | ((0xfffffffcU & ((((0xffffffffffffffe0ULL 
                                             & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                            == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                            [2U]) << 2U) 
                                          & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
                          | ((0xfffffffeU & ((((0xffffffffffffffe0ULL 
                                                & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                               [1U]) 
                                              << 1U) 
                                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r))) 
                             | (((0xffffffffffffffe0ULL 
                                  & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux) 
                                 == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                 [0U]) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r)))))))));
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[6U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[4U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[0U])));
    } else if ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [0U];
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
                & (0ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
                & (8ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
                & (0x10ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
                & (0x18ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
                & (0ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
                & (8ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
                & (0x10ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
                & (0x18ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0U] = 0ULL;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc1a017f7__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
            | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
               | (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)))) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w 
        = ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres)))
            : ((5U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices)))
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w 
                                        = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w)
                                         ? 0xfU : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss)
                                                    ? 7U
                                                    : 0U)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h7bae7488__0 
        = (1U & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush) 
                  >> 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w 
        = ((1U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2)) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w 
        = ((1U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1)) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h88d6951a__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel)) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h4adca57a__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail) 
           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w 
        = (((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success) 
                | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w))) 
            & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail)) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__writehit_head_w 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w) 
            >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w = 2U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                                      >> 1U)))) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w 
                                = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))
                                    ? (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5)) 
                                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5))
                                        ? 1U : ((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                                                  & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r 
                                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w)) 
                                                 | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5)) 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5)))
                                                 ? 3U
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                                                  & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                                     != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r))
                                                  ? 4U
                                                  : 5U)))
                                    : (((1ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w) 
                                        | (5ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w))
                                        ? 3U : 5U));
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst1valid_i 
        = (1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r) 
                    | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild)) 
                       | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h7bae7488__0)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst2valid_i 
        = (1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r) 
                    | ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild) 
                           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2) 
                              & (7U != (7U & (IData)(
                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                      >> 2U))))))) 
                       | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h7bae7488__0)))));
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w 
            = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____VdfgTmp_h4dee4f45__0) 
                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpurastarget_w
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit = 0U;
    }
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu_pht_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w 
            = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____VdfgTmp_h4dee4f45__0) 
                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpurastarget_w
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu_pht_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w = 0U;
    }
    vlSelf->ysyx_22040210_top__DOT__io_sram0_wen = 
        ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r)) 
         & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h88d6951a__0));
    vlSelf->ysyx_22040210_top__DOT__io_sram2_wen = 
        ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r)) 
         & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h4adca57a__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h88d6951a__0) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h4adca57a__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_cpustall_i 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w) 
            << 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i 
        = (1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w) 
                    | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w) 
                       | (IData)(vlSelf->rst)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w) 
            | (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w))) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w));
    if ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
            [3U];
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) {
            __Vtemp_h4f68cab9__1[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__1[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__1[2U] = 0U;
            __Vtemp_h4f68cab9__1[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h420962d5__0, __Vtemp_h4f68cab9__1, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[(3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                                                >> 3U)))] 
                = (((((QData)((IData)(__Vtemp_h420962d5__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h420962d5__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w
                      [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                      >> 3U)))] & (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        }
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
            [3U];
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) {
            __Vtemp_h4f68cab9__2[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__2[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__2[2U] = 0U;
            __Vtemp_h4f68cab9__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_hd9e2a27a__0, __Vtemp_h4f68cab9__2, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[(3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                                                >> 3U)))] 
                = (((((QData)((IData)(__Vtemp_hd9e2a27a__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_hd9e2a27a__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w
                      [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                      >> 3U)))] & (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        }
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
            [0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
            [1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
            [2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
            [3U];
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) {
            __Vtemp_h4f68cab9__3[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__3[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__3[2U] = 0U;
            __Vtemp_h4f68cab9__3[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h6b9895a5__0, __Vtemp_h4f68cab9__3, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[(3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                                                >> 3U)))] 
                = (((((QData)((IData)(__Vtemp_h6b9895a5__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h6b9895a5__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w
                      [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                      >> 3U)))] & (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        }
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[0U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[2U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[4U])));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] 
            = (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[6U])));
        if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) 
             & (0ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
            __Vtemp_h4f68cab9__4[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__4[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__4[2U] = 0U;
            __Vtemp_h4f68cab9__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h6da63e2a__0, __Vtemp_h4f68cab9__4, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] 
                = (((((QData)((IData)(__Vtemp_h6da63e2a__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h6da63e2a__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | ((((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[0U]))) 
                      & (~ (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) 
                    & (8ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
            __Vtemp_h4f68cab9__5[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__5[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__5[2U] = 0U;
            __Vtemp_h4f68cab9__5[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h83187fec__0, __Vtemp_h4f68cab9__5, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] 
                = (((((QData)((IData)(__Vtemp_h83187fec__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h83187fec__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | ((((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[2U]))) 
                      & (~ (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) 
                    & (0x10ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
            __Vtemp_h4f68cab9__6[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__6[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__6[2U] = 0U;
            __Vtemp_h4f68cab9__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h7594c90f__0, __Vtemp_h4f68cab9__6, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] 
                = (((((QData)((IData)(__Vtemp_h7594c90f__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h7594c90f__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | ((((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[4U]))) 
                      & (~ (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        } else if (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r) 
                    & (0x18ULL == (0x18ULL & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))) {
            __Vtemp_h4f68cab9__7[0U] = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r);
            __Vtemp_h4f68cab9__7[1U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r 
                                                >> 0x20U));
            __Vtemp_h4f68cab9__7[2U] = 0U;
            __Vtemp_h4f68cab9__7[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp_h161ffa9d__0, __Vtemp_h4f68cab9__7, 
                          (0x38U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r) 
                                    << 3U)));
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] 
                = (((((QData)((IData)(__Vtemp_h161ffa9d__0[1U])) 
                      << 0x20U) | (QData)((IData)(__Vtemp_h161ffa9d__0[0U]))) 
                    & (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U])))) 
                   | ((((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w[6U]))) 
                      & (~ (((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w[0U]))))));
        }
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2U] = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3U] = 0ULL;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc4842331__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hda5cc781__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) 
           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_ras_u0__ras_btbhit_i 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc 
        = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))
            ? ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dnpc_r
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w)
            : (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w) 
                | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc
                : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w)
                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w
                    : (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit) 
                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r))
                        ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w
                        : ((1U & ((0xa00000000ULL < vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc) 
                                  | (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r))))
                            ? (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc)
                            : (8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull)
            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2
            : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r);
    vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata[0U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                  [0U]);
    vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata[1U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                   [0U] >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata[2U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                  [1U]);
    vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata[3U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                   [1U] >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata[0U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                  [2U]);
    vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata[1U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                   [2U] >> 0x20U));
    vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata[2U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                  [3U]);
    vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata[3U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r
                   [3U] >> 0x20U));
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc4842331__0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[0U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[1U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[2U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[3U] = 0xffffffffU;
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h1b7946de__0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[0U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[1U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[2U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[3U] = 0xffffffffU;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[3U] = 0U;
    }
    if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hda5cc781__0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[0U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[1U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[2U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[3U] = 0xffffffffU;
    } else if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc1a017f7__0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[0U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[1U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[2U] = 0xffffffffU;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[3U] = 0xffffffffU;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[3U] = 0U;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc4842331__0) 
           | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h1b7946de__0) 
              | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hda5cc781__0) 
                 | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc1a017f7__0) 
                    | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r) 
           | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r) 
              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____Vcellinp__ysyx_22040210_pht_u0__raddr1 
        = (0x1fffU & ((IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc 
                               >> 2U)) ^ ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))
                                           ? ((0x1ffeU 
                                               & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r) 
                                                  << 1U)) 
                                              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w))
                                           : (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush)) 
                                               & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu)) 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i)))
                                               ? ((0x1ffeU 
                                                   & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr) 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w) 
                                                     | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w) 
                                                        | (0U 
                                                           != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)))))
                                               : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr)))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w 
        = ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram) 
                  | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r)) 
                     | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w))))
            ? (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram) 
                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r)
            : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc);
    vlSelf->__Vtableidx1 = ((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) 
                              & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                                 & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w)))) 
                             << 0xaU) | ((((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w)) 
                                           & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r) 
                                                  | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r 
                                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r))) 
                                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail))) 
                                          << 9U) | 
                                         ((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r) 
                                            & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w)) 
                                               & (~ 
                                                  ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r) 
                                                   | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2))))) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r) 
                                            << 7U) 
                                           | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->rst))))))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_next 
        = Vysyx_22040210_top__ConstPool__TABLE_h89ef4126_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__debug 
        = Vysyx_22040210_top__ConstPool__TABLE_hd01aee27_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w)) 
           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w) 
              | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success) 
                  | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w)) 
           & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w) 
              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w 
                                        = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)));
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w 
                                    = (1U & ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                              ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                              : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))));
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w 
                            = (1U & ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                          ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                          : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))
                                      : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                          ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                          : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))));
                    }
                }
            }
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w 
                                        = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w)));
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r)))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w 
                                    = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i)));
                            }
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w 
                                = (1U & ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                          ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i))
                                          : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i))));
                        }
                    } else {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w 
                            = (1U & ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                          ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i))
                                          : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))
                                      : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                          ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                          : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))));
                    }
                } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w 
                        = (1U & ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                  ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                      ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                      : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))
                                  : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                      ? (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i))
                                      : (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i)))));
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w)
                                         ? 0x1fU : 
                                        ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w)
                                          ? 0xfU : 
                                         (((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)) 
                                           & (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                                == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w) 
                                               | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                                  == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)) 
                                              & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r) 
                                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w))))
                                           ? 7U : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w)
                                                    ? 1U
                                                    : 0U)))));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r;
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w 
                                        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i)
                                            ? 0U : 0xffU);
                                }
                            } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r;
                                if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0U;
                                } else if ((0U == (7U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0xfU;
                                } else if ((4U == (7U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0xf0U;
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r;
                                if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0U;
                                } else if ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                          >> 2U)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                       >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0xc0U;
                                        }
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0x30U;
                                    }
                                } else if ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                          >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0xcU;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 3U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r;
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w 
                                    = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i)
                                        ? 0U : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w))
                                                   ? 0x80U
                                                   : 0x40U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w))
                                                   ? 0x20U
                                                   : 0x10U))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w))
                                                   ? 8U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w))
                                                   ? 2U
                                                   : 1U))));
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                    = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r;
                            }
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r;
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w 
                            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w) 
            | (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w))) 
           & (0xa0000000ULL <= vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w));
    if ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next 
            = ((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w) 
                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i)) 
                & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r) 
                      | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w))))
                ? 2U : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
            = ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rdata_w
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r
               [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                               >> 3U)))]);
    } else if ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next 
            = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w) 
                & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w) 
                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i))))
                ? 1U : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rdata_w;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next = 1U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w = 0ULL;
    }
    if ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next 
            = ((((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w)) 
                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i)) 
                & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r) 
                      | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w))))
                ? 2U : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r 
            = ((2U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next)) 
               & (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w)));
    } else {
        if ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wdata_tmp_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_waddr_tmp_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wsel_tmp_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next 
                = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w) 
                    & (~ ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w)) 
                          & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i))))
                    ? 1U : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current));
        } else {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r = 0ULL;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r = 0ULL;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r = 0U;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next = 1U;
        }
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r = 0U;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dcache_req_r 
        = ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
           & ((2U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next)) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                    if ((8U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r)))) {
                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w 
                                        = ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                       >> 0x20U)))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                       >> 0x18U)))
                                                    : (QData)((IData)(
                                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                       >> 0x10U))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                       >> 8U)))
                                                    : (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w)))));
                                }
                            } else {
                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w 
                                    = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x30U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x28U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x20U)))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x18U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x10U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 8U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w)))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x38U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x30U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x28U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x20U)))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x18U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x10U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 8U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w))))))));
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))) {
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w 
                            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                             ? 0ULL
                                             : (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x3fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                   >> 0x20U))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x37U))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                      >> 0x18U))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x2fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                      >> 0x10U)))))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x27U))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                      >> 8U))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w)))))))
                                : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r))
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? 0ULL
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x3fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x30U)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x37U)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x28U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x2fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x20U))))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x27U)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x18U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x1fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x10U)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x17U)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 8U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w))))))))
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x3fU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x38U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x37U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x30U)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x2fU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x28U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x27U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x20U))))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x1fU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x18U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x17U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0x10U)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 0xfU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 8U))))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w))))))))));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r)
            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w
            : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dcache_req_r)
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w
                : 0ULL));
    if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
            = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                ? ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                             >> 1U)))) 
                   << 5U) : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                              ? ((QData)((IData)((0x3fU 
                                                  & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                     >> 1U)))) 
                                 << 5U) : ((QData)((IData)(
                                                           (0x3fU 
                                                            & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                               >> 1U)))) 
                                           << 5U)));
    } else if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))) {
        if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
                = ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                             >> 1U)))) 
                   << 5U);
        } else if (((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))) {
            if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                              [0U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                               [0U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                              [1U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                               [1U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                              [2U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                               [2U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                              [3U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w
                               [3U] >> 0x20U));
            } else {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                              [0U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                               [0U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                              [1U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                               [1U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                              [2U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                               [2U] >> 0x20U));
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
                    = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                              [3U]);
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
                    = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w
                               [3U] >> 0x20U));
            }
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
                = ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                             >> 1U)))) 
                   << 5U);
        } else {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
                = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
                = ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                             >> 1U)))) 
                   << 5U);
        }
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
            = Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
            = ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                         >> 1U)))) 
               << 5U);
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[0U] 
            = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                      [0U]);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[1U] 
            = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                       [0U] >> 0x20U));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[2U] 
            = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                      [1U]);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[3U] 
            = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                       [1U] >> 0x20U));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[4U] 
            = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                      [2U]);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[5U] 
            = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                       [2U] >> 0x20U));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[6U] 
            = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                      [3U]);
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux[7U] 
            = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r
                       [3U] >> 0x20U));
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w[3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[0U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[1U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[2U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U] 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w[3U];
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
            = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w) 
                | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w);
    }
}

VL_ATTR_COLD void Vysyx_22040210_top___024root___eval_stl(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vysyx_22040210_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__ico(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__act(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__nba(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_22040210_top___024root___ctor_var_reset(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_master_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__io_master_wstrb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_master_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__io_slave_wstrb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__io_sram0_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata);
    vlSelf->ysyx_22040210_top__DOT__io_sram2_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata);
    vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__thispc2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__rw_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu_pht_w = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_w_last_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_cpustall_i = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst_r = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prsuccess = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1pht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1taken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dnpc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dpicstop_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_instvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop1_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csr1we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_o_w = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prmiss_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prsuccess_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1pht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1bhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1taken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dnpc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dpicstop_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_instvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_isjump_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1bhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dnpc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dpicstop_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_instvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_isjump_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__btb_fixwe_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst2valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst1valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countersuccess = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countergsharesuccess = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterprimiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbprimiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbmiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbretmiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterghrmiss = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag3 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag4 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag5 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag6 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag7 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag8 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag9 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag10 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag11 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag12 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag13 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag14 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag15 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__testghr = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h7bae7488__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_hd37442a4__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h6256bf21__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpurastarget_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_ras_u0__ras_btbhit_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____VdfgTmp_h4dee4f45__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1 = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2 = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____Vcellinp__ysyx_22040210_pht_u0__raddr1 = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__ysyx_22040210_pht_u0__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__tag[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_op[__Vi0] = VL_RAND_RESET_I(3);
    }
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_valid_r);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_tag = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_headptr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_valid_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_tailptr = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_div_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_rem_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_valid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_doing_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_doing_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_lo_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_hi_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_qrvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_quotiento_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_remaindero_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplicand_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplier_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_mulvalid_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_hio_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_loo_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dataflush_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_rready_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_wvaild_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_raddr_tmpr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dcache_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_waddr_tmp_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wdata_tmp_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wsel_tmp_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rdata_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pc_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1bhr_w = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachebhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pht_w = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1taken_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetaken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1takenaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetakenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2bhr_w = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2pht_w = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2taken_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2takenaddr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rdata_w = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__uncache_inst_flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncache_stallpc_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__bus_readsuccess_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1bhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1pht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1taken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2bhr_r = VL_RAND_RESET_I(13);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2pht_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2taken_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc2_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__plru_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag0valid_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag1valid_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag0valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag1valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h88d6951a__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h4adca57a__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h2d8fe2e4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tagway0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tagway1__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_raddr_w = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_addr_w = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r2[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w = VL_RAND_RESET_Q(54);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w = VL_RAND_RESET_Q(54);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__plru_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_tmp_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_tmp_r = VL_RAND_RESET_Q(54);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way0_tmp_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way1_tmp_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag0valid_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag1valid_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag0valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag1valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc4842331__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h1b7946de__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hda5cc781__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc1a017f7__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0 = 0;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__writehit_head_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tagway0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tagway1__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_inst_araddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_araddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncacheinst_araddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_araddr_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_awaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_awaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_rsel_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_wsel_r = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__debug = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_ar_cache_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_r_user_i = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_aw_cache_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_b_user_i = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wnext_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rnext_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__icache_bank0_way0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__icache_bank1_way0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__icache_bank0_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__icache_bank1_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__dcache_bank0_way0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__dcache_bank1_way0__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__dcache_bank0_way1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040210_top__DOT__dcache_bank1_way1__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_lock_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_cache_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_prot_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_qos_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_region_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_user_i = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_lock_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_cache_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_prot_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_qos_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_region_i = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_user_i = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_w_user_i = VL_RAND_RESET_I(10);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_stop = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_step = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_start = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_step = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__sram_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__sram_size = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memrdatavaild_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memwdatavaild_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__Vtableidx8 = 0;
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__ysyx_22040210_top__DOT__io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
