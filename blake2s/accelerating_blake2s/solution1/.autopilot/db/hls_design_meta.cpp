#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("data_V", 512, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("hash_V_address0", 3, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("hash_V_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("hash_V_we0", 1, hls_out, 1, "ap_memory", "mem_we", 1),
	Port_Property("hash_V_d0", 32, hls_out, 1, "ap_memory", "mem_din", 1),
};
const char* HLS_Design_Meta::dut_name = "blake2s";
