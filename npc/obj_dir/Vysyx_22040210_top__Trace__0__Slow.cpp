// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040210_top__Syms.h"


VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_init_sub__TOP__0(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_22040210_top ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+1274,"io_interrupt", false,-1);
    tracep->declBit(c+81,"io_master_awready", false,-1);
    tracep->declBit(c+82,"io_master_awvalid", false,-1);
    tracep->declBus(c+1275,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+83,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+84,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+85,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+86,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+87,"io_master_wready", false,-1);
    tracep->declBit(c+88,"io_master_wvalid", false,-1);
    tracep->declQuad(c+89,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+91,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+1276,"io_master_wlast", false,-1);
    tracep->declBit(c+1276,"io_master_bready", false,-1);
    tracep->declBit(c+92,"io_master_bvalid", false,-1);
    tracep->declBus(c+1277,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1278,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+93,"io_master_arready", false,-1);
    tracep->declBit(c+94,"io_master_arvalid", false,-1);
    tracep->declBus(c+1275,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+95,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+96,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+97,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+98,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+99,"io_master_rready", false,-1);
    tracep->declBit(c+100,"io_master_rvalid", false,-1);
    tracep->declBus(c+1279,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1278,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+101,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+103,"io_master_rlast", false,-1);
    tracep->declBit(c+1280,"io_slave_awready", false,-1);
    tracep->declBit(c+1281,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1282,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1283,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1284,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1285,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1286,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1287,"io_slave_wready", false,-1);
    tracep->declBit(c+1288,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1289,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1291,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1292,"io_slave_wlast", false,-1);
    tracep->declBit(c+1293,"io_slave_bready", false,-1);
    tracep->declBit(c+1294,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1295,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1296,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1297,"io_slave_arready", false,-1);
    tracep->declBit(c+1298,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1299,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1300,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1301,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1302,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1303,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1304,"io_slave_rready", false,-1);
    tracep->declBit(c+1305,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1306,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1307,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1308,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1310,"io_slave_rlast", false,-1);
    tracep->declBus(c+104,"io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram0_cen", false,-1);
    tracep->declBit(c+105,"io_sram0_wen", false,-1);
    tracep->declArray(c+106,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+114,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram1_cen", false,-1);
    tracep->declBit(c+105,"io_sram1_wen", false,-1);
    tracep->declArray(c+106,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+122,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram2_cen", false,-1);
    tracep->declBit(c+126,"io_sram2_wen", false,-1);
    tracep->declArray(c+127,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+131,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram3_cen", false,-1);
    tracep->declBit(c+126,"io_sram3_wen", false,-1);
    tracep->declArray(c+127,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+135,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram4_cen", false,-1);
    tracep->declBit(c+139,"io_sram4_wen", false,-1);
    tracep->declArray(c+140,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+148,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram5_cen", false,-1);
    tracep->declBit(c+139,"io_sram5_wen", false,-1);
    tracep->declArray(c+140,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram6_cen", false,-1);
    tracep->declBit(c+160,"io_sram6_wen", false,-1);
    tracep->declArray(c+161,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram7_cen", false,-1);
    tracep->declBit(c+160,"io_sram7_wen", false,-1);
    tracep->declArray(c+161,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram7_rdata", false,-1, 127,0);
    tracep->declQuad(c+173,"sram_waddr", false,-1, 63,0);
    tracep->declQuad(c+175,"sram_raddr", false,-1, 63,0);
    tracep->declBus(c+177,"sram_rdata0", false,-1, 7,0);
    tracep->declBus(c+178,"sram_rdata1", false,-1, 7,0);
    tracep->declBus(c+179,"sram_rdata2", false,-1, 7,0);
    tracep->declBus(c+180,"sram_rdata3", false,-1, 7,0);
    tracep->declBus(c+181,"sram_rdata4", false,-1, 7,0);
    tracep->declBus(c+182,"sram_rdata5", false,-1, 7,0);
    tracep->declBus(c+183,"sram_rdata6", false,-1, 7,0);
    tracep->declBus(c+184,"sram_rdata7", false,-1, 7,0);
    tracep->declQuad(c+185,"sram_wdata", false,-1, 63,0);
    tracep->declBit(c+187,"sram_wen", false,-1);
    tracep->declBit(c+188,"sram_ren", false,-1);
    tracep->declBus(c+189,"sram_wcsn", false,-1, 7,0);
    tracep->declBus(c+190,"sram_rcsn", false,-1, 7,0);
    tracep->pushNamePrefix("axi_slave_interface_s0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+187,"sram_wen", false,-1);
    tracep->declBit(c+188,"sram_ren", false,-1);
    tracep->declQuad(c+185,"sram_wdata", false,-1, 63,0);
    tracep->declQuad(c+173,"sram_waddr", false,-1, 63,0);
    tracep->declQuad(c+175,"sram_raddr", false,-1, 63,0);
    tracep->declBus(c+189,"sram_wcsn", false,-1, 7,0);
    tracep->declBus(c+190,"sram_rcsn", false,-1, 7,0);
    tracep->declBus(c+177,"sram_rdata0", false,-1, 7,0);
    tracep->declBus(c+178,"sram_rdata1", false,-1, 7,0);
    tracep->declBus(c+179,"sram_rdata2", false,-1, 7,0);
    tracep->declBus(c+180,"sram_rdata3", false,-1, 7,0);
    tracep->declBus(c+181,"sram_rdata4", false,-1, 7,0);
    tracep->declBus(c+182,"sram_rdata5", false,-1, 7,0);
    tracep->declBus(c+183,"sram_rdata6", false,-1, 7,0);
    tracep->declBus(c+184,"sram_rdata7", false,-1, 7,0);
    tracep->declBus(c+1311,"axi_ar_id_i", false,-1, 9,0);
    tracep->declQuad(c+191,"axi_ar_addr_i", false,-1, 63,0);
    tracep->declBus(c+96,"axi_ar_len_i", false,-1, 7,0);
    tracep->declBus(c+97,"axi_ar_size_i", false,-1, 2,0);
    tracep->declBus(c+98,"axi_ar_burst_i", false,-1, 1,0);
    tracep->declBit(c+1312,"axi_ar_lock_i", false,-1);
    tracep->declBus(c+1313,"axi_ar_cache_i", false,-1, 3,0);
    tracep->declBus(c+1314,"axi_ar_prot_i", false,-1, 2,0);
    tracep->declBus(c+1315,"axi_ar_qos_i", false,-1, 3,0);
    tracep->declBus(c+1316,"axi_ar_region_i", false,-1, 3,0);
    tracep->declBus(c+1317,"axi_ar_user_i", false,-1, 9,0);
    tracep->declBit(c+94,"axi_ar_valid_i", false,-1);
    tracep->declBit(c+93,"axi_ar_ready_o", false,-1);
    tracep->declQuad(c+101,"axi_r_data_o", false,-1, 63,0);
    tracep->declBus(c+1278,"axi_r_resp_o", false,-1, 1,0);
    tracep->declBit(c+103,"axi_r_last_o", false,-1);
    tracep->declBit(c+100,"axi_r_valid_o", false,-1);
    tracep->declBit(c+99,"axi_r_ready_i", false,-1);
    tracep->declBus(c+1275,"axi_aw_id_i", false,-1, 3,0);
    tracep->declQuad(c+193,"axi_aw_addr_i", false,-1, 63,0);
    tracep->declBus(c+84,"axi_aw_len_i", false,-1, 7,0);
    tracep->declBus(c+85,"axi_aw_size_i", false,-1, 2,0);
    tracep->declBus(c+86,"axi_aw_burst_i", false,-1, 1,0);
    tracep->declBit(c+1318,"axi_aw_lock_i", false,-1);
    tracep->declBus(c+1319,"axi_aw_cache_i", false,-1, 3,0);
    tracep->declBus(c+1320,"axi_aw_prot_i", false,-1, 2,0);
    tracep->declBus(c+1321,"axi_aw_qos_i", false,-1, 3,0);
    tracep->declBus(c+1322,"axi_aw_region_i", false,-1, 3,0);
    tracep->declBus(c+1323,"axi_aw_user_i", false,-1, 9,0);
    tracep->declBit(c+82,"axi_aw_valid_i", false,-1);
    tracep->declBit(c+81,"axi_aw_ready_o", false,-1);
    tracep->declQuad(c+89,"axi_w_data_i", false,-1, 63,0);
    tracep->declBus(c+91,"axi_w_strb_i", false,-1, 7,0);
    tracep->declBit(c+1276,"axi_w_last_i", false,-1);
    tracep->declBus(c+1324,"axi_w_user_i", false,-1, 9,0);
    tracep->declBit(c+88,"axi_w_valid_i", false,-1);
    tracep->declBit(c+87,"axi_w_ready_o", false,-1);
    tracep->declBus(c+1278,"axi_b_resp_o", false,-1, 1,0);
    tracep->declBit(c+92,"axi_b_valid_o", false,-1);
    tracep->declBit(c+1276,"axi_b_ready_i", false,-1);
    tracep->declBit(c+195,"wen", false,-1);
    tracep->declBus(c+196,"awsize", false,-1, 2,0);
    tracep->declQuad(c+173,"awaddr", false,-1, 63,0);
    tracep->declQuad(c+185,"wdata", false,-1, 63,0);
    tracep->declQuad(c+197,"sram_rdata", false,-1, 63,0);
    tracep->declBit(c+199,"ren", false,-1);
    tracep->declBus(c+200,"arsize", false,-1, 2,0);
    tracep->declQuad(c+175,"araddr", false,-1, 63,0);
    tracep->declQuad(c+201,"araddr_start", false,-1, 63,0);
    tracep->declQuad(c+203,"araddr_stop", false,-1, 63,0);
    tracep->declBus(c+205,"araddr_cnt", false,-1, 15,0);
    tracep->declBus(c+206,"araddr_step", false,-1, 8,0);
    tracep->declBit(c+207,"araddr_cnt_flag", false,-1);
    tracep->declBus(c+208,"arlen", false,-1, 7,0);
    tracep->declQuad(c+209,"awaddr_start", false,-1, 63,0);
    tracep->declQuad(c+211,"awaddr_stop", false,-1, 63,0);
    tracep->declQuad(c+213,"awaddr_cnt", false,-1, 63,0);
    tracep->declBus(c+215,"awaddr_step", false,-1, 8,0);
    tracep->declBit(c+216,"awaddr_cnt_flag", false,-1);
    tracep->declBus(c+217,"awlen", false,-1, 7,0);
    tracep->declQuad(c+1325,"sram_addr", false,-1, 63,0);
    tracep->declBus(c+1327,"sram_size", false,-1, 2,0);
    tracep->declBus(c+200,"sram_rsize", false,-1, 2,0);
    tracep->declBus(c+196,"sram_wsize", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_bank0_way0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+148,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+139,"WEN", false,-1);
    tracep->declArray(c+140,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+2,"B", false,-1, 5,0);
    tracep->declArray(c+144,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+139,"wen", false,-1);
    tracep->declArray(c+140,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_bank0_way1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+165,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+160,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+2,"B", false,-1, 5,0);
    tracep->declArray(c+144,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+160,"wen", false,-1);
    tracep->declArray(c+161,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_bank1_way0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+156,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+139,"WEN", false,-1);
    tracep->declArray(c+140,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+2,"B", false,-1, 5,0);
    tracep->declArray(c+152,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+139,"wen", false,-1);
    tracep->declArray(c+140,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_bank1_way1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+169,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+160,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+2,"B", false,-1, 5,0);
    tracep->declArray(c+152,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+160,"wen", false,-1);
    tracep->declArray(c+161,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_bank0_way0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+114,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+105,"WEN", false,-1);
    tracep->declArray(c+106,"BWEN", false,-1, 127,0);
    tracep->declBus(c+104,"A", false,-1, 5,0);
    tracep->declBus(c+104,"B", false,-1, 5,0);
    tracep->declArray(c+110,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+105,"wen", false,-1);
    tracep->declArray(c+106,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_bank0_way1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+131,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+126,"WEN", false,-1);
    tracep->declArray(c+127,"BWEN", false,-1, 127,0);
    tracep->declBus(c+104,"A", false,-1, 5,0);
    tracep->declBus(c+104,"B", false,-1, 5,0);
    tracep->declArray(c+110,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+126,"wen", false,-1);
    tracep->declArray(c+127,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_bank1_way0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+122,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+105,"WEN", false,-1);
    tracep->declArray(c+106,"BWEN", false,-1, 127,0);
    tracep->declBus(c+104,"A", false,-1, 5,0);
    tracep->declBus(c+104,"B", false,-1, 5,0);
    tracep->declArray(c+118,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+105,"wen", false,-1);
    tracep->declArray(c+106,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_bank1_way1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+135,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+126,"WEN", false,-1);
    tracep->declArray(c+127,"BWEN", false,-1, 127,0);
    tracep->declBus(c+104,"A", false,-1, 5,0);
    tracep->declBus(c+104,"B", false,-1, 5,0);
    tracep->declArray(c+118,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+126,"wen", false,-1);
    tracep->declArray(c+127,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_data_rom_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+1265,"ce", false,-1);
    tracep->declBit(c+195,"memwen_i", false,-1);
    tracep->declBit(c+199,"memren_i", false,-1);
    tracep->declBus(c+218,"memwe_i", false,-1, 7,0);
    tracep->declQuad(c+173,"memwaddr_i", false,-1, 63,0);
    tracep->declQuad(c+175,"memraddr_i", false,-1, 63,0);
    tracep->declQuad(c+185,"memwdata_i", false,-1, 63,0);
    tracep->declQuad(c+197,"memrdata_o", false,-1, 63,0);
    tracep->declBit(c+219,"memrdatavaild_o", false,-1);
    tracep->declBit(c+220,"memwdatavaild_o", false,-1);
    tracep->declQuad(c+221,"data_line1", false,-1, 63,0);
    tracep->declQuad(c+223,"data_line2", false,-1, 63,0);
    tracep->declBus(c+225,"data_mask", false,-1, 7,0);
    tracep->declQuad(c+226,"data_addr", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_u0 ");
    tracep->declBit(c+1263,"clock", false,-1);
    tracep->declBit(c+1264,"reset", false,-1);
    tracep->declBit(c+1274,"io_interrupt", false,-1);
    tracep->declBit(c+81,"io_master_awready", false,-1);
    tracep->declBit(c+82,"io_master_awvalid", false,-1);
    tracep->declBus(c+1275,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+83,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+84,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+85,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+86,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+87,"io_master_wready", false,-1);
    tracep->declBit(c+88,"io_master_wvalid", false,-1);
    tracep->declQuad(c+89,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+91,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+1276,"io_master_wlast", false,-1);
    tracep->declBit(c+1276,"io_master_bready", false,-1);
    tracep->declBit(c+92,"io_master_bvalid", false,-1);
    tracep->declBus(c+1277,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1278,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+93,"io_master_arready", false,-1);
    tracep->declBit(c+94,"io_master_arvalid", false,-1);
    tracep->declBus(c+1275,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+95,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+96,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+97,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+98,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+99,"io_master_rready", false,-1);
    tracep->declBit(c+100,"io_master_rvalid", false,-1);
    tracep->declBus(c+1279,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1278,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+101,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+103,"io_master_rlast", false,-1);
    tracep->declBit(c+1280,"io_slave_awready", false,-1);
    tracep->declBit(c+1281,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1282,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1283,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1284,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1285,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1286,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1287,"io_slave_wready", false,-1);
    tracep->declBit(c+1288,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1289,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1291,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1292,"io_slave_wlast", false,-1);
    tracep->declBit(c+1293,"io_slave_bready", false,-1);
    tracep->declBit(c+1294,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1295,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1296,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1297,"io_slave_arready", false,-1);
    tracep->declBit(c+1298,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1299,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1300,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1301,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1302,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1303,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1304,"io_slave_rready", false,-1);
    tracep->declBit(c+1305,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1306,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1307,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1308,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1310,"io_slave_rlast", false,-1);
    tracep->declBus(c+104,"io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram0_cen", false,-1);
    tracep->declBit(c+105,"io_sram0_wen", false,-1);
    tracep->declArray(c+106,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+114,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram1_cen", false,-1);
    tracep->declBit(c+105,"io_sram1_wen", false,-1);
    tracep->declArray(c+106,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+122,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram2_cen", false,-1);
    tracep->declBit(c+126,"io_sram2_wen", false,-1);
    tracep->declArray(c+127,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+131,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram3_cen", false,-1);
    tracep->declBit(c+126,"io_sram3_wen", false,-1);
    tracep->declArray(c+127,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+135,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram4_cen", false,-1);
    tracep->declBit(c+139,"io_sram4_wen", false,-1);
    tracep->declArray(c+140,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+148,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram5_cen", false,-1);
    tracep->declBit(c+139,"io_sram5_wen", false,-1);
    tracep->declArray(c+140,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram6_cen", false,-1);
    tracep->declBit(c+160,"io_sram6_wen", false,-1);
    tracep->declArray(c+161,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram7_cen", false,-1);
    tracep->declBit(c+160,"io_sram7_wen", false,-1);
    tracep->declArray(c+161,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+1265,"ce", false,-1);
    tracep->declQuad(c+228,"pc", false,-1, 63,0);
    tracep->declQuad(c+230,"thispc", false,-1, 63,0);
    tracep->declBus(c+232,"inst", false,-1, 31,0);
    tracep->declQuad(c+233,"thispc2", false,-1, 63,0);
    tracep->declBus(c+235,"inst2", false,-1, 31,0);
    tracep->declBit(c+236,"dpic_stop", false,-1);
    tracep->declBus(c+3,"stall", false,-1, 5,0);
    tracep->declBus(c+4,"flush", false,-1, 5,0);
    tracep->declQuad(c+5,"memrdata_w", false,-1, 63,0);
    tracep->declBit(c+237,"memrdatavaild_w", false,-1);
    tracep->declBit(c+7,"memwdatavaild_w", false,-1);
    tracep->declBit(c+238,"memre_w", false,-1);
    tracep->declBus(c+8,"memwe_w", false,-1, 7,0);
    tracep->declQuad(c+9,"memaddr_w", false,-1, 63,0);
    tracep->declQuad(c+239,"memwdata_o", false,-1, 63,0);
    tracep->declBus(c+241,"memsize_w", false,-1, 2,0);
    tracep->declBit(c+242,"r_valid_i", false,-1);
    tracep->declBit(c+243,"w_valid_i", false,-1);
    tracep->declQuad(c+244,"rw_w_data_i", false,-1, 63,0);
    tracep->declQuad(c+246,"r_addr_i", false,-1, 63,0);
    tracep->declQuad(c+248,"w_addr_i", false,-1, 63,0);
    tracep->declBus(c+250,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+251,"w_size_i", false,-1, 7,0);
    tracep->declBit(c+252,"r_ready_o", false,-1);
    tracep->declBit(c+253,"w_ready_o", false,-1);
    tracep->declQuad(c+254,"data_read_o", false,-1, 63,0);
    tracep->declBit(c+256,"pipeline_instbuffer_full_w", false,-1);
    tracep->declBit(c+257,"cachepipe_inst_stallpc_w", false,-1);
    tracep->declBit(c+1331,"cachepipe_uncache_stallpc_w", false,-1);
    tracep->declBit(c+258,"cachepipe_data_stall_w", false,-1);
    tracep->declBit(c+259,"inst1vaild", false,-1);
    tracep->declBit(c+260,"inst2vaild", false,-1);
    tracep->declBit(c+261,"cachepipe_flushifid", false,-1);
    tracep->declBit(c+1,"cachepipe_icache_req2_w", false,-1);
    tracep->declBit(c+262,"pipeline_bpu1hit_w", false,-1);
    tracep->declBus(c+263,"pipeline_inst1bhr_w", false,-1, 12,0);
    tracep->declBus(c+264,"pipeline_inst1pht_w", false,-1, 1,0);
    tracep->declBit(c+265,"pipeline_inst1taken_w", false,-1);
    tracep->declQuad(c+266,"pipeline_inst1takenaddr_w", false,-1, 63,0);
    tracep->declBus(c+268,"pipeline_inst2bhr_w", false,-1, 12,0);
    tracep->declBus(c+269,"pipeline_inst2pht_w", false,-1, 1,0);
    tracep->declBit(c+270,"pipeline_inst2taken_w", false,-1);
    tracep->declQuad(c+271,"pipeline_inst2takenaddr_w", false,-1, 63,0);
    tracep->declBus(c+273,"bpu_bhr_w", false,-1, 12,0);
    tracep->declBus(c+274,"bpu_pht_w", false,-1, 1,0);
    tracep->declBit(c+275,"bpu1istaken_w", false,-1);
    tracep->declBit(c+276,"bpu2istaken_w", false,-1);
    tracep->declQuad(c+277,"bpu1hitaddr_w", false,-1, 63,0);
    tracep->declQuad(c+279,"bpu2hitaddr_w", false,-1, 63,0);
    tracep->declBit(c+281,"cache_invalid_w", false,-1);
    tracep->declBit(c+282,"isinvalidsuccess_w", false,-1);
    tracep->declBus(c+283,"r_len_i", false,-1, 3,0);
    tracep->declBus(c+284,"w_len_i", false,-1, 3,0);
    tracep->declBit(c+285,"cache_w_last_i", false,-1);
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->pushNamePrefix("m0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+1331,"flush", false,-1);
    tracep->declBit(c+242,"r_valid_i", false,-1);
    tracep->declBit(c+243,"w_valid_i", false,-1);
    tracep->declQuad(c+244,"rw_w_data_i", false,-1, 63,0);
    tracep->declQuad(c+248,"w_addr_i", false,-1, 63,0);
    tracep->declQuad(c+246,"r_addr_i", false,-1, 63,0);
    tracep->declBus(c+250,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+251,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+1332,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+1332,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+252,"r_ready_o", false,-1);
    tracep->declBit(c+253,"w_ready_o", false,-1);
    tracep->declQuad(c+254,"data_read_o", false,-1, 63,0);
    tracep->declBit(c+285,"cache_w_last_i", false,-1);
    tracep->declBus(c+1311,"axi_ar_id_o", false,-1, 9,0);
    tracep->declQuad(c+286,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+96,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+97,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+98,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+1331,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+288,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+1333,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+1275,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+1275,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBus(c+1311,"axi_ar_user_o", false,-1, 9,0);
    tracep->declBit(c+94,"axi_ar_valid_o", false,-1);
    tracep->declBit(c+93,"axi_ar_ready_i", false,-1);
    tracep->declBus(c+1334,"axi_r_id_i", false,-1, 9,0);
    tracep->declQuad(c+101,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+1278,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBit(c+103,"axi_r_last_i", false,-1);
    tracep->declBus(c+1335,"axi_r_user_i", false,-1, 9,0);
    tracep->declBit(c+100,"axi_r_valid_i", false,-1);
    tracep->declBit(c+99,"axi_r_ready_o", false,-1);
    tracep->declBus(c+1311,"axi_aw_id_o", false,-1, 9,0);
    tracep->declQuad(c+289,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+84,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+85,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+86,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+1331,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+291,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+1333,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+1275,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+1275,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBus(c+1311,"axi_aw_user_o", false,-1, 9,0);
    tracep->declBit(c+82,"axi_aw_valid_o", false,-1);
    tracep->declBit(c+81,"axi_aw_ready_i", false,-1);
    tracep->declQuad(c+89,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+91,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+1276,"axi_w_last_o", false,-1);
    tracep->declBus(c+1311,"axi_w_user_o", false,-1, 9,0);
    tracep->declBit(c+88,"axi_w_valid_o", false,-1);
    tracep->declBit(c+87,"axi_w_ready_i", false,-1);
    tracep->declBus(c+1336,"axi_b_id_i", false,-1, 9,0);
    tracep->declBus(c+1278,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1337,"axi_b_user_i", false,-1, 9,0);
    tracep->declBit(c+92,"axi_b_valid_i", false,-1);
    tracep->declBit(c+1276,"axi_b_ready_o", false,-1);
    tracep->declBit(c+292,"iswburst", false,-1);
    tracep->declBus(c+293,"wcurrent_state", false,-1, 2,0);
    tracep->declBus(c+11,"wnext_state", false,-1, 2,0);
    tracep->declBus(c+294,"rcurrent_state", false,-1, 2,0);
    tracep->declBus(c+12,"rnext_state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_cachepipeline_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+281,"cache_invalid_i", false,-1);
    tracep->declBit(c+282,"isinvalidsuccess_o", false,-1);
    tracep->declBit(c+13,"cachepipe_instflush_i", false,-1);
    tracep->declBit(c+261,"cachepipe_flushifid", false,-1);
    tracep->declBit(c+1338,"cachepipe_dataflush_i", false,-1);
    tracep->declBus(c+295,"cachepipe_cpustall_i", false,-1, 5,0);
    tracep->declBus(c+263,"cachepipe_inst1bhr_o", false,-1, 12,0);
    tracep->declBus(c+264,"cachepipe_inst1pht_o", false,-1, 1,0);
    tracep->declBit(c+265,"cachepipe_inst1taken_o", false,-1);
    tracep->declQuad(c+266,"cachepipe_inst1takenaddr_o", false,-1, 63,0);
    tracep->declBus(c+268,"cachepipe_inst2bhr_o", false,-1, 12,0);
    tracep->declBus(c+269,"cachepipe_inst2pht_o", false,-1, 1,0);
    tracep->declBit(c+270,"cachepipe_inst2taken_o", false,-1);
    tracep->declQuad(c+271,"cachepipe_inst2takenaddr_o", false,-1, 63,0);
    tracep->declBus(c+273,"cachepipebpu_bhr_i", false,-1, 12,0);
    tracep->declBus(c+274,"cachepipebpu_pht_i", false,-1, 1,0);
    tracep->declBit(c+275,"cachepipebpu1istaken_i", false,-1);
    tracep->declBit(c+276,"cachepipebpu2istaken_i", false,-1);
    tracep->declQuad(c+277,"cachepipebpu1hitaddr_i", false,-1, 63,0);
    tracep->declQuad(c+279,"cachepipebpu2hitaddr_i", false,-1, 63,0);
    tracep->declBit(c+1331,"cachepipe_uncacheinst_req_i", false,-1);
    tracep->declBit(c+14,"cachepipe_uncachedata_req_i", false,-1);
    tracep->declBit(c+1331,"cachepipe_uncache_stallpc_o", false,-1);
    tracep->declBit(c+15,"cachepipe_inst_rreq_i", false,-1);
    tracep->declQuad(c+228,"cachepipe_inst_raddr_i", false,-1, 63,0);
    tracep->declBus(c+232,"cachepipe_inst_inst1_o", false,-1, 31,0);
    tracep->declBus(c+235,"cachepipe_inst_inst2_o", false,-1, 31,0);
    tracep->declQuad(c+230,"cachepipe_inst_inst1pc_o", false,-1, 63,0);
    tracep->declQuad(c+233,"cachepipe_inst_inst2pc_o", false,-1, 63,0);
    tracep->declBit(c+259,"cachepipe_inst_inst1vaild_o", false,-1);
    tracep->declBit(c+260,"cachepipe_inst_inst2vaild_o", false,-1);
    tracep->declBit(c+257,"cachepipe_inst_stallpc_o", false,-1);
    tracep->declBit(c+262,"cachefrombpu1hit_i", false,-1);
    tracep->declBit(c+1,"cachepipe_icache_req2_o", false,-1);
    tracep->declBit(c+258,"cachepipe_data_stall_o", false,-1);
    tracep->declBit(c+238,"cachepipe_data_rreq_i", false,-1);
    tracep->declQuad(c+9,"cachepipe_data_raddr_i", false,-1, 63,0);
    tracep->declBit(c+237,"cachepipe_data_rvaild_o", false,-1);
    tracep->declBit(c+7,"cachepipe_data_wvaild_o", false,-1);
    tracep->declQuad(c+5,"cachepipe_data_rdata_o", false,-1, 63,0);
    tracep->declBit(c+16,"cachepipe_data_wreq_i", false,-1);
    tracep->declQuad(c+239,"cachepipe_data_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+9,"cachepipe_data_waddr_i", false,-1, 63,0);
    tracep->declBus(c+8,"cachepipe_data_wsel_i", false,-1, 7,0);
    tracep->declBus(c+251,"cachepipe_axi_wsel_o", false,-1, 7,0);
    tracep->declBus(c+250,"cachepipe_axi_rsel_o", false,-1, 7,0);
    tracep->declQuad(c+254,"cachepipe_axi_rdata_i", false,-1, 63,0);
    tracep->declBit(c+252,"cachepipe_axi_rresp_i", false,-1);
    tracep->declBit(c+242,"cachepipe_axi_ren_o", false,-1);
    tracep->declBit(c+296,"cachepipe_axi_rready_o", false,-1);
    tracep->declQuad(c+246,"cachepipe_axi_raddr_o", false,-1, 63,0);
    tracep->declBus(c+283,"cachepipe_axi_rlen_o", false,-1, 3,0);
    tracep->declBit(c+253,"cachepipe_axi_bvaild_i", false,-1);
    tracep->declBit(c+243,"cachepipe_axi_wen_o", false,-1);
    tracep->declQuad(c+248,"cachepipe_axi_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+244,"cachepipe_axi_wdata_o", false,-1, 63,0);
    tracep->declBit(c+297,"cachepipe_axi_wvaild_o", false,-1);
    tracep->declBit(c+285,"cachepipe_axi_wlast_o", false,-1);
    tracep->declBus(c+284,"cachepipe_axi_wlen_o", false,-1, 3,0);
    tracep->declBus(c+104,"io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram0_cen", false,-1);
    tracep->declBit(c+105,"io_sram0_wen", false,-1);
    tracep->declArray(c+106,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+114,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram1_cen", false,-1);
    tracep->declBit(c+105,"io_sram1_wen", false,-1);
    tracep->declArray(c+106,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+122,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram2_cen", false,-1);
    tracep->declBit(c+126,"io_sram2_wen", false,-1);
    tracep->declArray(c+127,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+131,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram3_cen", false,-1);
    tracep->declBit(c+126,"io_sram3_wen", false,-1);
    tracep->declArray(c+127,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+135,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram4_cen", false,-1);
    tracep->declBit(c+139,"io_sram4_wen", false,-1);
    tracep->declArray(c+140,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+148,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram5_cen", false,-1);
    tracep->declBit(c+139,"io_sram5_wen", false,-1);
    tracep->declArray(c+140,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram6_cen", false,-1);
    tracep->declBit(c+160,"io_sram6_wen", false,-1);
    tracep->declArray(c+161,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram7_cen", false,-1);
    tracep->declBit(c+160,"io_sram7_wen", false,-1);
    tracep->declArray(c+161,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+298,"rstate_current", false,-1, 1,0);
    tracep->declBus(c+17,"rstate_next", false,-1, 1,0);
    tracep->declQuad(c+299,"axicache_uncacheinst_araddr_w", false,-1, 63,0);
    tracep->declBit(c+1331,"axicache_uncacheinst_ren_w", false,-1);
    tracep->declBit(c+18,"cachepipe_icache_req_r", false,-1);
    tracep->declQuad(c+301,"cachepipe_data_raddr_tmpr", false,-1, 63,0);
    tracep->declBit(c+19,"cachepipe_dcache_req_r", false,-1);
    tracep->declBit(c+303,"cachepipe_uncachedata_ren_r", false,-1);
    tracep->declBit(c+304,"cachepipe_uncachedata_rstall_r", false,-1);
    tracep->declQuad(c+20,"cachepipe_uncachedata_araddr_r", false,-1, 63,0);
    tracep->declBus(c+305,"wstate_current", false,-1, 1,0);
    tracep->declBus(c+22,"wstate_next", false,-1, 1,0);
    tracep->declQuad(c+306,"cachepipe_data_waddr_tmp_r", false,-1, 63,0);
    tracep->declQuad(c+308,"cachepipe_data_wdata_tmp_r", false,-1, 63,0);
    tracep->declBus(c+310,"cachepipe_data_wsel_tmp_r", false,-1, 7,0);
    tracep->declBit(c+23,"dcache_write_req_r", false,-1);
    tracep->declBit(c+311,"axicache_uncachedata_wen_r", false,-1);
    tracep->declQuad(c+24,"axicache_uncachedata_awaddr_r", false,-1, 63,0);
    tracep->declQuad(c+312,"axicache_uncachedata_wdata_r", false,-1, 63,0);
    tracep->declBus(c+26,"axicache_data_wsel_r", false,-1, 7,0);
    tracep->declBit(c+314,"cachepipe_uncachedata_wstall_r", false,-1);
    tracep->declQuad(c+315,"axicache_uncachedata_rdata_w", false,-1, 63,0);
    tracep->declQuad(c+317,"cachepipe_data_rdata_w", false,-1, 63,0);
    tracep->declBus(c+232,"icache_inst1_w", false,-1, 31,0);
    tracep->declBus(c+235,"icache_inst2_w", false,-1, 31,0);
    tracep->declQuad(c+230,"cachepipe_inst_inst1pc_w", false,-1, 63,0);
    tracep->declQuad(c+319,"cachepipe_inst_uncachepc_r", false,-1, 63,0);
    tracep->declBus(c+263,"cachepipe_inst_inst1bhr_w", false,-1, 12,0);
    tracep->declBus(c+321,"cachepipe_inst_uncachebhr_r", false,-1, 12,0);
    tracep->declBus(c+264,"cachepipe_inst_inst1pht_w", false,-1, 1,0);
    tracep->declBus(c+322,"cachepipe_inst_uncachepht_r", false,-1, 1,0);
    tracep->declBit(c+265,"cachepipe_inst_inst1taken_w", false,-1);
    tracep->declBit(c+323,"cachepipe_inst_uncachetaken_r", false,-1);
    tracep->declQuad(c+266,"cachepipe_inst_inst1takenaddr_w", false,-1, 63,0);
    tracep->declQuad(c+324,"cachepipe_inst_uncachetakenaddr_r", false,-1, 63,0);
    tracep->declBus(c+268,"cachepipe_inst_inst2bhr_w", false,-1, 12,0);
    tracep->declBus(c+269,"cachepipe_inst_inst2pht_w", false,-1, 1,0);
    tracep->declBit(c+270,"cachepipe_inst_inst2taken_w", false,-1);
    tracep->declQuad(c+271,"cachepipe_inst_inst2takenaddr_w", false,-1, 63,0);
    tracep->declBit(c+257,"cachepipe_icache_stallpc_w", false,-1);
    tracep->declBit(c+259,"icache_inst1_vaild_w", false,-1);
    tracep->declBit(c+260,"icache_inst2_vaild_w", false,-1);
    tracep->declBit(c+326,"icache_rvaild_w", false,-1);
    tracep->declArray(c+327,"icache_rdata_w", false,-1, 255,0);
    tracep->declQuad(c+299,"icache_araddr_w", false,-1, 63,0);
    tracep->declBit(c+335,"icache_ren_w", false,-1);
    tracep->declBit(c+336,"axicache_uncacheinst_rvalid_w", false,-1);
    tracep->declBus(c+337,"axicache_uncacheinst_rdata_w", false,-1, 31,0);
    tracep->declBit(c+338,"axicache_uncachedata_rvalid_w", false,-1);
    tracep->declBit(c+339,"axicache_uncachedata_bvalid_w", false,-1);
    tracep->declBit(c+340,"dcache_stall_w", false,-1);
    tracep->declBit(c+341,"axicache_data_rvalid_w", false,-1);
    tracep->declArray(c+342,"axicache_data_rdata_w", false,-1, 255,0);
    tracep->declQuad(c+350,"axicache_data_araddr_w", false,-1, 63,0);
    tracep->declBit(c+27,"axicache_data_ren_w", false,-1);
    tracep->declBit(c+352,"axicache_data_bvalid_w", false,-1);
    tracep->declBit(c+28,"axicache_data_wen_w", false,-1);
    tracep->declArray(c+353,"axicache_data_wdata_w", false,-1, 255,0);
    tracep->declQuad(c+361,"axicache_data_awaddr_w", false,-1, 63,0);
    tracep->declBit(c+363,"axicache_uncacheinst_ren_r", false,-1);
    tracep->declBit(c+364,"uncache_inst_flush", false,-1);
    tracep->declBit(c+365,"cachepipe_uncache_stallpc_r", false,-1);
    tracep->declQuad(c+366,"cachepipe_inst2_raddr_w", false,-1, 63,0);
    tracep->declBit(c+1,"cachepipe_icache_req2_r", false,-1);
    tracep->declBit(c+368,"cachepipe_cachedata_rvaild_w", false,-1);
    tracep->declBit(c+29,"cachepipe_data_wvaild_w", false,-1);
    tracep->declQuad(c+30,"dcache_addr_w", false,-1, 63,0);
    tracep->declBit(c+369,"icache_noreq_w", false,-1);
    tracep->pushNamePrefix("ysyx_22040210_cache_interface_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBus(c+1339,"axicache_rsel_i", false,-1, 7,0);
    tracep->declBus(c+26,"axicache_wsel_i", false,-1, 7,0);
    tracep->declBit(c+335,"axicache_inst_ren_i", false,-1);
    tracep->declQuad(c+299,"axicache_inst_araddr_i", false,-1, 63,0);
    tracep->declBit(c+326,"axicache_inst_rvalid_o", false,-1);
    tracep->declArray(c+327,"axicache_inst_rdata_o", false,-1, 255,0);
    tracep->declBit(c+27,"axicache_data_ren_i", false,-1);
    tracep->declQuad(c+350,"axicache_data_araddr_i", false,-1, 63,0);
    tracep->declBit(c+341,"axicache_data_rvalid_o", false,-1);
    tracep->declArray(c+342,"axicache_data_rdata_o", false,-1, 255,0);
    tracep->declBit(c+28,"axicache_data_wen_i", false,-1);
    tracep->declArray(c+353,"axicache_data_wdata_i", false,-1, 255,0);
    tracep->declQuad(c+361,"axicache_data_awaddr_i", false,-1, 63,0);
    tracep->declBit(c+352,"axicache_data_bvalid_o", false,-1);
    tracep->declBit(c+370,"axicache_uncacheinst_ren_i", false,-1);
    tracep->declQuad(c+299,"axicache_uncacheinst_araddr_i", false,-1, 63,0);
    tracep->declBit(c+336,"axicache_uncacheinst_rvalid_o", false,-1);
    tracep->declBus(c+337,"axicache_uncacheinst_rdata_o", false,-1, 31,0);
    tracep->declBit(c+303,"axicache_uncachedata_ren_i", false,-1);
    tracep->declQuad(c+20,"axicache_uncachedata_araddr_i", false,-1, 63,0);
    tracep->declBit(c+338,"axicache_uncachedata_rvalid_o", false,-1);
    tracep->declQuad(c+315,"axicache_uncachedata_rdata_o", false,-1, 63,0);
    tracep->declBit(c+311,"axicache_uncachedata_wen_i", false,-1);
    tracep->declQuad(c+312,"axicache_uncachedata_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+24,"axicache_uncachedata_awaddr_i", false,-1, 63,0);
    tracep->declBit(c+339,"axicache_uncachedata_bvalid_o", false,-1);
    tracep->declBus(c+251,"axicache_axi_wsel_o", false,-1, 7,0);
    tracep->declBus(c+250,"axicache_axi_rsel_o", false,-1, 7,0);
    tracep->declQuad(c+254,"axicache_axi_rdata_i", false,-1, 63,0);
    tracep->declBit(c+252,"axicache_axi_rresp_i", false,-1);
    tracep->declBit(c+242,"axicache_axi_ren_o", false,-1);
    tracep->declBit(c+296,"axicache_axi_rready_o", false,-1);
    tracep->declQuad(c+246,"axicache_axi_raddr_o", false,-1, 63,0);
    tracep->declBus(c+283,"axicache_axi_rlen_o", false,-1, 3,0);
    tracep->declBit(c+253,"axicache_axi_wresp_i", false,-1);
    tracep->declBit(c+243,"axicache_axi_wen_o", false,-1);
    tracep->declBit(c+297,"axicache_axi_wvaild_o", false,-1);
    tracep->declQuad(c+248,"axicache_axi_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+244,"axicache_axi_wdata_o", false,-1, 63,0);
    tracep->declBus(c+284,"axicache_axi_wlen_o", false,-1, 3,0);
    tracep->declBit(c+285,"axicache_axi_wlast_o", false,-1);
    tracep->declBus(c+371,"rstate_current", false,-1, 2,0);
    tracep->declBus(c+32,"rstate_next", false,-1, 2,0);
    tracep->declBus(c+372,"cache_rcount_r", false,-1, 1,0);
    tracep->declBus(c+373,"wstate_current", false,-1, 2,0);
    tracep->declBus(c+33,"wstate_next", false,-1, 2,0);
    tracep->declBus(c+374,"cache_wcount_r", false,-1, 1,0);
    tracep->declQuad(c+375,"axicache_inst_araddr_r", false,-1, 63,0);
    tracep->declQuad(c+377,"axicache_data_araddr_r", false,-1, 63,0);
    tracep->declQuad(c+379,"axicache_uncacheinst_araddr_r", false,-1, 63,0);
    tracep->declQuad(c+381,"axicache_uncachedata_araddr_r", false,-1, 63,0);
    tracep->declArray(c+383,"axicache_data_wdata_r", false,-1, 255,0);
    tracep->declQuad(c+391,"axicache_data_awaddr_r", false,-1, 63,0);
    tracep->declQuad(c+393,"axicache_uncachedata_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+395,"axicache_uncachedata_awaddr_r", false,-1, 63,0);
    tracep->declBus(c+397,"axicache_axi_rsel_r", false,-1, 7,0);
    tracep->declBus(c+398,"axicache_axi_wsel_r", false,-1, 7,0);
    tracep->declBus(c+34,"debug", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+399+i*1,"tempuncacherdata", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_dcache_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+19,"dcache_read_req_i", false,-1);
    tracep->declBit(c+281,"dcache_invalid_i", false,-1);
    tracep->declBit(c+23,"dcache_write_req_i", false,-1);
    tracep->declQuad(c+30,"dcache_addr_i", false,-1, 63,0);
    tracep->declQuad(c+239,"dcache_wdata_i", false,-1, 63,0);
    tracep->declBus(c+8,"dcache_wsel_i", false,-1, 7,0);
    tracep->declBit(c+368,"dcache_rdatavaild_o", false,-1);
    tracep->declQuad(c+317,"dcache_rdata_o", false,-1, 63,0);
    tracep->declBit(c+340,"dcache_stall_o", false,-1);
    tracep->declBit(c+29,"writevaild", false,-1);
    tracep->declBit(c+282,"isinvalidsuccess", false,-1);
    tracep->declBit(c+341,"dcache_rvaild_i", false,-1);
    tracep->declArray(c+342,"dcache_rdata_i", false,-1, 255,0);
    tracep->declQuad(c+350,"dcache_araddr_o", false,-1, 63,0);
    tracep->declBit(c+27,"dcache_ren_o", false,-1);
    tracep->declBit(c+352,"dcache_bvaild_i", false,-1);
    tracep->declBit(c+28,"dcache_wen_o", false,-1);
    tracep->declArray(c+353,"dcache_wdata_o", false,-1, 255,0);
    tracep->declQuad(c+361,"dcache_awaddr_o", false,-1, 63,0);
    tracep->declBus(c+2,"io_sram4_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram4_cen", false,-1);
    tracep->declBit(c+139,"io_sram4_wen", false,-1);
    tracep->declArray(c+140,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+148,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram5_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram5_cen", false,-1);
    tracep->declBit(c+139,"io_sram5_wen", false,-1);
    tracep->declArray(c+140,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram6_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram6_cen", false,-1);
    tracep->declBit(c+160,"io_sram6_wen", false,-1);
    tracep->declArray(c+161,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+144,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+2,"io_sram7_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram7_cen", false,-1);
    tracep->declBit(c+160,"io_sram7_wen", false,-1);
    tracep->declArray(c+161,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+341,"bus_readsuccess", false,-1);
    tracep->declBit(c+401,"dcache_read_req_r", false,-1);
    tracep->declBit(c+402,"dcache_write_req_r", false,-1);
    tracep->declQuad(c+403,"dcache_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+350,"dcache_addr_r", false,-1, 63,0);
    tracep->declBus(c+405,"dcache_wsel_r", false,-1, 7,0);
    tracep->declQuad(c+1340,"buffer_raddr_w", false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+406+i*2,"buffer_wdata_r", true,(i+0), 63,0);
    }
    tracep->declQuad(c+414,"buffer_waddr_w", false,-1, 63,0);
    tracep->declQuad(c+35,"buffer_waddr_mux", false,-1, 63,0);
    tracep->declArray(c+37,"buffer_wdata_mux", false,-1, 255,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+416+i*2,"buffer_rdata_w", true,(i+0), 63,0);
    }
    tracep->declBus(c+45,"buffer_state_w", false,-1, 1,0);
    tracep->declBit(c+424,"buffer_hit_w", false,-1);
    tracep->declBit(c+46,"buffer_whit_w", false,-1);
    tracep->declBit(c+424,"buffer_rhit_w", false,-1);
    tracep->declBit(c+47,"buffer_wreq_w", false,-1);
    tracep->declBit(c+48,"buffer_write_req_mux", false,-1);
    tracep->declQuad(c+1342,"ram_addr_w", false,-1, 63,0);
    tracep->declArray(c+425,"dcache_wmask_w", false,-1, 127,0);
    tracep->declArray(c+429,"way0_we_w", false,-1, 127,0);
    tracep->declArray(c+140,"way0_we_mux", false,-1, 127,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+1344+i*4,"way_wdata_r2", true,(i+0), 127,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+433+i*2,"way_wdata_r", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+441+i*2,"way0_rdata_w", true,(i+0), 63,0);
    }
    tracep->declQuad(c+449,"way0_rtag_w", false,-1, 53,0);
    tracep->declQuad(c+451,"rtag0_w", false,-1, 53,0);
    tracep->declArray(c+453,"way1_we_w", false,-1, 127,0);
    tracep->declArray(c+161,"way1_we_mux", false,-1, 127,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+457+i*2,"way1_rdata_w", true,(i+0), 63,0);
    }
    tracep->declQuad(c+465,"way1_rtag_w", false,-1, 53,0);
    tracep->declQuad(c+467,"rtag1_w", false,-1, 53,0);
    tracep->declQuad(c+469,"plru_r", false,-1, 63,0);
    tracep->declBit(c+471,"cacheway_sel", false,-1);
    tracep->declBit(c+472,"way0_hit_w", false,-1);
    tracep->declBit(c+473,"way1_hit_w", false,-1);
    tracep->declBit(c+474,"hit_success", false,-1);
    tracep->declBit(c+475,"hit_fail", false,-1);
    tracep->declArray(c+476,"dirty_r", false,-1, 127,0);
    tracep->declBit(c+480,"is_write_dirty_w", false,-1);
    tracep->declQuad(c+481,"dcache_wdata_tmp_r", false,-1, 63,0);
    tracep->declQuad(c+483,"data0_w", false,-1, 63,0);
    tracep->declQuad(c+485,"data1_w", false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+487+i*2,"way_wdata_tmp_r", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+495+i*2,"rdata0_w", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+503+i*2,"rdata1_w", true,(i+0), 63,0);
    }
    tracep->declQuad(c+511,"dcache_addr_tmp_r", false,-1, 53,0);
    tracep->declBit(c+513,"ram_collision_way0_tmp_r", false,-1);
    tracep->declBit(c+514,"ram_collision_way1_tmp_r", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+515+i*2,"core_data_r", true,(i+0), 63,0);
    }
    tracep->declQuad(c+49,"ram_raddr_w", false,-1, 63,0);
    tracep->declQuad(c+51,"ram_raddr_mux", false,-1, 63,0);
    tracep->declBus(c+523,"cnt", false,-1, 6,0);
    tracep->declBus(c+524,"currentstate", false,-1, 2,0);
    tracep->declBus(c+53,"nextstate", false,-1, 2,0);
    tracep->declBit(c+525,"invalidcheck", false,-1);
    tracep->declQuad(c+526,"tag0valid_r", false,-1, 63,0);
    tracep->declQuad(c+528,"tag1valid_r", false,-1, 63,0);
    tracep->declBit(c+530,"readtag0valid", false,-1);
    tracep->declBit(c+531,"readtag1valid", false,-1);
    tracep->declBit(c+29,"iswritesram", false,-1);
    tracep->pushNamePrefix("tagway0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+532,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+139,"WEN", false,-1);
    tracep->declArray(c+140,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+54,"B", false,-1, 5,0);
    tracep->declArray(c+536,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+139,"wen", false,-1);
    tracep->declArray(c+140,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tagway1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+540,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+160,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+2,"A", false,-1, 5,0);
    tracep->declBus(c+54,"B", false,-1, 5,0);
    tracep->declArray(c+536,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+160,"wen", false,-1);
    tracep->declArray(c+161,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_writebuffer_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+48,"buffer_write_req_i", false,-1);
    tracep->declQuad(c+35,"buffer_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+51,"buffer_raddr_i", false,-1, 63,0);
    tracep->declArray(c+37,"buffer_wdata_i", false,-1, 255,0);
    tracep->declArray(c+544,"buffer_rdata_o", false,-1, 255,0);
    tracep->declBit(c+424,"bufferread_hit_o", false,-1);
    tracep->declBit(c+46,"bufferwrite_hit_o", false,-1);
    tracep->declBus(c+45,"buffer_state_o", false,-1, 1,0);
    tracep->declBit(c+352,"buffer_bvaild_i", false,-1);
    tracep->declBit(c+28,"buffer_wen_o", false,-1);
    tracep->declArray(c+353,"buffer_wdata_o", false,-1, 255,0);
    tracep->declQuad(c+361,"buffer_awaddr_o", false,-1, 63,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+552+i*8,"buffer_data", true,(i+0), 255,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+616+i*2,"buffer_addr", true,(i+0), 63,0);
    }
    tracep->declBit(c+55,"writehit_head_w", false,-1);
    tracep->declBus(c+632,"buffer_tail_r", false,-1, 2,0);
    tracep->declBus(c+633,"buffer_head_r", false,-1, 2,0);
    tracep->declBus(c+634,"buffer_valid_r", false,-1, 7,0);
    tracep->declBus(c+635,"bufferread_hit_r", false,-1, 7,0);
    tracep->declBus(c+56,"bufferwrite_hit_w", false,-1, 7,0);
    tracep->declQuad(c+57,"buffer_awaddr_w", false,-1, 63,0);
    tracep->declQuad(c+59,"buffer_araddr_w", false,-1, 63,0);
    tracep->declBit(c+636,"buffer_rewrite_r", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040210_icache_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+18,"icache_read_req_i", false,-1);
    tracep->declQuad(c+228,"icache_addr_i", false,-1, 63,0);
    tracep->declBus(c+232,"icache_inst1_o", false,-1, 31,0);
    tracep->declQuad(c+230,"icache_pc_o", false,-1, 63,0);
    tracep->declBit(c+259,"icache_inst1_vaild_o", false,-1);
    tracep->declBit(c+637,"icache_read_hit_o", false,-1);
    tracep->declBit(c+257,"icache_stall_o", false,-1);
    tracep->declBit(c+13,"icache_flush_i", false,-1);
    tracep->declBit(c+261,"icache_flushifid", false,-1);
    tracep->declBus(c+295,"icache_cpustall_i", false,-1, 5,0);
    tracep->declBit(c+281,"icache_invalid_i", false,-1);
    tracep->declBus(c+273,"icache_bhr_i", false,-1, 12,0);
    tracep->declBus(c+274,"icache_pht_i", false,-1, 1,0);
    tracep->declBit(c+275,"icache_bpu1istaken_i", false,-1);
    tracep->declBit(c+276,"icache_bpu2istaken_i", false,-1);
    tracep->declQuad(c+277,"icache_bpu1hitaddr_i", false,-1, 63,0);
    tracep->declQuad(c+279,"icache_bpu2hitaddr_i", false,-1, 63,0);
    tracep->declBus(c+263,"icache_inst_inst1bhr_o", false,-1, 12,0);
    tracep->declBus(c+264,"icache_inst_inst1pht_o", false,-1, 1,0);
    tracep->declBit(c+265,"icache_inst_inst1taken_o", false,-1);
    tracep->declQuad(c+266,"icache_inst_inst1takenaddr_o", false,-1, 63,0);
    tracep->declBus(c+268,"icache_inst_inst2bhr_o", false,-1, 12,0);
    tracep->declBus(c+269,"icache_inst_inst2pht_o", false,-1, 1,0);
    tracep->declBit(c+270,"icache_inst_inst2taken_o", false,-1);
    tracep->declQuad(c+271,"icache_inst_inst2takenaddr_o", false,-1, 63,0);
    tracep->declBit(c+1,"icache_read_req2_i", false,-1);
    tracep->declQuad(c+366,"icache_addr2_i", false,-1, 63,0);
    tracep->declBus(c+235,"icache_inst2_o", false,-1, 31,0);
    tracep->declQuad(c+233,"icache_pc2_o", false,-1, 63,0);
    tracep->declBit(c+260,"icache_inst2_vaild_o", false,-1);
    tracep->declBit(c+369,"icache_noreq_o", false,-1);
    tracep->declBit(c+326,"icache_rvaild_i", false,-1);
    tracep->declArray(c+327,"icache_rdata_i", false,-1, 255,0);
    tracep->declQuad(c+299,"icache_araddr_o", false,-1, 63,0);
    tracep->declBit(c+335,"icache_ren_o", false,-1);
    tracep->declBus(c+104,"io_sram0_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram0_cen", false,-1);
    tracep->declBit(c+105,"io_sram0_wen", false,-1);
    tracep->declArray(c+106,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+114,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram1_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram1_cen", false,-1);
    tracep->declBit(c+105,"io_sram1_wen", false,-1);
    tracep->declArray(c+106,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+122,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram2_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram2_cen", false,-1);
    tracep->declBit(c+126,"io_sram2_wen", false,-1);
    tracep->declArray(c+127,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+110,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+131,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+104,"io_sram3_addr", false,-1, 5,0);
    tracep->declBit(c+1276,"io_sram3_cen", false,-1);
    tracep->declBit(c+126,"io_sram3_wen", false,-1);
    tracep->declArray(c+127,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+118,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+135,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+326,"bus_readsuccess", false,-1);
    tracep->declBit(c+638,"bus_readsuccess_r2", false,-1);
    tracep->declBus(c+639,"icache_inst_inst1bhr_r", false,-1, 12,0);
    tracep->declBus(c+640,"icache_inst_inst1pht_r", false,-1, 1,0);
    tracep->declBit(c+641,"icache_inst_inst1taken_r", false,-1);
    tracep->declQuad(c+642,"icache_inst_inst1takenaddr_r", false,-1, 63,0);
    tracep->declBus(c+644,"icache_inst_inst2bhr_r", false,-1, 12,0);
    tracep->declBus(c+645,"icache_inst_inst2pht_r", false,-1, 1,0);
    tracep->declBit(c+646,"icache_inst_inst2taken_r", false,-1);
    tracep->declQuad(c+647,"icache_inst_inst2takenaddr_r", false,-1, 63,0);
    tracep->declBit(c+649,"icache_read_req_r", false,-1);
    tracep->declBit(c+650,"icache_flush_r", false,-1);
    tracep->declQuad(c+651,"icache_pc_r", false,-1, 63,0);
    tracep->declQuad(c+299,"icache_addr_r", false,-1, 63,0);
    tracep->declBit(c+653,"icache_read_req2_r", false,-1);
    tracep->declQuad(c+654,"icache_pc2_r", false,-1, 63,0);
    tracep->declQuad(c+656,"icache_addr2_r", false,-1, 63,0);
    tracep->declBit(c+1331,"flushr1", false,-1);
    tracep->declBit(c+1331,"flushr2", false,-1);
    tracep->declBit(c+658,"iswritesram", false,-1);
    tracep->declQuad(c+659,"ram_raddr_w", false,-1, 63,0);
    tracep->declQuad(c+661,"ram_raddr2_w", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+663+i*4,"way_wdata_w", true,(i+0), 127,0);
    }
    tracep->declArray(c+671,"way_wdata_r2", false,-1, 127,0);
    tracep->declArray(c+675,"way_wdata2_r2", false,-1, 127,0);
    tracep->declBit(c+679,"way0_hit_w", false,-1);
    tracep->declBit(c+680,"way1_hit_w", false,-1);
    tracep->declBit(c+681,"hit_success", false,-1);
    tracep->declBit(c+682,"hit_fail", false,-1);
    tracep->declQuad(c+683,"icache_addr_delay_r", false,-1, 63,0);
    tracep->declArray(c+685,"inst1_way0", false,-1, 127,0);
    tracep->declArray(c+689,"inst1_way1", false,-1, 127,0);
    tracep->declArray(c+693,"inst2_way0", false,-1, 127,0);
    tracep->declArray(c+697,"inst2_way1", false,-1, 127,0);
    tracep->declArray(c+106,"way0_we_w", false,-1, 127,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+701+i*4,"way0_rdata_w", true,(i+0), 127,0);
    }
    tracep->declQuad(c+709,"way0_rtag_w", false,-1, 53,0);
    tracep->declQuad(c+709,"rtag0_w", false,-1, 53,0);
    tracep->declArray(c+127,"way1_we_w", false,-1, 127,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+711+i*4,"way1_rdata_w", true,(i+0), 127,0);
    }
    tracep->declQuad(c+719,"way1_rtag_w", false,-1, 53,0);
    tracep->declQuad(c+719,"rtag1_w", false,-1, 53,0);
    tracep->declArray(c+721,"icache_instpack_w", false,-1, 127,0);
    tracep->declArray(c+725,"icache_inst2pack_w", false,-1, 127,0);
    tracep->declQuad(c+729,"plru_r", false,-1, 63,0);
    tracep->declBit(c+731,"cacheway_sel", false,-1);
    tracep->declBit(c+637,"hit_success_r2", false,-1);
    tracep->declBit(c+732,"hit_fail_r2", false,-1);
    tracep->declBit(c+733,"icache_read_req_r2", false,-1);
    tracep->declBit(c+734,"icache_read_req2_r2", false,-1);
    tracep->declBit(c+735,"way0_hit_r2", false,-1);
    tracep->declBit(c+736,"way1_hit_r2", false,-1);
    tracep->declBit(c+737,"icache_flush_r2", false,-1);
    tracep->declQuad(c+738,"icache_addr_r2", false,-1, 63,0);
    tracep->declQuad(c+740,"icache_addr2_r2", false,-1, 63,0);
    tracep->declQuad(c+742,"tag0valid_r", false,-1, 63,0);
    tracep->declQuad(c+744,"tag1valid_r", false,-1, 63,0);
    tracep->declBit(c+746,"instbufferfull", false,-1);
    tracep->declQuad(c+61,"tag_raddr_w", false,-1, 63,0);
    tracep->declBit(c+747,"readtag0valid", false,-1);
    tracep->declBit(c+748,"readtag1valid", false,-1);
    tracep->declBit(c+261,"icache_flush_tmp_r", false,-1);
    tracep->declBit(c+749,"iswritesram_r", false,-1);
    tracep->declBit(c+750,"icache_inst1_vaild_w", false,-1);
    tracep->pushNamePrefix("tagway0 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+751,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+105,"WEN", false,-1);
    tracep->declArray(c+106,"BWEN", false,-1, 127,0);
    tracep->declBus(c+63,"A", false,-1, 5,0);
    tracep->declBus(c+63,"B", false,-1, 5,0);
    tracep->declArray(c+755,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+105,"wen", false,-1);
    tracep->declArray(c+106,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tagway1 ");
    tracep->declBus(c+1328,"Bits", false,-1, 31,0);
    tracep->declBus(c+1329,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1330,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1328,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+759,"Q", false,-1, 127,0);
    tracep->declBit(c+1263,"CLK", false,-1);
    tracep->declBit(c+1276,"CEN", false,-1);
    tracep->declBit(c+126,"WEN", false,-1);
    tracep->declArray(c+127,"BWEN", false,-1, 127,0);
    tracep->declBus(c+63,"A", false,-1, 5,0);
    tracep->declBus(c+63,"B", false,-1, 5,0);
    tracep->declArray(c+755,"D", false,-1, 127,0);
    tracep->declBit(c+1276,"cen", false,-1);
    tracep->declBit(c+126,"wen", false,-1);
    tracep->declArray(c+127,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_22040210_pipeline_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declQuad(c+230,"pipeline_thispc_i", false,-1, 63,0);
    tracep->declBus(c+232,"pipeline_inst_i", false,-1, 31,0);
    tracep->declBus(c+235,"pipeline_inst2_i", false,-1, 31,0);
    tracep->declQuad(c+233,"pipeline_thispc2_i", false,-1, 63,0);
    tracep->declBit(c+260,"pipeline_inst2vaild_i", false,-1);
    tracep->declBit(c+1265,"pipeline_ce_o", false,-1);
    tracep->declQuad(c+228,"pipeline_pc_o", false,-1, 63,0);
    tracep->declBus(c+263,"pipeline_inst1bhr_i", false,-1, 12,0);
    tracep->declBus(c+264,"pipeline_inst1pht_i", false,-1, 1,0);
    tracep->declBit(c+265,"pipeline_inst1taken_i", false,-1);
    tracep->declQuad(c+266,"pipeline_inst1takenaddr_i", false,-1, 63,0);
    tracep->declBus(c+268,"pipeline_inst2bhr_i", false,-1, 12,0);
    tracep->declBus(c+269,"pipeline_inst2pht_i", false,-1, 1,0);
    tracep->declBit(c+270,"pipeline_inst2taken_i", false,-1);
    tracep->declQuad(c+271,"pipeline_inst2takenaddr_i", false,-1, 63,0);
    tracep->declBus(c+273,"bpu_bhr_o", false,-1, 12,0);
    tracep->declBus(c+274,"bpu_pht_o", false,-1, 1,0);
    tracep->declBit(c+275,"bpu1istaken_o", false,-1);
    tracep->declBit(c+276,"bpu2istaken_o", false,-1);
    tracep->declQuad(c+277,"bpu1hitaddr_o", false,-1, 63,0);
    tracep->declQuad(c+279,"bpu2hitaddr_o", false,-1, 63,0);
    tracep->declBit(c+282,"pipeline_invalidcachesuccess_i", false,-1);
    tracep->declBit(c+281,"pipeline_invalidcache_o", false,-1);
    tracep->declQuad(c+5,"pipeline_memrdata_i", false,-1, 63,0);
    tracep->declBit(c+763,"pipeline_memrdatavaild_i", false,-1);
    tracep->declBit(c+64,"pipeline_memwdatavaild_i", false,-1);
    tracep->declBus(c+241,"pipeline_memwsize_o", false,-1, 2,0);
    tracep->declBit(c+238,"pipeline_memre_o", false,-1);
    tracep->declBus(c+8,"pipeline_memwe_o", false,-1, 7,0);
    tracep->declQuad(c+9,"pipeline_memaddr_o", false,-1, 63,0);
    tracep->declQuad(c+239,"pipeline_memwdata_o", false,-1, 63,0);
    tracep->declBit(c+1,"pipeline_icache_req2_i", false,-1);
    tracep->declBit(c+262,"piepline_bpu1hit_o", false,-1);
    tracep->declBit(c+259,"pipeline_instvaild_i", false,-1);
    tracep->declBit(c+257,"stall_cachereq_i", false,-1);
    tracep->declBit(c+1331,"stall_uncachereq_i", false,-1);
    tracep->declBus(c+3,"stall", false,-1, 5,0);
    tracep->declBus(c+4,"flush", false,-1, 5,0);
    tracep->declBit(c+261,"cachepipe_flushifid", false,-1);
    tracep->declBit(c+256,"pipeline_instbuffer_full_o", false,-1);
    tracep->declBit(c+236,"pipeline_dpic_stop_o", false,-1);
    tracep->declBit(c+764,"stall_exreq_w", false,-1);
    tracep->declBit(c+765,"stall_idreq_w", false,-1);
    tracep->declBit(c+766,"isjump_w", false,-1);
    tracep->declQuad(c+767,"jumpaddr_w", false,-1, 63,0);
    tracep->declBit(c+769,"buffer_issuevaild_w", false,-1);
    tracep->declBus(c+770,"id_inst_r", false,-1, 31,0);
    tracep->declBus(c+771,"ex_inst_r", false,-1, 31,0);
    tracep->declQuad(c+772,"id_pc_r", false,-1, 63,0);
    tracep->declQuad(c+774,"id_dnpc_r", false,-1, 63,0);
    tracep->declQuad(c+1266,"id_reg1_rdata_r", false,-1, 63,0);
    tracep->declQuad(c+1268,"id_reg2_rdata_r", false,-1, 63,0);
    tracep->declBit(c+776,"id_reg1_re_w", false,-1);
    tracep->declBit(c+777,"id_reg2_re_w", false,-1);
    tracep->declQuad(c+778,"id_reg1_raddr_w", false,-1, 63,0);
    tracep->declQuad(c+780,"ex_reg1_raddr_r", false,-1, 63,0);
    tracep->declQuad(c+782,"id_reg2_raddr_w", false,-1, 63,0);
    tracep->declBit(c+784,"id_csr1_re_w", false,-1);
    tracep->declQuad(c+785,"id_csr1_raddr_w", false,-1, 63,0);
    tracep->declQuad(c+787,"id_csr1_rdata_w", false,-1, 63,0);
    tracep->declBit(c+789,"id_csr2_re_w", false,-1);
    tracep->declQuad(c+790,"id_csr2_raddr_w", false,-1, 63,0);
    tracep->declQuad(c+792,"id_csr2_rdata_w", false,-1, 63,0);
    tracep->declQuad(c+772,"id_pc_w", false,-1, 63,0);
    tracep->declQuad(c+774,"id_dnpc_w", false,-1, 63,0);
    tracep->declBit(c+794,"id_dpicstop_w", false,-1);
    tracep->declBus(c+795,"id_aluop_w", false,-1, 7,0);
    tracep->declBus(c+796,"id_alusel_w", false,-1, 2,0);
    tracep->declQuad(c+1270,"id_op1_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+1272,"id_op2_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+797,"id_op3_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+799,"id_reg_waddr_w", false,-1, 63,0);
    tracep->declBit(c+801,"id_we_w", false,-1);
    tracep->declBit(c+802,"id_instvalid_w", false,-1);
    tracep->declQuad(c+803,"id_csrop1_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+805,"id_csrop2_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+807,"id_csrreg_waddr_w", false,-1, 63,0);
    tracep->declBit(c+809,"id_csr1we_w", false,-1);
    tracep->declQuad(c+810,"id_inst1takenaddr_w", false,-1, 63,0);
    tracep->declBit(c+812,"id_inst1taken_w", false,-1);
    tracep->declBus(c+813,"id_inst1pht_w", false,-1, 1,0);
    tracep->declBus(c+814,"id_inst1bhr_w", false,-1, 12,0);
    tracep->declBit(c+815,"prmiss", false,-1);
    tracep->declBit(c+816,"prsuccess", false,-1);
    tracep->declBus(c+817,"ex_inst1pht_r", false,-1, 1,0);
    tracep->declBus(c+818,"ex_inst1bhr_r", false,-1, 12,0);
    tracep->declBit(c+819,"ex_inst1taken_r", false,-1);
    tracep->declQuad(c+820,"ex_inst1takenaddr_r", false,-1, 63,0);
    tracep->declQuad(c+822,"ex_pc_r", false,-1, 63,0);
    tracep->declQuad(c+824,"ex_dnpc_r", false,-1, 63,0);
    tracep->declBit(c+826,"ex_dpicstop_r", false,-1);
    tracep->declBus(c+827,"ex_aluop_r", false,-1, 7,0);
    tracep->declBus(c+828,"ex_alusel_r", false,-1, 2,0);
    tracep->declQuad(c+829,"ex_op1_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+831,"ex_op2_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+833,"ex_op3_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+835,"ex_reg_waddr_r", false,-1, 63,0);
    tracep->declBit(c+837,"ex_we_r", false,-1);
    tracep->declBit(c+838,"ex_instvalid_r", false,-1);
    tracep->declQuad(c+839,"ex_csrop1_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+841,"ex_csrop2_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+843,"ex_csrreg_waddr_r", false,-1, 63,0);
    tracep->declBit(c+845,"ex_csr1we_r", false,-1);
    tracep->declBus(c+827,"ex_aluop_w", false,-1, 7,0);
    tracep->declBus(c+846,"ex_bjop_w", false,-1, 2,0);
    tracep->declQuad(c+822,"ex_pc_w", false,-1, 63,0);
    tracep->declQuad(c+847,"ex_dnpc_w", false,-1, 63,0);
    tracep->declBit(c+826,"ex_dpicstop_w", false,-1);
    tracep->declBit(c+838,"ex_instvalid_w", false,-1);
    tracep->declBus(c+1352,"ex_aluop_o_w", false,-1, 7,0);
    tracep->declQuad(c+849,"ex_reg_waddr_w", false,-1, 63,0);
    tracep->declBit(c+837,"ex_we_w", false,-1);
    tracep->declQuad(c+851,"ex_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+843,"ex_csr_waddr_w", false,-1, 63,0);
    tracep->declBit(c+845,"ex_csrwe_w", false,-1);
    tracep->declQuad(c+853,"ex_csrwdata_w", false,-1, 63,0);
    tracep->declBit(c+855,"mem_prmiss_r", false,-1);
    tracep->declBit(c+856,"mem_prsuccess_r", false,-1);
    tracep->declBus(c+857,"mem_inst1pht_r", false,-1, 1,0);
    tracep->declBus(c+858,"mem_inst1bhr_r", false,-1, 12,0);
    tracep->declBit(c+859,"mem_inst1taken_r", false,-1);
    tracep->declQuad(c+860,"mem_inst1takenaddr_r", false,-1, 63,0);
    tracep->declQuad(c+862,"mem_pc_r", false,-1, 63,0);
    tracep->declQuad(c+864,"mem_dnpc_r", false,-1, 63,0);
    tracep->declBit(c+866,"mem_dpicstop_r", false,-1);
    tracep->declBus(c+867,"mem_aluop_r", false,-1, 7,0);
    tracep->declBit(c+868,"mem_instvalid_r", false,-1);
    tracep->declQuad(c+869,"mem_reg_waddr_r", false,-1, 63,0);
    tracep->declBit(c+871,"mem_we_r", false,-1);
    tracep->declQuad(c+872,"mem_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+874,"mem_csr_waddr_r", false,-1, 63,0);
    tracep->declBit(c+876,"mem_csrwe_r", false,-1);
    tracep->declBus(c+877,"mem_bjop_r", false,-1, 2,0);
    tracep->declQuad(c+878,"mem_csrwdata_r", false,-1, 63,0);
    tracep->declBit(c+65,"mem_stall_memreq_w", false,-1);
    tracep->declBit(c+880,"mem_flush_memreq_w", false,-1);
    tracep->declQuad(c+862,"mem_pc_w", false,-1, 63,0);
    tracep->declQuad(c+864,"mem_dnpc_w", false,-1, 63,0);
    tracep->declBit(c+866,"mem_dpicstop_w", false,-1);
    tracep->declBit(c+868,"mem_instvalid_w", false,-1);
    tracep->declQuad(c+869,"mem_reg_waddr_w", false,-1, 63,0);
    tracep->declBit(c+871,"mem_we_w", false,-1);
    tracep->declQuad(c+66,"mem_wdata_w", false,-1, 63,0);
    tracep->declQuad(c+874,"mem_csr_waddr_w", false,-1, 63,0);
    tracep->declBit(c+876,"mem_csrwe_w", false,-1);
    tracep->declQuad(c+878,"mem_csrwdata_w", false,-1, 63,0);
    tracep->declBit(c+881,"mem_isjump_r", false,-1);
    tracep->declBus(c+882,"bpu_fixpht_w", false,-1, 1,0);
    tracep->declBit(c+883,"bpu_fixwe_w", false,-1);
    tracep->declQuad(c+884,"bpu_fixjumpaddr_w", false,-1, 63,0);
    tracep->declBit(c+886,"wb_prmiss_r", false,-1);
    tracep->declBit(c+887,"wb_prsuccess_r", false,-1);
    tracep->declBus(c+888,"wb_inst1pht_r", false,-1, 1,0);
    tracep->declBus(c+889,"wb_inst1bhr_r", false,-1, 12,0);
    tracep->declBit(c+890,"wb_inst1taken_r", false,-1);
    tracep->declQuad(c+884,"wb_inst1takenaddr_r", false,-1, 63,0);
    tracep->declQuad(c+891,"wb_pc_r", false,-1, 63,0);
    tracep->declQuad(c+893,"wb_dnpc_r", false,-1, 63,0);
    tracep->declBit(c+236,"wb_dpicstop_r", false,-1);
    tracep->declBit(c+895,"wb_instvalid_r", false,-1);
    tracep->declQuad(c+896,"wb_reg_waddr_r", false,-1, 63,0);
    tracep->declBit(c+898,"wb_we_r", false,-1);
    tracep->declQuad(c+899,"wb_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+901,"wb_csr_waddr_r", false,-1, 63,0);
    tracep->declBit(c+903,"wb_csrwe_r", false,-1);
    tracep->declQuad(c+904,"wb_csrwdata_r", false,-1, 63,0);
    tracep->declBus(c+906,"wb_bjop_r", false,-1, 2,0);
    tracep->declBit(c+907,"wb_isjump_r", false,-1);
    tracep->declBit(c+908,"btb_fixwe_w", false,-1);
    tracep->declQuad(c+228,"pc", false,-1, 63,0);
    tracep->declQuad(c+366,"pcplus4", false,-1, 63,0);
    tracep->declQuad(c+909,"pcplus8", false,-1, 63,0);
    tracep->declQuad(c+68,"nextpc", false,-1, 63,0);
    tracep->declBit(c+262,"bpu1hit", false,-1);
    tracep->declBit(c+911,"bpu2hit", false,-1);
    tracep->declBit(c+912,"stallbpu", false,-1);
    tracep->declBit(c+913,"exisjump", false,-1);
    tracep->declQuad(c+914,"counterjump", false,-1, 63,0);
    tracep->declQuad(c+916,"counterISjump", false,-1, 63,0);
    tracep->declQuad(c+918,"countersuccess", false,-1, 63,0);
    tracep->declQuad(c+920,"countergsharesuccess", false,-1, 63,0);
    tracep->declQuad(c+922,"counterprimiss", false,-1, 63,0);
    tracep->declQuad(c+924,"counterbtbprimiss", false,-1, 63,0);
    tracep->declQuad(c+926,"counterras", false,-1, 63,0);
    tracep->declQuad(c+928,"counterrasprimiss", false,-1, 63,0);
    tracep->declQuad(c+930,"counterrasprimiss2", false,-1, 63,0);
    tracep->declQuad(c+932,"counterbtbhit", false,-1, 63,0);
    tracep->declQuad(c+934,"counterbtbhit2", false,-1, 63,0);
    tracep->declQuad(c+936,"counterbtbmiss", false,-1, 63,0);
    tracep->declQuad(c+938,"counterbtbretmiss", false,-1, 63,0);
    tracep->declQuad(c+940,"counterghrmiss", false,-1, 63,0);
    tracep->declQuad(c+942,"jumpflag1", false,-1, 63,0);
    tracep->declQuad(c+944,"jumpflag2", false,-1, 63,0);
    tracep->declQuad(c+946,"jumpflag3", false,-1, 63,0);
    tracep->declQuad(c+948,"jumpflag4", false,-1, 63,0);
    tracep->declQuad(c+950,"jumpflag5", false,-1, 63,0);
    tracep->declQuad(c+952,"jumpflag6", false,-1, 63,0);
    tracep->declQuad(c+954,"jumpflag7", false,-1, 63,0);
    tracep->declQuad(c+956,"jumpflag8", false,-1, 63,0);
    tracep->declQuad(c+958,"jumpflag9", false,-1, 63,0);
    tracep->declQuad(c+960,"jumpflag10", false,-1, 63,0);
    tracep->declQuad(c+962,"jumpflag11", false,-1, 63,0);
    tracep->declQuad(c+964,"jumpflag12", false,-1, 63,0);
    tracep->declQuad(c+966,"jumpflag13", false,-1, 63,0);
    tracep->declQuad(c+968,"jumpflag14", false,-1, 63,0);
    tracep->declQuad(c+970,"jumpflag15", false,-1, 63,0);
    tracep->declBus(c+972,"testghr", false,-1, 12,0);
    tracep->pushNamePrefix("ysyx_22040210_bpu_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+912,"stall", false,-1);
    tracep->declBit(c+13,"flush", false,-1);
    tracep->declBit(c+766,"exisjump_i", false,-1);
    tracep->declBit(c+1331,"gshare_prsuccessbutnotupdate_i", false,-1);
    tracep->declBit(c+13,"bpu_prmiss_i", false,-1);
    tracep->declBus(c+818,"bpu_exfixbhr_i", false,-1, 12,0);
    tracep->declBus(c+818,"bpu_exrealbhr_i", false,-1, 12,0);
    tracep->declBit(c+908,"btb_fixwe_i", false,-1);
    tracep->declBus(c+889,"bpu_fixbhr_i", false,-1, 12,0);
    tracep->declBus(c+882,"bpu_fixpht_i", false,-1, 1,0);
    tracep->declQuad(c+891,"bpu_fixpc_i", false,-1, 63,0);
    tracep->declQuad(c+884,"bpu_fixjumpaddr_i", false,-1, 63,0);
    tracep->declBit(c+883,"bpu_fixwe_i", false,-1);
    tracep->declBus(c+906,"btb_fixjumpop_i", false,-1, 2,0);
    tracep->declQuad(c+68,"bpu_fetchpc_i", false,-1, 63,0);
    tracep->declBit(c+262,"bpu1hit_o", false,-1);
    tracep->declBit(c+911,"bpu2hit_o", false,-1);
    tracep->declQuad(c+277,"bpu1hitaddr_o", false,-1, 63,0);
    tracep->declQuad(c+279,"bpu2hitaddr_o", false,-1, 63,0);
    tracep->declBus(c+273,"bpu_bhr_o", false,-1, 12,0);
    tracep->declBus(c+274,"bpu_pht_o", false,-1, 1,0);
    tracep->declBit(c+275,"bpu_istaken1_o", false,-1);
    tracep->declBit(c+276,"bpu_istaken2_o", false,-1);
    tracep->declQuad(c+973,"pcdelay", false,-1, 63,0);
    tracep->declBit(c+275,"gshare_istaken1_w", false,-1);
    tracep->declBit(c+276,"gshare_istaken2_w", false,-1);
    tracep->declBit(c+975,"btb_hit1_w", false,-1);
    tracep->declBit(c+976,"btb_hit2_w", false,-1);
    tracep->declQuad(c+977,"bpu1hitaddr_w", false,-1, 63,0);
    tracep->declQuad(c+979,"bpu2hitaddr_w", false,-1, 63,0);
    tracep->declQuad(c+981,"bpurastarget_w", false,-1, 63,0);
    tracep->declBus(c+983,"btb_op_w", false,-1, 2,0);
    tracep->declQuad(c+70,"bpu_fetchpcplus4", false,-1, 63,0);
    tracep->declQuad(c+984,"pcdelayplus4", false,-1, 63,0);
    tracep->declQuad(c+986,"pcdelayplus8", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040210_btb_u0 ");
    tracep->declBus(c+1353,"GSH_BTB_NUM", false,-1, 31,0);
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+912,"stall", false,-1);
    tracep->declQuad(c+973,"btb_pcdelay_i", false,-1, 63,0);
    tracep->declQuad(c+68,"btb_pc1_i", false,-1, 63,0);
    tracep->declQuad(c+70,"btb_pc2_i", false,-1, 63,0);
    tracep->declBit(c+975,"btb_hit1_o", false,-1);
    tracep->declBit(c+976,"btb_hit2_o", false,-1);
    tracep->declQuad(c+977,"btb_hitaddr1_o", false,-1, 63,0);
    tracep->declQuad(c+979,"btb_hitaddr2_o", false,-1, 63,0);
    tracep->declBus(c+983,"btb_op_o", false,-1, 2,0);
    tracep->declQuad(c+884,"btb_fixjumpaddr_i", false,-1, 63,0);
    tracep->declBit(c+908,"btb_fixwe_i", false,-1);
    tracep->declBus(c+906,"btb_fixjumpop_i", false,-1, 2,0);
    tracep->declQuad(c+891,"btb_fixpc_i", false,-1, 63,0);
    tracep->declArray(c+988,"btb_valid_r", false,-1, 255,0);
    tracep->declQuad(c+996,"btb_data", false,-1, 63,0);
    tracep->declQuad(c+998,"btb_tag", false,-1, 63,0);
    tracep->declQuad(c+984,"btb_pcdelayplus4", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_gshare_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+912,"stall", false,-1);
    tracep->declBit(c+13,"flush", false,-1);
    tracep->declBus(c+983,"gshare_btbop_i", false,-1, 2,0);
    tracep->declQuad(c+68,"gshare_pc1_i", false,-1, 63,0);
    tracep->declQuad(c+70,"gshare_pc2_i", false,-1, 63,0);
    tracep->declBit(c+1000,"gshare_btbhit_i", false,-1);
    tracep->declBus(c+273,"gshare_bhr_o", false,-1, 12,0);
    tracep->declBus(c+274,"gshare_pht_o", false,-1, 1,0);
    tracep->declBit(c+275,"gshare_istaken1_o", false,-1);
    tracep->declBit(c+276,"gshare_istaken2_o", false,-1);
    tracep->declBit(c+766,"exisjump_i", false,-1);
    tracep->declBus(c+818,"bpu_exfixbhr_i", false,-1, 12,0);
    tracep->declBus(c+818,"bpu_exrealbhr_i", false,-1, 12,0);
    tracep->declBit(c+13,"gshare_prmiss_i", false,-1);
    tracep->declBit(c+1331,"gshare_prsuccessbutnotupdate_i", false,-1);
    tracep->declBit(c+883,"gshare_wepht_i", false,-1);
    tracep->declBus(c+882,"gshare_fixpht_i", false,-1, 1,0);
    tracep->declQuad(c+891,"gshare_fixpc_i", false,-1, 63,0);
    tracep->declBus(c+889,"bpu_fixbhr_i", false,-1, 12,0);
    tracep->declBus(c+273,"bhr", false,-1, 12,0);
    tracep->declBus(c+1001,"pht_count1", false,-1, 1,0);
    tracep->declBus(c+1002,"pht_count2", false,-1, 1,0);
    tracep->declBus(c+72,"hashgshare_pc1_i", false,-1, 26,0);
    tracep->declBus(c+73,"hashgshare_pc2_i", false,-1, 26,0);
    tracep->declBus(c+1003,"hashgshare_fixpc_i", false,-1, 26,0);
    tracep->declBus(c+74,"phtbhr", false,-1, 12,0);
    tracep->pushNamePrefix("ysyx_22040210_pht_u0 ");
    tracep->declBus(c+1354,"GSH_PHT_NUM", false,-1, 31,0);
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBus(c+75,"raddr1", false,-1, 12,0);
    tracep->declBus(c+75,"raddr2", false,-1, 12,0);
    tracep->declBus(c+1001,"rdata1", false,-1, 1,0);
    tracep->declBus(c+1002,"rdata2", false,-1, 1,0);
    tracep->declBit(c+883,"we", false,-1);
    tracep->declBus(c+1004,"waddr", false,-1, 12,0);
    tracep->declBus(c+882,"wdata", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040210_ras_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+912,"stall", false,-1);
    tracep->declBit(c+13,"flush", false,-1);
    tracep->declBus(c+983,"ras_jumpop_i", false,-1, 2,0);
    tracep->declBit(c+1005,"ras_btbhit_i", false,-1);
    tracep->declQuad(c+1006,"ras_btbhitaddr", false,-1, 63,0);
    tracep->declQuad(c+981,"ras_target_o", false,-1, 63,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1008+i*2,"ras_entry", true,(i+0), 63,0);
    }
    tracep->declBus(c+1040,"ras_headptr", false,-1, 3,0);
    tracep->declBus(c+1041,"ras_ptr", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040210_csr ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+903,"we_i", false,-1);
    tracep->declQuad(c+901,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+904,"wdata_i", false,-1, 63,0);
    tracep->declBit(c+784,"re1_i", false,-1);
    tracep->declQuad(c+785,"raddr1_i", false,-1, 63,0);
    tracep->declQuad(c+787,"rdata1_o", false,-1, 63,0);
    tracep->declBit(c+789,"re2_i", false,-1);
    tracep->declQuad(c+790,"raddr2_i", false,-1, 63,0);
    tracep->declQuad(c+792,"rdata2_o", false,-1, 63,0);
    tracep->declQuad(c+1042,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1044,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1046,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1048,"mstatus", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_ctrl_u0 ");
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+257,"ctrl_stall_cachereq_i", false,-1);
    tracep->declBit(c+765,"ctrl_stall_idreq_i", false,-1);
    tracep->declBit(c+764,"ctrl_stall_exreq_i", false,-1);
    tracep->declBit(c+65,"ctrl_stall_memreq_i", false,-1);
    tracep->declBit(c+815,"ctrl_ex_isjump", false,-1);
    tracep->declBit(c+880,"ctrl_mem_isjump", false,-1);
    tracep->declBus(c+3,"stall", false,-1, 5,0);
    tracep->declBus(c+4,"flush", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_ex_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declQuad(c+822,"ex_pc_i", false,-1, 63,0);
    tracep->declQuad(c+824,"ex_dnpc_i", false,-1, 63,0);
    tracep->declBit(c+826,"ex_dpicstop_i", false,-1);
    tracep->declBit(c+838,"ex_instvalid_i", false,-1);
    tracep->declBus(c+827,"ex_aluop_i", false,-1, 7,0);
    tracep->declBus(c+828,"ex_alusel_i", false,-1, 2,0);
    tracep->declQuad(c+829,"ex_op1_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+831,"ex_op2_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+833,"ex_op3_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+835,"ex_reg_waddr_i", false,-1, 63,0);
    tracep->declBit(c+837,"ex_we_i", false,-1);
    tracep->declQuad(c+839,"ex_csrop1_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+841,"ex_csrop2_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+843,"ex_csrreg_waddr_i", false,-1, 63,0);
    tracep->declBit(c+845,"ex_csr1we_i", false,-1);
    tracep->declQuad(c+780,"ex_reg1_raddr_i", false,-1, 63,0);
    tracep->declBus(c+3,"stall", false,-1, 5,0);
    tracep->declBit(c+764,"ex_stall_exreq_o", false,-1);
    tracep->declBit(c+766,"ex_isjump_o", false,-1);
    tracep->declQuad(c+767,"ex_jumpaddr_o", false,-1, 63,0);
    tracep->declQuad(c+822,"ex_pc_o", false,-1, 63,0);
    tracep->declQuad(c+847,"ex_dnpc_o", false,-1, 63,0);
    tracep->declBit(c+826,"ex_dpicstop_o", false,-1);
    tracep->declBus(c+827,"ex_aluop_o", false,-1, 7,0);
    tracep->declBit(c+838,"ex_instvalid_o", false,-1);
    tracep->declQuad(c+843,"ex_csr_waddr_o", false,-1, 63,0);
    tracep->declBit(c+845,"ex_csrwe_o", false,-1);
    tracep->declQuad(c+853,"ex_csrwdata_o", false,-1, 63,0);
    tracep->declQuad(c+849,"ex_reg_waddr_o", false,-1, 63,0);
    tracep->declBit(c+837,"ex_we_o", false,-1);
    tracep->declBus(c+846,"ex_bjop_o", false,-1, 2,0);
    tracep->declQuad(c+851,"ex_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+1050,"arithmeticres", false,-1, 63,0);
    tracep->declQuad(c+1052,"logices", false,-1, 63,0);
    tracep->declQuad(c+1054,"memaddr", false,-1, 63,0);
    tracep->declQuad(c+1056,"ex_wdata_r", false,-1, 63,0);
    tracep->declQuad(c+1058,"csrdata", false,-1, 63,0);
    tracep->declQuad(c+1060,"expcplus4", false,-1, 63,0);
    tracep->declBit(c+1062,"rs1is1or5", false,-1);
    tracep->declBit(c+1063,"rdis1or5", false,-1);
    tracep->declBit(c+1064,"isjalrpush", false,-1);
    tracep->declBit(c+1065,"isjalrpushpop", false,-1);
    tracep->declQuad(c+1066,"ex_op1_mul_r", false,-1, 63,0);
    tracep->declQuad(c+1068,"ex_op1_divrem_r", false,-1, 63,0);
    tracep->declQuad(c+1070,"ex_op2_mul_r", false,-1, 63,0);
    tracep->declQuad(c+1072,"ex_op2_divrem_r", false,-1, 63,0);
    tracep->declArray(c+1074,"arithmeticres_mul_w", false,-1, 127,0);
    tracep->declQuad(c+1078,"arithmeticres_div_w", false,-1, 63,0);
    tracep->declQuad(c+1080,"arithmeticres_rem_w", false,-1, 63,0);
    tracep->declBit(c+1082,"ex_div_valid_w", false,-1);
    tracep->declBit(c+1083,"ex_is_divrem_r", false,-1);
    tracep->declBit(c+1084,"ex_div_doing_r", false,-1);
    tracep->declBit(c+1085,"ex_div_qrvalid_r", false,-1);
    tracep->declBit(c+1086,"ex_mul_valid_w", false,-1);
    tracep->declBit(c+1087,"ex_is_mul_r", false,-1);
    tracep->declBit(c+1088,"ex_mul_doing_r", false,-1);
    tracep->declBit(c+1089,"ex_mul_mulvalid_r", false,-1);
    tracep->pushNamePrefix("ysyx_22040210_div_u0 ");
    tracep->declBus(c+1329,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+76,"div_ready", false,-1);
    tracep->declBit(c+1082,"div_datavalid_i", false,-1);
    tracep->declQuad(c+1068,"div_dividend_i", false,-1, 63,0);
    tracep->declQuad(c+1072,"div_divisor_i", false,-1, 63,0);
    tracep->declBit(c+1084,"div_doing_o", false,-1);
    tracep->declBit(c+1085,"div_qrvalid_o", false,-1);
    tracep->declQuad(c+1078,"div_quotient_o", false,-1, 63,0);
    tracep->declQuad(c+1080,"div_remainder_o", false,-1, 63,0);
    tracep->declBit(c+1090,"div_qrvalid_r", false,-1);
    tracep->declQuad(c+1091,"div_quotiento_r", false,-1, 63,0);
    tracep->declQuad(c+1093,"div_remaindero_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_mul_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+76,"mul_ready", false,-1);
    tracep->declBit(c+1086,"mul_datavaild_i", false,-1);
    tracep->declQuad(c+1066,"multiplicand_i", false,-1, 63,0);
    tracep->declQuad(c+1070,"multiplier_i", false,-1, 63,0);
    tracep->declBit(c+1088,"mul_doing_o", false,-1);
    tracep->declBit(c+1089,"mul_mulvalid_o", false,-1);
    tracep->declQuad(c+1095,"result_hi_o", false,-1, 63,0);
    tracep->declQuad(c+1097,"result_lo_o", false,-1, 63,0);
    tracep->declQuad(c+1099,"multiplicand_r", false,-1, 63,0);
    tracep->declQuad(c+1101,"multiplier_r", false,-1, 63,0);
    tracep->declBus(c+1103,"mul_datavaild_r", false,-1, 1,0);
    tracep->declBit(c+1104,"mul_mulvalid_r", false,-1);
    tracep->declQuad(c+1105,"result_hio_r", false,-1, 63,0);
    tracep->declQuad(c+1107,"result_loo_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040210_id_u0 ");
    tracep->declQuad(c+772,"id_pc_i", false,-1, 63,0);
    tracep->declQuad(c+774,"id_dnpc_i", false,-1, 63,0);
    tracep->declBus(c+770,"id_inst_i", false,-1, 31,0);
    tracep->declQuad(c+1266,"id_reg1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+1268,"id_reg2_rdata_i", false,-1, 63,0);
    tracep->declBit(c+776,"id_reg1_re_o", false,-1);
    tracep->declBit(c+777,"id_reg2_re_o", false,-1);
    tracep->declQuad(c+778,"id_reg1_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+782,"id_reg2_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+787,"id_csr1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+792,"id_csr2_rdata_i", false,-1, 63,0);
    tracep->declBit(c+784,"id_csr1_re_o", false,-1);
    tracep->declBit(c+789,"id_csr2_re_o", false,-1);
    tracep->declQuad(c+785,"id_csr1_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+790,"id_csr2_raddr_o", false,-1, 63,0);
    tracep->declBit(c+765,"id_stall_idreq_o", false,-1);
    tracep->declQuad(c+772,"id_pc_o", false,-1, 63,0);
    tracep->declQuad(c+774,"id_dnpc_o", false,-1, 63,0);
    tracep->declBit(c+794,"id_dpicstop_o", false,-1);
    tracep->declBus(c+795,"id_aluop_o", false,-1, 7,0);
    tracep->declBus(c+796,"id_alusel_o", false,-1, 2,0);
    tracep->declQuad(c+1270,"id_op1_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+1272,"id_op2_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+797,"id_op3_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+803,"id_csrop1_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+805,"id_csrop2_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+799,"id_reg_waddr_o", false,-1, 63,0);
    tracep->declBit(c+801,"id_we_o", false,-1);
    tracep->declQuad(c+807,"id_csrreg_waddr_o", false,-1, 63,0);
    tracep->declBit(c+809,"id_csr1we_o", false,-1);
    tracep->declBit(c+802,"id_instvalid_o", false,-1);
    tracep->declBus(c+828,"id_ex_alusel_i", false,-1, 2,0);
    tracep->declQuad(c+849,"id_ex_reg_waddr_i", false,-1, 63,0);
    tracep->declBit(c+837,"id_ex_we_i", false,-1);
    tracep->declQuad(c+851,"id_ex_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+843,"id_ex_csr_waddr_i", false,-1, 63,0);
    tracep->declBit(c+845,"id_ex_csrwe_i", false,-1);
    tracep->declQuad(c+853,"id_ex_csrwdata_i", false,-1, 63,0);
    tracep->declQuad(c+869,"id_mem_reg_waddr_i", false,-1, 63,0);
    tracep->declBit(c+871,"id_mem_we_i", false,-1);
    tracep->declQuad(c+66,"id_mem_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+874,"id_mem_csr_waddr_i", false,-1, 63,0);
    tracep->declBit(c+876,"id_mem_csrwe_i", false,-1);
    tracep->declQuad(c+878,"id_mem_csrwdata_i", false,-1, 63,0);
    tracep->declBus(c+1109,"opcode", false,-1, 6,0);
    tracep->declBus(c+1110,"funct3", false,-1, 2,0);
    tracep->declBus(c+1111,"funct6", false,-1, 6,0);
    tracep->declBus(c+1112,"funct7", false,-1, 6,0);
    tracep->declBus(c+1113,"funct12", false,-1, 11,0);
    tracep->declBus(c+1113,"csr", false,-1, 11,0);
    tracep->declBus(c+1114,"rd", false,-1, 4,0);
    tracep->declBus(c+1115,"zimm", false,-1, 4,0);
    tracep->declBus(c+1115,"rs1", false,-1, 4,0);
    tracep->declBus(c+1116,"rs2", false,-1, 4,0);
    tracep->declBus(c+1117,"shamt", false,-1, 5,0);
    tracep->declQuad(c+1118,"id_Simm", false,-1, 63,0);
    tracep->declQuad(c+1120,"id_Bimm", false,-1, 63,0);
    tracep->declQuad(c+1122,"id_JALimm", false,-1, 63,0);
    tracep->declQuad(c+1124,"id_JALRimm", false,-1, 63,0);
    tracep->declQuad(c+1126,"id_imm", false,-1, 63,0);
    tracep->declBit(c+1128,"id_preinstisload", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_instbuffer_u0 ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+77,"flush", false,-1);
    tracep->declBus(c+263,"buffer_inst1bhr_i", false,-1, 12,0);
    tracep->declBus(c+264,"buffer_inst1pht_i", false,-1, 1,0);
    tracep->declBit(c+265,"buffer_inst1taken_i", false,-1);
    tracep->declQuad(c+266,"buffer_inst1takenaddr_i", false,-1, 63,0);
    tracep->declBus(c+268,"buffer_inst2bhr_i", false,-1, 12,0);
    tracep->declBus(c+269,"buffer_inst2pht_i", false,-1, 1,0);
    tracep->declBit(c+270,"buffer_inst2taken_i", false,-1);
    tracep->declQuad(c+271,"buffer_inst2takenaddr_i", false,-1, 63,0);
    tracep->declBus(c+232,"buffer_inst1_i", false,-1, 31,0);
    tracep->declBit(c+78,"buffer_inst1valid_i", false,-1);
    tracep->declQuad(c+230,"buffer_inst1_pc_i", false,-1, 63,0);
    tracep->declBus(c+235,"buffer_inst2_i", false,-1, 31,0);
    tracep->declBit(c+79,"buffer_inst2valid_i", false,-1);
    tracep->declQuad(c+233,"buffer_inst2_pc_i", false,-1, 63,0);
    tracep->declBit(c+256,"buffer_full_o", false,-1);
    tracep->declBus(c+814,"buffer_inst1bhr_o", false,-1, 12,0);
    tracep->declBus(c+813,"buffer_inst1pht_o", false,-1, 1,0);
    tracep->declBit(c+812,"buffer_inst1taken_o", false,-1);
    tracep->declQuad(c+810,"buffer_inst1takenaddr_o", false,-1, 63,0);
    tracep->declBit(c+1331,"buffer_issuemode", false,-1);
    tracep->declBit(c+80,"buffer_issueready_i", false,-1);
    tracep->declQuad(c+772,"buffer_inst1_pc_o", false,-1, 63,0);
    tracep->declBus(c+770,"buffer_inst1_o", false,-1, 31,0);
    tracep->declQuad(c+1129,"buffer_inst2_pc_o", false,-1, 63,0);
    tracep->declBus(c+1131,"buffer_inst2_o", false,-1, 31,0);
    tracep->declBit(c+769,"buffer_issuevaild_o", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1132+i*1,"buffer_inst_r", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1140+i*2,"buffer_instpc_r", true,(i+0), 63,0);
    }
    tracep->declBus(c+1156,"buffer_valid_r", false,-1, 7,0);
    tracep->declBus(c+1157,"buffer_tailptr", false,-1, 2,0);
    tracep->declBus(c+1158,"buffer_headptr", false,-1, 2,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1159+i*1,"buffer_instbhr_r", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1167+i*1,"buffer_instpht_r", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1175+i*1,"buffer_insttaken", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1183+i*2,"buffer_insttakenaddr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_mem ");
    tracep->declQuad(c+862,"mem_pc_i", false,-1, 63,0);
    tracep->declQuad(c+864,"mem_dnpc_i", false,-1, 63,0);
    tracep->declBit(c+866,"mem_dpicstop_i", false,-1);
    tracep->declBit(c+868,"mem_instvalid_i", false,-1);
    tracep->declBus(c+867,"mem_aluop_i", false,-1, 7,0);
    tracep->declQuad(c+869,"mem_reg_waddr_i", false,-1, 63,0);
    tracep->declBit(c+871,"mem_we_i", false,-1);
    tracep->declQuad(c+872,"mem_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+874,"mem_csr_waddr_i", false,-1, 63,0);
    tracep->declBit(c+876,"mem_csrwe_i", false,-1);
    tracep->declQuad(c+878,"mem_csrwdata_i", false,-1, 63,0);
    tracep->declBit(c+65,"mem_stall_memreq_o", false,-1);
    tracep->declBit(c+880,"mem_flush_memreq_o", false,-1);
    tracep->declBit(c+282,"mem_invcachesuccess_i", false,-1);
    tracep->declBit(c+281,"mem_invcachereq_o", false,-1);
    tracep->declQuad(c+5,"mem_memrdata_i", false,-1, 63,0);
    tracep->declBit(c+763,"mem_memrdatavaild_i", false,-1);
    tracep->declBit(c+64,"mem_memwdatavaild_i", false,-1);
    tracep->declBus(c+241,"memwsize_o", false,-1, 2,0);
    tracep->declBit(c+238,"mem_memre_o", false,-1);
    tracep->declBus(c+8,"mem_memwe_o", false,-1, 7,0);
    tracep->declQuad(c+9,"mem_memaddr_o", false,-1, 63,0);
    tracep->declQuad(c+239,"mem_memwdata_o", false,-1, 63,0);
    tracep->declQuad(c+862,"mem_pc_o", false,-1, 63,0);
    tracep->declQuad(c+864,"mem_dnpc_o", false,-1, 63,0);
    tracep->declBit(c+866,"mem_dpicstop_o", false,-1);
    tracep->declBit(c+868,"mem_instvalid_o", false,-1);
    tracep->declQuad(c+874,"mem_csr_waddr_o", false,-1, 63,0);
    tracep->declBit(c+876,"mem_csrwe_o", false,-1);
    tracep->declQuad(c+878,"mem_csrwdata_o", false,-1, 63,0);
    tracep->declQuad(c+869,"mem_reg_waddr_o", false,-1, 63,0);
    tracep->declBit(c+871,"mem_we_o", false,-1);
    tracep->declQuad(c+66,"mem_wdata_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040210_regfile ");
    tracep->declBit(c+1263,"clk", false,-1);
    tracep->declBit(c+1264,"rst", false,-1);
    tracep->declBit(c+898,"we_i", false,-1);
    tracep->declQuad(c+896,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+899,"wdata_i", false,-1, 63,0);
    tracep->declBit(c+776,"re1_i", false,-1);
    tracep->declQuad(c+778,"raddr1_i", false,-1, 63,0);
    tracep->declQuad(c+1266,"rdata1_o", false,-1, 63,0);
    tracep->declBit(c+777,"re2_i", false,-1);
    tracep->declQuad(c+782,"raddr2_i", false,-1, 63,0);
    tracep->declQuad(c+1268,"rdata2_o", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1199+i*2,"gprs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_init_top(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040210_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22040210_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22040210_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_register(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22040210_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22040210_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22040210_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_full_sub_0(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040210_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040210_top___024root*>(voidSelf);
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040210_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22040210_top___024root__trace_full_sub_0(Vysyx_22040210_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040210_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040210_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req2_r));
    bufp->fullCData(oldp+2,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux 
                                              >> 5U)))),6);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall),6);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush),6);
    bufp->fullQData(oldp+5,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memrdata_w),64);
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w) 
                           | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))));
    bufp->fullCData(oldp+8,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w),8);
    bufp->fullQData(oldp+9,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memaddr_w),64);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wnext_state),3);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rnext_state),3);
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_uncachedata_req_i));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_inst_rreq_i));
    bufp->fullBit(oldp+16,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwe_w))));
    bufp->fullCData(oldp+17,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_next),2);
    bufp->fullBit(oldp+18,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_icache_req_r));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dcache_req_r));
    bufp->fullQData(oldp+20,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_araddr_r),64);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_next),2);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_write_req_r));
    bufp->fullQData(oldp+24,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_awaddr_r),64);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_wsel_r),8);
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail) 
                            & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                               & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))))));
    bufp->fullBit(oldp+28,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w) 
                                     | (0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w)))))));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w));
    bufp->fullQData(oldp+30,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w),64);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_next),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_next),3);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__debug),2);
    bufp->fullQData(oldp+35,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux),64);
    bufp->fullWData(oldp+37,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_mux),256);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_state_w),2);
    bufp->fullBit(oldp+46,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w))));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wreq_w));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_write_req_mux));
    bufp->fullQData(oldp+49,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w) 
                               | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))
                               ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                               : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w)),64);
    bufp->fullQData(oldp+51,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux),64);
    bufp->fullCData(oldp+53,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w) 
                               & (0U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate)))
                               ? 1U : ((1U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate))
                                        ? 2U : ((2U 
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
    bufp->fullCData(oldp+54,((0x3fU & (IData)(((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w) 
                                                 | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wvaild_w))
                                                 ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                                 : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_addr_w) 
                                               >> 5U)))),6);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__writehit_head_w));
    bufp->fullCData(oldp+56,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferwrite_hit_w),8);
    bufp->fullQData(oldp+57,((0xffffffffffffffe0ULL 
                              & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_waddr_mux)),64);
    bufp->fullQData(oldp+59,((0xffffffffffffffe0ULL 
                              & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_raddr_mux)),64);
    bufp->fullQData(oldp+61,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w),64);
    bufp->fullCData(oldp+63,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag_raddr_w 
                                               >> 5U)))),6);
    bufp->fullBit(oldp+64,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memwdatavaild_i));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_stall_memreq_w));
    bufp->fullQData(oldp+66,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_w),64);
    bufp->fullQData(oldp+68,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc),64);
    bufp->fullQData(oldp+70,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc)),64);
    bufp->fullIData(oldp+72,((0x7ffffffU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc))),27);
    bufp->fullIData(oldp+73,((0x7ffffffU & ((IData)(4U) 
                                            + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__nextpc)))),27);
    bufp->fullSData(oldp+74,(((1U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush))
                               ? ((0x1ffeU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r) 
                                              << 1U)) 
                                  | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w))
                               : (((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush)) 
                                   & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu)) 
                                      & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i)))
                                   ? ((0x1ffeU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr) 
                                                  << 1U)) 
                                      | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w) 
                                         | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w) 
                                            | (0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w)))))
                                   : (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr)))),13);
    bufp->fullSData(oldp+75,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT____Vcellinp__ysyx_22040210_pht_u0__raddr1),13);
    bufp->fullBit(oldp+76,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall) 
                                     >> 3U)))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__flush) 
                                  >> 1U))));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst1valid_i));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT____Vcellinp__ysyx_22040210_instbuffer_u0__buffer_inst2valid_i));
    bufp->fullBit(oldp+80,(((~ (IData)((6U == (6U & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__stall))))) 
                            & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w))));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_22040210_top__DOT__io_master_awready));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_22040210_top__DOT__io_master_awvalid));
    bufp->fullIData(oldp+83,((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o)),32);
    bufp->fullCData(oldp+84,(vlSelf->ysyx_22040210_top__DOT__io_master_awlen),8);
    bufp->fullCData(oldp+85,(vlSelf->ysyx_22040210_top__DOT__io_master_awsize),3);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_22040210_top__DOT__io_master_awburst),2);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_22040210_top__DOT__io_master_wready));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_22040210_top__DOT__io_master_wvalid));
    bufp->fullQData(oldp+89,(vlSelf->ysyx_22040210_top__DOT__io_master_wdata),64);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_22040210_top__DOT__io_master_wstrb),8);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_22040210_top__DOT__io_master_bvalid));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_22040210_top__DOT__io_master_arready));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_22040210_top__DOT__io_master_arvalid));
    bufp->fullIData(oldp+95,((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o)),32);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_22040210_top__DOT__io_master_arlen),8);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_22040210_top__DOT__io_master_arsize),3);
    bufp->fullCData(oldp+98,(vlSelf->ysyx_22040210_top__DOT__io_master_arburst),2);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_22040210_top__DOT__io_master_rready));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_22040210_top__DOT__io_master_rvalid));
    bufp->fullQData(oldp+101,(vlSelf->ysyx_22040210_top__DOT__io_master_rdata),64);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_22040210_top__DOT__io_master_rlast));
    bufp->fullCData(oldp+104,((0x3fU & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w 
                                                >> 5U)))),6);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_22040210_top__DOT__io_sram0_wen));
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
    bufp->fullWData(oldp+106,(__Vtemp_h61e4700c__0),128);
    __Vtemp_hdf06c572__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[0U];
    __Vtemp_hdf06c572__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[1U];
    __Vtemp_hdf06c572__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[2U];
    __Vtemp_hdf06c572__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[3U];
    bufp->fullWData(oldp+110,(__Vtemp_hdf06c572__0),128);
    bufp->fullWData(oldp+114,(vlSelf->ysyx_22040210_top__DOT__io_sram0_rdata),128);
    __Vtemp_hdf28097a__0[0U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[4U];
    __Vtemp_hdf28097a__0[1U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[5U];
    __Vtemp_hdf28097a__0[2U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[6U];
    __Vtemp_hdf28097a__0[3U] = vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w[7U];
    bufp->fullWData(oldp+118,(__Vtemp_hdf28097a__0),128);
    bufp->fullWData(oldp+122,(vlSelf->ysyx_22040210_top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_22040210_top__DOT__io_sram2_wen));
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
    bufp->fullWData(oldp+127,(__Vtemp_h82d45008__0),128);
    bufp->fullWData(oldp+131,(vlSelf->ysyx_22040210_top__DOT__io_sram2_rdata),128);
    bufp->fullWData(oldp+135,(vlSelf->ysyx_22040210_top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+139,((0U != (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[0U] 
                                      | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[1U]) 
                                     | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[2U]) 
                                    | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux[3U]))));
    bufp->fullWData(oldp+140,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_mux),128);
    bufp->fullWData(oldp+144,(vlSelf->ysyx_22040210_top__DOT__io_sram4_wdata),128);
    bufp->fullWData(oldp+148,(vlSelf->ysyx_22040210_top__DOT__io_sram4_rdata),128);
    bufp->fullWData(oldp+152,(vlSelf->ysyx_22040210_top__DOT__io_sram5_wdata),128);
    bufp->fullWData(oldp+156,(vlSelf->ysyx_22040210_top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+160,((0U != (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[0U] 
                                      | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[1U]) 
                                     | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[2U]) 
                                    | vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux[3U]))));
    bufp->fullWData(oldp+161,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_mux),128);
    bufp->fullWData(oldp+165,(vlSelf->ysyx_22040210_top__DOT__io_sram6_rdata),128);
    bufp->fullWData(oldp+169,(vlSelf->ysyx_22040210_top__DOT__io_sram7_rdata),128);
    bufp->fullQData(oldp+173,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr),64);
    bufp->fullQData(oldp+175,((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                               + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))),64);
    bufp->fullCData(oldp+177,((0xffU & (IData)(vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o))),8);
    bufp->fullCData(oldp+178,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+179,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+180,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+181,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+182,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+183,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+184,((0xffU & (IData)((vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o 
                                                >> 0x38U)))),8);
    bufp->fullQData(oldp+185,(((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
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
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__wen)))));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren)))));
    bufp->fullCData(oldp+189,(((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                ? ((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
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
                                            ? 0U : 0xffU))))),8);
    bufp->fullCData(oldp+190,(((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize))
                                ? ((1U & (IData)(((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                   + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                       + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                      >> 1U)))
                                        ? ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                  + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                            ? 0x7fU
                                            : 0xbfU)
                                        : ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                  + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                            ? 0xdfU
                                            : 0xefU))
                                    : ((1U & (IData)(
                                                     ((vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start 
                                                       + (QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt))) 
                                                      >> 1U)))
                                        ? ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
                                                  + (IData)((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt)))))
                                            ? 0xf7U
                                            : 0xfbU)
                                        : ((1U & ((IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start) 
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
                                            ? 0U : 0xffU))))),8);
    bufp->fullQData(oldp+191,((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o))),64);
    bufp->fullQData(oldp+193,((QData)((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o))),64);
    bufp->fullBit(oldp+195,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__wen));
    bufp->fullCData(oldp+196,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize),3);
    bufp->fullQData(oldp+197,(vlSelf->ysyx_22040210_top__DOT____Vcellout__ysyx_22040210_data_rom_u0__memrdata_o),64);
    bufp->fullBit(oldp+199,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__ren));
    bufp->fullCData(oldp+200,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arsize),3);
    bufp->fullQData(oldp+201,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_start),64);
    bufp->fullQData(oldp+203,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_stop),64);
    bufp->fullSData(oldp+205,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt),16);
    bufp->fullSData(oldp+206,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_step),9);
    bufp->fullBit(oldp+207,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__araddr_cnt_flag));
    bufp->fullCData(oldp+208,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__arlen),8);
    bufp->fullQData(oldp+209,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_start),64);
    bufp->fullQData(oldp+211,(((4U & (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
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
    bufp->fullQData(oldp+213,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt),64);
    bufp->fullSData(oldp+215,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_step),9);
    bufp->fullBit(oldp+216,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr_cnt_flag));
    bufp->fullCData(oldp+217,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awlen),8);
    bufp->fullCData(oldp+218,((0xffU & (~ ((0U == (IData)(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awsize))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__awaddr 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (2U 
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
    bufp->fullBit(oldp+219,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memrdatavaild_o));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__memwdatavaild_o));
    bufp->fullQData(oldp+221,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line1),64);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_line2),64);
    bufp->fullCData(oldp+225,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_mask),8);
    bufp->fullQData(oldp+226,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_data_rom_u0__DOT__data_addr),64);
    bufp->fullQData(oldp+228,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc),64);
    bufp->fullQData(oldp+230,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pc_w),64);
    bufp->fullIData(oldp+232,(((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                              >> 3U)))
                                ? ((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[3U]
                                    : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[2U])
                                : ((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[1U]
                                    : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w[0U]))),32);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__thispc2),64);
    bufp->fullIData(oldp+235,(((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                              >> 3U)))
                                ? ((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[3U]
                                    : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[2U])
                                : ((1U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[1U]
                                    : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w[0U]))),32);
    bufp->fullBit(oldp+236,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dpicstop_r));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w) 
                             | (((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success) 
                                 | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memre_w));
    bufp->fullQData(oldp+239,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memwdata_o),64);
    bufp->fullCData(oldp+241,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__memsize_w),3);
    bufp->fullBit(oldp+242,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_valid_i));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_valid_i));
    bufp->fullQData(oldp+244,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__rw_w_data_i),64);
    bufp->fullQData(oldp+246,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_addr_i),64);
    bufp->fullQData(oldp+248,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_addr_i),64);
    bufp->fullCData(oldp+250,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_size_i),8);
    bufp->fullCData(oldp+251,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_size_i),8);
    bufp->fullBit(oldp+252,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_ready_o));
    bufp->fullBit(oldp+253,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_ready_o));
    bufp->fullQData(oldp+254,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__data_read_o),64);
    bufp->fullBit(oldp+256,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_instbuffer_full_w));
    bufp->fullBit(oldp+257,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_inst_stallpc_w));
    bufp->fullBit(oldp+258,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cachepipe_data_stall_w));
    bufp->fullBit(oldp+259,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__inst1vaild) 
                             & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2) 
                                & (7U != (7U & (IData)(
                                                       (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2 
                                                        >> 2U))))))));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_tmp_r));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w));
    bufp->fullSData(oldp+263,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1bhr_w),13);
    bufp->fullCData(oldp+264,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1pht_w),2);
    bufp->fullBit(oldp+265,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1taken_w));
    bufp->fullQData(oldp+266,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst1takenaddr_w),64);
    bufp->fullSData(oldp+268,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2bhr_w),13);
    bufp->fullCData(oldp+269,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2pht_w),2);
    bufp->fullBit(oldp+270,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2taken_w));
    bufp->fullQData(oldp+271,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_inst2takenaddr_w),64);
    bufp->fullSData(oldp+273,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__bhr),13);
    bufp->fullCData(oldp+274,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu_pht_w),2);
    bufp->fullBit(oldp+275,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken1_w));
    bufp->fullBit(oldp+276,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__gshare_istaken2_w));
    bufp->fullQData(oldp+277,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu1hitaddr_w),64);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__bpu2hitaddr_w),64);
    bufp->fullBit(oldp+281,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_invalid_w));
    bufp->fullBit(oldp+282,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__isinvalidsuccess_w));
    bufp->fullCData(oldp+283,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__r_len_i),4);
    bufp->fullCData(oldp+284,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__w_len_i),4);
    bufp->fullBit(oldp+285,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__cache_w_last_i));
    bufp->fullQData(oldp+286,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_ar_addr_o),64);
    bufp->fullCData(oldp+288,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_ar_cache_o),4);
    bufp->fullQData(oldp+289,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellout__m0__axi_aw_addr_o),64);
    bufp->fullCData(oldp+291,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_aw_cache_o),4);
    bufp->fullBit(oldp+292,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__io_master_awlen))));
    bufp->fullCData(oldp+293,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__wcurrent_state),3);
    bufp->fullCData(oldp+294,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__rcurrent_state),3);
    bufp->fullCData(oldp+295,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_cachepipeline_u0__cachepipe_cpustall_i),6);
    bufp->fullBit(oldp+296,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_rready_o));
    bufp->fullBit(oldp+297,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_axi_wvaild_o));
    bufp->fullCData(oldp+298,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__rstate_current),2);
    bufp->fullQData(oldp+299,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r),64);
    bufp->fullQData(oldp+301,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_raddr_tmpr),64);
    bufp->fullBit(oldp+303,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_ren_r));
    bufp->fullBit(oldp+304,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_rstall_r));
    bufp->fullCData(oldp+305,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__wstate_current),2);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_waddr_tmp_r),64);
    bufp->fullQData(oldp+308,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wdata_tmp_r),64);
    bufp->fullCData(oldp+310,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_data_wsel_tmp_r),8);
    bufp->fullBit(oldp+311,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wen_r));
    bufp->fullQData(oldp+312,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_wdata_r),64);
    bufp->fullBit(oldp+314,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncachedata_wstall_r));
    bufp->fullQData(oldp+315,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rdata_w),64);
    bufp->fullQData(oldp+317,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r
                              [(3U & (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                              >> 3U)))]),64);
    bufp->fullQData(oldp+319,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepc_r),64);
    bufp->fullSData(oldp+321,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachebhr_r),13);
    bufp->fullCData(oldp+322,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachepht_r),2);
    bufp->fullBit(oldp+323,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetaken_r));
    bufp->fullQData(oldp+324,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_inst_uncachetakenaddr_r),64);
    bufp->fullBit(oldp+326,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w));
    bufp->fullWData(oldp+327,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rdata_w),256);
    bufp->fullBit(oldp+335,(((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w)) 
                             & ((~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r) 
                                    | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r 
                                       == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r))) 
                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w));
    bufp->fullIData(oldp+337,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rdata_w),32);
    bufp->fullBit(oldp+338,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_rvalid_w));
    bufp->fullBit(oldp+339,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncachedata_bvalid_w));
    bufp->fullBit(oldp+340,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__dcache_stall_w));
    bufp->fullBit(oldp+341,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w));
    bufp->fullWData(oldp+342,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rdata_w),256);
    bufp->fullQData(oldp+350,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r),64);
    bufp->fullBit(oldp+352,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_bvalid_w));
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
    bufp->fullWData(oldp+353,(__Vtemp_h7e818083__0),256);
    bufp->fullQData(oldp+361,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr
                              [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r]),64);
    bufp->fullBit(oldp+363,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__uncache_inst_flush));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_uncache_stallpc_r));
    bufp->fullQData(oldp+366,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc)),64);
    bufp->fullBit(oldp+368,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success) 
                              | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_data_rvalid_w)) 
                             & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r))));
    bufp->fullBit(oldp+369,((1U & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r) 
                                      | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2))))));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_ren_r) 
                             & ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__axicache_uncacheinst_rvalid_w)) 
                                & (~ ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r) 
                                      | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2)))))));
    bufp->fullCData(oldp+371,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__rstate_current),3);
    bufp->fullCData(oldp+372,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_rcount_r),2);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__wstate_current),3);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__cache_wcount_r),2);
    bufp->fullQData(oldp+375,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_inst_araddr_r),64);
    bufp->fullQData(oldp+377,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_araddr_r),64);
    bufp->fullQData(oldp+379,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncacheinst_araddr_r),64);
    bufp->fullQData(oldp+381,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_araddr_r),64);
    bufp->fullWData(oldp+383,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_wdata_r),256);
    bufp->fullQData(oldp+391,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_data_awaddr_r),64);
    bufp->fullQData(oldp+393,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_wdata_r),64);
    bufp->fullQData(oldp+395,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_uncachedata_awaddr_r),64);
    bufp->fullCData(oldp+397,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_rsel_r),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__axicache_axi_wsel_r),8);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[0]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_cache_interface_u0__DOT__tempuncacherdata[1]),32);
    bufp->fullBit(oldp+401,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_read_req_r));
    bufp->fullBit(oldp+402,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_write_req_r));
    bufp->fullQData(oldp+403,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_r),64);
    bufp->fullCData(oldp+405,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wsel_r),8);
    bufp->fullQData(oldp+406,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[0]),64);
    bufp->fullQData(oldp+408,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[1]),64);
    bufp->fullQData(oldp+410,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[2]),64);
    bufp->fullQData(oldp+412,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_wdata_r[3]),64);
    bufp->fullQData(oldp+414,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____VdfgTmp_hbba14441__0)
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r
                                : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)
                                    ? ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w 
                                        << 0xbU) | (QData)((IData)(
                                                                   (0x7ffU 
                                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))
                                    : ((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w 
                                        << 0xbU) | (QData)((IData)(
                                                                   (0x7ffU 
                                                                    & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r)))))))),64);
    bufp->fullQData(oldp+416,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[0]),64);
    bufp->fullQData(oldp+418,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[1]),64);
    bufp->fullQData(oldp+420,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[2]),64);
    bufp->fullQData(oldp+422,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_rdata_w[3]),64);
    bufp->fullBit(oldp+424,((0U != (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r))));
    bufp->fullWData(oldp+425,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wmask_w),128);
    bufp->fullWData(oldp+429,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_we_w),128);
    bufp->fullQData(oldp+433,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[0]),64);
    bufp->fullQData(oldp+435,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[1]),64);
    bufp->fullQData(oldp+437,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[2]),64);
    bufp->fullQData(oldp+439,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r[3]),64);
    bufp->fullQData(oldp+441,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[0]),64);
    bufp->fullQData(oldp+443,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[1]),64);
    bufp->fullQData(oldp+445,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[2]),64);
    bufp->fullQData(oldp+447,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_rdata_w[3]),64);
    bufp->fullQData(oldp+449,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q[0U]))))),54);
    bufp->fullQData(oldp+451,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag0_w),54);
    bufp->fullWData(oldp+453,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_we_w),128);
    bufp->fullQData(oldp+457,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[0]),64);
    bufp->fullQData(oldp+459,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[1]),64);
    bufp->fullQData(oldp+461,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[2]),64);
    bufp->fullQData(oldp+463,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_rdata_w[3]),64);
    bufp->fullQData(oldp+465,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q[0U]))))),54);
    bufp->fullQData(oldp+467,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rtag1_w),54);
    bufp->fullQData(oldp+469,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__plru_r),64);
    bufp->fullBit(oldp+471,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel));
    bufp->fullBit(oldp+472,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way0_hit_w));
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way1_hit_w));
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_success));
    bufp->fullBit(oldp+475,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__hit_fail));
    bufp->fullWData(oldp+476,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r),128);
    bufp->fullBit(oldp+480,((1U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dirty_r[
                                   ((3U & ((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                    >> 5U)) 
                                           >> 4U)) 
                                    | ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel) 
                                       >> 5U))] >> 
                                   (0x1fU & ((0x7eU 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                                          >> 5U)) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cacheway_sel)))))));
    bufp->fullQData(oldp+481,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_wdata_tmp_r),64);
    bufp->fullQData(oldp+483,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data0_w),64);
    bufp->fullQData(oldp+485,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__data1_w),64);
    bufp->fullQData(oldp+487,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[0]),64);
    bufp->fullQData(oldp+489,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[1]),64);
    bufp->fullQData(oldp+491,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[2]),64);
    bufp->fullQData(oldp+493,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_tmp_r[3]),64);
    bufp->fullQData(oldp+495,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[0]),64);
    bufp->fullQData(oldp+497,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[1]),64);
    bufp->fullQData(oldp+499,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[2]),64);
    bufp->fullQData(oldp+501,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata0_w[3]),64);
    bufp->fullQData(oldp+503,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[0]),64);
    bufp->fullQData(oldp+505,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[1]),64);
    bufp->fullQData(oldp+507,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[2]),64);
    bufp->fullQData(oldp+509,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__rdata1_w[3]),64);
    bufp->fullQData(oldp+511,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_tmp_r),54);
    bufp->fullBit(oldp+513,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way0_tmp_r));
    bufp->fullBit(oldp+514,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_collision_way1_tmp_r));
    bufp->fullQData(oldp+515,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[0]),64);
    bufp->fullQData(oldp+517,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[1]),64);
    bufp->fullQData(oldp+519,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[2]),64);
    bufp->fullQData(oldp+521,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__core_data_r[3]),64);
    bufp->fullCData(oldp+523,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__cnt),7);
    bufp->fullCData(oldp+524,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__currentstate),3);
    bufp->fullBit(oldp+525,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__invalidcheck));
    bufp->fullQData(oldp+526,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag0valid_r),64);
    bufp->fullQData(oldp+528,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__tag1valid_r),64);
    bufp->fullBit(oldp+530,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag0valid));
    bufp->fullBit(oldp+531,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__readtag1valid));
    bufp->fullWData(oldp+532,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway0__Q),128);
    __Vtemp_hd2a35925__0[0U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                        >> 0xbU));
    __Vtemp_hd2a35925__0[1U] = (IData)(((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__dcache_addr_r 
                                         >> 0xbU) >> 0x20U));
    __Vtemp_hd2a35925__0[2U] = 0U;
    __Vtemp_hd2a35925__0[3U] = 0U;
    bufp->fullWData(oldp+536,(__Vtemp_hd2a35925__0),128);
    bufp->fullWData(oldp+540,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__tagway1__Q),128);
    bufp->fullWData(oldp+544,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT____Vcellout__ysyx_22040210_writebuffer_u0__buffer_rdata_o),256);
    bufp->fullWData(oldp+552,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[0]),256);
    bufp->fullWData(oldp+560,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[1]),256);
    bufp->fullWData(oldp+568,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[2]),256);
    bufp->fullWData(oldp+576,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[3]),256);
    bufp->fullWData(oldp+584,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[4]),256);
    bufp->fullWData(oldp+592,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[5]),256);
    bufp->fullWData(oldp+600,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[6]),256);
    bufp->fullWData(oldp+608,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_data[7]),256);
    bufp->fullQData(oldp+616,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[0]),64);
    bufp->fullQData(oldp+618,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[1]),64);
    bufp->fullQData(oldp+620,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[2]),64);
    bufp->fullQData(oldp+622,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[3]),64);
    bufp->fullQData(oldp+624,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[4]),64);
    bufp->fullQData(oldp+626,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[5]),64);
    bufp->fullQData(oldp+628,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[6]),64);
    bufp->fullQData(oldp+630,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_addr[7]),64);
    bufp->fullCData(oldp+632,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_tail_r),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_head_r),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_valid_r),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__bufferread_hit_r),8);
    bufp->fullBit(oldp+636,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ysyx_22040210_writebuffer_u0__DOT__buffer_rewrite_r));
    bufp->fullBit(oldp+637,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success_r2));
    bufp->fullBit(oldp+638,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__bus_readsuccess_r2));
    bufp->fullSData(oldp+639,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1bhr_r),13);
    bufp->fullCData(oldp+640,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1pht_r),2);
    bufp->fullBit(oldp+641,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1taken_r));
    bufp->fullQData(oldp+642,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst1takenaddr_r),64);
    bufp->fullSData(oldp+644,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2bhr_r),13);
    bufp->fullCData(oldp+645,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2pht_r),2);
    bufp->fullBit(oldp+646,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2taken_r));
    bufp->fullQData(oldp+647,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst_inst2takenaddr_r),64);
    bufp->fullBit(oldp+649,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r));
    bufp->fullBit(oldp+650,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r));
    bufp->fullQData(oldp+651,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc_r),64);
    bufp->fullBit(oldp+653,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r));
    bufp->fullQData(oldp+654,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_pc2_r),64);
    bufp->fullQData(oldp+656,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r),64);
    bufp->fullBit(oldp+658,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram));
    bufp->fullQData(oldp+659,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__ram_raddr_w),64);
    bufp->fullQData(oldp+661,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull)
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2
                                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r)),64);
    bufp->fullWData(oldp+663,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[0]),128);
    bufp->fullWData(oldp+667,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_w[1]),128);
    bufp->fullWData(oldp+671,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata_r2),128);
    bufp->fullWData(oldp+675,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way_wdata2_r2),128);
    bufp->fullBit(oldp+679,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_w));
    bufp->fullBit(oldp+680,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_w));
    bufp->fullBit(oldp+681,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success));
    bufp->fullBit(oldp+682,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail));
    bufp->fullQData(oldp+683,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_delay_r),64);
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
    bufp->fullWData(oldp+685,(__Vtemp_hb7c6c2e9__0),128);
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
    bufp->fullWData(oldp+689,(__Vtemp_hf3daa5fa__0),128);
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
    bufp->fullWData(oldp+693,(__Vtemp_h245ce2fc__0),128);
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
    bufp->fullWData(oldp+697,(__Vtemp_h5871460b__0),128);
    bufp->fullWData(oldp+701,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[0]),128);
    bufp->fullWData(oldp+705,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_rdata_w[1]),128);
    bufp->fullQData(oldp+709,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q[0U]))))),54);
    bufp->fullWData(oldp+711,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[0]),128);
    bufp->fullWData(oldp+715,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_rdata_w[1]),128);
    bufp->fullQData(oldp+719,((0x3fffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q[0U]))))),54);
    bufp->fullWData(oldp+721,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_instpack_w),128);
    bufp->fullWData(oldp+725,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_inst2pack_w),128);
    bufp->fullQData(oldp+729,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__plru_r),64);
    bufp->fullBit(oldp+731,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__cacheway_sel));
    bufp->fullBit(oldp+732,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_fail_r2));
    bufp->fullBit(oldp+733,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req_r2));
    bufp->fullBit(oldp+734,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_read_req2_r2));
    bufp->fullBit(oldp+735,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way0_hit_r2));
    bufp->fullBit(oldp+736,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__way1_hit_r2));
    bufp->fullBit(oldp+737,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_flush_r2));
    bufp->fullQData(oldp+738,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r2),64);
    bufp->fullQData(oldp+740,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr2_r2),64);
    bufp->fullQData(oldp+742,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag0valid_r),64);
    bufp->fullQData(oldp+744,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__tag1valid_r),64);
    bufp->fullBit(oldp+746,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__instbufferfull));
    bufp->fullBit(oldp+747,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag0valid));
    bufp->fullBit(oldp+748,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__readtag1valid));
    bufp->fullBit(oldp+749,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__iswritesram_r));
    bufp->fullBit(oldp+750,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__hit_success) 
                             | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__icache_rvaild_w))));
    bufp->fullWData(oldp+751,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway0__Q),128);
    __Vtemp_h426410db__0[0U] = (IData)((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                        >> 0xbU));
    __Vtemp_h426410db__0[1U] = (IData)(((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT__icache_addr_r 
                                         >> 0xbU) >> 0x20U));
    __Vtemp_h426410db__0[2U] = 0U;
    __Vtemp_h426410db__0[3U] = 0U;
    bufp->fullWData(oldp+755,(__Vtemp_h426410db__0),128);
    bufp->fullWData(oldp+759,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_icache_u0__DOT____Vcellout__tagway1__Q),128);
    bufp->fullBit(oldp+763,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT____Vcellinp__ysyx_22040210_pipeline_u0__pipeline_memrdatavaild_i));
    bufp->fullBit(oldp+764,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stall_exreq_w));
    bufp->fullBit(oldp+765,(((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r)) 
                             & (((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                  == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w) 
                                 | (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)) 
                                & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r) 
                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w))))));
    bufp->fullBit(oldp+766,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w));
    bufp->fullQData(oldp+767,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w),64);
    bufp->fullBit(oldp+769,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__buffer_issuevaild_w));
    bufp->fullIData(oldp+770,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst_r),32);
    bufp->fullQData(oldp+772,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r),64);
    bufp->fullQData(oldp+774,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_pc_r)),64);
    bufp->fullBit(oldp+776,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w));
    bufp->fullBit(oldp+777,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w));
    bufp->fullQData(oldp+778,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w),64);
    bufp->fullQData(oldp+780,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r),64);
    bufp->fullQData(oldp+782,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w),64);
    bufp->fullBit(oldp+784,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w));
    bufp->fullQData(oldp+785,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w),64);
    bufp->fullQData(oldp+787,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w 
                                  == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w))
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_re_w)
                                    ? ((0x341ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                        ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                        : ((0x305ULL 
                                            == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                            : ((0x342ULL 
                                                == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                : (
                                                   (0x300ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                    : 0ULL))))
                                    : 0ULL))),64);
    bufp->fullBit(oldp+789,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w));
    bufp->fullQData(oldp+790,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w),64);
    bufp->fullQData(oldp+792,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w 
                                  == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r)) 
                                & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w))
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r
                                : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_re_w)
                                    ? ((0x341ULL == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                        ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc
                                        : ((0x305ULL 
                                            == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                            ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec
                                            : ((0x342ULL 
                                                == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause
                                                : (
                                                   (0x300ULL 
                                                    == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr2_raddr_w)
                                                    ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus
                                                    : 0ULL))))
                                    : 0ULL))),64);
    bufp->fullBit(oldp+794,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_dpicstop_w));
    bufp->fullCData(oldp+795,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_aluop_w),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_alusel_w),3);
    bufp->fullQData(oldp+797,(((0x23U == (0x7fU & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r))
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
    bufp->fullQData(oldp+799,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg_waddr_w),64);
    bufp->fullBit(oldp+801,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_we_w));
    bufp->fullBit(oldp+802,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_instvalid_w));
    bufp->fullQData(oldp+803,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r 
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
                                                ? (
                                                   (0x341ULL 
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
                                            ? 0ULL : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
    bufp->fullQData(oldp+805,(((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r 
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
                                                ? (
                                                   (0x341ULL 
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
                                            ? 0ULL : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
    bufp->fullQData(oldp+807,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csrreg_waddr_w),64);
    bufp->fullBit(oldp+809,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_csr1we_w));
    bufp->fullQData(oldp+810,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr
                              [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),64);
    bufp->fullBit(oldp+812,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken
                            [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]));
    bufp->fullCData(oldp+813,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r
                              [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),2);
    bufp->fullSData(oldp+814,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r
                              [vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr]),13);
    bufp->fullBit(oldp+815,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prmiss));
    bufp->fullBit(oldp+816,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__prsuccess));
    bufp->fullCData(oldp+817,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1pht_r),2);
    bufp->fullSData(oldp+818,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1bhr_r),13);
    bufp->fullBit(oldp+819,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1taken_r));
    bufp->fullQData(oldp+820,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_inst1takenaddr_r),64);
    bufp->fullQData(oldp+822,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r),64);
    bufp->fullQData(oldp+824,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dnpc_r),64);
    bufp->fullBit(oldp+826,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dpicstop_r));
    bufp->fullCData(oldp+827,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_r),8);
    bufp->fullCData(oldp+828,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r),3);
    bufp->fullQData(oldp+829,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op1_wdata_r),64);
    bufp->fullQData(oldp+831,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op2_wdata_r),64);
    bufp->fullQData(oldp+833,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_op3_wdata_r),64);
    bufp->fullQData(oldp+835,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_r),64);
    bufp->fullBit(oldp+837,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_we_r));
    bufp->fullBit(oldp+838,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_instvalid_r));
    bufp->fullQData(oldp+839,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop1_wdata_r),64);
    bufp->fullQData(oldp+841,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrop2_wdata_r),64);
    bufp->fullQData(oldp+843,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrreg_waddr_r),64);
    bufp->fullBit(oldp+845,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csr1we_r));
    bufp->fullCData(oldp+846,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_bjop_w),3);
    bufp->fullQData(oldp+847,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__isjump_w)
                                ? vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpaddr_w
                                : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_dnpc_r)),64);
    bufp->fullQData(oldp+849,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w),64);
    bufp->fullQData(oldp+851,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_wdata_w),64);
    bufp->fullQData(oldp+853,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_csrwdata_w),64);
    bufp->fullBit(oldp+855,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prmiss_r));
    bufp->fullBit(oldp+856,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_prsuccess_r));
    bufp->fullCData(oldp+857,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1pht_r),2);
    bufp->fullSData(oldp+858,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1bhr_r),13);
    bufp->fullBit(oldp+859,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1taken_r));
    bufp->fullQData(oldp+860,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_inst1takenaddr_r),64);
    bufp->fullQData(oldp+862,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_pc_r),64);
    bufp->fullQData(oldp+864,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dnpc_r),64);
    bufp->fullBit(oldp+866,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_dpicstop_r));
    bufp->fullCData(oldp+867,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_aluop_r),8);
    bufp->fullBit(oldp+868,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_instvalid_r));
    bufp->fullQData(oldp+869,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_reg_waddr_r),64);
    bufp->fullBit(oldp+871,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_we_r));
    bufp->fullQData(oldp+872,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_wdata_r),64);
    bufp->fullQData(oldp+874,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csr_waddr_r),64);
    bufp->fullBit(oldp+876,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwe_r));
    bufp->fullCData(oldp+877,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_bjop_r),3);
    bufp->fullQData(oldp+878,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_csrwdata_r),64);
    bufp->fullBit(oldp+880,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_flush_memreq_w));
    bufp->fullBit(oldp+881,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__mem_isjump_r));
    bufp->fullCData(oldp+882,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r) 
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
    bufp->fullBit(oldp+883,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r) 
                             | (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r))));
    bufp->fullQData(oldp+884,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1takenaddr_r),64);
    bufp->fullBit(oldp+886,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prmiss_r));
    bufp->fullBit(oldp+887,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_prsuccess_r));
    bufp->fullCData(oldp+888,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1pht_r),2);
    bufp->fullSData(oldp+889,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1bhr_r),13);
    bufp->fullBit(oldp+890,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1taken_r));
    bufp->fullQData(oldp+891,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r),64);
    bufp->fullQData(oldp+893,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_dnpc_r),64);
    bufp->fullBit(oldp+895,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_instvalid_r));
    bufp->fullQData(oldp+896,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_reg_waddr_r),64);
    bufp->fullBit(oldp+898,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_we_r));
    bufp->fullQData(oldp+899,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_wdata_r),64);
    bufp->fullQData(oldp+901,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csr_waddr_r),64);
    bufp->fullBit(oldp+903,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwe_r));
    bufp->fullQData(oldp+904,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_csrwdata_r),64);
    bufp->fullCData(oldp+906,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_bjop_r),3);
    bufp->fullBit(oldp+907,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_isjump_r));
    bufp->fullBit(oldp+908,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__btb_fixwe_w));
    bufp->fullQData(oldp+909,((8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__pc)),64);
    bufp->fullBit(oldp+911,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__bpu2hit));
    bufp->fullBit(oldp+912,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__stallbpu));
    bufp->fullBit(oldp+913,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__exisjump));
    bufp->fullQData(oldp+914,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterjump),64);
    bufp->fullQData(oldp+916,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterISjump),64);
    bufp->fullQData(oldp+918,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countersuccess),64);
    bufp->fullQData(oldp+920,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__countergsharesuccess),64);
    bufp->fullQData(oldp+922,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterprimiss),64);
    bufp->fullQData(oldp+924,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbprimiss),64);
    bufp->fullQData(oldp+926,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterras),64);
    bufp->fullQData(oldp+928,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss),64);
    bufp->fullQData(oldp+930,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterrasprimiss2),64);
    bufp->fullQData(oldp+932,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit),64);
    bufp->fullQData(oldp+934,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbhit2),64);
    bufp->fullQData(oldp+936,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbmiss),64);
    bufp->fullQData(oldp+938,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterbtbretmiss),64);
    bufp->fullQData(oldp+940,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__counterghrmiss),64);
    bufp->fullQData(oldp+942,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag1),64);
    bufp->fullQData(oldp+944,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag2),64);
    bufp->fullQData(oldp+946,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag3),64);
    bufp->fullQData(oldp+948,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag4),64);
    bufp->fullQData(oldp+950,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag5),64);
    bufp->fullQData(oldp+952,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag6),64);
    bufp->fullQData(oldp+954,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag7),64);
    bufp->fullQData(oldp+956,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag8),64);
    bufp->fullQData(oldp+958,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag9),64);
    bufp->fullQData(oldp+960,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag10),64);
    bufp->fullQData(oldp+962,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag11),64);
    bufp->fullQData(oldp+964,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag12),64);
    bufp->fullQData(oldp+966,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag13),64);
    bufp->fullQData(oldp+968,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag14),64);
    bufp->fullQData(oldp+970,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__jumpflag15),64);
    bufp->fullSData(oldp+972,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__testghr),13);
    bufp->fullQData(oldp+973,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay),64);
    bufp->fullBit(oldp+975,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit1_w));
    bufp->fullBit(oldp+976,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_hit2_w));
    bufp->fullQData(oldp+977,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu1hitaddr_w),64);
    bufp->fullQData(oldp+979,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpu2hitaddr_w),64);
    bufp->fullQData(oldp+981,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__bpurastarget_w),64);
    bufp->fullCData(oldp+983,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__btb_op_w),3);
    bufp->fullQData(oldp+984,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)),64);
    bufp->fullQData(oldp+986,((8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)),64);
    bufp->fullWData(oldp+988,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_valid_r),256);
    bufp->fullQData(oldp+996,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_data),64);
    bufp->fullQData(oldp+998,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_btb_u0__DOT__btb_tag),64);
    bufp->fullBit(oldp+1000,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_gshare_u0__gshare_btbhit_i));
    bufp->fullCData(oldp+1001,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count1),2);
    bufp->fullCData(oldp+1002,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_gshare_u0__DOT__pht_count2),2);
    bufp->fullIData(oldp+1003,((0x7ffffffU & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r))),27);
    bufp->fullSData(oldp+1004,((0x1fffU & ((IData)(
                                                   (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_pc_r 
                                                    >> 2U)) 
                                           ^ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__wb_inst1bhr_r)))),13);
    bufp->fullBit(oldp+1005,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT____Vcellinp__ysyx_22040210_ras_u0__ras_btbhit_i));
    bufp->fullQData(oldp+1006,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__pipeline_bpu1hit_w)
                                 ? (4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay)
                                 : (8ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__pcdelay))),64);
    bufp->fullQData(oldp+1008,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[0]),64);
    bufp->fullQData(oldp+1010,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[1]),64);
    bufp->fullQData(oldp+1012,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[2]),64);
    bufp->fullQData(oldp+1014,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[3]),64);
    bufp->fullQData(oldp+1016,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[4]),64);
    bufp->fullQData(oldp+1018,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[5]),64);
    bufp->fullQData(oldp+1020,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[6]),64);
    bufp->fullQData(oldp+1022,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[7]),64);
    bufp->fullQData(oldp+1024,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[8]),64);
    bufp->fullQData(oldp+1026,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[9]),64);
    bufp->fullQData(oldp+1028,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[10]),64);
    bufp->fullQData(oldp+1030,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[11]),64);
    bufp->fullQData(oldp+1032,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[12]),64);
    bufp->fullQData(oldp+1034,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[13]),64);
    bufp->fullQData(oldp+1036,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[14]),64);
    bufp->fullQData(oldp+1038,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_entry[15]),64);
    bufp->fullCData(oldp+1040,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_headptr),4);
    bufp->fullCData(oldp+1041,((0xfU & ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_bpu_u0__DOT__ysyx_22040210_ras_u0__DOT__ras_headptr) 
                                        - (IData)(1U)))),4);
    bufp->fullQData(oldp+1042,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mtvec),64);
    bufp->fullQData(oldp+1044,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mcause),64);
    bufp->fullQData(oldp+1046,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mepc),64);
    bufp->fullQData(oldp+1048,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_csr__DOT__mstatus),64);
    bufp->fullQData(oldp+1050,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres),64);
    bufp->fullQData(oldp+1052,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__logices),64);
    bufp->fullQData(oldp+1054,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__memaddr),64);
    bufp->fullQData(oldp+1056,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_wdata_r),64);
    bufp->fullQData(oldp+1058,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__csrdata),64);
    bufp->fullQData(oldp+1060,((4ULL + vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_pc_r)),64);
    bufp->fullBit(oldp+1062,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5));
    bufp->fullBit(oldp+1063,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5));
    bufp->fullBit(oldp+1064,((((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                               & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r 
                                  == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w)) 
                              | ((~ (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rs1is1or5)) 
                                 & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__rdis1or5)))));
    bufp->fullBit(oldp+1065,(((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____VdfgTmp_hc0fef46b__0) 
                              & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
                                 != vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg1_raddr_r))));
    bufp->fullQData(oldp+1066,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_mul_r),64);
    bufp->fullQData(oldp+1068,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op1_divrem_r),64);
    bufp->fullQData(oldp+1070,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_mul_r),64);
    bufp->fullQData(oldp+1072,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_op2_divrem_r),64);
    bufp->fullWData(oldp+1074,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_mul_w),128);
    bufp->fullQData(oldp+1078,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_div_w),64);
    bufp->fullQData(oldp+1080,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__arithmeticres_rem_w),64);
    bufp->fullBit(oldp+1082,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_valid_w));
    bufp->fullBit(oldp+1083,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_divrem_r));
    bufp->fullBit(oldp+1084,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_doing_r));
    bufp->fullBit(oldp+1085,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_div_qrvalid_r));
    bufp->fullBit(oldp+1086,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_valid_w));
    bufp->fullBit(oldp+1087,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_is_mul_r));
    bufp->fullBit(oldp+1088,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_doing_r));
    bufp->fullBit(oldp+1089,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ex_mul_mulvalid_r));
    bufp->fullBit(oldp+1090,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_qrvalid_r));
    bufp->fullQData(oldp+1091,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_quotiento_r),64);
    bufp->fullQData(oldp+1093,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_div_u0__DOT__div_remaindero_r),64);
    bufp->fullQData(oldp+1095,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_hi_o),64);
    bufp->fullQData(oldp+1097,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT____Vcellout__ysyx_22040210_mul_u0__result_lo_o),64);
    bufp->fullQData(oldp+1099,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplicand_r),64);
    bufp->fullQData(oldp+1101,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__multiplier_r),64);
    bufp->fullCData(oldp+1103,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_datavaild_r),2);
    bufp->fullBit(oldp+1104,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__mul_mulvalid_r));
    bufp->fullQData(oldp+1105,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_hio_r),64);
    bufp->fullQData(oldp+1107,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_ex_u0__DOT__ysyx_22040210_mul_u0__DOT__result_loo_r),64);
    bufp->fullCData(oldp+1109,((0x7fU & vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r)),7);
    bufp->fullCData(oldp+1110,((7U & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1111,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+1112,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x19U)),7);
    bufp->fullSData(oldp+1113,((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                >> 0x14U)),12);
    bufp->fullCData(oldp+1114,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1115,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1116,((0x1fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1117,((0x3fU & (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                         >> 0x14U))),6);
    bufp->fullQData(oldp+1118,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_Simm),64);
    bufp->fullQData(oldp+1120,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+1122,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+1124,((((- (QData)((IData)(
                                                    (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_inst_r 
                                                             >> 0x14U))))),64);
    bufp->fullQData(oldp+1126,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm),64);
    bufp->fullBit(oldp+1128,((3U == (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_alusel_r))));
    bufp->fullQData(oldp+1129,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r
                               [(7U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr)))]),64);
    bufp->fullIData(oldp+1131,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r
                               [(7U & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr)))]),32);
    bufp->fullIData(oldp+1132,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[0]),32);
    bufp->fullIData(oldp+1133,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[1]),32);
    bufp->fullIData(oldp+1134,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[2]),32);
    bufp->fullIData(oldp+1135,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[3]),32);
    bufp->fullIData(oldp+1136,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[4]),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[5]),32);
    bufp->fullIData(oldp+1138,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[6]),32);
    bufp->fullIData(oldp+1139,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_inst_r[7]),32);
    bufp->fullQData(oldp+1140,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[0]),64);
    bufp->fullQData(oldp+1142,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[1]),64);
    bufp->fullQData(oldp+1144,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[2]),64);
    bufp->fullQData(oldp+1146,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[3]),64);
    bufp->fullQData(oldp+1148,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[4]),64);
    bufp->fullQData(oldp+1150,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[5]),64);
    bufp->fullQData(oldp+1152,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[6]),64);
    bufp->fullQData(oldp+1154,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpc_r[7]),64);
    bufp->fullCData(oldp+1156,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_valid_r),8);
    bufp->fullCData(oldp+1157,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_tailptr),3);
    bufp->fullCData(oldp+1158,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_headptr),3);
    bufp->fullSData(oldp+1159,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[0]),13);
    bufp->fullSData(oldp+1160,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[1]),13);
    bufp->fullSData(oldp+1161,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[2]),13);
    bufp->fullSData(oldp+1162,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[3]),13);
    bufp->fullSData(oldp+1163,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[4]),13);
    bufp->fullSData(oldp+1164,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[5]),13);
    bufp->fullSData(oldp+1165,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[6]),13);
    bufp->fullSData(oldp+1166,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instbhr_r[7]),13);
    bufp->fullCData(oldp+1167,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[0]),2);
    bufp->fullCData(oldp+1168,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[1]),2);
    bufp->fullCData(oldp+1169,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[2]),2);
    bufp->fullCData(oldp+1170,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[3]),2);
    bufp->fullCData(oldp+1171,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[4]),2);
    bufp->fullCData(oldp+1172,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[5]),2);
    bufp->fullCData(oldp+1173,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[6]),2);
    bufp->fullCData(oldp+1174,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_instpht_r[7]),2);
    bufp->fullBit(oldp+1175,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[0]));
    bufp->fullBit(oldp+1176,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[1]));
    bufp->fullBit(oldp+1177,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[2]));
    bufp->fullBit(oldp+1178,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[3]));
    bufp->fullBit(oldp+1179,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[4]));
    bufp->fullBit(oldp+1180,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[5]));
    bufp->fullBit(oldp+1181,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[6]));
    bufp->fullBit(oldp+1182,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttaken[7]));
    bufp->fullQData(oldp+1183,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[0]),64);
    bufp->fullQData(oldp+1185,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[1]),64);
    bufp->fullQData(oldp+1187,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[2]),64);
    bufp->fullQData(oldp+1189,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[3]),64);
    bufp->fullQData(oldp+1191,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[4]),64);
    bufp->fullQData(oldp+1193,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[5]),64);
    bufp->fullQData(oldp+1195,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[6]),64);
    bufp->fullQData(oldp+1197,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_instbuffer_u0__DOT__buffer_insttakenaddr[7]),64);
    bufp->fullQData(oldp+1199,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[0]),64);
    bufp->fullQData(oldp+1201,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[1]),64);
    bufp->fullQData(oldp+1203,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[2]),64);
    bufp->fullQData(oldp+1205,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[3]),64);
    bufp->fullQData(oldp+1207,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[4]),64);
    bufp->fullQData(oldp+1209,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[5]),64);
    bufp->fullQData(oldp+1211,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[6]),64);
    bufp->fullQData(oldp+1213,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[7]),64);
    bufp->fullQData(oldp+1215,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[8]),64);
    bufp->fullQData(oldp+1217,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[9]),64);
    bufp->fullQData(oldp+1219,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[10]),64);
    bufp->fullQData(oldp+1221,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[11]),64);
    bufp->fullQData(oldp+1223,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[12]),64);
    bufp->fullQData(oldp+1225,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[13]),64);
    bufp->fullQData(oldp+1227,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[14]),64);
    bufp->fullQData(oldp+1229,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[15]),64);
    bufp->fullQData(oldp+1231,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[16]),64);
    bufp->fullQData(oldp+1233,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[17]),64);
    bufp->fullQData(oldp+1235,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[18]),64);
    bufp->fullQData(oldp+1237,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[19]),64);
    bufp->fullQData(oldp+1239,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[20]),64);
    bufp->fullQData(oldp+1241,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[21]),64);
    bufp->fullQData(oldp+1243,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[22]),64);
    bufp->fullQData(oldp+1245,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[23]),64);
    bufp->fullQData(oldp+1247,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[24]),64);
    bufp->fullQData(oldp+1249,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[25]),64);
    bufp->fullQData(oldp+1251,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[26]),64);
    bufp->fullQData(oldp+1253,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[27]),64);
    bufp->fullQData(oldp+1255,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[28]),64);
    bufp->fullQData(oldp+1257,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[29]),64);
    bufp->fullQData(oldp+1259,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[30]),64);
    bufp->fullQData(oldp+1261,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs[31]),64);
    bufp->fullBit(oldp+1263,(vlSelf->clk));
    bufp->fullBit(oldp+1264,(vlSelf->rst));
    bufp->fullBit(oldp+1265,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullQData(oldp+1266,(((IData)(vlSelf->rst)
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
                                                 ? 
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                                [(0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                 : 0ULL))))),64);
    bufp->fullQData(oldp+1268,(((IData)(vlSelf->rst)
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
                                                 ? 
                                                vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_regfile__DOT__gprs
                                                [(0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                 : 0ULL))))),64);
    bufp->fullQData(oldp+1270,(((((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
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
                                             ? 0ULL
                                             : ((0ULL 
                                                 == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w)
                                                 ? 0ULL
                                                 : 
                                                (((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w 
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
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                   : 0ULL))))
                                         : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg1_re_w)
                                             ? 0ULL
                                             : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
    bufp->fullQData(oldp+1272,((((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_reg_waddr_w 
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
                                             ? 0ULL
                                             : ((0ULL 
                                                 == vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w)
                                                 ? 0ULL
                                                 : 
                                                (((((vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w 
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
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                   : 0ULL))))
                                         : ((IData)(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__id_reg2_re_w)
                                             ? 0ULL
                                             : vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ysyx_22040210_id_u0__DOT__id_imm))))),64);
    bufp->fullBit(oldp+1274,(vlSelf->ysyx_22040210_top__DOT__io_interrupt));
    bufp->fullCData(oldp+1275,(0U),4);
    bufp->fullBit(oldp+1276,(1U));
    bufp->fullCData(oldp+1277,(vlSelf->ysyx_22040210_top__DOT__io_master_bid),4);
    bufp->fullCData(oldp+1278,(0U),2);
    bufp->fullCData(oldp+1279,(vlSelf->ysyx_22040210_top__DOT__io_master_rid),4);
    bufp->fullBit(oldp+1280,(vlSelf->ysyx_22040210_top__DOT__io_slave_awready));
    bufp->fullBit(oldp+1281,(vlSelf->ysyx_22040210_top__DOT__io_slave_awvalid));
    bufp->fullCData(oldp+1282,(vlSelf->ysyx_22040210_top__DOT__io_slave_awid),4);
    bufp->fullIData(oldp+1283,(vlSelf->ysyx_22040210_top__DOT__io_slave_awaddr),32);
    bufp->fullCData(oldp+1284,(vlSelf->ysyx_22040210_top__DOT__io_slave_awlen),8);
    bufp->fullCData(oldp+1285,(vlSelf->ysyx_22040210_top__DOT__io_slave_awsize),3);
    bufp->fullCData(oldp+1286,(vlSelf->ysyx_22040210_top__DOT__io_slave_awburst),2);
    bufp->fullBit(oldp+1287,(vlSelf->ysyx_22040210_top__DOT__io_slave_wready));
    bufp->fullBit(oldp+1288,(vlSelf->ysyx_22040210_top__DOT__io_slave_wvalid));
    bufp->fullQData(oldp+1289,(vlSelf->ysyx_22040210_top__DOT__io_slave_wdata),64);
    bufp->fullCData(oldp+1291,(vlSelf->ysyx_22040210_top__DOT__io_slave_wstrb),8);
    bufp->fullBit(oldp+1292,(vlSelf->ysyx_22040210_top__DOT__io_slave_wlast));
    bufp->fullBit(oldp+1293,(vlSelf->ysyx_22040210_top__DOT__io_slave_bready));
    bufp->fullBit(oldp+1294,(vlSelf->ysyx_22040210_top__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1295,(vlSelf->ysyx_22040210_top__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1296,(vlSelf->ysyx_22040210_top__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1297,(vlSelf->ysyx_22040210_top__DOT__io_slave_arready));
    bufp->fullBit(oldp+1298,(vlSelf->ysyx_22040210_top__DOT__io_slave_arvalid));
    bufp->fullCData(oldp+1299,(vlSelf->ysyx_22040210_top__DOT__io_slave_arid),4);
    bufp->fullIData(oldp+1300,(vlSelf->ysyx_22040210_top__DOT__io_slave_araddr),32);
    bufp->fullCData(oldp+1301,(vlSelf->ysyx_22040210_top__DOT__io_slave_arlen),8);
    bufp->fullCData(oldp+1302,(vlSelf->ysyx_22040210_top__DOT__io_slave_arsize),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyx_22040210_top__DOT__io_slave_arburst),2);
    bufp->fullBit(oldp+1304,(vlSelf->ysyx_22040210_top__DOT__io_slave_rready));
    bufp->fullBit(oldp+1305,(vlSelf->ysyx_22040210_top__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1306,(vlSelf->ysyx_22040210_top__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1307,(vlSelf->ysyx_22040210_top__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1308,(vlSelf->ysyx_22040210_top__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1310,(vlSelf->ysyx_22040210_top__DOT__io_slave_rlast));
    bufp->fullSData(oldp+1311,(0U),10);
    bufp->fullBit(oldp+1312,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_lock_i));
    bufp->fullCData(oldp+1313,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_cache_i),4);
    bufp->fullCData(oldp+1314,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_prot_i),3);
    bufp->fullCData(oldp+1315,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_qos_i),4);
    bufp->fullCData(oldp+1316,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_region_i),4);
    bufp->fullSData(oldp+1317,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_ar_user_i),10);
    bufp->fullBit(oldp+1318,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_lock_i));
    bufp->fullCData(oldp+1319,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_cache_i),4);
    bufp->fullCData(oldp+1320,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_prot_i),3);
    bufp->fullCData(oldp+1321,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_qos_i),4);
    bufp->fullCData(oldp+1322,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_region_i),4);
    bufp->fullSData(oldp+1323,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_aw_user_i),10);
    bufp->fullSData(oldp+1324,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__axi_w_user_i),10);
    bufp->fullQData(oldp+1325,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__sram_addr),64);
    bufp->fullCData(oldp+1327,(vlSelf->ysyx_22040210_top__DOT__axi_slave_interface_s0__DOT__sram_size),3);
    bufp->fullIData(oldp+1328,(0x80U),32);
    bufp->fullIData(oldp+1329,(0x40U),32);
    bufp->fullIData(oldp+1330,(6U),32);
    bufp->fullBit(oldp+1331,(0U));
    bufp->fullCData(oldp+1332,(0U),8);
    bufp->fullCData(oldp+1333,(0U),3);
    bufp->fullSData(oldp+1334,(vlSelf->ysyx_22040210_top__DOT__io_master_rid),10);
    bufp->fullSData(oldp+1335,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_r_user_i),10);
    bufp->fullSData(oldp+1336,(vlSelf->ysyx_22040210_top__DOT__io_master_bid),10);
    bufp->fullSData(oldp+1337,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__m0__DOT__axi_b_user_i),10);
    bufp->fullBit(oldp+1338,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__cachepipe_dataflush_i));
    bufp->fullCData(oldp+1339,(0xffU),8);
    bufp->fullQData(oldp+1340,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__buffer_raddr_w),64);
    bufp->fullQData(oldp+1342,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__ram_addr_w),64);
    bufp->fullWData(oldp+1344,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r2[0]),128);
    bufp->fullWData(oldp+1348,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_cachepipeline_u0__DOT__ysyx_22040210_dcache_u0__DOT__way_wdata_r2[1]),128);
    bufp->fullCData(oldp+1352,(vlSelf->ysyx_22040210_top__DOT__ysyx_22040210_u0__DOT__ysyx_22040210_pipeline_u0__DOT__ex_aluop_o_w),8);
    bufp->fullIData(oldp+1353,(0x100U),32);
    bufp->fullIData(oldp+1354,(0x2000U),32);
}
