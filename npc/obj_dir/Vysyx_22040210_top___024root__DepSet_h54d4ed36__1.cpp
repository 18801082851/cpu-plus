// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040210_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040210_top__Syms.h"
#include "Vysyx_22040210_top___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040210_top__ConstPool__TABLE_h8dfe71c9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040210_top__ConstPool__TABLE_h24b4b710_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040210_top__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040210_top__ConstPool__TABLE_h89ef4126_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vysyx_22040210_top__ConstPool__TABLE_hd01aee27_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22040210_top__ConstPool__TABLE_h871e97d2_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22040210_top__ConstPool__TABLE_h354bd121_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040210_top__ConstPool__TABLE_h162b3b79_0;

VL_INLINE_OPT void Vysyx_22040210_top___024root___nba_sequent__TOP__1(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r;
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren 
        = ((~ (IData)(vlSelf->rst)) & ((((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arvalid) 
                                         & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arready))) 
                                        & ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt) 
                                           == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen))) 
                                       | ((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arvalid) 
                                          | (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arready))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel 
        = (1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__plru_r 
                         >> (0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                              >> 5U))))));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__btb_fixwe_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_isjump_r) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_hd37442a4__0 
        = ((3U > (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r)))
            : 3U);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h6256bf21__0 
        = ((0U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r))
            ? (3U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r) 
                     - (IData)(1U))) : 0U);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5 
        = ((5ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w) 
           | (1ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____VdfgTmp_h4dee4f45__0 
        = ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)) 
           | (4U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[0U] 
        = (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o);
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[1U] 
        = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o 
                   >> 0x20U));
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
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)
                                                ? (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0xfU))))
                                                : (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                      >> 0xfU)))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((0x1000U 
                                                & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0xfU))));
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((1U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((0U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                                    } else if ((0x302U 
                                                == 
                                                (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))) {
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w = 0ULL;
                                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
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
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        }
                        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm = 0ULL;
                    } else if ((1U & (~ (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)) {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        } else {
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0xfU))));
                            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                = (QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                      >> 0x14U))));
                        }
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
                        if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                    >> 0x1aU))) {
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
                    if ((0U == (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x1aU))) {
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
                } else {
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
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_valid_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_doing_r)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_qrvalid_r 
        = ((~ (IData)(vlSelf->rst)) & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r
                                       [0U] ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r
                                       [0U] : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r
                                       [0U]));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w 
        = (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r)) 
            & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r)) 
           | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r)) 
              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_mulvalid_r 
        = (1U & ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r) 
                              >> 4U)))) {
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h1b7946de__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hc1a017f7__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w) 
            | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w) 
               | (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r)))) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0));
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
    __Vtableidx4 = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current) 
                                           << 1U) | (IData)(vlSelf->rst))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w 
        = Vysyx_22040210_top__ConstPool__TABLE_h8dfe71c9_0
        [__Vtableidx4];
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w 
        = Vysyx_22040210_top__ConstPool__TABLE_h24b4b710_0
        [__Vtableidx4];
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt;
    vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w) 
            | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5));
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush = 0U;
    } else {
        if ((IData)((0x10U == (0x30U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall))))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r = 0U;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r = 0ULL;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r = 0U;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r = 0ULL;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r = 0ULL;
        } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall) 
                             >> 4U)))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r;
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r 
                = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r;
        }
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r 
            = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush 
            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w)
                ? 0xfU : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss)
                           ? 7U : 0U));
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h7bae7488__0 
        = (1U & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush) 
                  >> 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w)));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r[0U] 
        = vlSelf->__Vdlyvval__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_data_valid_r__v0;
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplier_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplicand_r = 0ULL;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplier_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r = 0ULL;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplicand_r 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r;
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r = 0ULL;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_h758335a5__0));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w = 0U;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_next;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w 
            = ((1U & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                          >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r))) 
                      & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                         >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r))))
                ? 1U : ((1U & (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r)) 
                               & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r) 
                                  >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r))))
                         ? 3U : 0U));
    }
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail 
        = ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w = 0U;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r 
        = ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r)) 
           | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w)));
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__io_master_arvalid = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state))) {
        vlSelf->ysyx_22040210_top__DOT__io_master_arvalid 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i;
    } else if ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state))) {
        vlSelf->ysyx_22040210_top__DOT__io_master_arvalid 
            = (1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_arready)));
    }
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i 
        = (1U & ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))
                  ? (IData)((0U == (3U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))))
                  : (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current) 
                      >> 1U) | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current))));
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
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux = 0ULL;
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
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux = 0ULL;
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
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux 
                    = ((0xfffffffffffff800ULL & (((QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                                  << 0x2bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[0U])) 
                                                    << 0xbU))) 
                       | (QData)((IData)((0x7e0U & 
                                          ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                           << 4U)))));
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
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux 
                    = ((0xfffffffffffff800ULL & (((QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                                  << 0x2bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[0U])) 
                                                    << 0xbU))) 
                       | (QData)((IData)((0x7e0U & 
                                          ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                           << 4U)))));
            }
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
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux = 0ULL;
        }
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
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux = 0ULL;
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
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux 
            = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0)
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)
                    ? ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
                        << 0xbU) | (QData)((IData)(
                                                   (0x7ffU 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))
                    : ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
                        << 0xbU) | (QData)((IData)(
                                                   (0x7ffU 
                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))));
    }
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux 
        = ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate) 
               >> 2U)) & ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                           ? ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)) 
                              & ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck)))
                           : ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)) 
                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r 
        = ((1U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
           & ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w))));
    vlSelf->ysyx_22040210_top__DOT__io_master_arready 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__io_master_arready;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w 
        = ((1U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2)) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w 
        = ((1U < (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1)) 
           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____VdfgTmp_h8730eca7__0));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r) 
           & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_doing_r)) 
              & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r))));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__writehit_head_w 
        = (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w) 
            >> (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r)) 
           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r) 
           | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r) 
              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w)));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_next));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_w_last_i 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
           & ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
              | ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
                 & (3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r)))));
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i 
        = ((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
           & ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current)) 
              | (2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current))));
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o = 0U;
    } else if ((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state))) {
        if ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state)))) {
                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o 
                = vlSelf->ysyx_22040210_top__DOT__io_master_wready;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state)))) {
            vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o = 0U;
        }
    }
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
    vlSelf->ysyx_22040210_top__DOT__io_master_wready 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_awready));
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r 
        = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w 
        = ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull)
            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2
            : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r);
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w = 0U;
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w = 0ULL;
    if (vlSelf->rst) {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state = 0U;
    } else {
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rnext_state;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state 
            = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wnext_state;
    }
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
    vlSelf->ysyx_22040210_top__DOT__io_master_awready 
        = vlSelf->__Vdly__ysyx_22040210_top__DOT__io_master_awready;
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w 
        = ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram) 
                  | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r)) 
                     | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w))))
            ? (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram) 
                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull))
                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2
                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r)
            : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc);
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
    } else if ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current))) {
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
    vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r 
        = ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current)) 
           & ((2U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next)) 
              & (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w))));
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
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U] = 0U;
        vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
            = ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                ? ((QData)((IData)((0x3fU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                             >> 1U)))) 
                   << 5U) : (((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                              ? ((QData)((IData)((0x3fU 
                                                  & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                     >> 1U)))) 
                                 << 5U) : ((QData)((IData)(
                                                           (0x3fU 
                                                            & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt) 
                                                               >> 1U)))) 
                                           << 5U)));
    } else if ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))) {
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

void Vysyx_22040210_top___024root___nba_sequent__TOP__0(Vysyx_22040210_top___024root* vlSelf);

void Vysyx_22040210_top___024root___eval_nba(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vysyx_22040210_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_22040210_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_22040210_top___024root___eval_triggers__ico(Vysyx_22040210_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__ico(Vysyx_22040210_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040210_top___024root___eval_ico(Vysyx_22040210_top___024root* vlSelf);
void Vysyx_22040210_top___024root___eval_triggers__act(Vysyx_22040210_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__act(Vysyx_22040210_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040210_top___024root___eval_act(Vysyx_22040210_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22040210_top___024root___dump_triggers__nba(Vysyx_22040210_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22040210_top___024root___eval(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_22040210_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22040210_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_top.v", 10, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_22040210_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_22040210_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_22040210_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_top.v", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vysyx_22040210_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22040210_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_top.v", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_22040210_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_22040210_top___024root___eval_debug_assertions(Vysyx_22040210_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
