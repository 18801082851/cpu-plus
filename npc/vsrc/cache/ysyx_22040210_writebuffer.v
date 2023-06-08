`include "../npc/vsrc/include/ysyx_22040210_define.v"
 module ysyx_22040210_writebuffer (
    input   wire                                        clk,
    input   wire                                        rst,
    
    // Interface with DCache Pipeline
    //input   wire                                        buffer_read_req_i,
    input   wire                                        buffer_write_req_i,
    input   wire   [`ysyx_22040210_CacheAddrBus]        buffer_waddr_i,
    input   wire   [`ysyx_22040210_CacheAddrBus]        buffer_raddr_i,
    input   wire   [`ysyx_22040210_CacheWayBUS]         buffer_wdata_i,         //  read instruction
    output  reg    [`ysyx_22040210_CacheWayBUS]         buffer_rdata_o,         //  pc ,address of read instruction
    output  wire                                        bufferread_hit_o,       //  the vaild sign of read instruction
    output  wire                                        bufferwrite_hit_o,
    output  reg    [1:0]                                buffer_state_o,
    
    // Interface with Cache Interface
    input   wire                                        buffer_bvaild_i,
    output  wire                                        buffer_wen_o,
    output  wire   [`ysyx_22040210_CacheWayBUS]         buffer_wdata_o,
    output  wire   [`ysyx_22040210_CacheAddrBus]        buffer_awaddr_o
);

    reg [`ysyx_22040210_CacheWayBUS]    buffer_data [7:0]; //deepth is 8 
    reg [`ysyx_22040210_CacheAddrBus]   buffer_addr [7:0]; //deepth is 8 
	wire writehit_head_w;
    //head tail
    reg [2:0]buffer_tail_r;     //indicate the new write position
    reg [2:0]buffer_head_r;     //indicate the sendind data position
    reg [7:0]buffer_valid_r;    //buffer vaild
    reg [7:0]bufferread_hit_r;
    wire[7:0]bufferwrite_hit_w;
       //reg[7:0]bufferwrite_hit_w;
//***********************Buffer Structure**********************//                                                                            : 1'b1;
    
    
	//Adress alias
	wire [`ysyx_22040210_CacheAddrBus]buffer_awaddr_w   = {buffer_waddr_i[63:5],5'h0};
	wire [`ysyx_22040210_CacheAddrBus]buffer_araddr_w   = {buffer_raddr_i[63:5],5'h0};
    	
    // buffer state judgement
    always @(*) begin
        if(rst)begin
            buffer_state_o = `ysyx_22040210_BUFFER_EMPTY;
        end else if(buffer_valid_r[buffer_tail_r] != `ysyx_22040210_True 
                    && buffer_valid_r[buffer_head_r] == `ysyx_22040210_True)begin
            buffer_state_o = `ysyx_22040210_BUFFER_WORK;
        end else if (buffer_valid_r[buffer_tail_r] == `ysyx_22040210_True 
                    && buffer_valid_r[buffer_head_r] == `ysyx_22040210_True) begin
            buffer_state_o = `ysyx_22040210_BUFFER_FULL;
        end else begin
            buffer_state_o = `ysyx_22040210_BUFFER_EMPTY;
        end
    end	


    
    assign writehit_head_w = bufferwrite_hit_w[buffer_head_r] && buffer_write_req_i;
	//write collision for a Writr Cache hit buffer head when a write request 
    //send to bus interface.
	reg buffer_rewrite_r;
	always@(posedge clk) begin
		if(rst)
			buffer_rewrite_r <= `ysyx_22040210_False;
		else if(buffer_bvaild_i)//write success (prior to write collision)
			buffer_rewrite_r <= `ysyx_22040210_False;
		else if(writehit_head_w)//write collision
			buffer_rewrite_r <= `ysyx_22040210_True;
		else
			buffer_rewrite_r <=  buffer_rewrite_r;
	end

    always@(posedge clk)begin
        if(rst)begin
            buffer_head_r <= 'b0;
            buffer_tail_r <= 'b0;
			buffer_valid_r<= 'b0;
        end else begin
            if( buffer_bvaild_i == `ysyx_22040210_True && !buffer_rewrite_r && !writehit_head_w)begin
			//不重写
			    buffer_valid_r[buffer_head_r] <= `ysyx_22040210_False;
                buffer_head_r <= buffer_head_r + 3'b1;
		    end // else retain 
            if(buffer_write_req_i == `ysyx_22040210_True && bufferwrite_hit_o == `ysyx_22040210_BufferNotHit)begin //增加写入，入队
                buffer_tail_r <= buffer_tail_r + 3'b1;
			    buffer_valid_r[buffer_tail_r] <= `ysyx_22040210_True;
		end // else retain 
        end
        
    end
    
//*************************************************************************************************//
//Read Hit
	
	assign bufferread_hit_o = |bufferread_hit_r;
    genvar i;
    generate
       for ( i=0 ;i<8 ;i=i+1 ) begin : writebufferreadhitloop
            always @(posedge clk ) begin
                if(rst)begin
                    bufferread_hit_r[i] <= 1'b0;
                end else begin
                    bufferread_hit_r[i] <= ((buffer_araddr_w == buffer_addr[i]) && buffer_valid_r[i]);
                end    
            end
       end
    endgenerate
	always@(*)begin
        case(bufferread_hit_r)
            8'b00000001: buffer_rdata_o = buffer_data[0];
            8'b00000010: buffer_rdata_o = buffer_data[1];
            8'b00000100: buffer_rdata_o = buffer_data[2];
            8'b00001000: buffer_rdata_o = buffer_data[3];
            8'b00010000: buffer_rdata_o = buffer_data[4];
            8'b00100000: buffer_rdata_o = buffer_data[5];
            8'b01000000: buffer_rdata_o = buffer_data[6];
            8'b10000000: buffer_rdata_o = buffer_data[7];
            default:  buffer_rdata_o = `ysyx_22040210_ZeroWord;
        endcase
	end


	

    assign bufferwrite_hit_o = |bufferwrite_hit_w;
    
    generate
       for ( i=0 ;i<8 ;i=i+1 ) begin: writebufferwritehitloop
            // always @(posedge clk ) begin
            //     bufferwrite_hit_w[i] <= ((buffer_awaddr_w == buffer_addr[i]) && buffer_valid_r[i]);
            // end
            assign bufferwrite_hit_w[i] = ((buffer_awaddr_w == buffer_addr[i]) && buffer_valid_r[i]);
       end
    endgenerate

    //Write hit include write colliosion
    always@(posedge clk)begin
        if(rst)begin
            buffer_data[0] <= `ysyx_22040210_ZeroWord;
			buffer_data[1] <= `ysyx_22040210_ZeroWord;
			buffer_data[2] <= `ysyx_22040210_ZeroWord;
			buffer_data[3] <= `ysyx_22040210_ZeroWord;
			buffer_data[4] <= `ysyx_22040210_ZeroWord;
			buffer_data[5] <= `ysyx_22040210_ZeroWord;
			buffer_data[6] <= `ysyx_22040210_ZeroWord;
			buffer_data[7] <= `ysyx_22040210_ZeroWord;
            buffer_addr[0] <= `ysyx_22040210_ZeroWord;
			buffer_addr[1] <= `ysyx_22040210_ZeroWord;
			buffer_addr[2] <= `ysyx_22040210_ZeroWord;
			buffer_addr[3] <= `ysyx_22040210_ZeroWord;
			buffer_addr[4] <= `ysyx_22040210_ZeroWord;
			buffer_addr[5] <= `ysyx_22040210_ZeroWord;
			buffer_addr[6] <= `ysyx_22040210_ZeroWord;
			buffer_addr[7] <= `ysyx_22040210_ZeroWord;
        end else if(buffer_write_req_i)begin
			case(bufferwrite_hit_w)
				8'b00000001: buffer_data[0] <= buffer_wdata_i;
				8'b00000010: buffer_data[1] <= buffer_wdata_i;
				8'b00000100: buffer_data[2] <= buffer_wdata_i;
				8'b00001000: buffer_data[3] <= buffer_wdata_i;
				8'b00010000: buffer_data[4] <= buffer_wdata_i;
				8'b00100000: buffer_data[5] <= buffer_wdata_i;
				8'b01000000: buffer_data[6] <= buffer_wdata_i;
				8'b10000000: buffer_data[7] <= buffer_wdata_i;
				default:begin//normal
					buffer_data[buffer_tail_r] <= buffer_wdata_i;
					buffer_addr[buffer_tail_r] <= buffer_awaddr_w;
				end
			endcase
        end//else keep same
    end//always


//***********************Buffer Interface**********************//
    //buffer_bvaild_i is tell fifo's data is already send because buffer's deepth is 1
    assign buffer_wen_o = (buffer_state_o == `ysyx_22040210_BUFFER_EMPTY)? 1'b0
                                                                         :(buffer_bvaild_i)? 1'b0 : 1'b1;
    assign buffer_awaddr_o  =     buffer_addr   [buffer_head_r];
    assign buffer_wdata_o   =     buffer_data   [buffer_head_r];

    
 endmodule
