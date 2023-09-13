`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_icache (
    input   wire                                        clk,
    input   wire                                        rst,
    
    // Interface with Core Pipeline and Cache Pipeline
    input   wire                                        icache_read_req_i,
    input   wire   [`ysyx_22040210_CacheAddrBus]        icache_addr_i,
    output  wire   [`ysyx_22040210_CacheDataBUS]        icache_inst1_o,         //  read instruction
    output  reg    [`ysyx_22040210_CacheAddrBus]        icache_pc_o,            //  pc ,address of read instruction
    output  wire                                        icache_inst1_vaild_o,   //  the vaild sign of read instruction
    output  wire                                        icache_read_hit_o,
    output  wire                                        icache_stall_o,
    input   wire                                        icache_flush_i,
    output  wire                                        icache_flushifid,
    input   wire   [5:0]                                icache_cpustall_i,
    input   wire                                        icache_invalid_i,
    // Interface with BPU
    input      wire   [`ysyx_22040210_BHR_BUS]                             icache_bhr_i,
    input      wire   [1:0]                             icache_pht_i,
    input      wire                                     icache_bpu1istaken_i,
    input      wire                                     icache_bpu2istaken_i,
    input      wire   [`ysyx_22040210_InstAdderBus]     icache_bpu1hitaddr_i,
    input      wire   [`ysyx_22040210_InstAdderBus]     icache_bpu2hitaddr_i,   
    output  reg    [`ysyx_22040210_BHR_BUS]                                icache_inst_inst1bhr_o,
    output  reg    [1:0]                                icache_inst_inst1pht_o,
    output  reg                                         icache_inst_inst1taken_o,
    output  reg    [`ysyx_22040210_InstAdderBus]        icache_inst_inst1takenaddr_o,
    output  reg    [`ysyx_22040210_BHR_BUS]                                icache_inst_inst2bhr_o,
    output  reg    [1:0]                                icache_inst_inst2pht_o,
    output  reg                                         icache_inst_inst2taken_o,
    output  reg    [`ysyx_22040210_InstAdderBus]        icache_inst_inst2takenaddr_o,
    //dual logic
    input   wire                                        icache_read_req2_i,
    input   wire   [`ysyx_22040210_CacheAddrBus]        icache_addr2_i,
    output  wire   [`ysyx_22040210_CacheDataBUS]        icache_inst2_o,         //  read instruction
    output  reg    [`ysyx_22040210_CacheAddrBus]        icache_pc2_o,            //  pc ,address of read instruction
    output  wire                                        icache_inst2_vaild_o,   //  the vaild sign of read instruction
    // Interface with Cache Interface
    output   wire                                        icache_noreq_o,
    input   wire                                        icache_rvaild_i,
    input   wire   [`ysyx_22040210_CacheWayBUS]         icache_rdata_i,
    output  wire   [`ysyx_22040210_CacheAddrBus]        icache_araddr_o,
    output  wire                                        icache_ren_o,
    //sram
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
    input       wire    [127:0]	                        io_sram3_rdata
);
wire bus_readsuccess = icache_rvaild_i;
reg bus_readsuccess_r2;
/****************************STAGE 1**************************************/
//bpu
reg    [`ysyx_22040210_BHR_BUS]                                icache_inst_inst1bhr_r;
reg    [1:0]                                icache_inst_inst1pht_r;
reg                                         icache_inst_inst1taken_r;
reg    [`ysyx_22040210_InstAdderBus]        icache_inst_inst1takenaddr_r;
reg    [`ysyx_22040210_BHR_BUS]                                icache_inst_inst2bhr_r;
reg    [1:0]                                icache_inst_inst2pht_r;
reg                                         icache_inst_inst2taken_r;
reg    [`ysyx_22040210_InstAdderBus]        icache_inst_inst2takenaddr_r;

reg icache_read_req_r;
reg icache_flush_r;
reg [`ysyx_22040210_CacheAddrBus] icache_pc_r;
reg [`ysyx_22040210_CacheAddrBus] icache_addr_r;
//dual 
reg icache_read_req2_r;
reg [`ysyx_22040210_CacheAddrBus] icache_pc2_r;
reg [`ysyx_22040210_CacheAddrBus] icache_addr2_r;

reg flushr1=0;
reg flushr2=0;
wire iswritesram = (|way0_we_w || |way1_we_w );
assign icache_noreq_o = !icache_read_req_r && !icache_read_req_r2;
// always @(posedge clk) begin
//     if(rst)begin
//         flushr1 <= 0;
//         flushr2 <= 0;
//     end else begin
//         flushr1 <= icache_flush_i;
//         flushr2 <= flushr1;
//     end
// end
always @(posedge clk ) begin
    if (rst) begin
        icache_read_req_r   <=  `ysyx_22040210_ZeroWord;
    end else if (icache_stall_o||(icache_cpustall_i[1] == `ysyx_22040210_StallEnable) )begin
        icache_read_req_r   <=  icache_read_req_r;
    end else begin
        icache_read_req_r   <=  icache_read_req_i;
    end
end
always @(posedge clk ) begin
    if(rst)begin

        icache_inst_inst1bhr_r          <=`ysyx_22040210_ZeroWord;
        icache_inst_inst1pht_r          <=`ysyx_22040210_ZeroWord;
        icache_inst_inst1taken_r        <=`ysyx_22040210_ZeroWord;
        icache_inst_inst1takenaddr_r    <=`ysyx_22040210_ZeroWord;
        icache_inst_inst2bhr_r          <=`ysyx_22040210_ZeroWord;
        icache_inst_inst2pht_r          <=`ysyx_22040210_ZeroWord;
        icache_inst_inst2taken_r        <=`ysyx_22040210_ZeroWord;
        icache_inst_inst2takenaddr_r    <=`ysyx_22040210_ZeroWord;

        icache_addr_r       <=  `ysyx_22040210_ZeroWord;
        icache_pc_r         <=  `ysyx_22040210_ZeroWord;
        icache_flush_r      <=  `ysyx_22040210_ZeroWord;

        icache_read_req2_r  <=  `ysyx_22040210_ZeroWord;
        icache_pc2_r        <=  `ysyx_22040210_ZeroWord;
        icache_addr2_r      <=  `ysyx_22040210_ZeroWord;
    end else if (icache_stall_o || (icache_cpustall_i[1] == `ysyx_22040210_StallEnable)|| icache_invalid_i) begin
        icache_inst_inst1bhr_r          <= icache_inst_inst1bhr_r;
        icache_inst_inst1pht_r          <= icache_inst_inst1pht_r;
        icache_inst_inst1taken_r        <= icache_inst_inst1taken_r;
        icache_inst_inst1takenaddr_r    <= icache_inst_inst1takenaddr_r;
        icache_inst_inst2bhr_r          <= icache_inst_inst2bhr_r;
        icache_inst_inst2pht_r          <= icache_inst_inst2pht_r;
        icache_inst_inst2taken_r        <= icache_inst_inst2taken_r;
        icache_inst_inst2takenaddr_r    <= icache_inst_inst2takenaddr_r;

        icache_addr_r       <=  icache_addr_r;
        icache_pc_r         <=  icache_pc_r;
        icache_flush_r      <=  icache_flush_r || icache_flush_i; 

        icache_read_req2_r  <=  icache_read_req2_r;
        icache_pc2_r        <=  icache_pc2_r;
        icache_addr2_r      <=  icache_addr2_r;
    end else begin
        icache_inst_inst1bhr_r          <= icache_bhr_i;
        icache_inst_inst1pht_r          <= icache_pht_i;
        icache_inst_inst1taken_r        <= icache_bpu1istaken_i;
        icache_inst_inst1takenaddr_r    <= icache_bpu1hitaddr_i;
        icache_inst_inst2bhr_r          <= icache_bhr_i;
        icache_inst_inst2pht_r          <= icache_pht_i;
        icache_inst_inst2taken_r        <= icache_bpu2istaken_i;
        icache_inst_inst2takenaddr_r    <= icache_bpu2hitaddr_i;

        icache_addr_r       <=  icache_addr_i & {64{icache_read_req_i}};
        icache_pc_r         <=  icache_addr_i & {64{icache_read_req_i}};
        icache_flush_r      <=  icache_flush_i;

        icache_read_req2_r  <=  icache_read_req2_i;
        icache_pc2_r        <=  icache_addr2_i & {64{icache_read_req2_i}};
        icache_addr2_r      <=  icache_addr2_i & {64{icache_read_req2_i}};
    end
end
/****************************************************************/
wire    [`ysyx_22040210_CacheAddrBus]      ram_raddr_w;
wire    [`ysyx_22040210_CacheAddrBus]      ram_raddr2_w;
wire    [`ysyx_22040210_CacheBankBus]      way_wdata_w [1:0];
reg    [`ysyx_22040210_CacheBankBus]       way_wdata_r2;
reg    [`ysyx_22040210_CacheBankBus]       way_wdata2_r2;
wire                                       way0_hit_w,way1_hit_w,hit_success,hit_fail;
reg     [`ysyx_22040210_CacheAddrBus]      icache_addr_delay_r;
wire    [`ysyx_22040210_CacheBankBus]      inst1_way0;
wire    [`ysyx_22040210_CacheBankBus]      inst1_way1;
wire    [`ysyx_22040210_CacheBankBus]      inst2_way0;
wire    [`ysyx_22040210_CacheBankBus]      inst2_way1;

wire    [`ysyx_22040210_CacheBankBusSel]   way0_we_w;//128bits 16 bytes
wire    [`ysyx_22040210_CacheBankBus]      way0_rdata_w [1:0];
wire    [`ysyx_22040210_CacheTagVBus]      way0_rtag_w ;
wire    [`ysyx_22040210_CacheTagVBus]      rtag0_w ;
wire    [`ysyx_22040210_CacheBankBusSel]   way1_we_w;//128bits 16 bytes
//reg  [63:0]                               way1_wdata_r [1:0];
wire    [`ysyx_22040210_CacheBankBus]      way1_rdata_w [1:0];
wire    [`ysyx_22040210_CacheTagVBus]      way1_rtag_w ;
wire    [`ysyx_22040210_CacheTagVBus]      rtag1_w ;
wire    [`ysyx_22040210_CacheBankBus]      icache_instpack_w   ;
wire    [`ysyx_22040210_CacheBankBus]      icache_inst2pack_w   ;
reg     [`ysyx_22040210_PLRU_BUS]          plru_r ;
wire                                       cacheway_sel;


reg                                     hit_success_r2      ;
reg                                     hit_fail_r2         ;
reg                                     icache_read_req_r2  ;
reg                                     icache_read_req2_r2  ;
reg                                     way0_hit_r2         ;
reg                                     way1_hit_r2         ;
reg                                     icache_flush_r2     ;
reg [`ysyx_22040210_CacheAddrBus]       icache_addr_r2      ;
reg [`ysyx_22040210_CacheAddrBus]       icache_addr2_r2      ;

reg [63:0]                              tag0valid_r;
reg [63:0]                              tag1valid_r;


/****************************************************************/
wire instbufferfull = ((icache_cpustall_i[0] && (icache_cpustall_i[1]))||(icache_cpustall_i[1]) && (!bus_readsuccess)) ;
wire    [`ysyx_22040210_CacheAddrBus] tag_raddr_w    = (iswritesram||icache_stall_o || !icache_read_req_i) ?( iswritesram&&instbufferfull ? icache_addr_r2: icache_addr_r ): icache_addr_i; 
assign  ram_raddr_w    = (icache_cpustall_i[0] && (icache_cpustall_i[1])||(icache_cpustall_i[1]) && (!bus_readsuccess))  ? icache_addr_r2 :icache_addr_r ; 
assign  ram_raddr2_w    = (icache_cpustall_i[0] && (icache_cpustall_i[1])||(icache_cpustall_i[1]) && (!bus_readsuccess))  ? icache_addr2_r2 :icache_addr2_r ; 
//assign  ram_raddr_w    = icache_addr_r ;
//assign  ram_raddr_w    =  (icache_stall_o == `ysyx_22040210_True) ? icache_addr_r : icache_addr_i; 
assign way_wdata_w[0]   = icache_rdata_i[127:0];
assign way_wdata_w[1]   = icache_rdata_i[255:128];

/****************************************************************/
assign io_sram0_addr = ram_raddr_w[`ysyx_22040210_CacheIndexBus];
assign io_sram0_cen  = 1'b1;
assign io_sram0_wen = (|way0_we_w)&& !icache_flush_tmp_r;
assign io_sram0_wmask = way0_we_w;
assign io_sram0_wdata = way_wdata_w[0];
assign way0_rdata_w[0] = io_sram0_rdata;

assign io_sram1_addr = ram_raddr_w[`ysyx_22040210_CacheIndexBus];
assign io_sram1_cen  = 1'b1;
assign io_sram1_wen = (|way0_we_w)&& !icache_flush_tmp_r;
assign io_sram1_wmask = way0_we_w;
assign io_sram1_wdata = way_wdata_w[1];
assign way0_rdata_w[1] = io_sram1_rdata;

assign io_sram2_addr = ram_raddr_w[`ysyx_22040210_CacheIndexBus];
assign io_sram2_cen  = 1'b1;
assign io_sram2_wen = (|way1_we_w)&& !icache_flush_tmp_r;
assign io_sram2_wmask = way1_we_w;
assign io_sram2_wdata = way_wdata_w[0];
assign way1_rdata_w[0] = io_sram2_rdata;

assign io_sram3_addr = ram_raddr_w[`ysyx_22040210_CacheIndexBus];
assign io_sram3_cen  = 1'b1;
assign io_sram3_wen = (|way1_we_w)&& !icache_flush_tmp_r;
assign io_sram3_wmask = way1_we_w;
assign io_sram3_wdata = way_wdata_w[1];
assign way1_rdata_w[1] = io_sram3_rdata;

//Cache Way0 initalized
S013HD1P_X32Y2D128_BW           tagway0 (.Q(way0_rtag_w),     .CLK(clk), .CEN(1'b1), .WEN((|way0_we_w)&& !icache_flush_tmp_r), .BWEN(way0_we_w), .A(tag_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(tag_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({icache_addr_r[`ysyx_22040210_CacheTagBus]}));
//S013HD1P_X32Y2D128_BW icache_bank0_way0 (.Q(way0_rdata_w[0]), .CLK(clk), .CEN(1'b1), .WEN((|way0_we_w)&& !icache_flush_tmp_r), .BWEN(way0_we_w), .A(ram_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D(way_wdata_w[0]));
//S013HD1P_X32Y2D128_BW icache_bank1_way0 (.Q(way0_rdata_w[1]), .CLK(clk), .CEN(1'b1), .WEN((|way0_we_w)&& !icache_flush_tmp_r), .BWEN(way0_we_w), .A(ram_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D(way_wdata_w[1]));

//Cache Way1 initalized
S013HD1P_X32Y2D128_BW tagway1           (.Q(way1_rtag_w),     .CLK(clk), .CEN(1'b1), .WEN((|way1_we_w)&& !icache_flush_tmp_r), .BWEN(way1_we_w), .A(tag_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(tag_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({icache_addr_r[`ysyx_22040210_CacheTagBus]}));
//S013HD1P_X32Y2D128_BW icache_bank0_way1 (.Q(way1_rdata_w[0]), .CLK(clk), .CEN(1'b1), .WEN((|way1_we_w)&& !icache_flush_tmp_r), .BWEN(way1_we_w), .A(ram_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D(way_wdata_w[0]));
//S013HD1P_X32Y2D128_BW icache_bank1_way1 (.Q(way1_rdata_w[1]), .CLK(clk), .CEN(1'b1), .WEN((|way1_we_w)&& !icache_flush_tmp_r), .BWEN(way1_we_w), .A(ram_raddr_w[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D(way_wdata_w[1]));

always @(posedge clk ) begin
    if (rst) begin
        tag0valid_r <= `ysyx_22040210_ZeroWord;
        tag1valid_r <= `ysyx_22040210_ZeroWord;
    end else if (icache_invalid_i)begin
        tag0valid_r <= `ysyx_22040210_ZeroWord;
        tag1valid_r <= `ysyx_22040210_ZeroWord;
    end else if ((|way0_we_w)&& !icache_flush_tmp_r)begin
        tag0valid_r[tag_raddr_w[`ysyx_22040210_CacheIndexBus]] <=   `ysyx_22040210_True ;
    end else if ((|way1_we_w)&& !icache_flush_tmp_r)begin
        tag1valid_r[tag_raddr_w[`ysyx_22040210_CacheIndexBus]] <=   `ysyx_22040210_True ;
    end
end
reg readtag0valid;
reg readtag1valid;
always @(posedge clk ) begin
    if (rst) begin
        readtag0valid <= `ysyx_22040210_ZeroWord;
        readtag1valid <= `ysyx_22040210_ZeroWord;
    end else begin
        readtag0valid <= !((|way0_we_w)&& !icache_flush_tmp_r) ? tag0valid_r[tag_raddr_w[`ysyx_22040210_CacheIndexBus]] : `ysyx_22040210_False;
        readtag1valid <= !((|way1_we_w)&& !icache_flush_tmp_r) ? tag1valid_r[tag_raddr_w[`ysyx_22040210_CacheIndexBus]] : `ysyx_22040210_False;
    end 
end
//PLRU initalized


assign  cacheway_sel = plru_r[icache_addr_r[`ysyx_22040210_CacheIndexBus]]; //cacheway_sel = 0 is terms of sellecting way0
//PLRU update policy
always@(posedge clk)begin
    if(rst)
        plru_r <= 0;
    else if(icache_inst1_vaild_o == `ysyx_22040210_True && hit_success == `ysyx_22040210_True)//hit: set LRU to bit that is not hit
        plru_r[icache_addr_r[`ysyx_22040210_CacheIndexBus]] <= way0_hit_w;
    else if(icache_inst1_vaild_o == `ysyx_22040210_True && hit_fail == `ysyx_22040210_True)//not hit: set opposite LRU
        plru_r[icache_addr_r[`ysyx_22040210_CacheIndexBus]] <= ~cacheway_sel;
    else
        plru_r <= plru_r;
end
/****************************************************************/

assign way0_hit_w = (readtag0valid==`ysyx_22040210_True && rtag0_w[52:0]==icache_addr_r[`ysyx_22040210_CacheTagBus])? `ysyx_22040210_CacheHit :   `ysyx_22040210_CacheNotHit;
assign way1_hit_w = (readtag1valid==`ysyx_22040210_True && rtag1_w[52:0]==icache_addr_r[`ysyx_22040210_CacheTagBus])? `ysyx_22040210_CacheHit :   `ysyx_22040210_CacheNotHit;
assign hit_success= (way0_hit_w || way1_hit_w ) && (icache_read_req_r);
assign hit_fail= !hit_success && ( icache_read_req_r );

assign way0_we_w = (hit_fail ==`ysyx_22040210_True && cacheway_sel==`ysyx_22040210_CacheWay0Pick && bus_readsuccess ==`ysyx_22040210_True)?   {128{1'b1}} : 128'b0;
assign way1_we_w = (hit_fail ==`ysyx_22040210_True && cacheway_sel==`ysyx_22040210_CacheWay1Pick && bus_readsuccess ==`ysyx_22040210_True)?   {128{1'b1}}  : 128'b0;

/***************************Stage2 For Tempotary Store*****************************/


always @(posedge clk ) begin
    if (rst ) begin
        hit_success_r2      <= `ysyx_22040210_ZeroWord;
        hit_fail_r2         <= `ysyx_22040210_ZeroWord;
        icache_read_req_r2  <= `ysyx_22040210_ZeroWord;
        icache_read_req2_r2 <= `ysyx_22040210_ZeroWord;
        way0_hit_r2         <= `ysyx_22040210_ZeroWord;
        way1_hit_r2         <= `ysyx_22040210_ZeroWord;
        icache_flush_r2     <= `ysyx_22040210_ZeroWord;
        icache_addr_r2      <= `ysyx_22040210_ZeroWord;
        icache_addr2_r2     <= `ysyx_22040210_ZeroWord;
        bus_readsuccess_r2  <= `ysyx_22040210_ZeroWord;
        way_wdata_r2        <= `ysyx_22040210_ZeroWord;
        way_wdata2_r2       <= `ysyx_22040210_ZeroWord;
        icache_pc_o         <= `ysyx_22040210_ZeroWord;
        icache_pc2_o        <= `ysyx_22040210_ZeroWord;

        icache_inst_inst1bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1takenaddr_o    <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2takenaddr_o    <= `ysyx_22040210_ZeroWord;
    end else if((icache_cpustall_i[0] == `ysyx_22040210_StallEnable)
        &&(icache_cpustall_i[1] == `ysyx_22040210_StallEnable)||(icache_cpustall_i[1] == `ysyx_22040210_StallEnable))begin
        hit_success_r2      <= hit_success_r2 ;
        hit_fail_r2         <= hit_fail_r2;
        icache_read_req_r2  <= icache_read_req_r2;
        icache_read_req2_r2 <= icache_read_req2_r2;
        way0_hit_r2         <= way0_hit_r2 ;
        way1_hit_r2         <= way1_hit_r2;
        icache_flush_r2     <= icache_flush_r2;
        icache_addr_r2      <= icache_addr_r2;
        icache_addr2_r2     <= icache_addr2_r2;
        bus_readsuccess_r2  <= bus_readsuccess_r2;
        way_wdata_r2        <= way_wdata_r2;
        way_wdata2_r2       <= way_wdata2_r2;
        icache_pc_o         <= icache_pc_o;
        icache_pc2_o        <= icache_pc2_o;
        icache_inst_inst1bhr_o          <= icache_inst_inst1bhr_o;
        icache_inst_inst1pht_o          <= icache_inst_inst1pht_o;
        icache_inst_inst1taken_o        <= icache_inst_inst1taken_o;
        icache_inst_inst1takenaddr_o    <= icache_inst_inst1takenaddr_o;
        icache_inst_inst2bhr_o          <= icache_inst_inst2bhr_o;
        icache_inst_inst2pht_o          <= icache_inst_inst2pht_o;
        icache_inst_inst2taken_o        <= icache_inst_inst2taken_o;
        icache_inst_inst2takenaddr_o    <= icache_inst_inst2takenaddr_o;
    end else if((icache_cpustall_i[0] == `ysyx_22040210_StallEnable)
        &&(icache_cpustall_i[1] == `ysyx_22040210_StallDisable))begin
        hit_success_r2      <= `ysyx_22040210_ZeroWord;
        hit_fail_r2         <= `ysyx_22040210_ZeroWord;
        icache_read_req_r2  <= `ysyx_22040210_ZeroWord;
        icache_read_req2_r2 <= `ysyx_22040210_ZeroWord;
        way0_hit_r2         <= `ysyx_22040210_ZeroWord;
        way1_hit_r2         <= `ysyx_22040210_ZeroWord;
        icache_flush_r2     <= `ysyx_22040210_ZeroWord;
        icache_addr_r2      <= `ysyx_22040210_ZeroWord;
        icache_addr2_r2     <= `ysyx_22040210_ZeroWord;
        bus_readsuccess_r2  <= `ysyx_22040210_ZeroWord;
        way_wdata_r2        <= `ysyx_22040210_ZeroWord;
        way_wdata2_r2       <= `ysyx_22040210_ZeroWord;
        icache_pc_o         <= `ysyx_22040210_ZeroWord;
        icache_pc2_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1takenaddr_o    <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2takenaddr_o    <= `ysyx_22040210_ZeroWord;
    end else if(icache_flush_tmp_r == `ysyx_22040210_FlushEnable)begin
        hit_success_r2      <= `ysyx_22040210_ZeroWord;
        hit_fail_r2         <= `ysyx_22040210_ZeroWord;
        icache_read_req_r2  <= `ysyx_22040210_ZeroWord;
        icache_read_req2_r2 <= `ysyx_22040210_ZeroWord;
        way0_hit_r2         <= `ysyx_22040210_ZeroWord;
        way1_hit_r2         <= `ysyx_22040210_ZeroWord;
        icache_flush_r2     <= `ysyx_22040210_ZeroWord;
        icache_addr_r2      <= `ysyx_22040210_ZeroWord;
        icache_addr2_r2     <= `ysyx_22040210_ZeroWord;
        bus_readsuccess_r2  <= `ysyx_22040210_ZeroWord;
        way_wdata_r2        <= `ysyx_22040210_ZeroWord;
        way_wdata2_r2       <= `ysyx_22040210_ZeroWord;
        icache_pc_o         <= `ysyx_22040210_ZeroWord;
        icache_pc2_o         <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst1takenaddr_o    <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2bhr_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2pht_o          <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2taken_o        <= `ysyx_22040210_ZeroWord;
        icache_inst_inst2takenaddr_o    <= `ysyx_22040210_ZeroWord;
    end else if(icache_cpustall_i[0] == `ysyx_22040210_StallDisable)begin
        hit_success_r2      <= hit_success ;
        hit_fail_r2         <= hit_fail;
        icache_read_req_r2  <= icache_read_req_r;
        icache_read_req2_r2 <= icache_read_req2_r;
        way0_hit_r2         <= way0_hit_w ;
        way1_hit_r2         <= way1_hit_w;
        icache_flush_r2     <= icache_flush_r;
        icache_addr_r2      <= icache_addr_r;
        icache_addr2_r2     <= icache_addr2_r;
        bus_readsuccess_r2  <= bus_readsuccess;
        way_wdata_r2        <= way_wdata_w[ram_raddr_w[4]];
        way_wdata2_r2       <= way_wdata_w[ram_raddr2_w[4]];
        icache_pc_o         <= icache_pc_r;
        icache_pc2_o         <= icache_pc2_r;

        icache_inst_inst1bhr_o          <= icache_inst_inst1bhr_r;
        icache_inst_inst1pht_o          <= icache_inst_inst1pht_r;
        icache_inst_inst1taken_o        <= icache_inst_inst1taken_r;
        icache_inst_inst1takenaddr_o    <= icache_inst_inst1takenaddr_r;
        icache_inst_inst2bhr_o          <= icache_inst_inst2bhr_r;
        icache_inst_inst2pht_o          <= icache_inst_inst2pht_r;
        icache_inst_inst2taken_o        <= icache_inst_inst2taken_r;
        icache_inst_inst2takenaddr_o    <= icache_inst_inst2takenaddr_r;
    end
end

// always @(posedge clk ) begin
//     if(rst)begin
        
//     end else if((icache_cpustall_i[0] == `ysyx_22040210_StallEnable)
//         &&(icache_cpustall_i[1] == `ysyx_22040210_StallEnable))begin
        
//     end
// end

always @(posedge clk ) begin
    if(rst || icache_invalid_i)begin
        icache_addr_delay_r         <=  `ysyx_22040210_ZeroWord;
    end else if (bus_readsuccess && !icache_flush_tmp_r && !icache_invalid_i) begin
        icache_addr_delay_r         <= icache_addr_r;
    end
end

assign rtag0_w      =   way0_rtag_w ;
assign rtag1_w      =   way1_rtag_w ;

assign inst1_way0   =   way0_rdata_w[icache_addr_r2[4]];
assign inst1_way1   =   way1_rdata_w[icache_addr_r2[4]];     
assign inst2_way0   =   way0_rdata_w[icache_addr2_r2[4]];
assign inst2_way1   =   way1_rdata_w[icache_addr2_r2[4]]; 
/******************************************Cache Inteface***********************************************/      
reg icache_flush_tmp_r;
always @(posedge clk ) begin
    if(rst)begin
        icache_flush_tmp_r<=`ysyx_22040210_ZeroWord;
    end else if(icache_stall_o && icache_flush_tmp_r==0)begin
        icache_flush_tmp_r<=icache_flush_i;
    end else if(!icache_stall_o && icache_flush_tmp_r==1)begin
        icache_flush_tmp_r<=`ysyx_22040210_ZeroWord;
    end
end 
reg iswritesram_r;
always @(posedge clk ) begin
    if (rst) begin
        iswritesram_r <= `ysyx_22040210_ZeroWord; 
    end else begin
        iswritesram_r <= iswritesram;
    end
end
assign icache_flushifid = icache_flush_tmp_r;
//wire flush_w =  (icache_stall_o == `ysyx_22040210_True) ? icache_flush_tmp_r : icache_flush_i; 
assign icache_instpack_w  = (hit_success_r2 == `ysyx_22040210_True) ? way0_hit_r2 ? inst1_way0 : inst1_way1 
                                                              : (hit_fail_r2 == `ysyx_22040210_True && bus_readsuccess_r2 == `ysyx_22040210_True) ? way_wdata_r2
                                                              : `ysyx_22040210_ZeroWord;                                                              
assign icache_inst1_o = icache_addr_r2[3]?(icache_addr_r2[2] ? icache_instpack_w[127:96]:icache_instpack_w[95:64])
                                        :(icache_addr_r2[2] ? icache_instpack_w[63:32]:icache_instpack_w[31:0]) ;                                                              
assign icache_inst1_vaild_o = (hit_success_r2 == `ysyx_22040210_True || bus_readsuccess_r2 == `ysyx_22040210_True) ? (icache_read_req_r2& (!(icache_flush_r2||icache_flush_r||flushr1||flushr2))) :1'b0;
wire icache_inst1_vaild_w = (hit_success == `ysyx_22040210_True || bus_readsuccess == `ysyx_22040210_True) ? 1'b1 :1'b0;
assign icache_read_hit_o = hit_success_r2 ;
assign icache_stall_o = (((hit_fail==`ysyx_22040210_True)? ~icache_inst1_vaild_w : 1'b0)|| iswritesram_r) ;     


assign icache_ren_o     =  (~bus_readsuccess) & hit_fail & (icache_addr_delay_r!=icache_addr_r) && (!iswritesram_r);//read axi when not hit(when read success, stop)
assign icache_araddr_o  = icache_addr_r;   
// always @(*) begin
//     $display("bus_readsuccess is %x",bus_readsuccess);
//     $display("hit_fail is %x",hit_fail);
// end
//dual

assign icache_inst2pack_w  = (hit_success_r2 == `ysyx_22040210_True) ? way0_hit_r2 ? inst2_way0 : inst2_way1 
                                                              : (hit_fail_r2 == `ysyx_22040210_True && bus_readsuccess_r2 == `ysyx_22040210_True) ? way_wdata2_r2
                                                              : `ysyx_22040210_ZeroWord;                    
assign icache_inst2_o = icache_addr2_r2[3]?(icache_addr2_r2[2] ? icache_inst2pack_w[127:96]:icache_inst2pack_w[95:64])
                                        :(icache_addr2_r2[2] ? icache_inst2pack_w[63:32]:icache_inst2pack_w[31:0]) ;
assign icache_inst2_vaild_o = icache_inst1_vaild_o && icache_read_req2_r2 && (icache_addr_r2[4:2]!=3'b111);






// reg [63:0]cachemiss;
// reg [63:0]icachereq;
// always @(posedge clk) begin
//     if (rst) begin
//         cachemiss <= 0;
//     end else if (bus_readsuccess) begin
//         cachemiss <= cachemiss +1;
//     end
// end
// always @(posedge clk) begin
//     if (rst) begin
//         icachereq <= 0;
//     end else if (icache_read_req_i) begin
//         icachereq <= icachereq +1;
//     end
// end
// always@(*)begin
//     if (icache_inst2_o==32'h00100073 || icache_inst1_o==32'h00100073 )begin
//         $display("Cache req is %d MISS is %d CacheMiss is %d%% ",icachereq,cachemiss,(100*cachemiss)/icachereq);
//     end
// end


endmodule
