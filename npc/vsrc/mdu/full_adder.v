/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-11-01 19:48:55
 * @LastEditTime: 2022-11-06 20:49:04
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */

module full_adder(
    input a,
    input b,
    input cin,
    output cout,
    output s
);

assign s = a ^ b ^ cin;
assign cout = a & b | (cin & (a ^ b));

endmodule

