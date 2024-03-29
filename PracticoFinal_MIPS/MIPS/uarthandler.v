`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:13:35 03/08/2014 
// Design Name: 
// Module Name:    uarthandler 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module uarthandler(
    input clk,
    input reset,
    input rx,
    output tx
    );
wire rd_empty;
wire [7:0] r_data, w_data, r_data_sm_debugger;
wire rd, wr;
wire [1:0] size;
wire [31:0] result;	

uart uartt (
    .clk(clk), 
    .reset(1'b0), 
    .rx(rx), 
    .rd(rd), 
    .wr(wr),
    .rd_empty(rd_empty), 
    .wr_full(), 
    .w_data(w_data), 
    .tx(tx), 
    .r_data(r_data)
    );
debuger_decoder decoder (
    .code(r_data_sm_debugger), 
    //.clk(clk),
	 .reset(reset),
    .result(result), 
    .size(size)
    );

debugersm state_machine (
    .clk(clk), 
    .reset(1'b0), 
    .rd_empty(rd_empty), 
    .result(result), 
    .size(size), 
    .wr(wr), 
    .rd(rd), 
    .w_data(w_data),
	 .r_data_from_uart(r_data),
	 .r_data_to_debugger(r_data_sm_debugger)
    );
  
endmodule
