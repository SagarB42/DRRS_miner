-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2021.2 (win64) Build 3367213 Tue Oct 19 02:48:09 MDT 2021
-- Date        : Wed Jul 31 20:50:40 2024
-- Host        : LAPTOP-5IM3UC4N running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/comp4601/deliver/Vivado/baseDesign_stream/baseline_hls.gen/sources_1/bd/design_4/ip/design_4_sha256d_0_0/design_4_sha256d_0_0_stub.vhdl
-- Design      : design_4_sha256d_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xck26-sfvc784-2LV-c
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_4_sha256d_0_0 is
  Port ( 
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    input_r_TVALID : in STD_LOGIC;
    input_r_TREADY : out STD_LOGIC;
    input_r_TDATA : in STD_LOGIC_VECTOR ( 639 downto 0 );
    input_r_TLAST : in STD_LOGIC_VECTOR ( 0 to 0 );
    input_r_TKEEP : in STD_LOGIC_VECTOR ( 79 downto 0 );
    input_r_TSTRB : in STD_LOGIC_VECTOR ( 79 downto 0 );
    output_r_TVALID : out STD_LOGIC;
    output_r_TREADY : in STD_LOGIC;
    output_r_TDATA : out STD_LOGIC_VECTOR ( 255 downto 0 );
    output_r_TLAST : out STD_LOGIC_VECTOR ( 0 to 0 );
    output_r_TKEEP : out STD_LOGIC_VECTOR ( 31 downto 0 );
    output_r_TSTRB : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end design_4_sha256d_0_0;

architecture stub of design_4_sha256d_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "ap_clk,ap_rst_n,ap_start,ap_done,ap_idle,ap_ready,input_r_TVALID,input_r_TREADY,input_r_TDATA[639:0],input_r_TLAST[0:0],input_r_TKEEP[79:0],input_r_TSTRB[79:0],output_r_TVALID,output_r_TREADY,output_r_TDATA[255:0],output_r_TLAST[0:0],output_r_TKEEP[31:0],output_r_TSTRB[31:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "sha256d,Vivado 2021.2";
begin
end;
