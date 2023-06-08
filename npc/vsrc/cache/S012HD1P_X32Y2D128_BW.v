module S012HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, B, D
);
parameter Bits = 54;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Add_Width-1:0] B;
input [Bits-1:0]      D;

wire cen  = CEN;
wire wen  = WEN;
wire [53:0] bwen = BWEN[53:0];

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
        //$display("addr is %x ",D);
    end
    Q <=  ram[B] ;
end
initial begin
    $readmemb("/home/yud/Desktop/temp/cache/src/ram.patt",ram);
end

endmodule
