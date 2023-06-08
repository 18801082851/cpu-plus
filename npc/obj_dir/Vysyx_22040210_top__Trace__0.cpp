// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040210_top__Syms.h"


void Vysyx_22040210_top___024root__trace_chg_sub_0(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22040210_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040210_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040210_top___024root*>(voidSelf);
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040210_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_22040210_top___024root__trace_chg_sub_0(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h61e4700c__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf06c572__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf28097a__0;
    VlWide<4>/*127:0*/ __Vtemp_h82d45008__0;
    VlWide<8>/*255:0*/ __Vtemp_h7e818083__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2a35925__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7c6c2e9__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3daa5fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h245ce2fc__0;
    VlWide<4>/*127:0*/ __Vtemp_h5871460b__0;
    VlWide<4>/*127:0*/ __Vtemp_h426410db__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+1,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
                                                 >> 5U)))),6);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall),6);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush),6);
        bufp->chgQData(oldp+4,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w),64);
        bufp->chgBit(oldp+6,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w) 
                              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))));
        bufp->chgCData(oldp+7,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w),8);
        bufp->chgQData(oldp+8,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w),64);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wnext_state),3);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rnext_state),3);
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i));
        bufp->chgBit(oldp+15,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w))));
        bufp->chgCData(oldp+16,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next),2);
        bufp->chgBit(oldp+17,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dcache_req_r));
        bufp->chgQData(oldp+19,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r),64);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next),2);
        bufp->chgBit(oldp+22,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r));
        bufp->chgQData(oldp+23,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r),64);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r),8);
        bufp->chgBit(oldp+26,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) 
                               & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                                  & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))))));
        bufp->chgBit(oldp+27,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w) 
                                        | (0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)))))));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w));
        bufp->chgQData(oldp+29,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w),64);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_next),3);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_next),3);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__debug),2);
        bufp->chgQData(oldp+34,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux),64);
        bufp->chgWData(oldp+36,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux),256);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w),2);
        bufp->chgBit(oldp+45,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w))));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux));
        bufp->chgQData(oldp+48,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w) 
                                  | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))
                                  ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                  : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w)),64);
        bufp->chgQData(oldp+50,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux),64);
        bufp->chgCData(oldp+52,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w) 
                                  & (0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)))
                                  ? 1U : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                           ? 2U : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                                    ? 
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                                                     ? 3U
                                                     : 
                                                    (((0U 
                                                       != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)) 
                                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck))
                                                      ? 1U
                                                      : 3U))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                                     ? 
                                                    ((0x7fU 
                                                      != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt))
                                                      ? 1U
                                                      : 4U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w))
                                                       ? 0U
                                                       : 4U)
                                                      : 0U)))))),3);
        bufp->chgCData(oldp+53,((0x3fU & (IData)(((
                                                   ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w) 
                                                    | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                                    : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w) 
                                                  >> 5U)))),6);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__writehit_head_w));
        bufp->chgCData(oldp+55,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w),8);
        bufp->chgQData(oldp+56,((0xffffffffffffffe0ULL 
                                 & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux)),64);
        bufp->chgQData(oldp+58,((0xffffffffffffffe0ULL 
                                 & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux)),64);
        bufp->chgQData(oldp+60,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w),64);
        bufp->chgCData(oldp+62,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w 
                                                  >> 5U)))),6);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w));
        bufp->chgQData(oldp+65,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w),64);
        bufp->chgQData(oldp+67,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc),64);
        bufp->chgQData(oldp+69,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc)),64);
        bufp->chgIData(oldp+71,((0x7ffffffU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc))),27);
        bufp->chgIData(oldp+72,((0x7ffffffU & ((IData)(4U) 
                                               + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc)))),27);
        bufp->chgSData(oldp+73,(((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))
                                  ? ((0x1ffeU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r) 
                                                 << 1U)) 
                                     | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w))
                                  : (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush)) 
                                      & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu)) 
                                         & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i)))
                                      ? ((0x1ffeU & 
                                          ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr) 
                                           << 1U)) 
                                         | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w) 
                                            | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w) 
                                               | (0U 
                                                  != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)))))
                                      : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr)))),13);
        bufp->chgSData(oldp+74,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____Vcellinp__ysyx_22040210_pht_u0__raddr1),13);
        bufp->chgBit(oldp+75,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall) 
                                        >> 3U)))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush) 
                                     >> 1U))));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst1valid_i));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst2valid_i));
        bufp->chgBit(oldp+79,(((~ (IData)((6U == (6U 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall))))) 
                               & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+80,(vlSelf->ysyx_22040210_top__DOT__io_master_awready));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_22040210_top__DOT__io_master_awvalid));
        bufp->chgIData(oldp+82,((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o)),32);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_22040210_top__DOT__io_master_awlen),8);
        bufp->chgCData(oldp+84,(vlSelf->ysyx_22040210_top__DOT__io_master_awsize),3);
        bufp->chgCData(oldp+85,(vlSelf->ysyx_22040210_top__DOT__io_master_awburst),2);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_22040210_top__DOT__io_master_wready));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_22040210_top__DOT__io_master_wvalid));
        bufp->chgQData(oldp+88,(vlSelf->ysyx_22040210_top__DOT__io_master_wdata),64);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_22040210_top__DOT__io_master_wstrb),8);
        bufp->chgBit(oldp+91,(vlSelf->ysyx_22040210_top__DOT__io_master_bvalid));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_22040210_top__DOT__io_master_arready));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_22040210_top__DOT__io_master_arvalid));
        bufp->chgIData(oldp+94,((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o)),32);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_22040210_top__DOT__io_master_arlen),8);
        bufp->chgCData(oldp+96,(vlSelf->ysyx_22040210_top__DOT__io_master_arsize),3);
        bufp->chgCData(oldp+97,(vlSelf->ysyx_22040210_top__DOT__io_master_arburst),2);
        bufp->chgBit(oldp+98,(vlSelf->ysyx_22040210_top__DOT__io_master_rready));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_22040210_top__DOT__io_master_rvalid));
        bufp->chgQData(oldp+100,(vlSelf->ysyx_22040210_top__DOT__io_master_rdata),64);
        bufp->chgBit(oldp+102,(vlSelf->ysyx_22040210_top__DOT__io_master_rlast));
        bufp->chgCData(oldp+103,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w 
                                                   >> 5U)))),6);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_22040210_top__DOT__io_sram0_wen));
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h88d6951a__0) {
            __Vtemp_h61e4700c__0[0U] = 0xffffffffU;
            __Vtemp_h61e4700c__0[1U] = 0xffffffffU;
            __Vtemp_h61e4700c__0[2U] = 0xffffffffU;
            __Vtemp_h61e4700c__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_h61e4700c__0[0U] = 0U;
            __Vtemp_h61e4700c__0[1U] = 0U;
            __Vtemp_h61e4700c__0[2U] = 0U;
            __Vtemp_h61e4700c__0[3U] = 0U;
        }
        bufp->chgWData(oldp+105,(__Vtemp_h61e4700c__0),128);
        __Vtemp_hdf06c572__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[0U];
        __Vtemp_hdf06c572__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[1U];
        __Vtemp_hdf06c572__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[2U];
        __Vtemp_hdf06c572__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[3U];
        bufp->chgWData(oldp+109,(__Vtemp_hdf06c572__0),128);
        bufp->chgWData(oldp+113,(vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata),128);
        __Vtemp_hdf28097a__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[4U];
        __Vtemp_hdf28097a__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[5U];
        __Vtemp_hdf28097a__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[6U];
        __Vtemp_hdf28097a__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[7U];
        bufp->chgWData(oldp+117,(__Vtemp_hdf28097a__0),128);
        bufp->chgWData(oldp+121,(vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata),128);
        bufp->chgBit(oldp+125,(vlSelf->ysyx_22040210_top__DOT__io_sram2_wen));
        if (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____VdfgTmp_h4adca57a__0) {
            __Vtemp_h82d45008__0[0U] = 0xffffffffU;
            __Vtemp_h82d45008__0[1U] = 0xffffffffU;
            __Vtemp_h82d45008__0[2U] = 0xffffffffU;
            __Vtemp_h82d45008__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_h82d45008__0[0U] = 0U;
            __Vtemp_h82d45008__0[1U] = 0U;
            __Vtemp_h82d45008__0[2U] = 0U;
            __Vtemp_h82d45008__0[3U] = 0U;
        }
        bufp->chgWData(oldp+126,(__Vtemp_h82d45008__0),128);
        bufp->chgWData(oldp+130,(vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata),128);
        bufp->chgWData(oldp+134,(vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata),128);
        bufp->chgBit(oldp+138,((0U != (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] 
                                         | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U]) 
                                        | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U]) 
                                       | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U]))));
        bufp->chgWData(oldp+139,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux),128);
        bufp->chgWData(oldp+143,(vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata),128);
        bufp->chgWData(oldp+147,(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata),128);
        bufp->chgWData(oldp+151,(vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata),128);
        bufp->chgWData(oldp+155,(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata),128);
        bufp->chgBit(oldp+159,((0U != (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] 
                                         | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U]) 
                                        | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U]) 
                                       | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U]))));
        bufp->chgWData(oldp+160,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux),128);
        bufp->chgWData(oldp+164,(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata),128);
        bufp->chgWData(oldp+168,(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata),128);
        bufp->chgQData(oldp+172,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr),64);
        bufp->chgQData(oldp+174,((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                  + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))),64);
        bufp->chgCData(oldp+176,((0xffU & (IData)(vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o))),8);
        bufp->chgCData(oldp+177,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 8U)))),8);
        bufp->chgCData(oldp+178,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x10U)))),8);
        bufp->chgCData(oldp+179,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x18U)))),8);
        bufp->chgCData(oldp+180,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x20U)))),8);
        bufp->chgCData(oldp+181,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x28U)))),8);
        bufp->chgCData(oldp+182,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x30U)))),8);
        bufp->chgCData(oldp+183,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                   >> 0x38U)))),8);
        bufp->chgQData(oldp+184,(((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                   ? vlSelf->ysyx_22040210_top__DOT__io_master_wdata
                                   : ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                       ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                           ? vlSelf->ysyx_22040210_top__DOT__io_master_wdata
                                           : (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__io_master_wdata)))
                                       : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_wdata))))
                                           : (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_wdata)))))))),64);
        bufp->chgBit(oldp+186,((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__wen)))));
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren)))));
        bufp->chgCData(oldp+188,(((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                   ? ((1U & (IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                               ? 0x7fU
                                               : 0xbfU)
                                           : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                               ? 0xdfU
                                               : 0xefU))
                                       : ((1U & (IData)(
                                                        (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                               ? 0xf7U
                                               : 0xfbU)
                                           : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                               ? 0xfdU
                                               : 0xfeU)))
                                   : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                       ? ((1U & (IData)(
                                                        (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                         >> 2U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                             >> 1U)))
                                               ? 0x3fU
                                               : 0xcfU)
                                           : ((1U & (IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                             >> 1U)))
                                               ? 0xf3U
                                               : 0xfcU))
                                       : ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                           ? ((1U & (IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                              >> 2U)))
                                                   ? 0xfU
                                                   : 0xffU)
                                               : 0xf0U)
                                           : ((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                               ? 0U
                                               : 0xffU))))),8);
        bufp->chgCData(oldp+189,(((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                                   ? ((1U & (IData)(
                                                    ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                      + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                          + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                         >> 1U)))
                                           ? ((1U & 
                                               ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                               ? 0x7fU
                                               : 0xbfU)
                                           : ((1U & 
                                               ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                               ? 0xdfU
                                               : 0xefU))
                                       : ((1U & (IData)(
                                                        ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                          + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                         >> 1U)))
                                           ? ((1U & 
                                               ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                               ? 0xf7U
                                               : 0xfbU)
                                           : ((1U & 
                                               ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                               ? 0xfdU
                                               : 0xfeU)))
                                   : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                                       ? ((1U & (IData)(
                                                        ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                          + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                         >> 2U)))
                                           ? ((1U & (IData)(
                                                            ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                              + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                             >> 1U)))
                                               ? 0x3fU
                                               : 0xcfU)
                                           : ((1U & (IData)(
                                                            ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                              + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                             >> 1U)))
                                               ? 0xf3U
                                               : 0xfcU))
                                       : ((2U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                                           ? ((1U & (IData)(
                                                            ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                              + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                               + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                              >> 2U)))
                                                   ? 0xfU
                                                   : 0xffU)
                                               : 0xf0U)
                                           : ((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                                               ? 0U
                                               : 0xffU))))),8);
        bufp->chgQData(oldp+190,((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o))),64);
        bufp->chgQData(oldp+192,((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o))),64);
        bufp->chgBit(oldp+194,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__wen));
        bufp->chgCData(oldp+195,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize),3);
        bufp->chgQData(oldp+196,(vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o),64);
        bufp->chgBit(oldp+198,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren));
        bufp->chgCData(oldp+199,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize),3);
        bufp->chgQData(oldp+200,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start),64);
        bufp->chgQData(oldp+202,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_stop),64);
        bufp->chgSData(oldp+204,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt),16);
        bufp->chgSData(oldp+205,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_step),9);
        bufp->chgBit(oldp+206,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt_flag));
        bufp->chgCData(oldp+207,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen),8);
        bufp->chgQData(oldp+208,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_start),64);
        bufp->chgQData(oldp+210,(((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                   ? (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen))
                                   : ((2U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                       ? ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                           ? (QData)((IData)(
                                                             ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen) 
                                                              << 3U)))
                                           : (QData)((IData)(
                                                             ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen) 
                                                              << 2U))))
                                       : ((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                           ? (QData)((IData)(
                                                             ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen) 
                                                              << 1U)))
                                           : (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen)))))),64);
        bufp->chgQData(oldp+212,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt),64);
        bufp->chgSData(oldp+214,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_step),9);
        bufp->chgBit(oldp+215,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt_flag));
        bufp->chgCData(oldp+216,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen),8);
        bufp->chgCData(oldp+217,((0xffU & (~ ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                                     ? 0x7fU
                                                     : 0xbfU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                                     ? 0xdfU
                                                     : 0xefU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                                     ? 0xf7U
                                                     : 0xfbU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr))
                                                     ? 0xfdU
                                                     : 0xfeU)))
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                                >> 1U)))
                                                     ? 0x3fU
                                                     : 0xcfU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                                >> 1U)))
                                                     ? 0xf3U
                                                     : 0xfcU))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                                >> 2U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                                 >> 2U)))
                                                      ? 0xfU
                                                      : 0xffU)
                                                     : 0xf0U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                                     ? 0U
                                                     : 0xffU))))))),8);
        bufp->chgBit(oldp+218,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memrdatavaild_o));
        bufp->chgBit(oldp+219,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memwdatavaild_o));
        bufp->chgQData(oldp+220,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line1),64);
        bufp->chgQData(oldp+222,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line2),64);
        bufp->chgCData(oldp+224,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_mask),8);
        bufp->chgQData(oldp+225,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_addr),64);
        bufp->chgQData(oldp+227,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc),64);
        bufp->chgQData(oldp+229,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pc_w),64);
        bufp->chgIData(oldp+231,(((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                 >> 3U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                     >> 2U)))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U]
                                       : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U])
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                     >> 2U)))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U]
                                       : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U]))),32);
        bufp->chgQData(oldp+232,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__thispc2),64);
        bufp->chgIData(oldp+234,(((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                                 >> 3U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                                     >> 2U)))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U]
                                       : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U])
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                                     >> 2U)))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U]
                                       : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U]))),32);
        bufp->chgBit(oldp+235,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dpicstop_r));
        bufp->chgBit(oldp+236,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w) 
                                | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success) 
                                    | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r)))));
        bufp->chgBit(oldp+237,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w));
        bufp->chgQData(oldp+238,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o),64);
        bufp->chgCData(oldp+240,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w),3);
        bufp->chgBit(oldp+241,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i));
        bufp->chgBit(oldp+242,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i));
        bufp->chgQData(oldp+243,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__rw_w_data_i),64);
        bufp->chgQData(oldp+245,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i),64);
        bufp->chgQData(oldp+247,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i),64);
        bufp->chgCData(oldp+249,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i),8);
        bufp->chgCData(oldp+250,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i),8);
        bufp->chgBit(oldp+251,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o));
        bufp->chgQData(oldp+253,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o),64);
        bufp->chgBit(oldp+255,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w));
        bufp->chgBit(oldp+256,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w));
        bufp->chgBit(oldp+257,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w));
        bufp->chgBit(oldp+258,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild));
        bufp->chgBit(oldp+259,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild) 
                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2) 
                                   & (7U != (7U & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                           >> 2U))))))));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r));
        bufp->chgBit(oldp+261,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w));
        bufp->chgSData(oldp+262,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1bhr_w),13);
        bufp->chgCData(oldp+263,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pht_w),2);
        bufp->chgBit(oldp+264,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1taken_w));
        bufp->chgQData(oldp+265,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1takenaddr_w),64);
        bufp->chgSData(oldp+267,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2bhr_w),13);
        bufp->chgCData(oldp+268,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2pht_w),2);
        bufp->chgBit(oldp+269,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2taken_w));
        bufp->chgQData(oldp+270,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2takenaddr_w),64);
        bufp->chgSData(oldp+272,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr),13);
        bufp->chgCData(oldp+273,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu_pht_w),2);
        bufp->chgBit(oldp+274,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w));
        bufp->chgBit(oldp+275,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w));
        bufp->chgQData(oldp+276,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w),64);
        bufp->chgQData(oldp+278,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w),64);
        bufp->chgBit(oldp+280,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w));
        bufp->chgBit(oldp+281,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w));
        bufp->chgCData(oldp+282,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i),4);
        bufp->chgCData(oldp+283,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i),4);
        bufp->chgBit(oldp+284,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_w_last_i));
        bufp->chgQData(oldp+285,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o),64);
        bufp->chgCData(oldp+287,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_ar_cache_o),4);
        bufp->chgQData(oldp+288,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o),64);
        bufp->chgCData(oldp+290,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_aw_cache_o),4);
        bufp->chgBit(oldp+291,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_awlen))));
        bufp->chgCData(oldp+292,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state),3);
        bufp->chgCData(oldp+293,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state),3);
        bufp->chgCData(oldp+294,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_cpustall_i),6);
        bufp->chgBit(oldp+295,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_rready_o));
        bufp->chgBit(oldp+296,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_wvaild_o));
        bufp->chgCData(oldp+297,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current),2);
        bufp->chgQData(oldp+298,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r),64);
        bufp->chgQData(oldp+300,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_raddr_tmpr),64);
        bufp->chgBit(oldp+302,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r));
        bufp->chgBit(oldp+303,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r));
        bufp->chgCData(oldp+304,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current),2);
        bufp->chgQData(oldp+305,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_waddr_tmp_r),64);
        bufp->chgQData(oldp+307,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wdata_tmp_r),64);
        bufp->chgCData(oldp+309,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wsel_tmp_r),8);
        bufp->chgBit(oldp+310,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r));
        bufp->chgQData(oldp+311,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r),64);
        bufp->chgBit(oldp+313,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r));
        bufp->chgQData(oldp+314,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rdata_w),64);
        bufp->chgQData(oldp+316,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r
                                 [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                 >> 3U)))]),64);
        bufp->chgQData(oldp+318,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepc_r),64);
        bufp->chgSData(oldp+320,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachebhr_r),13);
        bufp->chgCData(oldp+321,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepht_r),2);
        bufp->chgBit(oldp+322,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetaken_r));
        bufp->chgQData(oldp+323,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetakenaddr_r),64);
        bufp->chgBit(oldp+325,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w));
        bufp->chgWData(oldp+326,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w),256);
        bufp->chgBit(oldp+334,(((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w)) 
                                & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r) 
                                       | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r 
                                          == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r))) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail)))));
        bufp->chgBit(oldp+335,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w));
        bufp->chgIData(oldp+336,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rdata_w),32);
        bufp->chgBit(oldp+337,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w));
        bufp->chgBit(oldp+338,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w));
        bufp->chgBit(oldp+339,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w));
        bufp->chgBit(oldp+340,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w));
        bufp->chgWData(oldp+341,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w),256);
        bufp->chgQData(oldp+349,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r),64);
        bufp->chgBit(oldp+351,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w));
        __Vtemp_h7e818083__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][0U];
        __Vtemp_h7e818083__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][1U];
        __Vtemp_h7e818083__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][2U];
        __Vtemp_h7e818083__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][3U];
        __Vtemp_h7e818083__0[4U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][4U];
        __Vtemp_h7e818083__0[5U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][5U];
        __Vtemp_h7e818083__0[6U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][6U];
        __Vtemp_h7e818083__0[7U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data
            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r][7U];
        bufp->chgWData(oldp+352,(__Vtemp_h7e818083__0),256);
        bufp->chgQData(oldp+360,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                                 [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r]),64);
        bufp->chgBit(oldp+362,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r));
        bufp->chgBit(oldp+363,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__uncache_inst_flush));
        bufp->chgBit(oldp+364,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncache_stallpc_r));
        bufp->chgQData(oldp+365,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc)),64);
        bufp->chgBit(oldp+367,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success) 
                                 | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r))));
        bufp->chgBit(oldp+368,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r) 
                                         | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2))))));
        bufp->chgBit(oldp+369,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r) 
                                & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w)) 
                                   & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r) 
                                         | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2)))))));
        bufp->chgCData(oldp+370,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current),3);
        bufp->chgCData(oldp+371,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r),2);
        bufp->chgCData(oldp+372,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current),3);
        bufp->chgCData(oldp+373,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r),2);
        bufp->chgQData(oldp+374,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_inst_araddr_r),64);
        bufp->chgQData(oldp+376,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_araddr_r),64);
        bufp->chgQData(oldp+378,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncacheinst_araddr_r),64);
        bufp->chgQData(oldp+380,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_araddr_r),64);
        bufp->chgWData(oldp+382,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r),256);
        bufp->chgQData(oldp+390,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_awaddr_r),64);
        bufp->chgQData(oldp+392,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_wdata_r),64);
        bufp->chgQData(oldp+394,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_awaddr_r),64);
        bufp->chgCData(oldp+396,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_rsel_r),8);
        bufp->chgCData(oldp+397,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_wsel_r),8);
        bufp->chgIData(oldp+398,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[0]),32);
        bufp->chgIData(oldp+399,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[1]),32);
        bufp->chgBit(oldp+400,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r));
        bufp->chgBit(oldp+401,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
        bufp->chgQData(oldp+402,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r),64);
        bufp->chgCData(oldp+404,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r),8);
        bufp->chgQData(oldp+405,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0]),64);
        bufp->chgQData(oldp+407,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1]),64);
        bufp->chgQData(oldp+409,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2]),64);
        bufp->chgQData(oldp+411,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3]),64);
        bufp->chgQData(oldp+413,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0)
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                   : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)
                                       ? ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
                                           << 0xbU) 
                                          | (QData)((IData)(
                                                            (0x7ffU 
                                                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))
                                       : ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
                                           << 0xbU) 
                                          | (QData)((IData)(
                                                            (0x7ffU 
                                                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))))),64);
        bufp->chgQData(oldp+415,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[0]),64);
        bufp->chgQData(oldp+417,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[1]),64);
        bufp->chgQData(oldp+419,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[2]),64);
        bufp->chgQData(oldp+421,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[3]),64);
        bufp->chgBit(oldp+423,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))));
        bufp->chgWData(oldp+424,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w),128);
        bufp->chgWData(oldp+428,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w),128);
        bufp->chgQData(oldp+432,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0]),64);
        bufp->chgQData(oldp+434,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1]),64);
        bufp->chgQData(oldp+436,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2]),64);
        bufp->chgQData(oldp+438,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3]),64);
        bufp->chgQData(oldp+440,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[0]),64);
        bufp->chgQData(oldp+442,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[1]),64);
        bufp->chgQData(oldp+444,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[2]),64);
        bufp->chgQData(oldp+446,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[3]),64);
        bufp->chgQData(oldp+448,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[0U]))))),54);
        bufp->chgQData(oldp+450,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w),54);
        bufp->chgWData(oldp+452,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w),128);
        bufp->chgQData(oldp+456,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[0]),64);
        bufp->chgQData(oldp+458,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[1]),64);
        bufp->chgQData(oldp+460,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[2]),64);
        bufp->chgQData(oldp+462,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[3]),64);
        bufp->chgQData(oldp+464,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[0U]))))),54);
        bufp->chgQData(oldp+466,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w),54);
        bufp->chgQData(oldp+468,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__plru_r),64);
        bufp->chgBit(oldp+470,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel));
        bufp->chgBit(oldp+471,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w));
        bufp->chgBit(oldp+472,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w));
        bufp->chgBit(oldp+473,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success));
        bufp->chgBit(oldp+474,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail));
        bufp->chgWData(oldp+475,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r),128);
        bufp->chgBit(oldp+479,((1U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r[
                                      ((3U & ((IData)(
                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                       >> 5U)) 
                                              >> 4U)) 
                                       | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel) 
                                          >> 5U))] 
                                      >> (0x1fU & (
                                                   (0x7eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                                >> 5U)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)))))));
        bufp->chgQData(oldp+480,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_tmp_r),64);
        bufp->chgQData(oldp+482,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w),64);
        bufp->chgQData(oldp+484,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w),64);
        bufp->chgQData(oldp+486,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[0]),64);
        bufp->chgQData(oldp+488,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[1]),64);
        bufp->chgQData(oldp+490,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[2]),64);
        bufp->chgQData(oldp+492,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[3]),64);
        bufp->chgQData(oldp+494,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[0]),64);
        bufp->chgQData(oldp+496,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[1]),64);
        bufp->chgQData(oldp+498,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[2]),64);
        bufp->chgQData(oldp+500,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[3]),64);
        bufp->chgQData(oldp+502,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[0]),64);
        bufp->chgQData(oldp+504,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[1]),64);
        bufp->chgQData(oldp+506,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[2]),64);
        bufp->chgQData(oldp+508,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[3]),64);
        bufp->chgQData(oldp+510,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_tmp_r),54);
        bufp->chgBit(oldp+512,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way0_tmp_r));
        bufp->chgBit(oldp+513,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way1_tmp_r));
        bufp->chgQData(oldp+514,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0]),64);
        bufp->chgQData(oldp+516,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1]),64);
        bufp->chgQData(oldp+518,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2]),64);
        bufp->chgQData(oldp+520,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3]),64);
        bufp->chgCData(oldp+522,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt),7);
        bufp->chgCData(oldp+523,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate),3);
        bufp->chgBit(oldp+524,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck));
        bufp->chgQData(oldp+525,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag0valid_r),64);
        bufp->chgQData(oldp+527,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag1valid_r),64);
        bufp->chgBit(oldp+529,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag0valid));
        bufp->chgBit(oldp+530,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag1valid));
        bufp->chgWData(oldp+531,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q),128);
        __Vtemp_hd2a35925__0[0U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                            >> 0xbU));
        __Vtemp_hd2a35925__0[1U] = (IData)(((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                             >> 0xbU) 
                                            >> 0x20U));
        __Vtemp_hd2a35925__0[2U] = 0U;
        __Vtemp_hd2a35925__0[3U] = 0U;
        bufp->chgWData(oldp+535,(__Vtemp_hd2a35925__0),128);
        bufp->chgWData(oldp+539,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q),128);
        bufp->chgWData(oldp+543,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o),256);
        bufp->chgWData(oldp+551,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[0]),256);
        bufp->chgWData(oldp+559,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[1]),256);
        bufp->chgWData(oldp+567,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[2]),256);
        bufp->chgWData(oldp+575,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[3]),256);
        bufp->chgWData(oldp+583,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[4]),256);
        bufp->chgWData(oldp+591,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[5]),256);
        bufp->chgWData(oldp+599,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[6]),256);
        bufp->chgWData(oldp+607,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[7]),256);
        bufp->chgQData(oldp+615,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[0]),64);
        bufp->chgQData(oldp+617,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[1]),64);
        bufp->chgQData(oldp+619,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[2]),64);
        bufp->chgQData(oldp+621,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[3]),64);
        bufp->chgQData(oldp+623,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[4]),64);
        bufp->chgQData(oldp+625,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[5]),64);
        bufp->chgQData(oldp+627,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[6]),64);
        bufp->chgQData(oldp+629,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[7]),64);
        bufp->chgCData(oldp+631,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r),3);
        bufp->chgCData(oldp+632,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r),3);
        bufp->chgCData(oldp+633,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r),8);
        bufp->chgCData(oldp+634,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r),8);
        bufp->chgBit(oldp+635,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r));
        bufp->chgBit(oldp+636,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success_r2));
        bufp->chgBit(oldp+637,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__bus_readsuccess_r2));
        bufp->chgSData(oldp+638,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1bhr_r),13);
        bufp->chgCData(oldp+639,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1pht_r),2);
        bufp->chgBit(oldp+640,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1taken_r));
        bufp->chgQData(oldp+641,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1takenaddr_r),64);
        bufp->chgSData(oldp+643,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2bhr_r),13);
        bufp->chgCData(oldp+644,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2pht_r),2);
        bufp->chgBit(oldp+645,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2taken_r));
        bufp->chgQData(oldp+646,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2takenaddr_r),64);
        bufp->chgBit(oldp+648,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
        bufp->chgBit(oldp+649,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r));
        bufp->chgQData(oldp+650,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc_r),64);
        bufp->chgBit(oldp+652,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r));
        bufp->chgQData(oldp+653,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc2_r),64);
        bufp->chgQData(oldp+655,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r),64);
        bufp->chgBit(oldp+657,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram));
        bufp->chgQData(oldp+658,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w),64);
        bufp->chgQData(oldp+660,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull)
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2
                                   : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r)),64);
        bufp->chgWData(oldp+662,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0]),128);
        bufp->chgWData(oldp+666,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1]),128);
        bufp->chgWData(oldp+670,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2),128);
        bufp->chgWData(oldp+674,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2),128);
        bufp->chgBit(oldp+678,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w));
        bufp->chgBit(oldp+679,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w));
        bufp->chgBit(oldp+680,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success));
        bufp->chgBit(oldp+681,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail));
        bufp->chgQData(oldp+682,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r),64);
        __Vtemp_hb7c6c2e9__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][0U];
        __Vtemp_hb7c6c2e9__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][1U];
        __Vtemp_hb7c6c2e9__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][2U];
        __Vtemp_hb7c6c2e9__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][3U];
        bufp->chgWData(oldp+684,(__Vtemp_hb7c6c2e9__0),128);
        __Vtemp_hf3daa5fa__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][0U];
        __Vtemp_hf3daa5fa__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][1U];
        __Vtemp_hf3daa5fa__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][2U];
        __Vtemp_hf3daa5fa__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                            >> 4U)))][3U];
        bufp->chgWData(oldp+688,(__Vtemp_hf3daa5fa__0),128);
        __Vtemp_h245ce2fc__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][0U];
        __Vtemp_h245ce2fc__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][1U];
        __Vtemp_h245ce2fc__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][2U];
        __Vtemp_h245ce2fc__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][3U];
        bufp->chgWData(oldp+692,(__Vtemp_h245ce2fc__0),128);
        __Vtemp_h5871460b__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][0U];
        __Vtemp_h5871460b__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][1U];
        __Vtemp_h5871460b__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][2U];
        __Vtemp_h5871460b__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w
            [(1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                            >> 4U)))][3U];
        bufp->chgWData(oldp+696,(__Vtemp_h5871460b__0),128);
        bufp->chgWData(oldp+700,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0]),128);
        bufp->chgWData(oldp+704,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1]),128);
        bufp->chgQData(oldp+708,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[0U]))))),54);
        bufp->chgWData(oldp+710,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0]),128);
        bufp->chgWData(oldp+714,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1]),128);
        bufp->chgQData(oldp+718,((0x3fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[0U]))))),54);
        bufp->chgWData(oldp+720,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w),128);
        bufp->chgWData(oldp+724,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w),128);
        bufp->chgQData(oldp+728,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__plru_r),64);
        bufp->chgBit(oldp+730,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel));
        bufp->chgBit(oldp+731,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail_r2));
        bufp->chgBit(oldp+732,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2));
        bufp->chgBit(oldp+733,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2));
        bufp->chgBit(oldp+734,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_r2));
        bufp->chgBit(oldp+735,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_r2));
        bufp->chgBit(oldp+736,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r2));
        bufp->chgQData(oldp+737,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2),64);
        bufp->chgQData(oldp+739,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2),64);
        bufp->chgQData(oldp+741,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag0valid_r),64);
        bufp->chgQData(oldp+743,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag1valid_r),64);
        bufp->chgBit(oldp+745,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull));
        bufp->chgBit(oldp+746,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag0valid));
        bufp->chgBit(oldp+747,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag1valid));
        bufp->chgBit(oldp+748,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r));
        bufp->chgBit(oldp+749,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success) 
                                | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w))));
        bufp->chgWData(oldp+750,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q),128);
        __Vtemp_h426410db__0[0U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                            >> 0xbU));
        __Vtemp_h426410db__0[1U] = (IData)(((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                             >> 0xbU) 
                                            >> 0x20U));
        __Vtemp_h426410db__0[2U] = 0U;
        __Vtemp_h426410db__0[3U] = 0U;
        bufp->chgWData(oldp+754,(__Vtemp_h426410db__0),128);
        bufp->chgWData(oldp+758,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q),128);
        bufp->chgBit(oldp+762,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i));
        bufp->chgBit(oldp+763,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w));
        bufp->chgBit(oldp+764,(((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)) 
                                & (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w) 
                                    | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)) 
                                   & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r) 
                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w))))));
        bufp->chgBit(oldp+765,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w));
        bufp->chgQData(oldp+766,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w),64);
        bufp->chgBit(oldp+768,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w));
        bufp->chgIData(oldp+769,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r),32);
        bufp->chgIData(oldp+770,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst_r),32);
        bufp->chgQData(oldp+771,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r),64);
        bufp->chgQData(oldp+773,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r)),64);
        bufp->chgBit(oldp+775,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w));
        bufp->chgBit(oldp+776,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w));
        bufp->chgQData(oldp+777,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w),64);
        bufp->chgQData(oldp+779,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r),64);
        bufp->chgQData(oldp+781,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w),64);
        bufp->chgBit(oldp+783,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w));
        bufp->chgQData(oldp+784,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w),64);
        bufp->chgQData(oldp+786,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w))
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                   : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)
                                       ? ((0x341ULL 
                                           == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                           ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                           : ((0x305ULL 
                                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                               ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                               : ((0x342ULL 
                                                   == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                   : 
                                                  ((0x300ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                    : 0ULL))))
                                       : 0ULL))),64);
        bufp->chgBit(oldp+788,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w));
        bufp->chgQData(oldp+789,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w),64);
        bufp->chgQData(oldp+791,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w))
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                   : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)
                                       ? ((0x341ULL 
                                           == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                           ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                           : ((0x305ULL 
                                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                               ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                               : ((0x342ULL 
                                                   == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                   : 
                                                  ((0x300ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                    : 0ULL))))
                                       : 0ULL))),64);
        bufp->chgBit(oldp+793,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w));
        bufp->chgCData(oldp+794,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w),8);
        bufp->chgCData(oldp+795,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w),3);
        bufp->chgQData(oldp+796,(((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r))
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm
                                   : (((- (QData)((IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((0x800U 
                                                                    & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                            >> 7U))))))))),64);
        bufp->chgQData(oldp+798,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w),64);
        bufp->chgBit(oldp+800,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w));
        bufp->chgBit(oldp+801,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w));
        bufp->chgQData(oldp+802,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csr1we_r))
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w
                                   : ((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r 
                                         == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w) 
                                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)) 
                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r
                                       : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)
                                           ? ((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w 
                                                 == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                               & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w))
                                               ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                               : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)
                                                   ? 
                                                  ((0x341ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                                    : 
                                                   ((0x305ULL 
                                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                     ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                                     : 
                                                    ((0x342ULL 
                                                      == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                      ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                      : 
                                                     ((0x300ULL 
                                                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                       : 0ULL))))
                                                   : 0ULL))
                                           : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)
                                               ? 0ULL
                                               : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
        bufp->chgQData(oldp+804,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csr1we_r))
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w
                                   : ((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r 
                                         == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w) 
                                        & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)) 
                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r))
                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r
                                       : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)
                                           ? ((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                                 == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                               & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w))
                                               ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                               : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)
                                                   ? 
                                                  ((0x341ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                                    : 
                                                   ((0x305ULL 
                                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                     ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                                     : 
                                                    ((0x342ULL 
                                                      == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                      ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                      : 
                                                     ((0x300ULL 
                                                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                       ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                       : 0ULL))))
                                                   : 0ULL))
                                           : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)
                                               ? 0ULL
                                               : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
        bufp->chgQData(oldp+806,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w),64);
        bufp->chgBit(oldp+808,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w));
        bufp->chgQData(oldp+809,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr
                                 [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),64);
        bufp->chgBit(oldp+811,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken
                               [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]));
        bufp->chgCData(oldp+812,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r
                                 [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),2);
        bufp->chgSData(oldp+813,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r
                                 [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),13);
        bufp->chgBit(oldp+814,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss));
        bufp->chgBit(oldp+815,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prsuccess));
        bufp->chgCData(oldp+816,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1pht_r),2);
        bufp->chgSData(oldp+817,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r),13);
        bufp->chgBit(oldp+818,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1taken_r));
        bufp->chgQData(oldp+819,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1takenaddr_r),64);
        bufp->chgQData(oldp+821,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r),64);
        bufp->chgQData(oldp+823,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dnpc_r),64);
        bufp->chgBit(oldp+825,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dpicstop_r));
        bufp->chgCData(oldp+826,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r),8);
        bufp->chgCData(oldp+827,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r),3);
        bufp->chgQData(oldp+828,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r),64);
        bufp->chgQData(oldp+830,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r),64);
        bufp->chgQData(oldp+832,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r),64);
        bufp->chgQData(oldp+834,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_r),64);
        bufp->chgBit(oldp+836,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r));
        bufp->chgBit(oldp+837,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_instvalid_r));
        bufp->chgQData(oldp+838,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop1_wdata_r),64);
        bufp->chgQData(oldp+840,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r),64);
        bufp->chgQData(oldp+842,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r),64);
        bufp->chgBit(oldp+844,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csr1we_r));
        bufp->chgCData(oldp+845,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w),3);
        bufp->chgQData(oldp+846,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                   ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w
                                   : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dnpc_r)),64);
        bufp->chgQData(oldp+848,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w),64);
        bufp->chgQData(oldp+850,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w),64);
        bufp->chgQData(oldp+852,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w),64);
        bufp->chgBit(oldp+854,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prmiss_r));
        bufp->chgBit(oldp+855,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prsuccess_r));
        bufp->chgCData(oldp+856,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1pht_r),2);
        bufp->chgSData(oldp+857,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1bhr_r),13);
        bufp->chgBit(oldp+858,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1taken_r));
        bufp->chgQData(oldp+859,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r),64);
        bufp->chgQData(oldp+861,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r),64);
        bufp->chgQData(oldp+863,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dnpc_r),64);
        bufp->chgBit(oldp+865,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dpicstop_r));
        bufp->chgCData(oldp+866,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r),8);
        bufp->chgBit(oldp+867,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_instvalid_r));
        bufp->chgQData(oldp+868,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r),64);
        bufp->chgBit(oldp+870,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_we_r));
        bufp->chgQData(oldp+871,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r),64);
        bufp->chgQData(oldp+873,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r),64);
        bufp->chgBit(oldp+875,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r));
        bufp->chgCData(oldp+876,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r),3);
        bufp->chgQData(oldp+877,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r),64);
        bufp->chgBit(oldp+879,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w));
        bufp->chgBit(oldp+880,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_isjump_r));
        bufp->chgCData(oldp+881,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r))
                                   ? (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_hd37442a4__0)
                                   : (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r)) 
                                       & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r))
                                       ? (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h6256bf21__0)
                                       : (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r) 
                                           & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r))
                                           ? (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_hd37442a4__0)
                                           : (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r)) 
                                               & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r))
                                               ? (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____VdfgTmp_h6256bf21__0)
                                               : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r)))))),2);
        bufp->chgBit(oldp+882,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r) 
                                | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r))));
        bufp->chgQData(oldp+883,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1takenaddr_r),64);
        bufp->chgBit(oldp+885,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r));
        bufp->chgBit(oldp+886,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r));
        bufp->chgCData(oldp+887,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r),2);
        bufp->chgSData(oldp+888,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1bhr_r),13);
        bufp->chgBit(oldp+889,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r));
        bufp->chgQData(oldp+890,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r),64);
        bufp->chgQData(oldp+892,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dnpc_r),64);
        bufp->chgBit(oldp+894,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_instvalid_r));
        bufp->chgQData(oldp+895,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r),64);
        bufp->chgBit(oldp+897,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r));
        bufp->chgQData(oldp+898,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r),64);
        bufp->chgQData(oldp+900,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r),64);
        bufp->chgBit(oldp+902,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r));
        bufp->chgQData(oldp+903,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r),64);
        bufp->chgCData(oldp+905,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r),3);
        bufp->chgBit(oldp+906,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_isjump_r));
        bufp->chgBit(oldp+907,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__btb_fixwe_w));
        bufp->chgQData(oldp+908,((8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc)),64);
        bufp->chgBit(oldp+910,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit));
        bufp->chgBit(oldp+911,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu));
        bufp->chgBit(oldp+912,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump));
        bufp->chgQData(oldp+913,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump),64);
        bufp->chgQData(oldp+915,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),64);
        bufp->chgQData(oldp+917,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countersuccess),64);
        bufp->chgQData(oldp+919,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countergsharesuccess),64);
        bufp->chgQData(oldp+921,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterprimiss),64);
        bufp->chgQData(oldp+923,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbprimiss),64);
        bufp->chgQData(oldp+925,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras),64);
        bufp->chgQData(oldp+927,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss),64);
        bufp->chgQData(oldp+929,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss2),64);
        bufp->chgQData(oldp+931,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit),64);
        bufp->chgQData(oldp+933,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit2),64);
        bufp->chgQData(oldp+935,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbmiss),64);
        bufp->chgQData(oldp+937,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbretmiss),64);
        bufp->chgQData(oldp+939,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterghrmiss),64);
        bufp->chgQData(oldp+941,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag1),64);
        bufp->chgQData(oldp+943,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag2),64);
        bufp->chgQData(oldp+945,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag3),64);
        bufp->chgQData(oldp+947,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag4),64);
        bufp->chgQData(oldp+949,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag5),64);
        bufp->chgQData(oldp+951,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag6),64);
        bufp->chgQData(oldp+953,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag7),64);
        bufp->chgQData(oldp+955,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag8),64);
        bufp->chgQData(oldp+957,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag9),64);
        bufp->chgQData(oldp+959,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag10),64);
        bufp->chgQData(oldp+961,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag11),64);
        bufp->chgQData(oldp+963,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag12),64);
        bufp->chgQData(oldp+965,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag13),64);
        bufp->chgQData(oldp+967,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag14),64);
        bufp->chgQData(oldp+969,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag15),64);
        bufp->chgSData(oldp+971,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__testghr),13);
        bufp->chgQData(oldp+972,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay),64);
        bufp->chgBit(oldp+974,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w));
        bufp->chgBit(oldp+975,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w));
        bufp->chgQData(oldp+976,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w),64);
        bufp->chgQData(oldp+978,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w),64);
        bufp->chgQData(oldp+980,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpurastarget_w),64);
        bufp->chgCData(oldp+982,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w),3);
        bufp->chgQData(oldp+983,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)),64);
        bufp->chgQData(oldp+985,((8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)),64);
        bufp->chgWData(oldp+987,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_valid_r),256);
        bufp->chgQData(oldp+995,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_data),64);
        bufp->chgQData(oldp+997,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_tag),64);
        bufp->chgBit(oldp+999,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i));
        bufp->chgCData(oldp+1000,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1),2);
        bufp->chgCData(oldp+1001,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2),2);
        bufp->chgIData(oldp+1002,((0x7ffffffU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r))),27);
        bufp->chgSData(oldp+1003,((0x1fffU & ((IData)(
                                                      (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r 
                                                       >> 2U)) 
                                              ^ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1bhr_r)))),13);
        bufp->chgBit(oldp+1004,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_ras_u0__ras_btbhit_i));
        bufp->chgQData(oldp+1005,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w)
                                    ? (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)
                                    : (8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay))),64);
        bufp->chgQData(oldp+1007,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[0]),64);
        bufp->chgQData(oldp+1009,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[1]),64);
        bufp->chgQData(oldp+1011,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[2]),64);
        bufp->chgQData(oldp+1013,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[3]),64);
        bufp->chgQData(oldp+1015,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[4]),64);
        bufp->chgQData(oldp+1017,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[5]),64);
        bufp->chgQData(oldp+1019,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[6]),64);
        bufp->chgQData(oldp+1021,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[7]),64);
        bufp->chgQData(oldp+1023,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[8]),64);
        bufp->chgQData(oldp+1025,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[9]),64);
        bufp->chgQData(oldp+1027,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[10]),64);
        bufp->chgQData(oldp+1029,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[11]),64);
        bufp->chgQData(oldp+1031,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[12]),64);
        bufp->chgQData(oldp+1033,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[13]),64);
        bufp->chgQData(oldp+1035,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[14]),64);
        bufp->chgQData(oldp+1037,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[15]),64);
        bufp->chgCData(oldp+1039,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_headptr),4);
        bufp->chgCData(oldp+1040,((0xfU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_headptr) 
                                           - (IData)(1U)))),4);
        bufp->chgQData(oldp+1041,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec),64);
        bufp->chgQData(oldp+1043,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause),64);
        bufp->chgQData(oldp+1045,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc),64);
        bufp->chgQData(oldp+1047,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus),64);
        bufp->chgQData(oldp+1049,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres),64);
        bufp->chgQData(oldp+1051,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices),64);
        bufp->chgQData(oldp+1053,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr),64);
        bufp->chgQData(oldp+1055,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r),64);
        bufp->chgQData(oldp+1057,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata),64);
        bufp->chgQData(oldp+1059,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r)),64);
        bufp->chgBit(oldp+1061,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5));
        bufp->chgBit(oldp+1062,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5));
        bufp->chgBit(oldp+1063,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                                  & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r 
                                     == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w)) 
                                 | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5)) 
                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5)))));
        bufp->chgBit(oldp+1064,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                                 & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                    != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r))));
        bufp->chgQData(oldp+1065,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r),64);
        bufp->chgQData(oldp+1067,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r),64);
        bufp->chgQData(oldp+1069,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r),64);
        bufp->chgQData(oldp+1071,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r),64);
        bufp->chgWData(oldp+1073,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w),128);
        bufp->chgQData(oldp+1077,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_div_w),64);
        bufp->chgQData(oldp+1079,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_rem_w),64);
        bufp->chgBit(oldp+1081,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_valid_w));
        bufp->chgBit(oldp+1082,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r));
        bufp->chgBit(oldp+1083,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_doing_r));
        bufp->chgBit(oldp+1084,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r));
        bufp->chgBit(oldp+1085,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w));
        bufp->chgBit(oldp+1086,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r));
        bufp->chgBit(oldp+1087,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_doing_r));
        bufp->chgBit(oldp+1088,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r));
        bufp->chgBit(oldp+1089,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_qrvalid_r));
        bufp->chgQData(oldp+1090,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_quotiento_r),64);
        bufp->chgQData(oldp+1092,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_remaindero_r),64);
        bufp->chgQData(oldp+1094,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_hi_o),64);
        bufp->chgQData(oldp+1096,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_lo_o),64);
        bufp->chgQData(oldp+1098,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplicand_r),64);
        bufp->chgQData(oldp+1100,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplier_r),64);
        bufp->chgCData(oldp+1102,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r),2);
        bufp->chgBit(oldp+1103,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_mulvalid_r));
        bufp->chgQData(oldp+1104,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_hio_r),64);
        bufp->chgQData(oldp+1106,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_loo_r),64);
        bufp->chgCData(oldp+1108,((0x7fU & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)),7);
        bufp->chgCData(oldp+1109,((7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1110,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1111,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                   >> 0x19U)),7);
        bufp->chgSData(oldp+1112,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                   >> 0x14U)),12);
        bufp->chgCData(oldp+1113,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1114,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1115,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1116,((0x3fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                            >> 0x14U))),6);
        bufp->chgQData(oldp+1117,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm),64);
        bufp->chgQData(oldp+1119,((((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                         >> 7U)))))))),64);
        bufp->chgQData(oldp+1121,((((- (QData)((IData)(
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
                                                                          >> 0x14U)))))))),64);
        bufp->chgQData(oldp+1123,((((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x14U))))),64);
        bufp->chgQData(oldp+1125,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm),64);
        bufp->chgBit(oldp+1127,((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))));
        bufp->chgQData(oldp+1128,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r
                                  [(7U & ((IData)(1U) 
                                          + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr)))]),64);
        bufp->chgIData(oldp+1130,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r
                                  [(7U & ((IData)(1U) 
                                          + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr)))]),32);
        bufp->chgIData(oldp+1131,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[0]),32);
        bufp->chgIData(oldp+1132,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[1]),32);
        bufp->chgIData(oldp+1133,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[2]),32);
        bufp->chgIData(oldp+1134,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[3]),32);
        bufp->chgIData(oldp+1135,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[4]),32);
        bufp->chgIData(oldp+1136,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[5]),32);
        bufp->chgIData(oldp+1137,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[6]),32);
        bufp->chgIData(oldp+1138,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[7]),32);
        bufp->chgQData(oldp+1139,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[0]),64);
        bufp->chgQData(oldp+1141,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[1]),64);
        bufp->chgQData(oldp+1143,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[2]),64);
        bufp->chgQData(oldp+1145,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[3]),64);
        bufp->chgQData(oldp+1147,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[4]),64);
        bufp->chgQData(oldp+1149,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[5]),64);
        bufp->chgQData(oldp+1151,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[6]),64);
        bufp->chgQData(oldp+1153,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[7]),64);
        bufp->chgCData(oldp+1155,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_valid_r),8);
        bufp->chgCData(oldp+1156,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_tailptr),3);
        bufp->chgCData(oldp+1157,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr),3);
        bufp->chgSData(oldp+1158,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[0]),13);
        bufp->chgSData(oldp+1159,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[1]),13);
        bufp->chgSData(oldp+1160,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[2]),13);
        bufp->chgSData(oldp+1161,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[3]),13);
        bufp->chgSData(oldp+1162,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[4]),13);
        bufp->chgSData(oldp+1163,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[5]),13);
        bufp->chgSData(oldp+1164,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[6]),13);
        bufp->chgSData(oldp+1165,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[7]),13);
        bufp->chgCData(oldp+1166,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[0]),2);
        bufp->chgCData(oldp+1167,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[1]),2);
        bufp->chgCData(oldp+1168,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[2]),2);
        bufp->chgCData(oldp+1169,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[3]),2);
        bufp->chgCData(oldp+1170,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[4]),2);
        bufp->chgCData(oldp+1171,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[5]),2);
        bufp->chgCData(oldp+1172,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[6]),2);
        bufp->chgCData(oldp+1173,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[7]),2);
        bufp->chgBit(oldp+1174,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[0]));
        bufp->chgBit(oldp+1175,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[1]));
        bufp->chgBit(oldp+1176,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[2]));
        bufp->chgBit(oldp+1177,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[3]));
        bufp->chgBit(oldp+1178,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[4]));
        bufp->chgBit(oldp+1179,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[5]));
        bufp->chgBit(oldp+1180,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[6]));
        bufp->chgBit(oldp+1181,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[7]));
        bufp->chgQData(oldp+1182,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[0]),64);
        bufp->chgQData(oldp+1184,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[1]),64);
        bufp->chgQData(oldp+1186,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[2]),64);
        bufp->chgQData(oldp+1188,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[3]),64);
        bufp->chgQData(oldp+1190,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[4]),64);
        bufp->chgQData(oldp+1192,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[5]),64);
        bufp->chgQData(oldp+1194,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[6]),64);
        bufp->chgQData(oldp+1196,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[7]),64);
        bufp->chgQData(oldp+1198,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[0]),64);
        bufp->chgQData(oldp+1200,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[1]),64);
        bufp->chgQData(oldp+1202,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[2]),64);
        bufp->chgQData(oldp+1204,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[3]),64);
        bufp->chgQData(oldp+1206,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[4]),64);
        bufp->chgQData(oldp+1208,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[5]),64);
        bufp->chgQData(oldp+1210,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[6]),64);
        bufp->chgQData(oldp+1212,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[7]),64);
        bufp->chgQData(oldp+1214,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[8]),64);
        bufp->chgQData(oldp+1216,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[9]),64);
        bufp->chgQData(oldp+1218,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[10]),64);
        bufp->chgQData(oldp+1220,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[11]),64);
        bufp->chgQData(oldp+1222,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[12]),64);
        bufp->chgQData(oldp+1224,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[13]),64);
        bufp->chgQData(oldp+1226,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[14]),64);
        bufp->chgQData(oldp+1228,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[15]),64);
        bufp->chgQData(oldp+1230,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[16]),64);
        bufp->chgQData(oldp+1232,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[17]),64);
        bufp->chgQData(oldp+1234,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[18]),64);
        bufp->chgQData(oldp+1236,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[19]),64);
        bufp->chgQData(oldp+1238,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[20]),64);
        bufp->chgQData(oldp+1240,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[21]),64);
        bufp->chgQData(oldp+1242,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[22]),64);
        bufp->chgQData(oldp+1244,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[23]),64);
        bufp->chgQData(oldp+1246,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[24]),64);
        bufp->chgQData(oldp+1248,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[25]),64);
        bufp->chgQData(oldp+1250,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[26]),64);
        bufp->chgQData(oldp+1252,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[27]),64);
        bufp->chgQData(oldp+1254,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[28]),64);
        bufp->chgQData(oldp+1256,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[29]),64);
        bufp->chgQData(oldp+1258,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[30]),64);
        bufp->chgQData(oldp+1260,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[31]),64);
    }
    bufp->chgBit(oldp+1262,(vlSelf->clk));
    bufp->chgBit(oldp+1263,(vlSelf->rst));
    bufp->chgBit(oldp+1264,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgQData(oldp+1265,(((IData)(vlSelf->rst)
                                ? 0ULL : ((0ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w)
                                           ? 0ULL : 
                                          (((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r) 
                                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r)) 
                                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)) 
                                            & (0ULL 
                                               != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r))
                                            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r
                                            : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)
                                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                               [(0x1fU 
                                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                : 0ULL))))),64);
    bufp->chgQData(oldp+1267,(((IData)(vlSelf->rst)
                                ? 0ULL : ((0ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)
                                           ? 0ULL : 
                                          (((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                               == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r) 
                                              & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r)) 
                                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)) 
                                            & (0ULL 
                                               != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r))
                                            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r
                                            : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)
                                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                               [(0x1fU 
                                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                : 0ULL))))),64);
    bufp->chgQData(oldp+1269,(((((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w) 
                                   & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w)) 
                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r)) 
                                & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w
                                : ((((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r 
                                        == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w) 
                                       & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r)) 
                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)) 
                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_we_r)) 
                                    & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w
                                    : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)
                                        ? ((IData)(vlSelf->rst)
                                            ? 0ULL : 
                                           ((0ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w)
                                             ? 0ULL
                                             : ((((
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)) 
                                                 & (0ULL 
                                                    != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r))
                                                 ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)
                                                  ? 
                                                 vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                                 [(0x1fU 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                  : 0ULL))))
                                        : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)
                                            ? 0ULL : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
    bufp->chgQData(oldp+1271,((((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                   == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w) 
                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r)) 
                                & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w
                                : (((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r 
                                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w) 
                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)) 
                                     & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_we_r)) 
                                    & (0ULL != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w
                                    : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)
                                        ? ((IData)(vlSelf->rst)
                                            ? 0ULL : 
                                           ((0ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)
                                             ? 0ULL
                                             : ((((
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)) 
                                                 & (0ULL 
                                                    != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r))
                                                 ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)
                                                  ? 
                                                 vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                                 [(0x1fU 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                  : 0ULL))))
                                        : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)
                                            ? 0ULL : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
}

void Vysyx_22040210_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22040210_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040210_top___024root*>(voidSelf);
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
