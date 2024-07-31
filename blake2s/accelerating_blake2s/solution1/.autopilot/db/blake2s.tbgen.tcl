set moduleName blake2s
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {blake2s}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V int 512 regular {pointer 0}  }
	{ hash_V int 32 regular {array 8 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V", "interface" : "wire", "bitwidth" : 512, "direction" : "READONLY", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "data.V","cData": "uint512","bit_use": { "low": 0,"up": 511},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "hash_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "hash.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 7,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 11
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V sc_in sc_lv 512 signal 0 } 
	{ hash_V_address0 sc_out sc_lv 3 signal 1 } 
	{ hash_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ hash_V_we0 sc_out sc_logic 1 signal 1 } 
	{ hash_V_d0 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "data_V", "role": "default" }} , 
 	{ "name": "hash_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "hash_V", "role": "address0" }} , 
 	{ "name": "hash_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash_V", "role": "ce0" }} , 
 	{ "name": "hash_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hash_V", "role": "we0" }} , 
 	{ "name": "hash_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "hash_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "blake2s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1469", "EstimateLatencyMax" : "1469",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compress_fu_200"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "hash_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IV_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "IV_V"}]},
			{"Name" : "SIGMA_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_0"}]},
			{"Name" : "SIGMA_V_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_1"}]},
			{"Name" : "SIGMA_V_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_2"}]},
			{"Name" : "SIGMA_V_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_3"}]},
			{"Name" : "SIGMA_V_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_4"}]},
			{"Name" : "SIGMA_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_5"}]},
			{"Name" : "SIGMA_V_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_6"}]},
			{"Name" : "SIGMA_V_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_7"}]},
			{"Name" : "SIGMA_V_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_8"}]},
			{"Name" : "SIGMA_V_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_9"}]},
			{"Name" : "SIGMA_V_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_10"}]},
			{"Name" : "SIGMA_V_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_11"}]},
			{"Name" : "SIGMA_V_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_12"}]},
			{"Name" : "SIGMA_V_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_13"}]},
			{"Name" : "SIGMA_V_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_14"}]},
			{"Name" : "SIGMA_V_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_compress_fu_200", "Port" : "SIGMA_V_15"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IV_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.h_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.m_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200", "Parent" : "0", "Child" : ["5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"],
		"CDFG" : "compress",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1416", "EstimateLatencyMax" : "1416",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_G_fu_554"}],
		"Port" : [
			{"Name" : "h_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "m_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IV_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SIGMA_V_15", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.IV_V_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_0_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_1_U", "Parent" : "4"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_2_U", "Parent" : "4"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_3_U", "Parent" : "4"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_4_U", "Parent" : "4"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_5_U", "Parent" : "4"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_6_U", "Parent" : "4"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_7_U", "Parent" : "4"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_8_U", "Parent" : "4"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_9_U", "Parent" : "4"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_10_U", "Parent" : "4"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_11_U", "Parent" : "4"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_12_U", "Parent" : "4"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_13_U", "Parent" : "4"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_14_U", "Parent" : "4"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.SIGMA_V_15_U", "Parent" : "4"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.v_V_U", "Parent" : "4"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compress_fu_200.grp_G_fu_554", "Parent" : "4",
		"CDFG" : "G",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "15", "EstimateLatencyMax" : "15",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"},
			{"Name" : "c", "Type" : "None", "Direction" : "I"},
			{"Name" : "d", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "y_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	blake2s {
		data_V {Type I LastRead 2 FirstWrite -1}
		hash_V {Type O LastRead -1 FirstWrite 6}
		IV_V {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_0 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_1 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_2 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_3 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_4 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_5 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_6 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_7 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_8 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_9 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_10 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_11 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_12 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_13 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_14 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_15 {Type I LastRead -1 FirstWrite -1}}
	compress {
		h_V {Type IO LastRead 4 FirstWrite 5}
		m_V {Type I LastRead 19 FirstWrite -1}
		IV_V {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_0 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_1 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_2 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_3 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_4 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_5 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_6 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_7 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_8 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_9 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_10 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_11 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_12 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_13 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_14 {Type I LastRead -1 FirstWrite -1}
		SIGMA_V_15 {Type I LastRead -1 FirstWrite -1}}
	G {
		v_V {Type IO LastRead 14 FirstWrite 1}
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}
		c {Type I LastRead 4 FirstWrite -1}
		d {Type I LastRead 2 FirstWrite -1}
		x_V {Type I LastRead 1 FirstWrite -1}
		y_V {Type I LastRead 9 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1469", "Max" : "1469"}
	, {"Name" : "Interval", "Min" : "1470", "Max" : "1470"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_V { ap_none {  { data_V in_data 0 512 } } }
	hash_V { ap_memory {  { hash_V_address0 mem_address 1 3 }  { hash_V_ce0 mem_ce 1 1 }  { hash_V_we0 mem_we 1 1 }  { hash_V_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
