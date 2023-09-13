`include "../npc/vsrc/include/ysyx_22040210_define.v"
 module ysyx_22040210_top(
    input   wire                                    clk,
    input   wire                                    rst
 );

    wire	            io_interrupt;
    wire	            io_master_awready;	
    wire	            io_master_awvalid;
    wire  [3:0]	    io_master_awid;
    wire  [31:0]	    io_master_awaddr;	
    wire  [7:0]	    io_master_awlen;
    wire  [2:0]	    io_master_awsize;	
    wire  [1:0]	    io_master_awburst;	
    wire	            io_master_wready;
    wire	            io_master_wvalid;
    wire  [63:0]	    io_master_wdata;	
    wire  [7:0]	    io_master_wstrb;
    wire	            io_master_wlast;
    wire	            io_master_bready;
    wire	            io_master_bvalid;
    wire   [3:0]	    io_master_bid;
    wire   [1:0]	    io_master_bresp;
    wire	            io_master_arready;
    wire	            io_master_arvalid;
    wire  [3:0]	    io_master_arid;
    wire  [31:0]	    io_master_araddr;		
    wire  [7:0]	    io_master_arlen;
    wire  [2:0]	    io_master_arsize;	
    wire  [1:0]	    io_master_arburst;	
    wire	            io_master_rready;
    wire	            io_master_rvalid;
    wire   [3:0]	    io_master_rid;
    wire   [1:0]	    io_master_rresp;
    wire   [63:0]	    io_master_rdata;
    wire	            io_master_rlast;

    wire	            io_slave_awready;
    wire	            io_slave_awvalid;
    wire   [3:0]	    io_slave_awid;
    wire   [31:0]	    io_slave_awaddr;
    wire   [7:0]	    io_slave_awlen;
    wire   [2:0]	    io_slave_awsize;
    wire   [1:0]	    io_slave_awburst;	
    wire	            io_slave_wready;
    wire	            io_slave_wvalid;
    wire   [63:0]	    io_slave_wdata;
    wire   [7:0]	    io_slave_wstrb;
    wire	            io_slave_wlast;
    wire	            io_slave_bready;
    wire	            io_slave_bvalid;
    wire  [3:0]	    io_slave_bid;
    wire  [1:0]	    io_slave_bresp;
    wire	            io_slave_arready;
    wire	            io_slave_arvalid;
    wire   [3:0]	    io_slave_arid;
    wire   [31:0]	    io_slave_araddr;
    wire   [7:0]	    io_slave_arlen;
    wire   [2:0]	    io_slave_arsize;
    wire   [1:0]	    io_slave_arburst;	
    wire	            io_slave_rready;
    wire	            io_slave_rvalid;
    wire  [3:0]	    io_slave_rid;	
    wire  [1:0]	    io_slave_rresp;	
    wire  [63:0]	    io_slave_rdata;		
    wire	            io_slave_rlast;

    wire  [5:0]	    io_sram0_addr;	
    wire	            io_sram0_cen;
    wire	            io_sram0_wen;
    wire  [127:0]	    io_sram0_wmask;	
    wire  [127:0]	    io_sram0_wdata;	
    wire   [127:0]	    io_sram0_rdata;	
    wire  [5:0]	    io_sram1_addr;
    wire	            io_sram1_cen;
    wire	            io_sram1_wen;
    wire  [127:0]	    io_sram1_wmask;	
    wire  [127:0]	    io_sram1_wdata;	
    wire   [127:0]	    io_sram1_rdata;	
    wire  [5:0]	    io_sram2_addr;
    wire	            io_sram2_cen;
    wire	            io_sram2_wen;
    wire  [127:0]	    io_sram2_wmask;	
    wire  [127:0]	    io_sram2_wdata;	
    wire   [127:0]	    io_sram2_rdata;
    wire  [5:0]	    io_sram3_addr;
    wire	            io_sram3_cen;
    wire	            io_sram3_wen;
    wire  [127:0]	    io_sram3_wmask;
    wire  [127:0]	    io_sram3_wdata;
    wire   [127:0]	    io_sram3_rdata;
    wire  [5:0]	    io_sram4_addr;
    wire	            io_sram4_cen;
    wire	            io_sram4_wen;
    wire  [127:0]	    io_sram4_wmask;
    wire  [127:0]	    io_sram4_wdata;
    wire   [127:0]	    io_sram4_rdata;
    wire  [5:0]	    io_sram5_addr;
    wire	            io_sram5_cen;
    wire	            io_sram5_wen;
    wire  [127:0]	    io_sram5_wmask;
    wire  [127:0]	    io_sram5_wdata;
    wire   [127:0]	    io_sram5_rdata;
    wire  [5:0]	    io_sram6_addr;
    wire	            io_sram6_cen;
    wire	            io_sram6_wen;
    wire  [127:0]	    io_sram6_wmask;
    wire  [127:0]     io_sram6_wdata;
    wire   [127:0]	    io_sram6_rdata;
    wire  [5:0]	    io_sram7_addr;
    wire	            io_sram7_cen;
    wire	            io_sram7_wen;
    wire  [127:0]	    io_sram7_wmask;
    wire  [127:0]	    io_sram7_wdata;
    wire   [127:0]	    io_sram7_rdata;

ysyx_22040210 ysyx_22040210_u0(
    .clock(clk),
    .reset(rst),
    .io_interrupt(io_interrupt),

    .io_master_awready(io_master_awready),	
    .io_master_awvalid(io_master_awvalid),
    .io_master_awid(io_master_awid),
    .io_master_awaddr(io_master_awaddr),	
    .io_master_awlen(io_master_awlen),
    .io_master_awsize(io_master_awsize),	
    .io_master_awburst(io_master_awburst),	
    .io_master_wready(io_master_wready),
    .io_master_wvalid(io_master_wvalid),
    .io_master_wdata(io_master_wdata),	
    .io_master_wstrb(io_master_wstrb),
    .io_master_wlast(io_master_wlast),
    .io_master_bready(io_master_bready),
    .io_master_bvalid(io_master_bvalid),
    .io_master_bid(io_master_bid),
    .io_master_bresp(io_master_bresp),
    .io_master_arready(io_master_arready),
    .io_master_arvalid(io_master_arvalid),
    .io_master_arid(io_master_arid),
    .io_master_araddr(io_master_araddr),		
    .io_master_arlen(io_master_arlen),
    .io_master_arsize(io_master_arsize),	
    .io_master_arburst(io_master_arburst),	
    .io_master_rready(io_master_rready),
    .io_master_rvalid(io_master_rvalid),
    .io_master_rid(io_master_rid),
    .io_master_rresp(io_master_rresp),
    .io_master_rdata(io_master_rdata),
    .io_master_rlast(io_master_rlast),

    .io_slave_awready(io_slave_awready),
    .io_slave_awvalid(io_slave_awvalid),
    .io_slave_awid(io_slave_awid),
    .io_slave_awaddr(io_slave_awaddr),
    .io_slave_awlen(io_slave_awlen),
    .io_slave_awsize(io_slave_awsize),
    .io_slave_awburst(io_slave_awburst),	
    .io_slave_wready(io_slave_wready),
    .io_slave_wvalid(io_slave_wvalid),
    .io_slave_wdata(io_slave_wdata),
    .io_slave_wstrb(io_slave_wstrb),
    .io_slave_wlast(io_slave_wlast),
    .io_slave_bready(io_slave_bready),
    .io_slave_bvalid(io_slave_bvalid),
    .io_slave_bid(io_slave_bid),
    .io_slave_bresp(io_slave_bresp),
    .io_slave_arready(io_slave_arready),
    .io_slave_arvalid(io_slave_arvalid),
    .io_slave_arid(io_slave_arid),
    .io_slave_araddr(io_slave_araddr),
    .io_slave_arlen(io_slave_arlen),
    .io_slave_arsize(io_slave_arsize),
    .io_slave_arburst(io_slave_arburst),	
    .io_slave_rready(io_slave_rready),
    .io_slave_rvalid(io_slave_rvalid),
    .io_slave_rid(io_slave_rid),	
    .io_slave_rresp(io_slave_rresp),	
    .io_slave_rdata(io_slave_rdata),		
    .io_slave_rlast(io_slave_rlast),

    .io_sram0_addr(io_sram0_addr),	
    .io_sram0_cen(io_sram0_cen),
    .io_sram0_wen(io_sram0_wen),
    .io_sram0_wmask(io_sram0_wmask),	
    .io_sram0_wdata(io_sram0_wdata),	
    .io_sram0_rdata(io_sram0_rdata),	
    .io_sram1_addr(io_sram1_addr),
    .io_sram1_cen(io_sram1_cen),
    .io_sram1_wen(io_sram1_wen),
    .io_sram1_wmask(io_sram1_wmask),	
    .io_sram1_wdata(io_sram1_wdata),	
    .io_sram1_rdata(io_sram1_rdata),	
    .io_sram2_addr(io_sram2_addr),
    .io_sram2_cen(io_sram2_cen),
    .io_sram2_wen(io_sram2_wen),
    .io_sram2_wmask(io_sram2_wmask),	
    .io_sram2_wdata(io_sram2_wdata),	
    .io_sram2_rdata(io_sram2_rdata),
    .io_sram3_addr(io_sram3_addr),
    .io_sram3_cen(io_sram3_cen),
    .io_sram3_wen(io_sram3_wen),
    .io_sram3_wmask(io_sram3_wmask),
    .io_sram3_wdata(io_sram3_wdata),
    .io_sram3_rdata(io_sram3_rdata),
    .io_sram4_addr(io_sram4_addr),
    .io_sram4_cen(io_sram4_cen),
    .io_sram4_wen(io_sram4_wen),
    .io_sram4_wmask(io_sram4_wmask),
    .io_sram4_wdata(io_sram4_wdata),
    .io_sram4_rdata(io_sram4_rdata),
    .io_sram5_addr(io_sram5_addr),
    .io_sram5_cen(io_sram5_cen),
    .io_sram5_wen(io_sram5_wen),
    .io_sram5_wmask(io_sram5_wmask),
    .io_sram5_wdata(io_sram5_wdata),
    .io_sram5_rdata(io_sram5_rdata),
    .io_sram6_addr(io_sram6_addr),
    .io_sram6_cen(io_sram6_cen),
    .io_sram6_wen(io_sram6_wen),
    .io_sram6_wmask(io_sram6_wmask),
    .io_sram6_wdata(io_sram6_wdata),
    .io_sram6_rdata(io_sram6_rdata),
    .io_sram7_addr(io_sram7_addr),
    .io_sram7_cen(io_sram7_cen),
    .io_sram7_wen(io_sram7_wen),
    .io_sram7_wmask(io_sram7_wmask),
    .io_sram7_wdata(io_sram7_wdata),
    .io_sram7_rdata(io_sram7_rdata)
);
///////////////////////////////////////////////////////////////////


S013HD1P_X32Y2D128_BW icache_bank0_way0 (.Q(io_sram0_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram0_wen), .BWEN(io_sram0_wmask), .A(io_sram0_addr), 
                                        .B(io_sram0_addr),
                                        .D(io_sram0_wdata));
S013HD1P_X32Y2D128_BW icache_bank1_way0 (.Q(io_sram1_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram1_wen), .BWEN(io_sram1_wmask), .A(io_sram1_addr), 
                                        .B(io_sram1_addr),
                                        .D(io_sram1_wdata));
S013HD1P_X32Y2D128_BW icache_bank0_way1 (.Q(io_sram2_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram2_wen), .BWEN(io_sram2_wmask), .A(io_sram2_addr), 
                                        .B(io_sram2_addr),
                                        .D(io_sram2_wdata));
S013HD1P_X32Y2D128_BW icache_bank1_way1 (.Q(io_sram3_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram3_wen), .BWEN(io_sram3_wmask), .A(io_sram3_addr), 
                                        .B(io_sram3_addr),
                                        .D(io_sram3_wdata));
S013HD1P_X32Y2D128_BW dcache_bank0_way0 (.Q(io_sram4_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram4_wen), .BWEN(io_sram4_wmask), .A(io_sram4_addr), 
                                        .B(io_sram4_addr),
                                        .D(io_sram4_wdata));
S013HD1P_X32Y2D128_BW dcache_bank1_way0(.Q(io_sram5_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram5_wen), .BWEN(io_sram5_wmask), .A(io_sram5_addr), 
                                        .B(io_sram5_addr),
                                        .D(io_sram5_wdata));
S013HD1P_X32Y2D128_BW dcache_bank0_way1 (.Q(io_sram6_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram6_wen), .BWEN(io_sram6_wmask), .A(io_sram6_addr), 
                                        .B(io_sram6_addr),
                                        .D(io_sram6_wdata));
S013HD1P_X32Y2D128_BW dcache_bank1_way1 (.Q(io_sram7_rdata), .CLK(clk), .CEN(1'b1), 
                                        .WEN(io_sram7_wen), .BWEN(io_sram7_wmask), .A(io_sram7_addr), 
                                        .B(io_sram7_addr),
                                        .D(io_sram7_wdata));

///////////////////////////////////////////////////////////////////
wire [63:0]sram_waddr;
wire [63:0]sram_raddr;
wire [7:0]sram_rdata0;
wire [7:0]sram_rdata1;
wire [7:0]sram_rdata2;
wire [7:0]sram_rdata3;
wire [7:0]sram_rdata4;
wire [7:0]sram_rdata5;
wire [7:0]sram_rdata6;
wire [7:0]sram_rdata7;
wire [63:0]sram_wdata;
wire sram_wen;
wire sram_ren;
wire [7:0]sram_wcsn;
wire [7:0]sram_rcsn;
///////////////////////////////////////////////////////////////////
axi_slave_interface axi_slave_interface_s0(
    //Interface with AXI Gloable Chanal   
    .clk(clk),//ACLK
    .rst(rst),//ARESETn
    //Interface with SRAM
    .sram_ren(sram_ren),
    .sram_wen(sram_wen),         
    .sram_wdata(sram_wdata),          
    .sram_waddr(sram_waddr),
    .sram_raddr(sram_raddr),
    .sram_rcsn(sram_rcsn),	//八片sram片选     
    .sram_wcsn(sram_wcsn),	//八片sram片选              
    .sram_rdata0(sram_rdata0),      
    .sram_rdata1(sram_rdata1),
    .sram_rdata2(sram_rdata2),
    .sram_rdata3(sram_rdata3),
    .sram_rdata4(sram_rdata4),
    .sram_rdata5(sram_rdata5),
    .sram_rdata6(sram_rdata6),
    .sram_rdata7(sram_rdata7),
    //Interface with AXI Adress Read            Chanal
    .axi_ar_id_i(io_master_arid),
    .axi_ar_addr_i(io_master_araddr),
    .axi_ar_len_i(io_master_arlen),
    .axi_ar_size_i(io_master_arsize),
    .axi_ar_burst_i(io_master_arburst),
    .axi_ar_lock_i(),
    .axi_ar_cache_i(),
    .axi_ar_prot_i(),
    .axi_ar_qos_i(),
    .axi_ar_region_i(),
    .axi_ar_user_i(),
    .axi_ar_valid_i(io_master_arvalid), 
    .axi_ar_ready_o(io_master_arready),  
    //Interface with AXI Date   Read            Chanal
    //.axi_r_id_o(),
    .axi_r_data_o(io_master_rdata),
    .axi_r_resp_o(io_master_rresp),
    .axi_r_last_o(io_master_rlast),
    //.axi_r_user_o(),
    .axi_r_valid_o(io_master_rvalid),
    .axi_r_ready_i(io_master_rready),
    //Interface with AXI Adress Write           Chanal
    .axi_aw_id_i(io_master_awid),
    .axi_aw_addr_i(io_master_awaddr),
    .axi_aw_len_i(io_master_awlen),
    .axi_aw_size_i(io_master_awsize),
    .axi_aw_burst_i(io_master_awburst),
    .axi_aw_lock_i(),
    .axi_aw_cache_i(),
    .axi_aw_prot_i(),
    .axi_aw_qos_i(),
    .axi_aw_region_i(),
    .axi_aw_user_i(),
    .axi_aw_valid_i(io_master_awvalid), 
    .axi_aw_ready_o(io_master_awready),  
    //Interface with AXI Date   Write           Chanal
    .axi_w_data_i(io_master_wdata),
    .axi_w_strb_i(io_master_wstrb),
    .axi_w_last_i(io_master_wlast),
    .axi_w_user_i(),
    .axi_w_valid_i(io_master_wvalid),
    .axi_w_ready_o(io_master_wready),
    //Interface with AXI Date   Write Response  Chanal
    .axi_b_resp_o(io_master_bresp),
    .axi_b_valid_o(io_master_bvalid),
    .axi_b_ready_i(io_master_bready)
    );

    ysyx_22040210_data_rom ysyx_22040210_data_rom_u0(
        .clk                    (clk),
        .rst                    (rst),
        .ce                     (ysyx_22040210_u0.ce),
        //Interface with MemBlock
        .memren_i                (!sram_ren),
        .memwen_i               (!sram_wen),
        .memwe_i                (~sram_wcsn),
        .memwaddr_i              (sram_waddr),
        .memraddr_i              (sram_raddr),
        .memwdata_i             (sram_wdata), 
        .memrdata_o             ({sram_rdata7,sram_rdata6,sram_rdata5,sram_rdata4,sram_rdata3,sram_rdata2,sram_rdata1,sram_rdata0}),
        .memrdatavaild_o        (),
        .memwdatavaild_o        ()
     );
endmodule

