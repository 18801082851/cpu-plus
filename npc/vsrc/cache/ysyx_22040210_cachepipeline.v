`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_cachepipeline(

    input       wire                                   clk,
    input       wire                                   rst,

    input       wire                                   cache_invalid_i,
    output      wire                                   isinvalidsuccess_o,
    input       wire                                   cachepipe_instflush_i,
    output      wire                                   cachepipe_flushifid,
    input       wire                                   cachepipe_dataflush_i,
    input       wire   [5:0]                           cachepipe_cpustall_i,
    //bpu
    output       wire   [`ysyx_22040210_BHR_BUS]                           cachepipe_inst1bhr_o,
    output       wire   [1:0]                           cachepipe_inst1pht_o,
    output       wire                                   cachepipe_inst1taken_o,
    output       wire   [`ysyx_22040210_InstAdderBus]   cachepipe_inst1takenaddr_o,
    output       wire   [`ysyx_22040210_BHR_BUS]                           cachepipe_inst2bhr_o,
    output       wire   [1:0]                           cachepipe_inst2pht_o,
    output       wire                                   cachepipe_inst2taken_o,
    output       wire   [`ysyx_22040210_InstAdderBus]   cachepipe_inst2takenaddr_o,
    input      wire   [`ysyx_22040210_BHR_BUS]                           cachepipebpu_bhr_i,
    input      wire   [1:0]                           cachepipebpu_pht_i,
    input      wire                                   cachepipebpu1istaken_i,
    input      wire                                   cachepipebpu2istaken_i,
    input      wire   [`ysyx_22040210_InstAdderBus]   cachepipebpu1hitaddr_i,
    input      wire   [`ysyx_22040210_InstAdderBus]   cachepipebpu2hitaddr_i,
//UnCache Interface
    input       wire                                   cachepipe_uncacheinst_req_i,
    input       wire                                   cachepipe_uncachedata_req_i,
    output      wire                                     cachepipe_uncache_stallpc_o,
//ICache Interface
    //Icache Read Chanel
    input       wire                                   cachepipe_inst_rreq_i,
    input       wire    [`ysyx_22040210_InstAdderBus]  cachepipe_inst_raddr_i,
    //output      wire                                   cachepipe_inst_rvaild_o,
    //output      wire                                   cachepipe_inst_hit_o,
    output      wire   [`ysyx_22040210_InstBus]        cachepipe_inst_inst1_o,
    output      wire   [`ysyx_22040210_InstBus]        cachepipe_inst_inst2_o,
    output      wire   [`ysyx_22040210_InstAdderBus]   cachepipe_inst_inst1pc_o, 
    output      wire   [`ysyx_22040210_InstAdderBus]   cachepipe_inst_inst2pc_o,
    output      wire                                   cachepipe_inst_inst1vaild_o,
    output      wire                                   cachepipe_inst_inst2vaild_o,
    output      wire                                   cachepipe_inst_stallpc_o, 

    input       wire                                   cachefrombpu1hit_i,
    output      wire                                   cachepipe_icache_req2_o,
    //ICache Write Channel

//DCache Interface
    output      wire                                    cachepipe_data_stall_o, 
    //Dcache Read Chanel
    input       wire                                    cachepipe_data_rreq_i,
    input       wire    [`ysyx_22040210_MemAddrBus]     cachepipe_data_raddr_i,
    output      wire                                    cachepipe_data_rvaild_o,
    output      wire                                    cachepipe_data_wvaild_o,
    output      reg    [`ysyx_22040210_MemBUS]          cachepipe_data_rdata_o,
    //DCache Write Channel
    input       wire                                    cachepipe_data_wreq_i,            
    input       wire   [`ysyx_22040210_MemBUS]          cachepipe_data_wdata_i,       
    input       wire    [`ysyx_22040210_MemAddrBus]     cachepipe_data_waddr_i,       
    input       wire    [7:0]   cachepipe_data_wsel_i,                  
//AXI Interface
	//output      wire                                    cachepipe_axi_ce_o,
	output      wire      [7:0]                         cachepipe_axi_wsel_o,
	output      wire     [7:0]                          cachepipe_axi_rsel_o,
    //AXI READ
    input       wire    [`ysyx_22040210_MemBUS]         cachepipe_axi_rdata_i,
    input       wire                                    cachepipe_axi_rresp_i,
    output      wire                                    cachepipe_axi_ren_o,
    output      wire                                    cachepipe_axi_rready_o,
    output      wire     [`ysyx_22040210_MemAddrBus]    cachepipe_axi_raddr_o,
    output      wire     [3:0]        cachepipe_axi_rlen_o,
    //AXI WRITE
    input       wire                                    cachepipe_axi_bvaild_i,
    output      wire                                    cachepipe_axi_wen_o,
    output      wire   [`ysyx_22040210_MemAddrBus]      cachepipe_axi_waddr_o,
    output      wire   [`ysyx_22040210_MemBUS]          cachepipe_axi_wdata_o,
    output      wire                                    cachepipe_axi_wvaild_o,
    output      wire                                    cachepipe_axi_wlast_o,
    output      wire  [3:0]                             cachepipe_axi_wlen_o,
    //SRAM
    output      wire    [5:0]	                        io_sram0_addr,	
    output	    wire                                    io_sram0_cen,
    output	    wire                                    io_sram0_wen,
    output      wire    [127:0]	                        io_sram0_wmask,	
    output      wire    [127:0]	                        io_sram0_wdata,	
    input       wire    [127:0]	                        io_sram0_rdata,	
    output      wire    [5:0]	                        io_sram1_addr,
    output	    wire                                    io_sram1_cen,
    output	    wire                                    io_sram1_wen,
    output      wire    [127:0]	                        io_sram1_wmask,
    output      wire    [127:0]	                        io_sram1_wdata,	
    input       wire    [127:0]	                        io_sram1_rdata,	
    output      wire    [5:0]	                        io_sram2_addr,
    output	    wire                                    io_sram2_cen,
    output	    wire                                    io_sram2_wen,
    output      wire    [127:0]	                        io_sram2_wmask,	
    output      wire    [127:0]	                        io_sram2_wdata,	
    input       wire    [127:0]	                        io_sram2_rdata,
    output      wire    [5:0]	                        io_sram3_addr,
    output	    wire                                    io_sram3_cen,
    output	    wire                                    io_sram3_wen,
    output      wire    [127:0]	                        io_sram3_wmask,
    output      wire    [127:0]	                        io_sram3_wdata,
    input       wire    [127:0]	                        io_sram3_rdata,
    output      wire    [5:0]	                        io_sram4_addr,
    output	    wire                                    io_sram4_cen,
    output	    wire                                    io_sram4_wen,
    output      wire    [127:0]	                        io_sram4_wmask,
    output      wire    [127:0]	                        io_sram4_wdata,
    input       wire    [127:0]	                        io_sram4_rdata,
    output      wire    [5:0]	                        io_sram5_addr,
    output	    wire                                    io_sram5_cen,
    output	    wire                                    io_sram5_wen,
    output      wire    [127:0]	                        io_sram5_wmask,
    output      wire    [127:0]	                        io_sram5_wdata,
    input       wire    [127:0]	                        io_sram5_rdata,
    output      wire    [5:0]	                        io_sram6_addr,
    output	    wire                                    io_sram6_cen,
    output	    wire                                    io_sram6_wen,
    output      wire    [127:0]	                        io_sram6_wmask,
    output      wire    [127:0]                         io_sram6_wdata,
    input       wire    [127:0]	                        io_sram6_rdata,
    output      wire    [5:0]	                        io_sram7_addr,
    output	    wire                                    io_sram7_cen,
    output	    wire                                    io_sram7_wen,
    output      wire    [127:0]	                        io_sram7_wmask,
    output      wire    [127:0]	                        io_sram7_wdata,
    input       wire    [127:0]	                        io_sram7_rdata

);
// CacheAXI Interface
reg [1:0] rstate_current;
reg [1:0] rstate_next;
wire [`ysyx_22040210_MemAddrBus] axicache_uncacheinst_araddr_w ;
wire     axicache_uncacheinst_ren_w ; 
reg     cachepipe_icache_req_r ;
reg [`ysyx_22040210_MemAddrBus]cachepipe_data_raddr_tmpr;
reg cachepipe_dcache_req_r;
reg cachepipe_uncachedata_ren_r;
reg cachepipe_uncachedata_rstall_r;
reg [`ysyx_22040210_MemAddrBus]cachepipe_uncachedata_araddr_r;
reg [1:0] wstate_current;
reg [1:0] wstate_next;
reg [`ysyx_22040210_MemAddrBus] cachepipe_data_waddr_tmp_r;
reg [`ysyx_22040210_MemBUS]     cachepipe_data_wdata_tmp_r;
reg [7:0]                       cachepipe_data_wsel_tmp_r;
reg dcache_write_req_r;
reg axicache_uncachedata_wen_r;
reg [`ysyx_22040210_MemAddrBus]axicache_uncachedata_awaddr_r;
reg [`ysyx_22040210_MemBUS]axicache_uncachedata_wdata_r;
reg [7:0]axicache_data_wsel_r;
reg cachepipe_uncachedata_wstall_r;
wire [`ysyx_22040210_MemBUS] axicache_uncachedata_rdata_w;
wire [`ysyx_22040210_MemBUS] cachepipe_data_rdata_w;
wire [`ysyx_22040210_InstBus]icache_inst1_w;
wire [`ysyx_22040210_InstBus]icache_inst2_w;

wire   [`ysyx_22040210_InstAdderBus]        cachepipe_inst_inst1pc_w; 
reg   [`ysyx_22040210_InstAdderBus]         cachepipe_inst_uncachepc_r;
wire    [`ysyx_22040210_BHR_BUS]                               cachepipe_inst_inst1bhr_w; 
reg     [`ysyx_22040210_BHR_BUS]                               cachepipe_inst_uncachebhr_r;
wire    [1:0]                               cachepipe_inst_inst1pht_w; 
reg     [1:0]                               cachepipe_inst_uncachepht_r;
wire                                        cachepipe_inst_inst1taken_w; 
reg                                         cachepipe_inst_uncachetaken_r;
wire    [`ysyx_22040210_InstAdderBus]       cachepipe_inst_inst1takenaddr_w; 
reg     [`ysyx_22040210_InstAdderBus]       cachepipe_inst_uncachetakenaddr_r;
wire    [`ysyx_22040210_BHR_BUS]                               cachepipe_inst_inst2bhr_w; 
wire    [1:0]                               cachepipe_inst_inst2pht_w; 
wire                                        cachepipe_inst_inst2taken_w; 
wire    [`ysyx_22040210_InstAdderBus]       cachepipe_inst_inst2takenaddr_w; 


wire cachepipe_icache_stallpc_w;
wire icache_inst1_vaild_w;
wire icache_inst2_vaild_w;
wire icache_rvaild_w;
wire [`ysyx_22040210_CacheWayBUS]icache_rdata_w;
wire [`ysyx_22040210_MemAddrBus]icache_araddr_w;
wire icache_ren_w;
wire axicache_uncacheinst_rvalid_w;
wire [`ysyx_22040210_InstBus]axicache_uncacheinst_rdata_w;
wire axicache_uncachedata_rvalid_w;
wire axicache_uncachedata_bvalid_w;
wire dcache_stall_w;
wire axicache_data_rvalid_w;
wire [`ysyx_22040210_CacheWayBUS]axicache_data_rdata_w;
wire [`ysyx_22040210_MemAddrBus]axicache_data_araddr_w;
wire axicache_data_ren_w;
wire axicache_data_bvalid_w;
wire axicache_data_wen_w;
wire [`ysyx_22040210_CacheWayBUS]axicache_data_wdata_w;
wire [`ysyx_22040210_MemAddrBus]axicache_data_awaddr_w;
reg axicache_uncacheinst_ren_r;
/**********************************ICache**************************************/
// wire [`ysyx_22040210_MemAddrBus] axicache_uncacheinst_araddr_w ;
// wire     axicache_uncacheinst_ren_w ; 
// wire     cachepipe_icache_req_r ;
reg uncache_inst_flush;

// assign  cachepipe_icache_req_r          =   !cachepipe_uncacheinst_req_i ? cachepipe_inst_rreq_i 
 //                                                                        : 1'b0;

assign  axicache_uncacheinst_ren_w      =   !cachepipe_uncacheinst_req_i ? 1'b0 
                                                                         : cachepipe_inst_rreq_i&&(!axicache_uncacheinst_rvalid_w ||(uncache_inst_flush));

assign  axicache_uncacheinst_araddr_w   =   !cachepipe_uncacheinst_req_i ? icache_araddr_w
                                                                         : cachepipe_inst_uncachepc_r;

assign  cachepipe_inst_inst1_o          =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ?  axicache_uncacheinst_rdata_w
                                                                                                         :icache_inst1_w ;

assign cachepipe_inst_inst1pc_o         =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? cachepipe_inst_uncachepc_r  
                                                                         : cachepipe_inst_inst1pc_w;

assign  cachepipe_inst_inst1vaild_o     =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ?  axicache_uncacheinst_rvalid_w &&(!uncache_inst_flush)
                                                                         : icache_inst1_vaild_w;

assign  cachepipe_inst_inst2_o          =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ?  `ysyx_22040210_ZeroWord
                                                                         : icache_inst2_w;

assign  cachepipe_inst_inst2vaild_o     =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? `ysyx_22040210_ZeroWord 
                                                                         : icache_inst2_vaild_w;//&&(!uncache_inst_flush);

assign cachepipe_inst1bhr_o         =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? cachepipe_inst_uncachebhr_r  
                                                                         : cachepipe_inst_inst1bhr_w;
assign cachepipe_inst1pht_o         =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? cachepipe_inst_uncachepht_r  
                                                                         : cachepipe_inst_inst1pht_w;
assign cachepipe_inst1taken_o       =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? cachepipe_inst_uncachetaken_r  
                                                                         : cachepipe_inst_inst1taken_w;
assign cachepipe_inst1takenaddr_o   =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? cachepipe_inst_uncachetakenaddr_r  
                                                                         : cachepipe_inst_inst1takenaddr_w;

assign cachepipe_inst2bhr_o         =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? `ysyx_22040210_ZeroWord  
                                                                         : cachepipe_inst_inst2bhr_w;
assign cachepipe_inst2pht_o         =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? `ysyx_22040210_ZeroWord  
                                                                         : cachepipe_inst_inst2pht_w;
assign cachepipe_inst2taken_o       =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? `ysyx_22040210_ZeroWord  
                                                                         : cachepipe_inst_inst2taken_w;
assign cachepipe_inst2takenaddr_o   =   cachepipe_uncacheinst_req_i&&axicache_uncacheinst_rvalid_w&&(!uncache_inst_flush) ? `ysyx_22040210_ZeroWord  
                                                                         : cachepipe_inst_inst2takenaddr_w;                                                                        


reg cachepipe_uncache_stallpc_r;
assign cachepipe_uncache_stallpc_o =  (axicache_uncacheinst_ren_w );
always @(posedge clk) begin
    if (rst) begin
        cachepipe_uncache_stallpc_r <= `ysyx_22040210_False;
        cachepipe_inst_uncachepc_r  <= `ysyx_22040210_ZeroWord;
        cachepipe_inst_uncachebhr_r <= `ysyx_22040210_ZeroWord;
        cachepipe_inst_uncachepht_r <= `ysyx_22040210_ZeroWord;
        cachepipe_inst_uncachetaken_r <= `ysyx_22040210_ZeroWord;
        cachepipe_inst_uncachetakenaddr_r <= `ysyx_22040210_ZeroWord;
    end else if (axicache_uncacheinst_ren_w && !cachepipe_uncache_stallpc_r&& !axicache_uncacheinst_rvalid_w) begin
        cachepipe_uncache_stallpc_r <= `ysyx_22040210_True;
        cachepipe_inst_uncachepc_r  <= cachepipe_inst_raddr_i;
        axicache_uncacheinst_ren_r  <= `ysyx_22040210_True;
        cachepipe_inst_uncachebhr_r <= cachepipebpu_bhr_i;
        cachepipe_inst_uncachepht_r <= cachepipebpu_pht_i;
        cachepipe_inst_uncachetaken_r <= cachepipebpu1istaken_i;
        cachepipe_inst_uncachetakenaddr_r <= cachepipebpu1hitaddr_i;
    end else if (axicache_uncacheinst_rvalid_w)begin
        cachepipe_uncache_stallpc_r <= `ysyx_22040210_False;
        cachepipe_inst_uncachepc_r  <= cachepipe_inst_uncachepc_r;
        axicache_uncacheinst_ren_r  <= `ysyx_22040210_False;
        cachepipe_inst_uncachebhr_r <= cachepipe_inst_uncachebhr_r;
        cachepipe_inst_uncachepht_r <= cachepipe_inst_uncachepht_r;
        cachepipe_inst_uncachetaken_r <= cachepipe_inst_uncachetaken_r;
        cachepipe_inst_uncachetakenaddr_r <= cachepipe_inst_uncachetakenaddr_r;
    end
end


assign cachepipe_inst_stallpc_o =   cachepipe_icache_stallpc_w;

wire [`ysyx_22040210_InstAdderBus] cachepipe_inst2_raddr_w = cachepipe_inst_raddr_i + 'h4;
reg cachepipe_icache_req2_r;
assign cachepipe_icache_req2_o =cachepipe_icache_req2_r;
always @(*) begin
    if (cachepipe_uncacheinst_req_i)begin
        cachepipe_icache_req_r          = `ysyx_22040210_False;
        cachepipe_icache_req2_r         = `ysyx_22040210_False;
    end else if (cachefrombpu1hit_i )begin
        cachepipe_icache_req_r          = cachepipe_inst_rreq_i;
        cachepipe_icache_req2_r         = `ysyx_22040210_False;
    end else begin
        cachepipe_icache_req_r          = cachepipe_inst_rreq_i;
        cachepipe_icache_req2_r         = `ysyx_22040210_False;
        //cachepipe_icache_req2_r         = cachepipe_inst_rreq_i && (cachepipe_inst_raddr_i[4:2]!=3'b111);
    end
end

always@(posedge clk)begin
	if(rst)begin
        uncache_inst_flush <= `ysyx_22040210_False;
    end else if(cachepipe_instflush_i & !axicache_uncacheinst_rvalid_w)begin
        uncache_inst_flush <= `ysyx_22040210_True;
    end else if(axicache_uncacheinst_rvalid_w)begin
        uncache_inst_flush <= `ysyx_22040210_False;
    end
	    
end

/**********************************DCache**************************************/
// reg [1:0] rstate_current;
// reg [1:0] rstate_next;
//READ
wire cachepipe_cachedata_rvaild_w;
wire cachepipe_data_wvaild_w;
assign cachepipe_data_rvaild_o=axicache_uncachedata_rvalid_w||cachepipe_cachedata_rvaild_w;
assign cachepipe_data_wvaild_o=cachepipe_data_wvaild_w||axicache_uncachedata_bvalid_w;
    // state updata
    always @(posedge clk ) begin
        if (rst) begin
            rstate_current <= `ysyx_22040210_CACHEPIPE_DCACHE;
        end else begin
            rstate_current <= rstate_next;
        end
    end
    always @(*) begin
        case(rstate_current)
        `ysyx_22040210_CACHEPIPE_DCACHE:begin
            if (cachepipe_data_rreq_i&&cachepipe_uncachedata_req_i&& !(cachepipe_uncachedata_rstall_r | dcache_stall_w)) begin
                rstate_next = `ysyx_22040210_CACHEPIPE_DUNCACHE;
            end else begin
                rstate_next = rstate_current;
            end
        end
        `ysyx_22040210_CACHEPIPE_DUNCACHE:begin
            if (axicache_uncachedata_rvalid_w&& !(cachepipe_data_rreq_i&&cachepipe_uncachedata_req_i)) begin
                rstate_next = `ysyx_22040210_CACHEPIPE_DCACHE;
            end else begin
                rstate_next = rstate_current;
            end
        end
        default:begin
            rstate_next = `ysyx_22040210_CACHEPIPE_DCACHE;
        end
        endcase
    end
    // reg [`ysyx_22040210_MemAddrBus]cachepipe_data_raddr_tmpr;

    always @(posedge clk ) begin // retain
        if (rst) begin
            cachepipe_data_raddr_tmpr <= `ysyx_22040210_ZeroWord;
        end else if(rstate_current == `ysyx_22040210_CACHEPIPE_DCACHE)begin
            cachepipe_data_raddr_tmpr <= cachepipe_data_raddr_i;
        end else if (rstate_current == `ysyx_22040210_CACHEPIPE_DUNCACHE)begin
            cachepipe_data_raddr_tmpr <= cachepipe_data_raddr_i;
        end else begin
            cachepipe_data_raddr_tmpr <= cachepipe_data_raddr_tmpr;
        end
    end
    // reg cachepipe_dcache_req_r;
    // reg cachepipe_uncachedata_ren_r;
    // reg cachepipe_uncachedata_rstall_r;
    // reg [`ysyx_22040210_MemAddrBus]cachepipe_uncachedata_araddr_r;
    
    always @(*) begin
        case (rstate_current)
        `ysyx_22040210_CACHEPIPE_DCACHE: begin
            if (rstate_next == `ysyx_22040210_CACHEPIPE_DUNCACHE) begin
                cachepipe_dcache_req_r          = `ysyx_22040210_False;
                cachepipe_uncachedata_ren_r     = `ysyx_22040210_False;
                cachepipe_uncachedata_rstall_r  = `ysyx_22040210_False;
                cachepipe_uncachedata_araddr_r  = cachepipe_data_raddr_i;
                cachepipe_data_rdata_o          = axicache_uncachedata_rdata_w;
            end else begin
                cachepipe_dcache_req_r          = cachepipe_data_rreq_i;
                cachepipe_uncachedata_ren_r     = `ysyx_22040210_False;
                cachepipe_uncachedata_rstall_r  = `ysyx_22040210_False;
                cachepipe_uncachedata_araddr_r  = cachepipe_data_raddr_i;
                cachepipe_data_rdata_o          = cachepipe_data_rdata_w;
            end
        end
        `ysyx_22040210_CACHEPIPE_DUNCACHE: begin
                cachepipe_dcache_req_r          = `ysyx_22040210_False;
                cachepipe_uncachedata_ren_r     = !axicache_uncachedata_rvalid_w;
                cachepipe_uncachedata_rstall_r  = !axicache_uncachedata_rvalid_w;
                cachepipe_uncachedata_araddr_r  = cachepipe_data_raddr_i;
                cachepipe_data_rdata_o          = axicache_uncachedata_rdata_w;    
            
        end
        default: begin
                cachepipe_dcache_req_r          = `ysyx_22040210_False;
                cachepipe_uncachedata_ren_r     = `ysyx_22040210_False;
                cachepipe_uncachedata_rstall_r  = `ysyx_22040210_False;
                cachepipe_uncachedata_araddr_r  = `ysyx_22040210_ZeroWord;
                cachepipe_data_rdata_o          = `ysyx_22040210_ZeroWord;  
        end
        endcase
    end

// reg [1:0] wstate_current;
// reg [1:0] wstate_next;
 
//WRITE
    // state updata
    always @(posedge clk ) begin
        if (rst) begin
            wstate_current <= `ysyx_22040210_CACHEPIPE_DCACHE;
        end else begin
            wstate_current <= wstate_next;
        end
    end
    always @(*) begin
        case(wstate_current)
        `ysyx_22040210_CACHEPIPE_DCACHE:begin
            if (cachepipe_data_wreq_i&&cachepipe_uncachedata_req_i&& !(cachepipe_uncachedata_wstall_r|dcache_stall_w)) begin
                wstate_next = `ysyx_22040210_CACHEPIPE_DUNCACHE;
            end else begin
                wstate_next = wstate_current;
            end
        end
        `ysyx_22040210_CACHEPIPE_DUNCACHE:begin
            if (axicache_uncachedata_bvalid_w&& !(cachepipe_data_wreq_i&&cachepipe_uncachedata_req_i)) begin
                wstate_next = `ysyx_22040210_CACHEPIPE_DCACHE;
            end else begin
                wstate_next = wstate_current;
            end
        end
        default:begin
            wstate_next = `ysyx_22040210_CACHEPIPE_DCACHE;
        end
        endcase
    end
    // reg [`ysyx_22040210_MemAddrBus] cachepipe_data_waddr_tmp_r;
    // reg [`ysyx_22040210_MemBUS]     cachepipe_data_waddr_tmp_r;
    // reg [3:0]                       cachepipe_data_wsel_tmp_r;
    always @(posedge clk ) begin
        if (rst) begin
          cachepipe_data_wdata_tmp_r    <= `ysyx_22040210_ZeroWord ;
          cachepipe_data_waddr_tmp_r    <= `ysyx_22040210_ZeroWord ;
          cachepipe_data_wsel_tmp_r     <= `ysyx_22040210_ZeroWord;
        end else if(wstate_current == `ysyx_22040210_CACHEPIPE_DCACHE)begin
          //$display("%x %x\n",cachepipe_data_wdata_tmp_r,cachepipe_data_wdata_i);
          cachepipe_data_waddr_tmp_r    <= cachepipe_data_waddr_i ;
          cachepipe_data_wdata_tmp_r    <= cachepipe_data_wdata_i ;
          cachepipe_data_wsel_tmp_r     <= cachepipe_data_wsel_i;
        end else if (axicache_uncachedata_bvalid_w)begin
          cachepipe_data_waddr_tmp_r    <= cachepipe_data_waddr_i ;
          cachepipe_data_wdata_tmp_r    <= cachepipe_data_wdata_i ;
          cachepipe_data_wsel_tmp_r     <= cachepipe_data_wsel_i;
        end else begin
          cachepipe_data_waddr_tmp_r    <= cachepipe_data_waddr_tmp_r ;
          cachepipe_data_wdata_tmp_r    <= cachepipe_data_wdata_tmp_r ;
          cachepipe_data_wsel_tmp_r     <= cachepipe_data_wsel_tmp_r;
        end
    end    

    // reg dcache_write_req_r;
    // reg axicache_uncachedata_wen_r;
    // reg [`ysyx_22040210_MemAddrBus]axicache_uncachedata_awaddr_r;
    // reg [`ysyx_22040210_MemBUS]axicache_uncachedata_wdata_r;
    // reg [3:0]axicache_data_wsel_r;
    // reg cachepipe_uncachedata_wstall_r;
    always @(*) begin
        case (wstate_current)
        `ysyx_22040210_CACHEPIPE_DCACHE: begin
            if (wstate_next == `ysyx_22040210_CACHEPIPE_DUNCACHE) begin
                dcache_write_req_r              = `ysyx_22040210_False;
                axicache_uncachedata_wen_r      = `ysyx_22040210_False;
                axicache_uncachedata_awaddr_r   = cachepipe_data_waddr_i;
                axicache_uncachedata_wdata_r    = cachepipe_data_wdata_i;   
                axicache_data_wsel_r            = cachepipe_data_wsel_i; 
                cachepipe_uncachedata_wstall_r  = `ysyx_22040210_False;
            end else begin
                dcache_write_req_r              = cachepipe_data_wreq_i;
                axicache_uncachedata_wen_r      = `ysyx_22040210_False;
                axicache_uncachedata_awaddr_r   = cachepipe_data_waddr_i;
                axicache_uncachedata_wdata_r    = cachepipe_data_wdata_i;    
                axicache_data_wsel_r            = cachepipe_data_wsel_i;
                cachepipe_uncachedata_wstall_r  = `ysyx_22040210_False;
            end
        end
        `ysyx_22040210_CACHEPIPE_DUNCACHE: begin
                dcache_write_req_r              = `ysyx_22040210_False;
                axicache_uncachedata_wen_r      = !axicache_uncachedata_bvalid_w;
                axicache_uncachedata_awaddr_r   = cachepipe_data_waddr_tmp_r;
                axicache_uncachedata_wdata_r    = cachepipe_data_wdata_tmp_r;    
                axicache_data_wsel_r            = cachepipe_data_wsel_tmp_r;   
                cachepipe_uncachedata_wstall_r  = !axicache_uncachedata_bvalid_w;
        end
        default: begin
                dcache_write_req_r              = `ysyx_22040210_False;
                axicache_uncachedata_wen_r      = `ysyx_22040210_False;
                axicache_uncachedata_awaddr_r   = `ysyx_22040210_ZeroWord;
                axicache_uncachedata_wdata_r    = `ysyx_22040210_ZeroWord;    
                axicache_data_wsel_r     = `ysyx_22040210_ZeroWord; 
                cachepipe_uncachedata_wstall_r  = `ysyx_22040210_False;
        end
        endcase
    end
wire [`ysyx_22040210_MemAddrBus]dcache_addr_w;

assign dcache_addr_w = dcache_write_req_r ? cachepipe_data_waddr_i : cachepipe_dcache_req_r ? cachepipe_data_raddr_i : `ysyx_22040210_ZeroWord;
assign cachepipe_data_stall_o = cachepipe_uncachedata_wstall_r | cachepipe_uncachedata_rstall_r | dcache_stall_w ;

// wire cachepipe_icache_req_r;
// wire [`ysyx_22040210_MemAddrBus]cachepipe_inst_raddr_i;
// wire [`ysyx_22040210_InstBus]icache_inst1_w;
// wire [`ysyx_22040210_InstAdderBus]cachepipe_inst_inst1pc_o;
// wire icache_inst1_vaild_w;
// wire [`ysyx_22040210_InstAdderBus]cachepipe_inst_stallpc_o;
// wire icache_rvaild_w;
// wire [`ysyx_22040210_MemBUS]icache_rdata_w;
// wire [`ysyx_22040210_MemAddrBus]icache_araddr_w;
// wire icache_ren_w;
wire icache_noreq_w;
ysyx_22040210_icache ysyx_22040210_icache_u0 (
    .clk(clk),
    .rst(rst),
    
    // Interface with Core Pipeline and Cache Pipeline
    .icache_bhr_i(cachepipebpu_bhr_i),
    .icache_pht_i(cachepipebpu_pht_i),
    .icache_bpu1istaken_i(cachepipebpu1istaken_i),
    .icache_bpu2istaken_i(cachepipebpu2istaken_i),
    .icache_bpu1hitaddr_i(cachepipebpu1hitaddr_i),
    .icache_bpu2hitaddr_i(cachepipebpu2hitaddr_i),   
    .icache_inst_inst1bhr_o(cachepipe_inst_inst1bhr_w),
    .icache_inst_inst1pht_o(cachepipe_inst_inst1pht_w),
    .icache_inst_inst1taken_o(cachepipe_inst_inst1taken_w),
    .icache_inst_inst1takenaddr_o(cachepipe_inst_inst1takenaddr_w),
    .icache_inst_inst2bhr_o(cachepipe_inst_inst2bhr_w),
    .icache_inst_inst2pht_o(cachepipe_inst_inst2pht_w),
    .icache_inst_inst2taken_o(cachepipe_inst_inst2taken_w),
    .icache_inst_inst2takenaddr_o(cachepipe_inst_inst2takenaddr_w),
    .icache_read_req_i(cachepipe_icache_req_r),
    .icache_addr_i(cachepipe_inst_raddr_i),
    .icache_inst1_o(icache_inst1_w),         //  read instruction
    .icache_pc_o(cachepipe_inst_inst1pc_w),            //  pc ,address of read instruction
    .icache_inst1_vaild_o(icache_inst1_vaild_w),   //  the vaild sign of read instruction
    .icache_read_hit_o(),
    .icache_stall_o(cachepipe_icache_stallpc_w),
    .icache_flush_i(cachepipe_instflush_i),
    .icache_flushifid(cachepipe_flushifid),
    .icache_cpustall_i(cachepipe_cpustall_i),
    .icache_invalid_i(cache_invalid_i),
    .icache_read_req2_i(cachepipe_icache_req2_r),
    .icache_addr2_i(cachepipe_inst2_raddr_w),
    .icache_inst2_o(icache_inst2_w),         //  read instruction
    .icache_pc2_o(cachepipe_inst_inst2pc_o),            //  pc ,address of read instruction
    .icache_inst2_vaild_o(icache_inst2_vaild_w),   //  the vaild sign of read instruction
    // Interface with Cache Interface
    .icache_noreq_o(icache_noreq_w),
    .icache_rvaild_i(icache_rvaild_w),
    .icache_rdata_i(icache_rdata_w),
    .icache_araddr_o(icache_araddr_w),
    .icache_ren_o(icache_ren_w),
    //sram
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
    .io_sram3_rdata(io_sram3_rdata)			
);


// wire dcache_stall_w;
// wire axicache_data_rvalid_w;
// wire [`ysyx_22040210_MemBUS]axicache_data_rdata_w;
// wire [`ysyx_22040210_MemAddrBus]axicache_data_araddr_w;
// wire axicache_data_ren_w;
// wire axicache_data_bvalid_w;
// wire axicache_data_wen_w;
// wire [`ysyx_22040210_MemBUS]axicache_data_wdata_w;
// wire [`ysyx_22040210_MemAddrBus]axicache_data_awaddr_w;
ysyx_22040210_dcache ysyx_22040210_dcache_u0(
    .clk(clk),
    .rst(rst),
    // Interface with Core Pipeline and Cache Pipeline
    .dcache_read_req_i(cachepipe_dcache_req_r),
    .dcache_invalid_i(cache_invalid_i),
    .isinvalidsuccess(isinvalidsuccess_o),
    //.dcache_read_stop_i,
    .dcache_write_req_i(dcache_write_req_r),
    //.dcache_write_stop_i,
    .dcache_addr_i(dcache_addr_w),
    .dcache_wdata_i(cachepipe_data_wdata_i),
    .dcache_wsel_i(cachepipe_data_wsel_i),
    .dcache_rdatavaild_o(cachepipe_cachedata_rvaild_w),
    .dcache_rdata_o(cachepipe_data_rdata_w),
    // Interface with Cache Pipeline
    .dcache_stall_o(dcache_stall_w),
    .writevaild(cachepipe_data_wvaild_w),
    // Interface with Cache Interface
    .dcache_rvaild_i(axicache_data_rvalid_w),
    .dcache_rdata_i(axicache_data_rdata_w),
    .dcache_araddr_o(axicache_data_araddr_w),
    .dcache_ren_o(axicache_data_ren_w),

    .dcache_bvaild_i(axicache_data_bvalid_w),
    .dcache_wen_o(axicache_data_wen_w),
    .dcache_wdata_o(axicache_data_wdata_w),
    .dcache_awaddr_o(axicache_data_awaddr_w),
    //sram
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

// wire axicache_uncacheinst_rvalid_w;
// wire [`ysyx_22040210_MemBUS]axicache_uncacheinst_rdata_w;
// wire axicache_uncachedata_rvalid_w;
// wire axicache_uncachedata_bvalid_w;

 ysyx_22040210_cache_interface ysyx_22040210_cache_interface_u0(//+lint=TFIPC-L

    .clk(clk),
    .rst(rst),
// Interface with Cache Pipeline Interface
    .axicache_rsel_i(8'b11111111),
    .axicache_wsel_i(axicache_data_wsel_r),
    // Interface with ICache Read Channel
    .axicache_inst_ren_i(icache_ren_w),
    .axicache_inst_araddr_i(icache_araddr_w),
    .axicache_inst_rvalid_o(icache_rvaild_w),
    .axicache_inst_rdata_o(icache_rdata_w),
    // Interface with DCache Read Channel
    .axicache_data_ren_i(axicache_data_ren_w),
    .axicache_data_araddr_i(axicache_data_araddr_w),
    .axicache_data_rvalid_o(axicache_data_rvalid_w),
    .axicache_data_rdata_o(axicache_data_rdata_w),
    // Interface with DCache Write Channel
    .axicache_data_wen_i(axicache_data_wen_w),
    .axicache_data_wdata_i(axicache_data_wdata_w),
    .axicache_data_awaddr_i(axicache_data_awaddr_w),
    .axicache_data_bvalid_o(axicache_data_bvalid_w),
    // Interface with Instruction Uncached Read Channel
    .axicache_uncacheinst_ren_i(axicache_uncacheinst_ren_r && !axicache_uncacheinst_rvalid_w && icache_noreq_w),
	.axicache_uncacheinst_araddr_i(axicache_uncacheinst_araddr_w),
	.axicache_uncacheinst_rvalid_o(axicache_uncacheinst_rvalid_w),
	.axicache_uncacheinst_rdata_o(axicache_uncacheinst_rdata_w),  
    // Interface with Data Uncached Read Channel
    .axicache_uncachedata_ren_i(cachepipe_uncachedata_ren_r),
    .axicache_uncachedata_araddr_i(cachepipe_uncachedata_araddr_r),
    .axicache_uncachedata_rvalid_o(axicache_uncachedata_rvalid_w),   
    .axicache_uncachedata_rdata_o(axicache_uncachedata_rdata_w),      
    // Interface with Data Uncached Write Channel
    .axicache_uncachedata_wen_i(axicache_uncachedata_wen_r),
	.axicache_uncachedata_wdata_i(axicache_uncachedata_wdata_r),  
    .axicache_uncachedata_awaddr_i(axicache_uncachedata_awaddr_r),  
    .axicache_uncachedata_bvalid_o(axicache_uncachedata_bvalid_w),  

// Interface with AXI Interface
	//.axicache_axi_ce_o(cachepipe_axi_ce_o),
	.axicache_axi_wsel_o(cachepipe_axi_wsel_o),
	.axicache_axi_rsel_o(cachepipe_axi_rsel_o),
    //Interface with AXI Read Chanal
    .axicache_axi_rdata_i(cachepipe_axi_rdata_i), 
    .axicache_axi_rresp_i(cachepipe_axi_rresp_i), 
    .axicache_axi_ren_o(cachepipe_axi_ren_o), 
    .axicache_axi_rready_o(cachepipe_axi_rready_o), 
    .axicache_axi_raddr_o(cachepipe_axi_raddr_o), 
    .axicache_axi_rlen_o(cachepipe_axi_rlen_o), 
    //Interface with AXI Write Chanal
    .axicache_axi_wresp_i(cachepipe_axi_bvaild_i), 
    .axicache_axi_wen_o(cachepipe_axi_wen_o), 
    .axicache_axi_wvaild_o(cachepipe_axi_wvaild_o),   
    .axicache_axi_waddr_o(cachepipe_axi_waddr_o),        
    .axicache_axi_wdata_o(cachepipe_axi_wdata_o),        
	.axicache_axi_wlen_o(cachepipe_axi_wlen_o),    
    .axicache_axi_wlast_o(cachepipe_axi_wlast_o)     
 );

endmodule
