`include "../npc/vsrc/include/ysyx_22040210_define.v"
module axi_slave_interface(
    //Interface with AXI Gloable Chanal   
    input        wire                               clk,//ACLK
    input        wire                               rst,//ARESETn
    //Interface with SRAM
    output       wire                               sram_wen,   
    output       wire                               sram_ren,      
    output       wire     [63:0]                    sram_wdata,          
    output       wire     [63:0]                    sram_waddr,
        output       wire     [63:0]                    sram_raddr,
    output	     reg      [7:0]				        sram_wcsn,	//四片sram片选 
    output	     reg      [7:0]				        sram_rcsn,	//四片sram片选                    
    input        wire     [7:0]                     sram_rdata0,      
    input        wire     [7:0]                     sram_rdata1,
    input        wire     [7:0]                     sram_rdata2,
    input        wire     [7:0]                     sram_rdata3,
    input        wire     [7:0]                     sram_rdata4,
    input        wire     [7:0]                     sram_rdata5,
    input        wire     [7:0]                     sram_rdata6,
    input        wire     [7:0]                     sram_rdata7,
    //Interface with AXI Adress Read            Chanal
    input        wire     [10-1:0]        axi_ar_id_i,
    input        wire     [64-1:0]      axi_ar_addr_i,
    input        wire     [7:0]                     axi_ar_len_i,
    input        wire     [2:0]                     axi_ar_size_i,
    input        wire     [1:0]                     axi_ar_burst_i,
    input        wire                               axi_ar_lock_i,
    input        wire     [3:0]                     axi_ar_cache_i,
    input        wire     [2:0]                     axi_ar_prot_i,
    input        wire     [3:0]                     axi_ar_qos_i,
    input        wire     [3:0]                     axi_ar_region_i,
    input        wire     [10-1:0]      axi_ar_user_i,
    input        wire                               axi_ar_valid_i, 
    output       reg                                axi_ar_ready_o,  
    //Interface with AXI Date   Read            Chanal
    //output       reg      [10-1:0]        axi_r_id_o,
    output       reg      [64-1:0]      axi_r_data_o,
    output       reg      [1:0]                     axi_r_resp_o,
    output       reg                                axi_r_last_o,
    //output       reg      [10-1:0]      axi_r_user_o,
    output       reg                                axi_r_valid_o,
    input        wire                               axi_r_ready_i,
    //Interface with AXI Adress Write           Chanal
    input      wire       [3:0]                     axi_aw_id_i,
    input      wire       [64-1:0]      axi_aw_addr_i,
    input      wire       [7:0]                     axi_aw_len_i,
    input      wire       [2:0]                     axi_aw_size_i,
    input      wire       [1:0]                     axi_aw_burst_i,
    input      wire                                 axi_aw_lock_i,
    input      wire       [3:0]                     axi_aw_cache_i,
    input      wire       [2:0]                     axi_aw_prot_i,
    input      wire       [3:0]                     axi_aw_qos_i,
    input      wire       [3:0]                     axi_aw_region_i,
    input      wire       [10-1:0]      axi_aw_user_i,
    input      wire                                 axi_aw_valid_i, 
    output     reg                                  axi_aw_ready_o,  
    //Interface with AXI Date   Write           Chanal
    input      wire       [64-1:0]      axi_w_data_i,
    input      wire       [64/8-1:0]    axi_w_strb_i,
    input      wire                                 axi_w_last_i,
    input      wire       [10-1:0]      axi_w_user_i,
    input      wire                                 axi_w_valid_i,
    output     reg                                  axi_w_ready_o,
    //Interface with AXI Date   Write Response  Chanal
    //output     reg        [10-1:0]        axi_b_id_o,
    output     reg        [1:0]                     axi_b_resp_o,
    //output     reg        [10-1:0]      axi_b_user_o,
    output     reg                                  axi_b_valid_o,
    input      wire                                 axi_b_ready_i
);
    //=========================================================
    //中间信号
	reg					    wen;
	reg [2:0]  			    awsize;
	reg [63:0]	    		awaddr;
	reg [63:0]	    		wdata;
    wire [63:0]	    		sram_rdata;  
	reg					    ren;
	reg [2:0]   			arsize;
	reg [63:0]	    		araddr;



  
    //====================Read==============================
    reg	[63:0]	araddr_start;	//起始地址
	reg	[63:0]	araddr_stop;	//终止地址（不加起始地址）
	reg	[15:0]	araddr_cnt;		//地址计数器
	reg	[8:0]	araddr_step;	//地址步进长度
	reg			araddr_cnt_flag;//地址累加标志
	reg   [7:0]	arlen;			//awlen
    always @(posedge clk ) begin
        if(rst)begin
            axi_ar_ready_o <=   1'b0;
        end else if ((axi_ar_valid_i)&&(!axi_ar_ready_o)) begin
            axi_ar_ready_o <=   1'b1;
        end else begin
            axi_ar_ready_o <=   1'b0;
        end
        
    end

    always @(posedge clk ) begin
        if(rst)begin
            axi_r_valid_o <= 1'b0;   
        end else if (axi_ar_ready_o)begin
            axi_r_valid_o <= 1'b1;   
        end else if (axi_r_last_o)begin
            axi_r_valid_o <= 1'b0;   
        end else begin
            axi_r_valid_o <= axi_r_valid_o;   
        end
        
    end

    always @(posedge clk ) begin
        if(rst)begin
            araddr_start <= 'b0;
            arlen        <= 'b0;
            arsize       <= 'b0;
        end else if (((axi_ar_valid_i)&&(!axi_ar_ready_o)))begin
            araddr_start <= axi_ar_addr_i;
            arlen        <= axi_ar_len_i;
            arsize       <= axi_ar_size_i;
        end else begin
            araddr_start <= araddr_start;
            arlen        <= arlen;
            arsize       <= arsize;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            axi_r_last_o <= 'b0;
        end else if (axi_r_ready_i&&(araddr_cnt==araddr_stop)) begin
            axi_r_last_o <= 'b1;
        end else begin
            axi_r_last_o <= 'b0;
        end
    end

    always @(*) begin
		case(arsize)
			3'h0:	araddr_step = 16'h1;
			3'h1:	araddr_step = 16'h2;
			3'h2:	araddr_step = 16'h4;
            3'h3:	araddr_step = 16'h8;
			default:araddr_step = 16'h8;
		endcase
	end

	always @(*) begin
		case(arsize)
			3'h0:	araddr_stop = {8'h0,arlen};
			3'h1:	araddr_stop = {7'h0,arlen,1'b0};
			3'h2:	araddr_stop = {6'h0,arlen,2'b0};
            3'h3:	araddr_stop = {5'h0,arlen,3'b0};
			default:araddr_stop = {8'h0,arlen};
		endcase
	end

    always @(posedge clk ) begin
        if(rst)begin
            araddr_cnt_flag	<= 'b0;
        end else if ((axi_ar_valid_i) && (axi_ar_len_i != 'b0) ) begin
            araddr_cnt_flag	<= 'b1;
        end else if (araddr_cnt==araddr_stop)begin
            araddr_cnt_flag	<= 'b0;
        end else begin
            araddr_cnt_flag	<= araddr_cnt_flag;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            araddr_cnt <= 'b0;
        end else if (araddr_cnt_flag) begin
            araddr_cnt <= araddr_cnt + araddr_step;
        end else begin
            araddr_cnt <= 'b0;
        end
    end

    always @(*) begin
        araddr = araddr_start + araddr_cnt;
        axi_r_resp_o = 'b0;
    end 

    always @(posedge clk ) begin
        if(rst)begin
            ren	<= 'b0;
        end else if((axi_ar_valid_i)&&(!axi_ar_ready_o)&&(araddr_cnt==arlen))begin
            ren	<= 'b1;
        end else if ((axi_ar_valid_i)&&(!axi_ar_ready_o)||axi_ar_ready_o)begin
            ren	<= 'b1;
        end else begin
            ren	<= 0;
        end
    end
    always @(posedge clk ) begin
        if(rst)begin
            axi_r_data_o <= 0;
        end else if(axi_r_valid_o) begin
            axi_r_data_o <= sram_rdata;
        end else begin
            axi_r_data_o <= axi_r_data_o;
        end
    end
    //========================Write==============================

    reg	[63:0]	awaddr_start;	//起始地址
	reg	[63:0]	awaddr_stop;	//终止地址（不加起始地址）
	reg	[63:0]	awaddr_cnt;		//地址计数器
	reg	[8:0]	awaddr_step;	//地址步进长度
	reg			awaddr_cnt_flag;//地址累加标志
	reg   [7:0]	awlen;			//awlen

    always @(posedge clk ) begin
        if(rst)begin
            axi_aw_ready_o <= 1'b0;
        end else if ((axi_aw_valid_i)&&(!axi_aw_ready_o))begin
            axi_aw_ready_o <= 1'b1;
        end else begin
            axi_aw_ready_o <= 1'b0;
        end
    end


    always @(posedge clk ) begin
        if(rst)begin
            axi_w_ready_o <= 1'b0;
        end else if(axi_aw_ready_o)begin
            axi_w_ready_o <= 1'b1;
        end else if(axi_w_valid_i&&axi_w_last_i)begin
            axi_w_ready_o <= 1'b0;
        end else begin
            axi_w_ready_o <= 1'b0;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            axi_b_valid_o <= 1'b0;
        end else if((!axi_b_valid_o)&&axi_w_last_i)begin
            axi_b_valid_o <= 1'b1;
        end else begin
            axi_b_valid_o <= 1'b0;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            awaddr_start <= 'b0;
            awsize       <= 'b0;
            awlen        <= 'b0;
        end else if(axi_aw_ready_o)begin
            awaddr_start <= axi_aw_addr_i;
            awsize       <= axi_aw_size_i;
            awlen        <= axi_aw_len_i;
        end else begin
            awaddr_start <= awaddr_start;
            awsize       <= awsize;
            awlen        <= awlen;
        end
    end

    always @(*)  begin
		case(awsize)
			3'h0:	awaddr_step = 16'h1;
			3'h1:	awaddr_step = 16'h2;
			3'h2:	awaddr_step = 16'h4;
            3'h3:	awaddr_step = 16'h8;
			default:awaddr_step = 16'h1;
		endcase
	end

	//assign	awaddr_stop = awlen*awaddr_step;	//计算步进次数
	always@(*) begin
		case(awsize)
			3'h0:	awaddr_stop = {8'h0,awlen};
			3'h1:	awaddr_stop = {7'h0,awlen,1'b0};
			3'h2:	awaddr_stop = {6'h0,awlen,2'b0};
            3'h3:	awaddr_stop = {5'h0,awlen,3'b0};
			default:awaddr_stop = {8'h0,awlen};
		endcase
	end

    always @(posedge clk ) begin
        if(rst)begin
            awaddr_cnt_flag	<= 'b0;
        end else if ((axi_aw_valid_i) && (axi_aw_len_i != 'b0) ) begin
            awaddr_cnt_flag	<= 'b1;
        end else if (awaddr_cnt==awaddr_stop)begin
            awaddr_cnt_flag	<= 'b0;
        end else begin
            awaddr_cnt_flag	<= awaddr_cnt_flag;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            awaddr_cnt <= 'b0;
        end else if (awaddr_cnt_flag) begin
            awaddr_cnt <= awaddr_cnt + awaddr_step;
        end else begin
            awaddr_cnt <= 'b0;
        end
    end

    always @(posedge clk ) begin
        if(rst)begin
            wen <= 1'b0;
        end else if(axi_aw_ready_o)begin
            wen <= 1'b1;
        end else if(axi_w_last_i)begin
            wen <= 1'b0;
        end else begin
            wen <= wen;
        end
    end

	always @(*) begin
		case(awsize)
			3'b000:	wdata = {56'b0,axi_w_data_i[7:0]};	//8bit
			3'b001:	wdata = {48'b0,axi_w_data_i[15:0]};//16bit
			3'b010:	wdata = {32'b0,axi_w_data_i[31:0]};		//32bit
            3'b011:	wdata = axi_w_data_i;		//32bit
			default:wdata = axi_w_data_i;
		endcase
	end
    // always @(posedge clk ) begin
    //     if (conditions) begin
    //         awaddr <=0;
    //     end else begin
    //         awaddr 	     <=  awaddr_start+awaddr_cnt;
    //     end
    // end
    always@(*)begin
        awaddr 	     =  awaddr_start+awaddr_cnt;
        axi_b_resp_o = 1'b0;
    end


  //=========================================================
    //sram信号
	wire [63:0]	    		sram_addr;	//读写地址
	wire [2:0]				sram_size;	//读写数据宽度
 
	//=========================================================
	//sram信号生成
	assign 	sram_wen 	= wen? 0 : 1;				//读写使能：0为写，1为读；默认为1
	assign 	sram_ren 	= ren? 0 : 1;				//读写使能：0为写，1为读；默认为1
	//=========================================================
	//读写mux

    assign	sram_waddr 	= awaddr;//读写地址
	assign	sram_raddr 	= araddr;//读写地址
	wire 	[2:0]sram_rsize	= arsize;//读写数据宽度
	wire 	[2:0]sram_wsize  = awsize;
	//=========================================================
	//片选
	always@(*) begin
		if(sram_rsize == 3'b000)begin		//8bit
			case(sram_raddr[2:0])
				3'b000: 	sram_rcsn = 8'b11111110;
        		3'b001: 	sram_rcsn = 8'b11111101;
        		3'b010: 	sram_rcsn = 8'b11111011;
        		3'b011: 	sram_rcsn = 8'b11110111;
                3'b100: 	sram_rcsn = 8'b11101111;
                3'b101: 	sram_rcsn = 8'b11011111;
                3'b110: 	sram_rcsn = 8'b10111111;
                3'b111: 	sram_rcsn = 8'b01111111;
				default:sram_rcsn = 8'b11111111;
			endcase
		end
		else if(sram_rsize == 3'b001)begin	//16bit
			case(sram_raddr[2:1])
				2'b00:	sram_rcsn = 8'b11111100;
				2'b01:	sram_rcsn = 8'b11110011;
                2'b10:	sram_rcsn = 8'b11001111;
                2'b11:	sram_rcsn = 8'b00111111;
				default:sram_rcsn = 8'b11111111;
			endcase
		end
		else if(sram_rsize == 3'b010) begin //32bit
            case(sram_raddr[2])
                1'b0:   sram_rcsn = 8'b11110000;
                1'b1:   sram_rcsn = 8'b00001111;
                default:sram_rcsn = 8'b11111111;
            endcase
        end else if (sram_rsize == 3'b011)begin 
            sram_rcsn = 8'b00000000;		
        end else begin
            sram_rcsn = 8'b11111111;
        end
	end
	always@(*) begin
		if(sram_wsize == 3'b000)begin		//8bit
			case(sram_waddr[2:0])
				3'b000: 	sram_wcsn = 8'b11111110;
        		3'b001: 	sram_wcsn = 8'b11111101;
        		3'b010: 	sram_wcsn = 8'b11111011;
        		3'b011: 	sram_wcsn = 8'b11110111;
                3'b100: 	sram_wcsn = 8'b11101111;
                3'b101: 	sram_wcsn = 8'b11011111;
                3'b110: 	sram_wcsn = 8'b10111111;
                3'b111: 	sram_wcsn = 8'b01111111;
				default:sram_wcsn = 8'b11111111;
			endcase
		end
		else if(sram_wsize == 3'b001)begin	//16bit
			case(sram_waddr[2:1])
				2'b00:	sram_wcsn = 8'b11111100;
				2'b01:	sram_wcsn = 8'b11110011;
                2'b10:	sram_wcsn = 8'b11001111;
                2'b11:	sram_wcsn = 8'b00111111;
				default:sram_wcsn = 8'b11111111;
			endcase
		end
		else if(sram_wsize == 3'b010) begin //32bit
            case(sram_waddr[2])
                1'b0:   sram_wcsn = 8'b11110000;
                1'b1:   sram_wcsn = 8'b00001111;
                default:sram_wcsn = 8'b11111111;
            endcase
        end else if (sram_wsize == 3'b011)begin 
            sram_wcsn = 8'b00000000;		
        end else begin
            sram_wcsn = 8'b11111111;
        end
	end
	//=========================================================
	//读写地址、数据
	//assign 	sram_addr_out = sram_addr;
	assign 	sram_wdata 	= wdata;
	assign  sram_rdata 	= {sram_rdata7, sram_rdata6, sram_rdata5, sram_rdata4,sram_rdata3, sram_rdata2, sram_rdata1, sram_rdata0} ;


endmodule
