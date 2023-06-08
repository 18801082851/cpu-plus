`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_dcache (
    input   wire                                        clk,
    input   wire                                        rst,
    
    // Interface with Core Pipeline and Cache Pipeline
    input   wire                                        dcache_read_req_i,
    input   wire                                        dcache_invalid_i,
    input   wire                                        dcache_write_req_i,
    //input   wire                                        dcache_write_stop_i,
    input   wire   [`ysyx_22040210_CacheAddrBus2]        dcache_addr_i,
    input   wire   [`ysyx_22040210_CacheDataBUS2]        dcache_wdata_i,
    input   wire   [`ysyx_22040210_WriteSelBus]         dcache_wsel_i,
    output  wire                                        dcache_rdatavaild_o,
    output  wire   [`ysyx_22040210_CacheDataBUS2]        dcache_rdata_o,
    // Interface with Cache Pipeline
    output  wire                                        dcache_stall_o,
    output  wire                                        writevaild,
    output  reg                                         isinvalidsuccess,
    // Interface with Cache Interface
    input   wire                                        dcache_rvaild_i,
    input   wire   [`ysyx_22040210_CacheWayBUS]         dcache_rdata_i,
    output  wire   [`ysyx_22040210_CacheAddrBus2]        dcache_araddr_o,
    output  wire                                        dcache_ren_o,

    input   wire                                        dcache_bvaild_i,
    output  wire                                        dcache_wen_o,
    output  wire   [`ysyx_22040210_CacheWayBUS]         dcache_wdata_o,
    output  wire   [`ysyx_22040210_CacheAddrBus2]        dcache_awaddr_o,
    //sram
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
/***************************REGWIRE*****************************/

wire    bus_readsuccess = dcache_rvaild_i;
reg     dcache_read_req_r;
reg     dcache_write_req_r;
reg     [`ysyx_22040210_CacheDataBUS2]   dcache_wdata_r;
reg     [`ysyx_22040210_CacheAddrBus2]   dcache_addr_r;
reg     [`ysyx_22040210_WriteSelBus]    dcache_wsel_r;
wire    [`ysyx_22040210_CacheAddrBus2]   buffer_raddr_w;
reg     [`ysyx_22040210_CacheDataBUS2]   buffer_wdata_r [3:0];
wire    [`ysyx_22040210_CacheAddrBus2]   buffer_waddr_w;
reg     [`ysyx_22040210_CacheAddrBus2]   buffer_waddr_mux;
reg     [`ysyx_22040210_CacheWayBUS]     buffer_wdata_mux;
wire    [`ysyx_22040210_CacheDataBUS2]   buffer_rdata_w [3:0];       
wire    [1:0]                           buffer_state_w;
wire    buffer_hit_w;
wire    buffer_whit_w;
wire    buffer_rhit_w;
wire    buffer_wreq_w;
reg     buffer_write_req_mux;
wire    [`ysyx_22040210_CacheAddrBus2]   ram_addr_w;
wire    [`ysyx_22040210_CacheBankBusSel]dcache_wmask_w;
wire    [127:0]                         way0_we_w;//64bits 8 bytes
reg     [127:0]                         way0_we_mux;
reg     [127:0]                         way_wdata_r2 [1:0];
reg     [`ysyx_22040210_CacheDataBUS2]   way_wdata_r  [3:0];
wire    [`ysyx_22040210_CacheDataBUS2]   way0_rdata_w [3:0];
wire    [`ysyx_22040210_CacheTagVBus]   way0_rtag_w ;
wire    [`ysyx_22040210_CacheTagVBus]   rtag0_w ;
wire    [127:0]                         way1_we_w;//64bits 8 bytes
reg     [127:0]                         way1_we_mux;
//reg  [63:0]                         way1_wdata_r [1:0];
wire    [`ysyx_22040210_CacheDataBUS2]   way1_rdata_w [3:0];
wire    [`ysyx_22040210_CacheTagVBus]   way1_rtag_w ;
wire    [`ysyx_22040210_CacheTagVBus]   rtag1_w ;
reg     [`ysyx_22040210_PLRU_BUS]       plru_r ;
wire                                    cacheway_sel;
wire    way0_hit_w,way1_hit_w,hit_success,hit_fail;
reg     [`ysyx_22040210_Dirty_BUS]      dirty_r;//0:way0-index0 ; 1:way1-index0 ...
wire    is_write_dirty_w   ;
reg     [`ysyx_22040210_CacheDataBUS2]   dcache_wdata_tmp_r;
wire    [`ysyx_22040210_CacheDataBUS2]   data0_w;
wire    [`ysyx_22040210_CacheDataBUS2]   data1_w;
reg     [`ysyx_22040210_CacheDataBUS2]   way_wdata_tmp_r [3:0];
wire    [`ysyx_22040210_CacheDataBUS2]   rdata0_w [3:0];
wire    [`ysyx_22040210_CacheDataBUS2]   rdata1_w [3:0];
reg     [`ysyx_22040210_CacheTagVBus]   dcache_addr_tmp_r;
reg     ram_collision_way0_tmp_r;
reg     ram_collision_way1_tmp_r;
reg     [`ysyx_22040210_CacheDataBUS2]   core_data_r[3:0];
wire    [`ysyx_22040210_CacheAddrBus2]   ram_raddr_w;
reg     [`ysyx_22040210_CacheAddrBus2]   ram_raddr_mux;
reg     [6:0]cnt;
reg     [2:0]currentstate;
reg     [2:0]nextstate;
wire     invalidcheck = cnt[0] ? readtag1valid : readtag0valid;
reg [63:0]                              tag0valid_r;
reg [63:0]                              tag1valid_r;
reg readtag0valid;
reg readtag1valid;

/***************************Stage1*****************************/

always @(posedge clk ) begin
    if(rst)begin
        dcache_read_req_r   <=  `ysyx_22040210_False;
        dcache_write_req_r  <=  `ysyx_22040210_False;
        dcache_wdata_r      <=  `ysyx_22040210_ZeroWord;
        dcache_addr_r       <=  `ysyx_22040210_ZeroWord;
        dcache_wsel_r       <=  `ysyx_22040210_ZeroWord;
    end else if(dcache_stall_o ) begin
        dcache_read_req_r   <=  dcache_read_req_r;
        dcache_write_req_r  <=  dcache_write_req_r;
        dcache_wdata_r      <=  dcache_wdata_r;
        dcache_addr_r       <=  dcache_addr_r;
        dcache_wsel_r       <=  dcache_wsel_r;
    end else begin
        dcache_read_req_r   <=  dcache_read_req_i;
        dcache_write_req_r  <=  dcache_write_req_i;
        dcache_wdata_r      <=  dcache_wdata_i;
        dcache_addr_r       <=  dcache_addr_i;
        dcache_wsel_r       <=  dcache_wsel_i;
    end
end

always @(posedge clk) begin
    if (rst) begin
        currentstate <= `ysyx_22040210_DCACHENOMAL;
    end else begin
        currentstate <= nextstate;
    end
end
always @(*) begin
    if (dcache_invalid_i && currentstate==`ysyx_22040210_DCACHENOMAL)begin
        nextstate = `ysyx_22040210_INVALIDREADCACHE;
    end else if (currentstate==`ysyx_22040210_INVALIDREADCACHE)begin
            nextstate = `ysyx_22040210_INVALIDCACHECHECKANDWRITE;
    end else if (currentstate==`ysyx_22040210_INVALIDCACHECHECKANDWRITE)begin
        if (buffer_state_w == `ysyx_22040210_BUFFER_EMPTY && invalidcheck == `ysyx_22040210_True) begin
            nextstate = `ysyx_22040210_INVALIDCACHEINCR;
        end else if (buffer_state_w != `ysyx_22040210_BUFFER_EMPTY && invalidcheck == `ysyx_22040210_True) begin
            nextstate = `ysyx_22040210_INVALIDREADCACHE;
        end else begin
            nextstate = `ysyx_22040210_INVALIDCACHEINCR;
        end
    end else if (currentstate==`ysyx_22040210_INVALIDCACHEINCR)begin
        if (cnt!=7'd127) begin
            nextstate = `ysyx_22040210_INVALIDREADCACHE;
        end else begin
            nextstate = `ysyx_22040210_DCACHEINVALIDFINISH;
        end
    end else if (currentstate==`ysyx_22040210_DCACHEINVALIDFINISH) begin
        if (buffer_state_w==`ysyx_22040210_BUFFER_EMPTY) begin
            nextstate = `ysyx_22040210_DCACHENOMAL;
        end else begin
            nextstate = `ysyx_22040210_DCACHEINVALIDFINISH;
        end
    end else begin
        nextstate = `ysyx_22040210_DCACHENOMAL;
    end
end
always @(*)begin
    case (currentstate)
        `ysyx_22040210_INVALIDREADCACHE: begin
            way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
            buffer_write_req_mux = `ysyx_22040210_False;
            buffer_waddr_mux     = `ysyx_22040210_ZeroWord;
            buffer_wdata_mux     = `ysyx_22040210_ZeroWord;
        end
        `ysyx_22040210_INVALIDCACHECHECKANDWRITE: begin
            if(buffer_state_w == `ysyx_22040210_BUFFER_EMPTY && invalidcheck == `ysyx_22040210_True)begin
                way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
                way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
                ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
                //$display("ram_raddr_mux is %x",ram_raddr_mux);
                buffer_write_req_mux = `ysyx_22040210_True;
                buffer_waddr_mux     = ~cnt[0] ? {way0_rtag_w[52:0],cnt[6:1],5'b00000} : {way1_rtag_w[52:0],cnt[6:1],5'b00000};
                //$display("buffer_waddr_mux is %x",buffer_waddr_mux);
                buffer_wdata_mux     = ~cnt[0] ? {way0_rdata_w[3],way0_rdata_w[2],way0_rdata_w[1],way0_rdata_w[0]} 
                                                :{way1_rdata_w[3],way1_rdata_w[2],way1_rdata_w[1],way1_rdata_w[0]};
            end else begin
                way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
                way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
                ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
                buffer_write_req_mux = `ysyx_22040210_False;
                buffer_waddr_mux     = `ysyx_22040210_ZeroWord;
                buffer_wdata_mux     = `ysyx_22040210_ZeroWord;
            end
        end
        `ysyx_22040210_INVALIDCACHEINCR: begin
            way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
            buffer_write_req_mux = `ysyx_22040210_False;
            buffer_waddr_mux     = `ysyx_22040210_ZeroWord;
            buffer_wdata_mux     = `ysyx_22040210_ZeroWord;
        end
        `ysyx_22040210_DCACHENOMAL: begin
            way0_we_mux          = way0_we_w;
            way1_we_mux          = way1_we_w;
            ram_raddr_mux        = ram_raddr_w;
            buffer_write_req_mux = buffer_wreq_w;
            buffer_waddr_mux     = buffer_waddr_w;
            buffer_wdata_mux     = {buffer_wdata_r[3],buffer_wdata_r[2],buffer_wdata_r[1],buffer_wdata_r[0]};
        end
        `ysyx_22040210_DCACHEINVALIDFINISH:begin
            way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
            buffer_write_req_mux = `ysyx_22040210_False;
            buffer_waddr_mux     = `ysyx_22040210_ZeroWord;
            buffer_wdata_mux     = `ysyx_22040210_ZeroWord;
        end
        default: begin
            way0_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            way1_we_mux          = `ysyx_22040210_ZeroWord;//READ Cache
            ram_raddr_mux        = {53'b0,cnt[6:1],5'b00000};
            buffer_write_req_mux = `ysyx_22040210_False;
            buffer_waddr_mux     = `ysyx_22040210_ZeroWord;
            buffer_wdata_mux     = `ysyx_22040210_ZeroWord;
        end
    endcase
end
always @(posedge clk ) begin
    if (rst) begin
        cnt <= `ysyx_22040210_ZeroWord;
        isinvalidsuccess <= 1'b0;
    end else if (currentstate == `ysyx_22040210_INVALIDCACHEINCR )begin
        cnt <= (cnt != 7'd127)              ? cnt + 7'd1 : 7'd0;
        isinvalidsuccess <= 1'b0;
    end else if (currentstate == `ysyx_22040210_DCACHEINVALIDFINISH && buffer_state_w==`ysyx_22040210_BUFFER_EMPTY)begin
        isinvalidsuccess <= 1'd1;
    end else begin
        isinvalidsuccess <= 1'b0;
    end
end

/*************************Write Buffer*****************************/
import "DPI-C" function void checkdcachewrite(input longint dpic_o);
// always @(posedge clk) begin
//     if(writevaild && dcache_write_req_r && dcache_addr_r[`ysyx_22040210_CacheIndexBus]==6'h3a)begin
//         $display("write value is %x , addr is %x, SEL is %x\n",dcache_wdata_r,dcache_addr_r,dcache_wsel_r);
//     end
       
// end
// always @(posedge clk) begin
//     if(writevaild && dcache_write_req_r && (dcache_addr_r==64'h803bb538||dcache_addr_r==64'h803bb530))begin
//         $display("write value is %x , addr is %x, SEL is %x\n",dcache_wdata_r,dcache_addr_r,dcache_wsel_r);
//         checkdcachewrite(dcache_write_req_r);
//     end
       
// end

//assign  buffer_hit_w  = buffer_whit_w||buffer_rhit_w;
assign  buffer_hit_w  = buffer_rhit_w;
ysyx_22040210_writebuffer ysyx_22040210_writebuffer_u0(
    .clk(clk),
    .rst(rst),
    
    // Interface with DCache Pipeline
    //.buffer_read_req_i(1'b1),
    .buffer_write_req_i(buffer_write_req_mux),
    .buffer_waddr_i(buffer_waddr_mux),
    .buffer_raddr_i(ram_raddr_mux),
    .buffer_wdata_i(buffer_wdata_mux),         //  read instruction
    .buffer_rdata_o({buffer_rdata_w[3],buffer_rdata_w[2],buffer_rdata_w[1],buffer_rdata_w[0]}),         //  pc ,address of read instruction
    .bufferread_hit_o(buffer_rhit_w),       //  the vaild sign of read instruction
    .bufferwrite_hit_o(buffer_whit_w),
    .buffer_state_o(buffer_state_w),
    
    // Interface with Cache Interface
    .buffer_bvaild_i(dcache_bvaild_i),
    .buffer_wen_o(dcache_wen_o),
    .buffer_wdata_o(dcache_wdata_o),
    .buffer_awaddr_o(dcache_awaddr_o)
);
/****************************************************************/

assign  ram_raddr_w    =  (dcache_stall_o == `ysyx_22040210_True || writevaild == `ysyx_22040210_True) ? dcache_addr_r : dcache_addr_i; 

// assign  dcache_wmask_w = {  8{dcache_wsel_r[15]},8{dcache_wsel_r[14]},8{dcache_wsel_r[13]},8{dcache_wsel_r[12]},
//                             8{dcache_wsel_r[11]},8{dcache_wsel_r[10]},8{dcache_wsel_r[9]} ,8{dcache_wsel_r[8]},
//                             8{dcache_wsel_r[7]} ,8{dcache_wsel_r[6]} ,8{dcache_wsel_r[5]} ,8{dcache_wsel_r[4]},
//                             8{dcache_wsel_r[3]} ,8{dcache_wsel_r[2]} ,8{dcache_wsel_r[1]} ,8{dcache_wsel_r[0]} }   
assign  dcache_wmask_w = {  {8{dcache_wsel_r[7]}} ,{8{dcache_wsel_r[6]}} ,{8{dcache_wsel_r[5]}} ,{8{dcache_wsel_r[4]}},
                            {8{dcache_wsel_r[3]}} ,{8{dcache_wsel_r[2]}} ,{8{dcache_wsel_r[1]}} ,{8{dcache_wsel_r[0]}} };
/****************************************************************/
assign io_sram4_addr = ram_raddr_mux[`ysyx_22040210_CacheIndexBus];
assign io_sram4_cen  = 1'b1;
assign io_sram4_wen = |way0_we_mux;
assign io_sram4_wmask = way0_we_mux;
assign io_sram4_wdata = {way_wdata_r[1],way_wdata_r[0]};
assign {way0_rdata_w[1],way0_rdata_w[0]} = io_sram4_rdata;
assign io_sram5_addr = ram_raddr_mux[`ysyx_22040210_CacheIndexBus];
assign io_sram5_cen  = 1'b1;
assign io_sram5_wen = |way0_we_mux;
assign io_sram5_wmask = way0_we_mux;
assign io_sram5_wdata = {way_wdata_r[3],way_wdata_r[2]};
assign {way0_rdata_w[3],way0_rdata_w[2]} = io_sram5_rdata;


assign io_sram6_addr = ram_raddr_mux[`ysyx_22040210_CacheIndexBus];
assign io_sram6_cen  = 1'b1;
assign io_sram6_wen = |way1_we_mux;
assign io_sram6_wmask = way1_we_mux;
assign io_sram6_wdata = {way_wdata_r[1],way_wdata_r[0]};
assign {way1_rdata_w[1],way1_rdata_w[0]} = io_sram6_rdata;
assign io_sram7_addr = ram_raddr_mux[`ysyx_22040210_CacheIndexBus];
assign io_sram7_cen  = 1'b1;
assign io_sram7_wen = |way1_we_mux;
assign io_sram7_wmask = way1_we_mux;
assign io_sram7_wdata = {way_wdata_r[3],way_wdata_r[2]};
assign {way1_rdata_w[3],way1_rdata_w[2]} = io_sram7_rdata;

//Cache Way0 initalized
S013HD1P_X32Y2D128_BW           tagway0 (.Q(way0_rtag_w),.CLK(clk), .CEN(1'b1), .WEN(|way0_we_mux), .BWEN(way0_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({dcache_addr_r[`ysyx_22040210_CacheTagBus]}));
//S013HD1P_X32Y2D128_BW dcache_bank0_way0 (.Q({way0_rdata_w[1],way0_rdata_w[0]}), .CLK(clk), .CEN(1'b1), .WEN(|way0_we_mux), .BWEN(way0_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({way_wdata_r[1],way_wdata_r[0]}));
//S013HD1P_X32Y2D128_BW dcache_bank1_way0 (.Q({way0_rdata_w[3],way0_rdata_w[2]}), .CLK(clk), .CEN(1'b1), .WEN(|way0_we_mux), .BWEN(way0_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({way_wdata_r[3],way_wdata_r[2]}));

//Cache Way1 initalized
S013HD1P_X32Y2D128_BW           tagway1 (.Q(way1_rtag_w),.CLK(clk), .CEN(1'b1), .WEN(|way1_we_mux), .BWEN(way1_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({dcache_addr_r[`ysyx_22040210_CacheTagBus]}));
//S013HD1P_X32Y2D128_BW dcache_bank0_way1 (.Q({way1_rdata_w[1],way1_rdata_w[0]}), .CLK(clk), .CEN(1'b1), .WEN(|way1_we_mux), .BWEN(way1_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({way_wdata_r[1],way_wdata_r[0]}));
//S013HD1P_X32Y2D128_BW dcache_bank1_way1 (.Q({way1_rdata_w[3],way1_rdata_w[2]}), .CLK(clk), .CEN(1'b1), .WEN(|way1_we_mux), .BWEN(way1_we_mux), .A(ram_raddr_mux[`ysyx_22040210_CacheIndexBus]), .B(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.D({way_wdata_r[3],way_wdata_r[2]}));
always @(posedge clk ) begin
    if (rst) begin
        tag0valid_r <= `ysyx_22040210_ZeroWord;
        tag1valid_r <= `ysyx_22040210_ZeroWord;
    end else if (|way0_we_mux)begin
        tag0valid_r[ram_raddr_mux[`ysyx_22040210_CacheIndexBus]] <=   `ysyx_22040210_True ;
    end else if (|way1_we_mux)begin
        tag1valid_r[ram_raddr_mux[`ysyx_22040210_CacheIndexBus]] <=   `ysyx_22040210_True ;
    end
end



always @(posedge clk ) begin
    if (rst) begin
        readtag0valid <= `ysyx_22040210_ZeroWord;
        readtag1valid <= `ysyx_22040210_ZeroWord;
    end else begin
        readtag0valid <= !(|way0_we_mux) ? tag0valid_r[ram_raddr_mux[`ysyx_22040210_CacheIndexBus]] : `ysyx_22040210_False;
        readtag1valid <= !(|way1_we_mux) ? tag1valid_r[ram_raddr_mux[`ysyx_22040210_CacheIndexBus]] : `ysyx_22040210_False;
    end 
end
// //Cache Way0 initalized
// simple_dual_ram tagway0 (.clka(clk),.ena(|way0_we_w),.wea(way0_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]),.dina(dcache_addr_r[`ysyx_22040210_CacheIndexBus]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way0_rtag_w));
// simple_dual_ram cache_bank0_way0 (.clka(clk),.ena(|way0_we_w),.wea(way0_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]), .dina(way_wdata_r[0]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way0_rdata_w[0]));
// simple_dual_ram cache_bank1_way0 (.clka(clk),.ena(|way0_we_w),.wea(way0_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]), .dina(way_wdata_r[1]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way0_rdata_w[1]));
// //Cache Way1 initalized
// simple_dual_ram tagway1 (.clka(clk),.ena(|way1_we_w),.wea(way1_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]), .dina(dcache_addr_r[`ysyx_22040210_CacheIndexBus]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way1_rtag_w));
// simple_dual_ram cache_bank0_way1 (.clka(clk),.ena(|way1_we_w),.wea(way1_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]), .dina(way1_wdata_r[0]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way1_rdata_w[0]));
// simple_dual_ram cache_bank1_way1 (.clka(clk),.ena(|way1_we_w),.wea(way1_we_w),.addra(dcache_addr_r[`ysyx_22040210_CacheIndexBus]), .dina(way1_wdata_r[1]),.clkb(clk),.enb(`ysyx_22040210_True),.addrb(ram_raddr_w[`ysyx_22040210_CacheIndexBus]),.doutb(way1_rdata_w[1]));
// //PLRU initalized

assign  cacheway_sel = plru_r[dcache_addr_r[`ysyx_22040210_CacheIndexBus]]; //cacheway_sel = 0 is terms of sellecting way0
//PLRU update policy
always@(posedge clk)begin
    if(rst)
        plru_r <= 0;
    else if(hit_success == `ysyx_22040210_True)//hit: set LRU to bit that is not hit
        plru_r[dcache_addr_r[`ysyx_22040210_CacheIndexBus]] <= way0_hit_w;
    else if(bus_readsuccess == `ysyx_22040210_True && hit_fail == `ysyx_22040210_True)//not hit: set opposite LRU
        plru_r[dcache_addr_r[`ysyx_22040210_CacheIndexBus]] <= ~cacheway_sel;
    else
        plru_r <= plru_r;
end

//Dirty bit initalized

assign  is_write_dirty_w    =   dirty_r[{dcache_addr_r[`ysyx_22040210_CacheIndexBus],cacheway_sel}];
//Dirty bit update policy
always @(posedge clk ) begin
    if(rst)begin
        dirty_r <= `ysyx_22040210_ZeroWord;
    end else if (bus_readsuccess && dcache_read_req_r) begin//Read not hit
        dirty_r[{dcache_addr_r[`ysyx_22040210_CacheIndexBus],cacheway_sel}] <= 1'b0;
    end else if (bus_readsuccess && dcache_write_req_r) begin//Write not hit
        dirty_r[{dcache_addr_r[`ysyx_22040210_CacheIndexBus],cacheway_sel}] <= 1'b1;
    end else if ((way0_hit_w||way1_hit_w) && dcache_write_req_r) begin//Write not hit
        dirty_r[{dcache_addr_r[`ysyx_22040210_CacheIndexBus],way1_hit_w}] <= 1'b1;
    end else begin
        dirty_r <= dirty_r;
    end
end
//Stall bit
assign dcache_stall_o = (hit_fail==`ysyx_22040210_True )? !bus_readsuccess : 1'b0;
/***************************Stage1 For Fetch*****************************/
//Tag Hit Judgement

assign way0_hit_w = (readtag0valid==`ysyx_22040210_True && (rtag0_w[52:0]==dcache_addr_r[`ysyx_22040210_CacheTagBus]))? `ysyx_22040210_CacheHit :   `ysyx_22040210_CacheNotHit;
assign way1_hit_w = (readtag1valid==`ysyx_22040210_True && (rtag1_w[52:0]==dcache_addr_r[`ysyx_22040210_CacheTagBus]))? `ysyx_22040210_CacheHit :   `ysyx_22040210_CacheNotHit;
assign hit_success= (way0_hit_w || way1_hit_w || buffer_hit_w) && (dcache_read_req_r||dcache_write_req_r);
assign hit_fail= !hit_success && ( dcache_read_req_r || dcache_write_req_r );

assign way0_we_w = (hit_fail==`ysyx_22040210_True&&cacheway_sel==`ysyx_22040210_CacheWay0Pick&&bus_readsuccess ==`ysyx_22040210_True)? {128{1'b1}} :
                    (way0_hit_w == `ysyx_22040210_True && dcache_write_req_r)  ?  {128{1'b1}}/*dcache_wmask_w*/ : 128'b0;
assign way1_we_w = (hit_fail==`ysyx_22040210_True&&cacheway_sel==`ysyx_22040210_CacheWay1Pick&&bus_readsuccess ==`ysyx_22040210_True)? {128{1'b1}} :
                    (way1_hit_w == `ysyx_22040210_True && dcache_write_req_r)  ?  {128{1'b1}}/*dcache_wmask_w*/ : 128'b0;

assign buffer_wreq_w = (buffer_hit_w == `ysyx_22040210_True && dcache_write_req_r == `ysyx_22040210_True)? `ysyx_22040210_True:
	                   (bus_readsuccess == `ysyx_22040210_True && buffer_state_w != `ysyx_22040210_BUFFER_FULL && is_write_dirty_w == `ysyx_22040210_True)? `ysyx_22040210_True:
	                    `ysyx_22040210_False;

assign buffer_waddr_w = (buffer_hit_w == `ysyx_22040210_True && dcache_write_req_r == `ysyx_22040210_True)? dcache_addr_r
                                                                        :(cacheway_sel == `ysyx_22040210_CacheWay1Pick)?  {rtag1_w[52:0],dcache_addr_r[10:0]}
                                                                                                                      :{rtag0_w[52:0],dcache_addr_r[10:0]};
assign writevaild   =   way0_we_w || way1_we_w || buffer_wreq_w;
assign dcache_araddr_o = dcache_addr_r;
//Ram Write Data Prepare
always @(*) begin
   if(buffer_hit_w==`ysyx_22040210_True)begin // 1st find Write Buffer 
        way_wdata_r[0] =   buffer_rdata_w[0]; 
        way_wdata_r[1] =   buffer_rdata_w[1]; 
        way_wdata_r[2] =   buffer_rdata_w[2]; 
        way_wdata_r[3] =   buffer_rdata_w[3]; 
        if(dcache_write_req_r)begin//refill
            way_wdata_r[dcache_addr_r[4:3]] =((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(buffer_rdata_w[dcache_addr_r[4:3]] & ~dcache_wmask_w);
        end
   end else if (way0_hit_w==`ysyx_22040210_True)begin //2nd find Way0 
        way_wdata_r[0] =   rdata0_w[0]; 
        way_wdata_r[1] =   rdata0_w[1]; 
        way_wdata_r[2] =   rdata0_w[2]; 
        way_wdata_r[3] =   rdata0_w[3]; 
        if(dcache_write_req_r)begin//refill
            way_wdata_r[dcache_addr_r[4:3]] =((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(rdata0_w[dcache_addr_r[4:3]] & ~dcache_wmask_w);
        end
   end else if (way1_hit_w==`ysyx_22040210_True)begin //3rd find Way1 
        way_wdata_r[0] =   rdata1_w[0]; 
        way_wdata_r[1] =   rdata1_w[1]; 
        way_wdata_r[2] =   rdata1_w[2]; 
        way_wdata_r[3] =   rdata1_w[3]; 
        if(dcache_write_req_r)begin//refill
            way_wdata_r[dcache_addr_r[4:3]] =((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(rdata1_w[dcache_addr_r[4:3]] & ~dcache_wmask_w);
        end
   end else if (hit_fail==`ysyx_22040210_True) begin // handle Cache Miss
        way_wdata_r[0] =   dcache_rdata_i[63:0]; 
        way_wdata_r[1] =   dcache_rdata_i[127:64]; 
        way_wdata_r[2] =   dcache_rdata_i[191:128]; 
        way_wdata_r[3] =   dcache_rdata_i[255:192]; 
        if(dcache_write_req_r&&(~dcache_addr_r[4])&&(~dcache_addr_r[3]))begin//refill
            way_wdata_r[0]  =   ((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(dcache_rdata_i[63:0] & ~dcache_wmask_w);
        end else if(dcache_write_req_r&&(~dcache_addr_r[4])&&(dcache_addr_r[3]))begin
            way_wdata_r[1]  =   ((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(dcache_rdata_i[127:64] & ~dcache_wmask_w);
        end else if(dcache_write_req_r&&(dcache_addr_r[4])&&(~dcache_addr_r[3]))begin
            way_wdata_r[2]  =   ((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(dcache_rdata_i[191:128] & ~dcache_wmask_w);
        end else if(dcache_write_req_r&&(dcache_addr_r[4])&&(dcache_addr_r[3]))begin
            way_wdata_r[3]  =   ((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(dcache_rdata_i[255:192] & ~dcache_wmask_w);
        end
   end else begin
        way_wdata_r[0] =   `ysyx_22040210_ZeroWord; 
        way_wdata_r[1] =   `ysyx_22040210_ZeroWord;  
        way_wdata_r[2] =   `ysyx_22040210_ZeroWord; 
        way_wdata_r[3] =   `ysyx_22040210_ZeroWord;  
        
   end
end                                                            

// Write Buffer Prepare
always@(*)begin
    if(dcache_write_req_r&&buffer_hit_w==`ysyx_22040210_True)begin
        buffer_wdata_r[0]  =  buffer_rdata_w[0] ;
        buffer_wdata_r[1]  =  buffer_rdata_w[1] ;
        buffer_wdata_r[2]  =  buffer_rdata_w[2] ;
        buffer_wdata_r[3]  =  buffer_rdata_w[3] ;
        if(dcache_write_req_r)begin
            buffer_wdata_r[dcache_addr_r[4:3]] = ((dcache_wdata_r<<{dcache_addr_r[2:0],3'b0}) & dcache_wmask_w)|(buffer_rdata_w[dcache_addr_r[4:3]] & ~dcache_wmask_w);
        end
    end else if (bus_readsuccess)begin
        if(!cacheway_sel)begin//inverse ... cacheway_sel=1 means select way=0
            buffer_wdata_r[0]  =  rdata0_w[0] ;
            buffer_wdata_r[1]  =  rdata0_w[1] ;
            buffer_wdata_r[2]  =  rdata0_w[2] ;
            buffer_wdata_r[3]  =  rdata0_w[3] ;
        end else begin
            buffer_wdata_r[0]  =  rdata1_w[0] ;
            buffer_wdata_r[1]  =  rdata1_w[1] ;
            buffer_wdata_r[2]  =  rdata1_w[2] ;
            buffer_wdata_r[3]  =  rdata1_w[3] ;
        end
    end else begin
        buffer_wdata_r[0]  =  `ysyx_22040210_ZeroWord; 
        buffer_wdata_r[1]  =  `ysyx_22040210_ZeroWord; 
        buffer_wdata_r[2]  =  `ysyx_22040210_ZeroWord; 
        buffer_wdata_r[3]  =  `ysyx_22040210_ZeroWord;
    end
end
/***************************Stage2 For Tempotary Store*****************************/


always @(posedge clk ) begin
    if(rst)begin
        dcache_wdata_tmp_r          <=  `ysyx_22040210_ZeroWord;
        way_wdata_tmp_r[0]          <=  `ysyx_22040210_ZeroWord;
        way_wdata_tmp_r[1]          <=  `ysyx_22040210_ZeroWord;
        way_wdata_tmp_r[2]          <=  `ysyx_22040210_ZeroWord;
        way_wdata_tmp_r[3]          <=  `ysyx_22040210_ZeroWord;
        dcache_addr_tmp_r           <=  `ysyx_22040210_ZeroWord;
        ram_collision_way0_tmp_r    <=  `ysyx_22040210_ZeroWord;
        ram_collision_way1_tmp_r    <=  `ysyx_22040210_ZeroWord;
    end else begin
        dcache_wdata_tmp_r          <= way_wdata_r[dcache_addr_r[4:3]];
        dcache_addr_tmp_r           <= {1'b1,dcache_addr_r[`ysyx_22040210_CacheTagBus]};//default tag vaild bit is true
        ram_collision_way0_tmp_r    <= (!dcache_stall_o) && (dcache_addr_r ==  dcache_addr_i) && (|way0_we_w);
        ram_collision_way1_tmp_r    <= (!dcache_stall_o) && (dcache_addr_r ==  dcache_addr_i) && (|way1_we_w);
        way_wdata_tmp_r[0]          <=  way_wdata_r[0];
        way_wdata_tmp_r[1]          <=  way_wdata_r[1];
        way_wdata_tmp_r[2]          <=  way_wdata_r[2];
        way_wdata_tmp_r[3]          <=  way_wdata_r[3];
    end
end

assign data0_w      =   ram_collision_way0_tmp_r    ? dcache_wdata_tmp_r  : way0_rdata_w[dcache_addr_r[4:3]] ;
assign data1_w      =   ram_collision_way1_tmp_r    ? dcache_wdata_tmp_r  : way1_rdata_w[dcache_addr_r[4:3]] ;
assign rtag0_w      =   ram_collision_way0_tmp_r    ? dcache_addr_tmp_r  : way0_rtag_w ;
assign rtag1_w      =   ram_collision_way1_tmp_r    ? dcache_addr_tmp_r  : way1_rtag_w ;

assign rdata0_w[0]  =   ram_collision_way0_tmp_r    ? way_wdata_tmp_r[0]  : way0_rdata_w[0] ;
assign rdata0_w[1]  =   ram_collision_way0_tmp_r    ? way_wdata_tmp_r[1]  : way0_rdata_w[1] ;
assign rdata0_w[2]  =   ram_collision_way0_tmp_r    ? way_wdata_tmp_r[2]  : way0_rdata_w[2] ;
assign rdata0_w[3]  =   ram_collision_way0_tmp_r    ? way_wdata_tmp_r[3]  : way0_rdata_w[3] ;
assign rdata1_w[0]  =   ram_collision_way1_tmp_r    ? way_wdata_tmp_r[0]  : way1_rdata_w[0] ;
assign rdata1_w[1]  =   ram_collision_way1_tmp_r    ? way_wdata_tmp_r[1]  : way1_rdata_w[1] ;
assign rdata1_w[2]  =   ram_collision_way1_tmp_r    ? way_wdata_tmp_r[2]  : way1_rdata_w[2] ;
assign rdata1_w[3]  =   ram_collision_way1_tmp_r    ? way_wdata_tmp_r[3]  : way1_rdata_w[3] ;

/***************************Cache Inteface*****************************/



always@(*)begin
        if(bus_readsuccess ==`ysyx_22040210_True)begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = dcache_rdata_i;
        end else if(buffer_hit_w == `ysyx_22040210_BufferHit) begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {buffer_rdata_w[3],buffer_rdata_w[2],buffer_rdata_w[1],buffer_rdata_w[0]};
        end else if(way0_hit_w == `ysyx_22040210_CacheHit&&!dcache_addr_r[4]&&!dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{128{1'b0}},{64{1'b0}},data0_w};
        end else if(way0_hit_w == `ysyx_22040210_CacheHit&&!dcache_addr_r[4]&&dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{128{1'b0}},data0_w,{64{1'b0}}};
        end else if(way0_hit_w == `ysyx_22040210_CacheHit&&dcache_addr_r[4]&&!dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{64{1'b0}},data0_w,{128{1'b0}}};
        end else if(way0_hit_w == `ysyx_22040210_CacheHit&&dcache_addr_r[4]&&dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {data0_w,{64{1'b0}},{128{1'b0}}};
        end else if(way1_hit_w == `ysyx_22040210_CacheHit&&!dcache_addr_r[4]&&!dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{128{1'b0}},{64{1'b0}},data1_w};
        end else if(way1_hit_w == `ysyx_22040210_CacheHit&&!dcache_addr_r[4]&&dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{128{1'b0}},data1_w,{64{1'b0}}};
        end else if(way1_hit_w == `ysyx_22040210_CacheHit&&dcache_addr_r[4]&&!dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {{64{1'b0}},data1_w,{128{1'b0}}};
        end else if(way1_hit_w == `ysyx_22040210_CacheHit&&dcache_addr_r[4]&&dcache_addr_r[3])begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = {data1_w,{64{1'b0}},{128{1'b0}}};
        end else begin
            {core_data_r[3],core_data_r[2],core_data_r[1],core_data_r[0]} = `ysyx_22040210_ZeroWord;
        end
end
// always @(*) begin
//     if(dcache_rdatavaild_o&& dcache_addr_r[`ysyx_22040210_CacheIndexBus]==6'h3a )begin
//         $display("read value is %x , addr is %x\n",dcache_rdata_o,dcache_addr_r);
//     end
    
// end
wire iswritesram = (|way0_we_w || |way1_we_w || |buffer_wreq_w);
assign dcache_rdata_o = core_data_r[dcache_addr_r[4:3]];
assign dcache_rdatavaild_o = (hit_success  && dcache_read_req_r )? 1'b1 :
                            (bus_readsuccess && dcache_read_req_r )? 1'b1 : 1'b0 ;
assign dcache_ren_o = (hit_fail==`ysyx_22040210_True)? (!bus_readsuccess && !iswritesram) : 1'b0;

endmodule
