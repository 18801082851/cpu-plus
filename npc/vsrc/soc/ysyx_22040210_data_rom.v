`include "../npc/vsrc/include/ysyx_22040210_define.v"
  module ysyx_22040210_data_rom(
	input	wire									 clk,
	input	wire								  	 rst,
    input   wire                                     ce,
	//Interface with MemBlock
    input   wire                                     memwen_i,
    input   wire                                     memren_i,
    input   wire     [`ysyx_22040210_StoreSelBus]    memwe_i,
    input   wire     [`ysyx_22040210_MemAddrBus]     memwaddr_i,
    input   wire     [`ysyx_22040210_MemAddrBus]     memraddr_i,
    input   wire     [`ysyx_22040210_MemBUS]         memwdata_i, 
    output  reg      [`ysyx_22040210_MemBUS]         memrdata_o,
    output  reg                                      memrdatavaild_o,
    output  reg                                      memwdatavaild_o
    
 );
 
	import "DPI-C" function void pmem_read(input longint inst_raddr, output longint inst);
    import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
	reg [63:0] data_line1;
    reg [63:0] data_line2;
    reg [`ysyx_22040210_StoreSelBus] data_mask;
    reg [`ysyx_22040210_MemAddrBus]  data_addr;
	always @ (posedge clk) begin
		if (rst) begin
			memrdata_o      <= `ysyx_22040210_ZeroWord;
            memrdatavaild_o <= `ysyx_22040210_MemReadnVaild;
		end else if (   ce  ==  `ysyx_22040210_ChipDisable) begin
			memrdata_o      <=  `ysyx_22040210_ZeroWord;
            memrdatavaild_o <=  `ysyx_22040210_MemReadnVaild;
		end else if(memren_i ==  `ysyx_22040210_MemReadEnable) begin
			pmem_read(memraddr_i, data_line1);
            memrdata_o      <= data_line1;
            memrdatavaild_o <= `ysyx_22040210_MemReadVaild;
        end else begin
            memrdata_o      <= `ysyx_22040210_ZeroWord;
            memrdatavaild_o <= `ysyx_22040210_MemReadnVaild;
        end
	end

    always @ (posedge clk) begin
		if (rst) begin
            memwdatavaild_o <=  `ysyx_22040210_MemWritenVaild;
            data_line2      <=  `ysyx_22040210_ZeroWord;
            data_mask       <=  `ysyx_22040210_StoreSelBusNum'b00000000;
		end else if (   ce  ==  `ysyx_22040210_ChipDisable) begin
			data_line2      <=  `ysyx_22040210_ZeroWord;
            memwdatavaild_o <=  `ysyx_22040210_MemWritenVaild;
            data_mask       <=  `ysyx_22040210_StoreSelBusNum'b00000000;
        end else if(memwen_i ==  `ysyx_22040210_MemWriteVaild) begin
            data_line2       <= memwdata_i;
            data_mask        <= memwe_i;
            data_addr        <= memwaddr_i;
            memwdatavaild_o <= `ysyx_22040210_MemWriteVaild;
        end else begin
            data_line2      <= `ysyx_22040210_ZeroWord;
            memwdatavaild_o <= `ysyx_22040210_MemWritenVaild;
            data_mask       <=  `ysyx_22040210_StoreSelBusNum'b00000000;
        end
	end
    always@(posedge clk)begin
        if(memwdatavaild_o)begin
            pmem_write(data_addr,data_line2,data_mask);
        end
        
    end
endmodule
