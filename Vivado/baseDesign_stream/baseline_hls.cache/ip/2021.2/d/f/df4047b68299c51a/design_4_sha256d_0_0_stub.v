// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.2 (win64) Build 3367213 Tue Oct 19 02:48:09 MDT 2021
// Date        : Wed Jul 31 20:50:34 2024
// Host        : LAPTOP-5IM3UC4N running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_4_sha256d_0_0_stub.v
// Design      : design_4_sha256d_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xck26-sfvc784-2LV-c
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "sha256d,Vivado 2021.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(ap_clk, ap_rst_n, ap_start, ap_done, ap_idle, 
  ap_ready, input_r_TVALID, input_r_TREADY, input_r_TDATA, input_r_TLAST, input_r_TKEEP, 
  input_r_TSTRB, output_r_TVALID, output_r_TREADY, output_r_TDATA, output_r_TLAST, 
  output_r_TKEEP, output_r_TSTRB)
/* synthesis syn_black_box black_box_pad_pin="ap_clk,ap_rst_n,ap_start,ap_done,ap_idle,ap_ready,input_r_TVALID,input_r_TREADY,input_r_TDATA[639:0],input_r_TLAST[0:0],input_r_TKEEP[79:0],input_r_TSTRB[79:0],output_r_TVALID,output_r_TREADY,output_r_TDATA[255:0],output_r_TLAST[0:0],output_r_TKEEP[31:0],output_r_TSTRB[31:0]" */;
  input ap_clk;
  input ap_rst_n;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input input_r_TVALID;
  output input_r_TREADY;
  input [639:0]input_r_TDATA;
  input [0:0]input_r_TLAST;
  input [79:0]input_r_TKEEP;
  input [79:0]input_r_TSTRB;
  output output_r_TVALID;
  input output_r_TREADY;
  output [255:0]output_r_TDATA;
  output [0:0]output_r_TLAST;
  output [31:0]output_r_TKEEP;
  output [31:0]output_r_TSTRB;
endmodule
