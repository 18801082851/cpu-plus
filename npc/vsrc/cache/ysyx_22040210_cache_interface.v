`include "../npc/vsrc/include/ysyx_22040210_define.v"
 module ysyx_22040210_cache_interface(

    input       wire                                    clk,
    input       wire                                    rst,
// Interface with Cache Pipeline Interface
    input       wire[7:0]                               axicache_rsel_i,
    input       wire[7:0]                               axicache_wsel_i,
    // Interface with ICache Read Channel
    input       wire                                    axicache_inst_ren_i,
    input       wire     [`ysyx_22040210_InstAdderBus]  axicache_inst_araddr_i,
    output      reg                                     axicache_inst_rvalid_o,
    output      reg      [`ysyx_22040210_CacheWayBUS]   axicache_inst_rdata_o,
    // Interface with DCache Read Channel
    input       wire                                    axicache_data_ren_i,
    input       wire     [`ysyx_22040210_MemAddrBus]    axicache_data_araddr_i,
    output      reg                                     axicache_data_rvalid_o,
    output      reg      [`ysyx_22040210_CacheWayBUS]   axicache_data_rdata_o,
    // Interface with DCache Write Channel
    input       wire 					                axicache_data_wen_i,
    input       wire     [`ysyx_22040210_CacheWayBUS]   axicache_data_wdata_i,
    input       wire     [`ysyx_22040210_MemAddrBus]	axicache_data_awaddr_i,
    output      reg 					                axicache_data_bvalid_o,
    // Interface with Instruction Uncached Read Channel
    input       wire                                    axicache_uncacheinst_ren_i,
	input       wire     [`ysyx_22040210_MemAddrBus]    axicache_uncacheinst_araddr_i,
	output      reg                                     axicache_uncacheinst_rvalid_o,
	output      reg      [`ysyx_22040210_InstBus]       axicache_uncacheinst_rdata_o,  
    // Interface with Data Uncached Read Channel
    input       wire                                    axicache_uncachedata_ren_i,
    input       wire     [`ysyx_22040210_MemAddrBus]    axicache_uncachedata_araddr_i,
    output      reg                                     axicache_uncachedata_rvalid_o,   
    output      reg      [`ysyx_22040210_MemBUS]        axicache_uncachedata_rdata_o,      
    // Interface with Data Uncached Write Channel
    input       wire 					                axicache_uncachedata_wen_i,
	input       wire     [`ysyx_22040210_MemBUS]		axicache_uncachedata_wdata_i,  
    input       wire     [`ysyx_22040210_MemAddrBus]	axicache_uncachedata_awaddr_i,  
    output      reg 					                axicache_uncachedata_bvalid_o,  

// Interface with AXI Interface
	//output       wire             	                    axicache_axi_ce_o,
	output       reg     [7:0]                         axicache_axi_wsel_o,
	output       reg     [7:0]                         axicache_axi_rsel_o,
    //Interface with AXI Read Chanal
    input        wire     [`ysyx_22040210_MemBUS]       axicache_axi_rdata_i, 
    input        wire                                   axicache_axi_rresp_i, 
    output       reg                                    axicache_axi_ren_o, 
    output       reg                                    axicache_axi_rready_o, 
    output       reg      [`ysyx_22040210_MemAddrBus]   axicache_axi_raddr_o, 
    output       reg      [3:0]                         axicache_axi_rlen_o, 
    //Interface with AXI Write Chanal
    input        wire                                   axicache_axi_wresp_i, 
    output       reg                                    axicache_axi_wen_o, 
    output       reg                                    axicache_axi_wvaild_o,   
    output       reg      [`ysyx_22040210_MemAddrBus]   axicache_axi_waddr_o,        
    output       reg      [`ysyx_22040210_MemBUS]       axicache_axi_wdata_o,        
	output       reg      [3:0]                           axicache_axi_wlen_o,    
    output       reg                               axicache_axi_wlast_o     
 );

///////////////////////////////////////////////////////////////////////////////////////////
    reg [2:0] rstate_current;
    reg [2:0] rstate_next;
	reg [1:0] cache_rcount_r;
    reg [2:0] wstate_current;
    reg [2:0] wstate_next;
	reg [1:0] cache_wcount_r;
    
    reg [`ysyx_22040210_MemAddrBus]axicache_inst_araddr_r;
    reg [`ysyx_22040210_MemAddrBus]axicache_data_araddr_r;
    reg [`ysyx_22040210_MemAddrBus]axicache_uncacheinst_araddr_r;
    reg [`ysyx_22040210_MemAddrBus]axicache_uncachedata_araddr_r;  

    reg [`ysyx_22040210_CacheWayBUS]axicache_data_wdata_r;
    reg [`ysyx_22040210_MemAddrBus]axicache_data_awaddr_r;
    reg [`ysyx_22040210_MemBUS]    axicache_uncachedata_wdata_r;
    reg [`ysyx_22040210_MemAddrBus]axicache_uncachedata_awaddr_r; 
    reg [7:0]axicache_axi_rsel_r;
    reg [7:0]axicache_axi_wsel_r;
/************************************Pipeline*******************************************/
    always@(posedge clk)begin
        if(rst)begin
            axicache_inst_araddr_r          <= `ysyx_22040210_ZeroWord; 
            axicache_data_araddr_r          <= `ysyx_22040210_ZeroWord;  
            axicache_uncacheinst_araddr_r   <= `ysyx_22040210_ZeroWord;   
            axicache_uncachedata_araddr_r   <= `ysyx_22040210_ZeroWord;
            axicache_axi_rsel_r             <= `ysyx_22040210_ZeroWord;
        end else if(rstate_current == `ysyx_22040210_CACHEAXI_RIDLE)begin
            axicache_axi_rsel_r             <= axicache_rsel_i;
            axicache_inst_araddr_r          <= axicache_inst_araddr_i; 
            axicache_data_araddr_r          <= axicache_data_araddr_i;  
            axicache_uncacheinst_araddr_r   <= axicache_uncacheinst_araddr_i;   
            axicache_uncachedata_araddr_r   <= axicache_uncachedata_araddr_i;
        end   
    end
    always@(posedge clk)begin
        if(rst)begin
            axicache_data_wdata_r           <= `ysyx_22040210_ZeroWord; 
            axicache_data_awaddr_r          <= `ysyx_22040210_ZeroWord;  
            axicache_uncachedata_wdata_r    <= `ysyx_22040210_ZeroWord;   
            axicache_uncachedata_awaddr_r   <= `ysyx_22040210_ZeroWord;
            axicache_axi_wsel_r             <= `ysyx_22040210_ZeroWord;
        end else if(wstate_current == `ysyx_22040210_CACHEAXI_WIDLE)begin
            axicache_axi_wsel_r             <= axicache_wsel_i;
            axicache_data_wdata_r           <= axicache_data_wdata_i;     
            axicache_data_awaddr_r          <= axicache_data_awaddr_i;      
            axicache_uncachedata_wdata_r    <= axicache_uncachedata_wdata_i;  
            axicache_uncachedata_awaddr_r   <= axicache_uncachedata_awaddr_i;  
        end
        
    end
    
/************************************STATE MACHINE*******************************************/

	/******************************AXI READ***********************************/
reg [1:0]debug;

    // state updata
    always @(posedge clk ) begin
        if (rst) begin
            rstate_current <= `ysyx_22040210_CACHEAXI_RIDLE;
        end else begin
            rstate_current <= rstate_next;
        end
    end
    // new state due to Cache Chanel and current state
    always @(*) begin
        if (rst)begin
            rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
            debug=0;
        end else begin
            debug=0;
            case (rstate_current)
                
                `ysyx_22040210_CACHEAXI_RIDLE:begin
                    debug=3;
                    if (axicache_uncachedata_ren_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_UNDCACHEREAD;
                    end else if (axicache_uncacheinst_ren_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_UNICACHEREAD;
                    end else if (axicache_inst_ren_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_ICACHEREAD;
                    end else if (axicache_data_ren_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_DCACHEREAD;
                    
                    end else begin
                        rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
                    end
                end
                `ysyx_22040210_CACHEAXI_UNDCACHEREAD:begin
                    if (axicache_axi_rresp_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
                    end else begin
                        rstate_next = `ysyx_22040210_CACHEAXI_UNDCACHEREAD;
                    end
                end
                `ysyx_22040210_CACHEAXI_DCACHEREAD:begin
                    if (axicache_axi_rresp_i == `ysyx_22040210_True && cache_rcount_r == 3'h3) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
                        
                    end else begin
                        rstate_next = `ysyx_22040210_CACHEAXI_DCACHEREAD;
                        debug=1;
                    end
                end
                `ysyx_22040210_CACHEAXI_UNICACHEREAD:begin
                    if (axicache_axi_rresp_i == `ysyx_22040210_True) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
                    end else begin
                        rstate_next = `ysyx_22040210_CACHEAXI_UNICACHEREAD;
                    end
                end
                `ysyx_22040210_CACHEAXI_ICACHEREAD:begin
                    if (axicache_axi_rresp_i == `ysyx_22040210_True && cache_rcount_r == 3'h3) begin
                        rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;
                    end else begin
                        rstate_next = `ysyx_22040210_CACHEAXI_ICACHEREAD;
                    end
                end
                default: begin rstate_next = `ysyx_22040210_CACHEAXI_RIDLE;debug=2; end
            endcase
        end
    end
    //state comb output
    always @(*) begin
        case (rstate_current)
            `ysyx_22040210_CACHEAXI_RIDLE:begin
                axicache_axi_ren_o    = `ysyx_22040210_False;
                axicache_axi_rready_o = `ysyx_22040210_False;
                axicache_axi_raddr_o  = `ysyx_22040210_ZeroWord;
                axicache_axi_rlen_o   = 4'b0011;
                axicache_axi_rsel_o   = 8'b11111111;
            end
            `ysyx_22040210_CACHEAXI_UNDCACHEREAD:begin
                axicache_axi_ren_o      = `ysyx_22040210_True;
                axicache_axi_rready_o   = `ysyx_22040210_True;
                axicache_axi_raddr_o    = {axicache_uncachedata_araddr_r[63:3],3'b0};
                axicache_axi_rlen_o     = 4'b0;
                axicache_axi_rsel_o     = axicache_axi_rsel_r;//axicache_axi_rsel_r;//
            end
            `ysyx_22040210_CACHEAXI_DCACHEREAD:begin
                axicache_axi_ren_o      = `ysyx_22040210_True;
                axicache_axi_rready_o   = `ysyx_22040210_True;
                axicache_axi_raddr_o    = {axicache_data_araddr_r[63:5],cache_rcount_r,3'b0};
                axicache_axi_rlen_o     = 4'b0011;
                axicache_axi_rsel_o   = 8'b11111111;
            end
            `ysyx_22040210_CACHEAXI_UNICACHEREAD:begin
                axicache_axi_ren_o      = `ysyx_22040210_True;
                axicache_axi_rready_o   = `ysyx_22040210_True;
                axicache_axi_raddr_o    = {axicache_uncacheinst_araddr_r[63:3],3'b0};
                axicache_axi_rlen_o     = 4'b0;
                axicache_axi_rsel_o     = 8'b00001111;;//axicache_axi_rsel_r;
            end
            `ysyx_22040210_CACHEAXI_ICACHEREAD:begin
                axicache_axi_ren_o      = `ysyx_22040210_True;
                axicache_axi_rready_o   = `ysyx_22040210_True;
                axicache_axi_raddr_o    = {axicache_inst_araddr_r[63:5],cache_rcount_r,3'b0};
                axicache_axi_rlen_o     = 4'b0011;
                axicache_axi_rsel_o   = 8'b11111111;
            end
            default: begin 
                    axicache_axi_ren_o      = `ysyx_22040210_False;
                    axicache_axi_rready_o   = `ysyx_22040210_False;
                    axicache_axi_raddr_o    = `ysyx_22040210_ZeroWord;
                    axicache_axi_rlen_o     = 4'b0011;
                    axicache_axi_rsel_o     = 8'b11111111;
            end
                
        endcase
    end
    //state ff output
    always @(posedge clk ) begin
        if(rst)begin
            axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
            axicache_inst_rvalid_o <= `ysyx_22040210_False;
            axicache_data_rvalid_o <= `ysyx_22040210_False;
            axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
        end else  begin
            case (rstate_current)
            `ysyx_22040210_CACHEAXI_RIDLE:begin
                axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                axicache_inst_rvalid_o <= `ysyx_22040210_False;
                axicache_data_rvalid_o <= `ysyx_22040210_False;
                axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
            end
            `ysyx_22040210_CACHEAXI_UNDCACHEREAD:begin
                axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                axicache_inst_rvalid_o <= `ysyx_22040210_False;
                axicache_data_rvalid_o <= `ysyx_22040210_False;
                if (axicache_axi_rresp_i == `ysyx_22040210_True ) begin
                    axicache_uncachedata_rvalid_o <= `ysyx_22040210_True;
                end else begin
                    axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
                end
            end
            `ysyx_22040210_CACHEAXI_DCACHEREAD:begin
                axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                axicache_inst_rvalid_o <= `ysyx_22040210_False;
                axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
                if (axicache_axi_rresp_i == `ysyx_22040210_True && cache_rcount_r == 4'h3) begin
                    axicache_data_rvalid_o <= `ysyx_22040210_True;
                end else begin
                    axicache_data_rvalid_o <= `ysyx_22040210_False;
                end
            end
            `ysyx_22040210_CACHEAXI_UNICACHEREAD:begin
                axicache_inst_rvalid_o <= `ysyx_22040210_False;
                axicache_data_rvalid_o <= `ysyx_22040210_False;
                axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
                if (axicache_axi_rresp_i == `ysyx_22040210_True ) begin
                    axicache_uncacheinst_rvalid_o <= `ysyx_22040210_True;
                end else begin
                    axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                end
            end
            `ysyx_22040210_CACHEAXI_ICACHEREAD:begin
                axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                axicache_data_rvalid_o <= `ysyx_22040210_False;
                axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
                if (axicache_axi_rresp_i == `ysyx_22040210_True && cache_rcount_r == 4'h3) begin
                    axicache_inst_rvalid_o <= `ysyx_22040210_True;
                end else begin
                    axicache_inst_rvalid_o <= `ysyx_22040210_False;
                end
            end
            default: begin 
                axicache_uncacheinst_rvalid_o <= `ysyx_22040210_False;
                axicache_inst_rvalid_o <= `ysyx_22040210_False;    
                axicache_data_rvalid_o <= `ysyx_22040210_False;
                axicache_uncachedata_rvalid_o <= `ysyx_22040210_False;
            end  
            endcase
        end
    end

    //icache/dcache read count for bust transaction 
	always@(posedge clk)begin
        if(rst)
            cache_rcount_r <= 3'h0;
		else if(rstate_current == `ysyx_22040210_CACHEAXI_RIDLE)
			cache_rcount_r <= 3'h0;
		else if(axicache_axi_rresp_i == `ysyx_22040210_True)
			cache_rcount_r <= cache_rcount_r + 3'h1;
		else	
			cache_rcount_r <= cache_rcount_r;
	end    



	always@(posedge clk)begin
	   if(rst)begin
	       axicache_inst_rdata_o <= `ysyx_22040210_ZeroWord;
	   end else if(axicache_axi_rresp_i == `ysyx_22040210_True)begin	       
           case(cache_rcount_r)
               2'h0:	axicache_inst_rdata_o[63:0]      <= axicache_axi_rdata_i;
               2'h1:	axicache_inst_rdata_o[127:64]    <= axicache_axi_rdata_i;
               2'h2:	axicache_inst_rdata_o[191:128]   <= axicache_axi_rdata_i;
               2'h3:	axicache_inst_rdata_o[255:192]   <= axicache_axi_rdata_i;
               default:	axicache_inst_rdata_o <= axicache_inst_rdata_o;
           endcase
		end
	end
	always@(posedge clk)begin
        if(rst)begin
	        axicache_data_rdata_o <= `ysyx_22040210_ZeroWord;
	   end else if(axicache_axi_rresp_i)begin
            case(cache_rcount_r)
               2'h0:	axicache_data_rdata_o[63:0]      <= axicache_axi_rdata_i;
               2'h1:	axicache_data_rdata_o[127:64]    <= axicache_axi_rdata_i;
               2'h2:	axicache_data_rdata_o[191:128]   <= axicache_axi_rdata_i;
               2'h3:	axicache_data_rdata_o[255:192]   <= axicache_axi_rdata_i;
               default:	axicache_data_rdata_o <= axicache_data_rdata_o;
            endcase
		end
	end
    wire [`ysyx_22040210_InstBus] tempuncacherdata [1:0];
    assign tempuncacherdata[0] = axicache_axi_rdata_i[31:0];
    assign tempuncacherdata[1] = axicache_axi_rdata_i[63:32];
	//uncached rdata_o
	always@(posedge clk)begin
	    if(rst)begin
	        axicache_uncacheinst_rdata_o <= `ysyx_22040210_ZeroWord;
	        axicache_uncachedata_rdata_o <= `ysyx_22040210_ZeroWord;
	    end else begin	    
	        if(axicache_axi_rresp_i && rstate_current == `ysyx_22040210_CACHEAXI_UNDCACHEREAD)begin
	            axicache_uncachedata_rdata_o <= axicache_axi_rdata_i; 
            end else if(axicache_axi_rresp_i && rstate_current == `ysyx_22040210_CACHEAXI_UNICACHEREAD)begin
	            axicache_uncacheinst_rdata_o <= tempuncacherdata[axicache_uncacheinst_araddr_r[2]];
            end else begin
                axicache_uncachedata_rdata_o <= axicache_uncachedata_rdata_o;
                axicache_uncacheinst_rdata_o <= axicache_uncacheinst_rdata_o;
            end
	    end
	end
    /******************************AXI WRITE***********************************/

    // wstate update
    always @(posedge clk ) begin
        if (rst) begin
            wstate_current <= `ysyx_22040210_CACHEAXI_RIDLE;
        end else begin
            wstate_current <= wstate_next;
        end
    end

    always @(*) begin
        if (rst)begin
            wstate_next = `ysyx_22040210_CACHEAXI_WIDLE;
        end else begin
            case (wstate_current)
            `ysyx_22040210_CACHEAXI_WIDLE : begin
                if (axicache_uncachedata_wen_i == `ysyx_22040210_True) begin
                    wstate_next = `ysyx_22040210_CACHEAXI_UNDCACHEWRITE;
                end else if(axicache_data_wen_i == `ysyx_22040210_True)begin
                    wstate_next = `ysyx_22040210_CACHEAXI_DCACHEWRITE;
                end else begin
                    wstate_next = `ysyx_22040210_CACHEAXI_WIDLE;
                end
            end
            `ysyx_22040210_CACHEAXI_UNDCACHEWRITE : begin
                if (axicache_axi_wresp_i == `ysyx_22040210_True) begin
                    wstate_next = `ysyx_22040210_CACHEAXI_WIDLE;
                end else begin
                    wstate_next = `ysyx_22040210_CACHEAXI_UNDCACHEWRITE;
                end
            end
            `ysyx_22040210_CACHEAXI_DCACHEWRITE : begin
                if (axicache_axi_wresp_i == `ysyx_22040210_True && cache_wcount_r == 4'h3) begin
                    wstate_next = `ysyx_22040210_CACHEAXI_WIDLE;
                end else begin
                    wstate_next = `ysyx_22040210_CACHEAXI_DCACHEWRITE;
                end
            end
            default: wstate_next = `ysyx_22040210_CACHEAXI_WIDLE;
            endcase
        end
    end
    always @(*) begin
        case (wstate_current)
            `ysyx_22040210_CACHEAXI_WIDLE : begin
                axicache_axi_wlen_o = 4'b0011;
                axicache_axi_wen_o = `ysyx_22040210_False;
                axicache_axi_wvaild_o = `ysyx_22040210_False;
                axicache_axi_waddr_o = `ysyx_22040210_ZeroWord;
                axicache_axi_wlast_o = `ysyx_22040210_False;
                axicache_axi_wsel_o           = 8'b11111111;
                
            end
            `ysyx_22040210_CACHEAXI_UNDCACHEWRITE : begin
                axicache_axi_wlen_o = 4'b0;
                axicache_axi_wen_o = `ysyx_22040210_True;
                axicache_axi_wvaild_o = `ysyx_22040210_True;
                axicache_axi_waddr_o = axicache_uncachedata_awaddr_r;
                axicache_axi_wlast_o = `ysyx_22040210_True;
                axicache_axi_wsel_o           = axicache_axi_wsel_r;
            end
            `ysyx_22040210_CACHEAXI_DCACHEWRITE : begin
                axicache_axi_wlen_o = 4'b0011;
                axicache_axi_wen_o = `ysyx_22040210_True;
                axicache_axi_wvaild_o = `ysyx_22040210_True;
                axicache_axi_waddr_o = {axicache_data_awaddr_r[63:5],cache_wcount_r,3'b0};
                axicache_axi_wsel_o           = 8'b11111111;
                if (cache_wcount_r == 2'h3) begin
                    axicache_axi_wlast_o = `ysyx_22040210_True;
                end else begin
                    axicache_axi_wlast_o = `ysyx_22040210_False;
            end
                end
                
            default: begin
                axicache_axi_wlen_o = 4'b0011;
                axicache_axi_wen_o = `ysyx_22040210_False;
                axicache_axi_wvaild_o = `ysyx_22040210_False;
                axicache_axi_waddr_o = `ysyx_22040210_ZeroWord;
                axicache_axi_wlast_o = `ysyx_22040210_False;
                axicache_axi_wsel_o           = 8'b11111111;
            end
        endcase
    end
	//DCache
	always@(posedge clk)begin
        if(rst)begin
            axicache_data_bvalid_o        <= `ysyx_22040210_False;   
            axicache_uncachedata_bvalid_o <= `ysyx_22040210_False;
        end else begin
            if(wstate_current == `ysyx_22040210_CACHEAXI_UNDCACHEWRITE && axicache_axi_wresp_i == `ysyx_22040210_True )begin
	            axicache_uncachedata_bvalid_o <= `ysyx_22040210_True;
                axicache_data_bvalid_o        <= `ysyx_22040210_False; 
            end else if (wstate_current == `ysyx_22040210_CACHEAXI_DCACHEWRITE && axicache_axi_wresp_i == `ysyx_22040210_True && cache_wcount_r == 2'h3)begin
                axicache_data_bvalid_o        <= `ysyx_22040210_True;
                axicache_uncachedata_bvalid_o <= `ysyx_22040210_False;
            end else begin
                axicache_data_bvalid_o        <= `ysyx_22040210_False;   
                axicache_uncachedata_bvalid_o <= `ysyx_22040210_False;
            end    
        end
	end

    always @(*) begin
        case(cache_wcount_r)
        2'h0:	begin 
                if (wstate_current == `ysyx_22040210_CACHEAXI_UNDCACHEWRITE ) begin
                    axicache_axi_wdata_o = axicache_uncachedata_wdata_r;
                end else begin
                    axicache_axi_wdata_o = axicache_data_wdata_r[63:0];
                end    
        end 
		2'h1:	axicache_axi_wdata_o = axicache_data_wdata_r[127:64];
		2'h2:	axicache_axi_wdata_o = axicache_data_wdata_r[191:128];
		2'h3:	axicache_axi_wdata_o = axicache_data_wdata_r[255:192];
        default:	axicache_axi_wdata_o = `ysyx_22040210_ZeroWord;
        endcase
    end
    always@(posedge clk)begin
		if(wstate_current == `ysyx_22040210_CACHEAXI_WIDLE)begin
            cache_wcount_r <= 2'h0;
        end else if(wstate_current == `ysyx_22040210_CACHEAXI_DCACHEWRITE && axicache_axi_wresp_i == `ysyx_22040210_True)begin
            cache_wcount_r <= cache_wcount_r + 2'h1;
        end else begin
            cache_wcount_r <= cache_wcount_r;
        end		
	end



 endmodule
