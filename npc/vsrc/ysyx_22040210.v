`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210(
    input	            clock,
    input	            reset,
    input	            io_interrupt,
    input	            io_master_awready,	
    output	            io_master_awvalid,
    output  [3:0]	    io_master_awid,
    output  [31:0]	    io_master_awaddr,	
    output  [7:0]	    io_master_awlen,
    output  [2:0]	    io_master_awsize,	
    output  [1:0]	    io_master_awburst,	
    input	            io_master_wready,
    output	            io_master_wvalid,
    output  [63:0]	    io_master_wdata,	
    output  [7:0]	    io_master_wstrb,
    output	            io_master_wlast,
    output	            io_master_bready,
    input	            io_master_bvalid,
    input   [3:0]	    io_master_bid,
    input   [1:0]	    io_master_bresp,
    input	            io_master_arready,
    output	            io_master_arvalid,
    output  [3:0]	    io_master_arid,
    output  [31:0]	    io_master_araddr,		
    output  [7:0]	    io_master_arlen,
    output  [2:0]	    io_master_arsize,	
    output  [1:0]	    io_master_arburst,	
    output	            io_master_rready,
    input	            io_master_rvalid,
    input   [3:0]	    io_master_rid,
    input   [1:0]	    io_master_rresp,
    input   [63:0]	    io_master_rdata,
    input	            io_master_rlast,
    output	            io_slave_awready,
    input	            io_slave_awvalid,
    input   [3:0]	    io_slave_awid,
    input   [31:0]	    io_slave_awaddr,
    input   [7:0]	    io_slave_awlen,
    input   [2:0]	    io_slave_awsize,
    input   [1:0]	    io_slave_awburst,	
    output	            io_slave_wready,
    input	            io_slave_wvalid,
    input   [63:0]	    io_slave_wdata,
    input   [7:0]	    io_slave_wstrb,
    input	            io_slave_wlast,
    input	            io_slave_bready,
    output	            io_slave_bvalid,
    output  [3:0]	    io_slave_bid,
    output  [1:0]	    io_slave_bresp,
    output	            io_slave_arready,
    input	            io_slave_arvalid,
    input   [3:0]	    io_slave_arid,
    input   [31:0]	    io_slave_araddr,
    input   [7:0]	    io_slave_arlen,
    input   [2:0]	    io_slave_arsize,
    input   [1:0]	    io_slave_arburst,	
    input	            io_slave_rready,
    output	            io_slave_rvalid,
    output  [3:0]	    io_slave_rid,	
    output  [1:0]	    io_slave_rresp,	
    output  [63:0]	    io_slave_rdata,		
    output	            io_slave_rlast,

    output  [5:0]	    io_sram0_addr,	
    output	            io_sram0_cen,
    output	            io_sram0_wen,
    output  [127:0]	    io_sram0_wmask,	
    output  [127:0]	    io_sram0_wdata,	
    input   [127:0]	    io_sram0_rdata,	
    output  [5:0]	    io_sram1_addr,
    output	            io_sram1_cen,
    output	            io_sram1_wen,
    output  [127:0]	    io_sram1_wmask,	
    output  [127:0]	    io_sram1_wdata,	
    input   [127:0]	    io_sram1_rdata,	
    output  [5:0]	    io_sram2_addr,
    output	            io_sram2_cen,
    output	            io_sram2_wen,
    output  [127:0]	    io_sram2_wmask,	
    output  [127:0]	    io_sram2_wdata,	
    input   [127:0]	    io_sram2_rdata,
    output  [5:0]	    io_sram3_addr,
    output	            io_sram3_cen,
    output	            io_sram3_wen,
    output  [127:0]	    io_sram3_wmask,
    output  [127:0]	    io_sram3_wdata,
    input   [127:0]	    io_sram3_rdata,
    output  [5:0]	    io_sram4_addr,
    output	            io_sram4_cen,
    output	            io_sram4_wen,
    output  [127:0]	    io_sram4_wmask,
    output  [127:0]	    io_sram4_wdata,
    input   [127:0]	    io_sram4_rdata,
    output  [5:0]	    io_sram5_addr,
    output	            io_sram5_cen,
    output	            io_sram5_wen,
    output  [127:0]	    io_sram5_wmask,
    output  [127:0]	    io_sram5_wdata,
    input   [127:0]	    io_sram5_rdata,
    output  [5:0]	    io_sram6_addr,
    output	            io_sram6_cen,
    output	            io_sram6_wen,
    output  [127:0]	    io_sram6_wmask,
    output  [127:0]     io_sram6_wdata,
    input   [127:0]	    io_sram6_rdata,
    output  [5:0]	    io_sram7_addr,
    output	            io_sram7_cen,
    output	            io_sram7_wen,
    output  [127:0]	    io_sram7_wmask,
    output  [127:0]	    io_sram7_wdata,
    input   [127:0]	    io_sram7_rdata
);


    wire                                 ce;
    wire [`ysyx_22040210_InstAdderBus]   pc;
    wire [`ysyx_22040210_InstAdderBus]   thispc;
    wire [`ysyx_22040210_InstBus]        inst;
    wire [`ysyx_22040210_InstAdderBus]   thispc2;
    wire [`ysyx_22040210_InstBus]        inst2;
    wire                                 dpic_stop;
    //pipeline
    wire    [5:0]                               stall;
    wire    [5:0]                               flush;
    wire    [`ysyx_22040210_MemBUS]             memrdata_w;
    wire                                        memrdatavaild_w;
    wire                                        memwdatavaild_w;
    wire                                        memre_w;
    wire    [`ysyx_22040210_StoreSelBus]        memwe_w;
    wire    [`ysyx_22040210_MemAddrBus]         memaddr_w;
    wire    [`ysyx_22040210_MemBUS]             memwdata_o;
    wire    [2:0]                               memsize_w;
    wire                                        r_valid_i;      
    wire                                        w_valid_i;
    wire    [63:0]                              rw_w_data_i;        
    wire    [63:0]                              r_addr_i;      
    wire    [63:0]                              w_addr_i;     
    wire    [7:0]                               r_size_i;     
    wire    [7:0]                               w_size_i;    
    wire                                        r_ready_o; 
    wire                                        w_ready_o;        
    wire    [63:0]                              data_read_o;
    wire                                        pipeline_instbuffer_full_w;
    wire                                        cachepipe_inst_stallpc_w;
    wire                                        cachepipe_uncache_stallpc_w;
    wire                                        cachepipe_data_stall_w;
    wire                                        inst1vaild;
    wire                                        inst2vaild;
    wire                                        cachepipe_flushifid;
    wire                                        cachepipe_icache_req2_w;
    wire                                        pipeline_bpu1hit_w;
    //bpu
    wire    [`ysyx_22040210_BHR_BUS]                           pipeline_inst1bhr_w;
    wire    [1:0]                           pipeline_inst1pht_w;
    wire                                    pipeline_inst1taken_w;
    wire    [`ysyx_22040210_InstAdderBus]   pipeline_inst1takenaddr_w;
    wire    [`ysyx_22040210_BHR_BUS]                           pipeline_inst2bhr_w;
    wire    [1:0]                           pipeline_inst2pht_w;
    wire                                    pipeline_inst2taken_w;
    wire    [`ysyx_22040210_InstAdderBus]   pipeline_inst2takenaddr_w;
    wire    [`ysyx_22040210_BHR_BUS]                           bpu_bhr_w;
    wire    [1:0]                           bpu_pht_w;
    wire                                    bpu1istaken_w;
    wire                                    bpu2istaken_w;
    wire    [`ysyx_22040210_InstAdderBus]   bpu1hitaddr_w;
    wire    [`ysyx_22040210_InstAdderBus]   bpu2hitaddr_w;
    //Fencei
    wire    cache_invalid_w;
    wire    isinvalidsuccess_w;    
    wire [3:0]r_len_i;
    wire [3:0]w_len_i;
    wire cache_w_last_i;

import "DPI-C" function void checkdpicstop(input reg[63:0] dpic_o);
    always @(*) begin
        checkdpicstop(dpic_stop);
    end

wire clk = clock;
wire rst = reset;
    ysyx_22040210_pipeline ysyx_22040210_pipeline_u0(
        .clk                    (clk),
        .rst                    (rst),
        .stall_cachereq_i       (cachepipe_inst_stallpc_w),
        .stall_uncachereq_i     (cachepipe_uncache_stallpc_w),
        .pipeline_instvaild_i   (inst1vaild ),//&& !cachepipe_flushifid
        .pipeline_inst2vaild_i   (inst2vaild ),//&& !cachepipe_flushifid
        .stall                  (stall),
        .flush                  (flush),
        .cachepipe_flushifid    (cachepipe_flushifid),
        .pipeline_thispc_i      (thispc),
        .pipeline_thispc2_i     (thispc2),
        .pipeline_inst_i        (inst),
        .pipeline_inst2_i       (inst2),
        .pipeline_ce_o          (ce),
        .pipeline_pc_o          (pc),
        .pipeline_instbuffer_full_o(pipeline_instbuffer_full_w),
        .pipeline_icache_req2_i (cachepipe_icache_req2_w),
        .piepline_bpu1hit_o(pipeline_bpu1hit_w),
        //BPU
        .pipeline_inst1bhr_i(pipeline_inst1bhr_w),
        .pipeline_inst1pht_i(pipeline_inst1pht_w),
        .pipeline_inst1taken_i(pipeline_inst1taken_w),
        .pipeline_inst1takenaddr_i(pipeline_inst1takenaddr_w),
        .pipeline_inst2bhr_i(pipeline_inst2bhr_w),
        .pipeline_inst2pht_i(pipeline_inst2pht_w),
        .pipeline_inst2taken_i(pipeline_inst2taken_w),
        .pipeline_inst2takenaddr_i(pipeline_inst2takenaddr_w),
        .bpu_bhr_o(bpu_bhr_w),
        .bpu_pht_o(bpu_pht_w),
        .bpu1istaken_o(bpu1istaken_w),
        .bpu2istaken_o(bpu2istaken_w),
        .bpu1hitaddr_o(bpu1hitaddr_w),
        .bpu2hitaddr_o(bpu2hitaddr_w),
        //Interface with DataMem
        .pipeline_invalidcache_o(cache_invalid_w),
        .pipeline_invalidcachesuccess_i(isinvalidsuccess_w),
        .pipeline_memrdata_i     (memrdata_w),
        .pipeline_memrdatavaild_i(memrdatavaild_w&&(!cachepipe_data_stall_w)),
        .pipeline_memwdatavaild_i(memwdatavaild_w&&(!cachepipe_data_stall_w)),
        .pipeline_memre_o        (memre_w),
        .pipeline_memwe_o        (memwe_w),
        .pipeline_memwsize_o     (memsize_w),
        .pipeline_memaddr_o      (memaddr_w),
        .pipeline_memwdata_o     (memwdata_o),
        // Interface with DPI-C
        .pipeline_dpic_stop_o   (dpic_stop)     
    );




    ysyx_22040210_cachepipeline ysyx_22040210_cachepipeline_u0(

        .clk(clk),
        .rst(rst),
        .cache_invalid_i(cache_invalid_w),
        .isinvalidsuccess_o(isinvalidsuccess_w),
        .cachepipe_inst1bhr_o(pipeline_inst1bhr_w),
        .cachepipe_inst1pht_o(pipeline_inst1pht_w),
        .cachepipe_inst1taken_o(pipeline_inst1taken_w),
        .cachepipe_inst1takenaddr_o(pipeline_inst1takenaddr_w),
        .cachepipe_inst2bhr_o(pipeline_inst2bhr_w),
        .cachepipe_inst2pht_o(pipeline_inst2pht_w),
        .cachepipe_inst2taken_o(pipeline_inst2taken_w),
        .cachepipe_inst2takenaddr_o(pipeline_inst2takenaddr_w),
        .cachepipebpu_bhr_i(bpu_bhr_w),
        .cachepipebpu_pht_i(bpu_pht_w),
        .cachepipebpu1istaken_i(bpu1istaken_w),
        .cachepipebpu2istaken_i(bpu2istaken_w),
        .cachepipebpu1hitaddr_i(bpu1hitaddr_w),
        .cachepipebpu2hitaddr_i(bpu2hitaddr_w),

        .cachepipe_instflush_i(flush[0]),
        .cachepipe_flushifid(cachepipe_flushifid),
        .cachepipe_dataflush_i(),
        .cachepipe_cpustall_i({4'b0,pipeline_instbuffer_full_w,cachepipe_inst_stallpc_w}),
    //UnCache Interface
        //.cachepipe_uncacheinst_req_i(pc[3]),
        .cachepipe_uncacheinst_req_i(0),
        //.cachepipe_uncachedata_req_i(1'b0),
        //.cachepipe_uncachedata_req_i(((memre_w)|| (|memwe_w))),
        .cachepipe_uncachedata_req_i(((memre_w)|| (|memwe_w))&&(memaddr_w >='ha0000000)),
        .cachepipe_uncache_stallpc_o(cachepipe_uncache_stallpc_w),
    //ICache Interface
        //Icache Read Chanel
        .cachepipe_inst_rreq_i(!pipeline_instbuffer_full_w && !rst && !cachepipe_inst_stallpc_w),
        //.cachepipe_inst_rreq_i(!stall[0] && !rst),
        .cachepipe_inst_raddr_i(pc),
        //.cachepipe_inst_rvaild_o(),
        //.cachepipe_inst_hit_o(),
        .cachepipe_inst_inst1_o(inst),
        .cachepipe_inst_inst1pc_o(thispc), 
        .cachepipe_inst_inst1vaild_o(inst1vaild),
        .cachepipe_inst_inst2_o(inst2),
        .cachepipe_inst_inst2pc_o(thispc2), 
        .cachepipe_inst_inst2vaild_o(inst2vaild),
        .cachepipe_inst_stallpc_o(cachepipe_inst_stallpc_w), 
        //ICache Write Channel
        .cachefrombpu1hit_i(pipeline_bpu1hit_w),
        .cachepipe_icache_req2_o(cachepipe_icache_req2_w),
    //DCache Interface
        .cachepipe_data_stall_o(cachepipe_data_stall_w), 
        //Dcache Read Chanel
        .cachepipe_data_rreq_i(memre_w),
        .cachepipe_data_raddr_i(memaddr_w),
        .cachepipe_data_rvaild_o(memrdatavaild_w),
        .cachepipe_data_rdata_o(memrdata_w),
        //DCache Write Channel
        .cachepipe_data_wreq_i(|memwe_w),            
        .cachepipe_data_wdata_i(memwdata_o),       
        .cachepipe_data_waddr_i(memaddr_w),       
        .cachepipe_data_wsel_i(memwe_w),         
        .cachepipe_data_wvaild_o(memwdatavaild_w),
    //AXI Interface
        //.cachepipe_axi_ce_o(),//
        .cachepipe_axi_wsel_o(w_size_i),
        .cachepipe_axi_rsel_o(r_size_i),
        //AXI READ
        .cachepipe_axi_rdata_i(data_read_o),
        .cachepipe_axi_rresp_i(r_ready_o),
        .cachepipe_axi_ren_o(r_valid_i),
        .cachepipe_axi_rready_o(),//r_valid_i
        .cachepipe_axi_raddr_o(r_addr_i),
        .cachepipe_axi_rlen_o(r_len_i),
        //AXI WRITE
        .cachepipe_axi_bvaild_i(w_ready_o),
        .cachepipe_axi_wen_o(w_valid_i),
        .cachepipe_axi_waddr_o(w_addr_i),
        .cachepipe_axi_wdata_o(rw_w_data_i),
        .cachepipe_axi_wvaild_o(),//w_valid_i
        .cachepipe_axi_wlast_o(cache_w_last_i),
        .cachepipe_axi_wlen_o(w_len_i),
        .io_sram0_addr(io_sram0_addr)		,	
        .io_sram0_cen(io_sram0_cen)			,
        .io_sram0_wen(io_sram0_wen)			,
        .io_sram0_wmask(io_sram0_wmask)		,	
        .io_sram0_wdata(io_sram0_wdata)		,	
        .io_sram0_rdata(io_sram0_rdata)		,	
        .io_sram1_addr(io_sram1_addr)			,
        .io_sram1_cen(io_sram1_cen)			,
        .io_sram1_wen(io_sram1_wen)			,
        .io_sram1_wmask(io_sram1_wmask)		,	
        .io_sram1_wdata(io_sram1_wdata)		,	
        .io_sram1_rdata(io_sram1_rdata)		,	
        .io_sram2_addr(io_sram2_addr)			,
        .io_sram2_cen(io_sram2_cen)			,
        .io_sram2_wen(io_sram2_wen)			,
        .io_sram2_wmask(io_sram2_wmask)		,	
        .io_sram2_wdata(io_sram2_wdata)		,	
        .io_sram2_rdata(io_sram2_rdata)			,
        .io_sram3_addr(io_sram3_addr)			,
        .io_sram3_cen(io_sram3_cen)			,
        .io_sram3_wen(io_sram3_wen)			,
        .io_sram3_wmask(io_sram3_wmask)			,
        .io_sram3_wdata(io_sram3_wdata)			,
        .io_sram3_rdata(io_sram3_rdata)     ,
        .io_sram4_addr(io_sram4_addr)			,
        .io_sram4_cen(io_sram4_cen)			,
        .io_sram4_wen(io_sram4_wen)			,
        .io_sram4_wmask(io_sram4_wmask)			,
        .io_sram4_wdata(io_sram4_wdata)			,
        .io_sram4_rdata(io_sram4_rdata)			,
        .io_sram5_addr(io_sram5_addr)			,
        .io_sram5_cen(io_sram5_cen)			,
        .io_sram5_wen(io_sram5_wen)			,
        .io_sram5_wmask(io_sram5_wmask)			,
        .io_sram5_wdata(io_sram5_wdata)			,
        .io_sram5_rdata(io_sram5_rdata)			,
        .io_sram6_addr(io_sram6_addr)			,
        .io_sram6_cen(io_sram6_cen)			,
        .io_sram6_wen(io_sram6_wen)			,
        .io_sram6_wmask(io_sram6_wmask)			,
        .io_sram6_wdata(io_sram6_wdata)			,
        .io_sram6_rdata(io_sram6_rdata)			,
        .io_sram7_addr(io_sram7_addr)			,
        .io_sram7_cen(io_sram7_cen)			,
        .io_sram7_wen(io_sram7_wen)			,
        .io_sram7_wmask(io_sram7_wmask)			,
        .io_sram7_wdata(io_sram7_wdata)			,
        .io_sram7_rdata(io_sram7_rdata)
    );

    /////////////////////////////////////////////////////////////////

    axi_master_interface m0(
        //Interface with AXI Gloable Chanal   
        .clk(clk),//ACLK
        .rst(rst),//ARESETn
        .flush(0),
        //Interface with CPU Inst Fetch
        .w_valid_i(w_valid_i),   
        .r_valid_i(r_valid_i),         
        .rw_w_data_i(rw_w_data_i),        
        .r_addr_i(r_addr_i),      
        .w_addr_i(w_addr_i),     
        .r_size_i(r_size_i),  
        .w_size_i(w_size_i), 
        .r_len_i(0),
        .w_len_i(0),
        .r_ready_o(r_ready_o), 
        .w_ready_o(w_ready_o),       
        .data_read_o(data_read_o),        
        .cache_w_last_i(cache_w_last_i),
        //Interface with AXI Adress Read            Chanal
        .axi_ar_id_o(io_master_arid),
        .axi_ar_addr_o(io_master_araddr),
        .axi_ar_len_o(io_master_arlen),
        .axi_ar_size_o(io_master_arsize),
        .axi_ar_burst_o(io_master_arburst),
        .axi_ar_lock_o(),
        .axi_ar_cache_o(),
        .axi_ar_prot_o(),
        .axi_ar_qos_o(),
        .axi_ar_region_o(),
        .axi_ar_user_o(),
        .axi_ar_valid_o(io_master_arvalid), 
        .axi_ar_ready_i(io_master_arready),  
        //Interface with AXI Date   Read            Chanal
        .axi_r_id_i(io_master_rid),
        .axi_r_data_i(io_master_rdata),
        .axi_r_resp_i(io_master_rresp),
        .axi_r_last_i(io_master_rlast),
        .axi_r_user_i(),
        .axi_r_valid_i(io_master_rvalid),
        .axi_r_ready_o(io_master_rready),
        //Interface with AXI Adress Write           Chanal
        .axi_aw_id_o(io_master_awid),
        .axi_aw_addr_o(io_master_awaddr),
        .axi_aw_len_o(io_master_awlen),
        .axi_aw_size_o(io_master_awsize),
        .axi_aw_burst_o(io_master_awburst),
        .axi_aw_lock_o(),
        .axi_aw_cache_o(),
        .axi_aw_prot_o(),
        .axi_aw_qos_o(),
        .axi_aw_region_o(),
        .axi_aw_user_o(),
        .axi_aw_valid_o(io_master_awvalid), 
        .axi_aw_ready_i(io_master_awready),  
        //Interface with AXI Date   Write           Chanal
        .axi_w_data_o(io_master_wdata),
        .axi_w_strb_o(io_master_wstrb),
        .axi_w_last_o(io_master_wlast),
        .axi_w_user_o(),
        .axi_w_valid_o(io_master_wvalid),
        .axi_w_ready_i(io_master_wready),
        //Interface with AXI Date   Write Response  Chanal
        .axi_b_id_i(io_master_bid),
        .axi_b_resp_i(io_master_bresp),
        .axi_b_user_i(),
        .axi_b_valid_i(io_master_bvalid),
        .axi_b_ready_o(io_master_bready)
    );






endmodule
