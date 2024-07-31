set moduleName compress
set isTopModule 0
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
set C_modelName {compress}
set C_modelType { void 0 }
set C_modelArgList {
	{ h_V int 32 regular {array 8 { 2 3 } 1 1 }  }
	{ m_V int 32 regular {array 16 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "h_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "m_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ h_V_address0 sc_out sc_lv 3 signal 0 } 
	{ h_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ h_V_we0 sc_out sc_logic 1 signal 0 } 
	{ h_V_d0 sc_out sc_lv 32 signal 0 } 
	{ h_V_q0 sc_in sc_lv 32 signal 0 } 
	{ m_V_address0 sc_out sc_lv 4 signal 1 } 
	{ m_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ m_V_q0 sc_in sc_lv 32 signal 1 } 
	{ m_V_address1 sc_out sc_lv 4 signal 1 } 
	{ m_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ m_V_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "h_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "h_V", "role": "address0" }} , 
 	{ "name": "h_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_V", "role": "ce0" }} , 
 	{ "name": "h_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "h_V", "role": "we0" }} , 
 	{ "name": "h_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "h_V", "role": "d0" }} , 
 	{ "name": "h_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "h_V", "role": "q0" }} , 
 	{ "name": "m_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "m_V", "role": "address0" }} , 
 	{ "name": "m_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "m_V", "role": "ce0" }} , 
 	{ "name": "m_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "m_V", "role": "q0" }} , 
 	{ "name": "m_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "m_V", "role": "address1" }} , 
 	{ "name": "m_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "m_V", "role": "ce1" }} , 
 	{ "name": "m_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "m_V", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IV_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_9_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_10_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_12_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_13_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_14_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SIGMA_V_15_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_G_fu_554", "Parent" : "0",
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
	{"Name" : "Latency", "Min" : "1416", "Max" : "1416"}
	, {"Name" : "Interval", "Min" : "1416", "Max" : "1416"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	h_V { ap_memory {  { h_V_address0 mem_address 1 3 }  { h_V_ce0 mem_ce 1 1 }  { h_V_we0 mem_we 1 1 }  { h_V_d0 mem_din 1 32 }  { h_V_q0 mem_dout 0 32 } } }
	m_V { ap_memory {  { m_V_address0 mem_address 1 4 }  { m_V_ce0 mem_ce 1 1 }  { m_V_q0 mem_dout 0 32 }  { m_V_address1 MemPortADDR2 1 4 }  { m_V_ce1 MemPortCE2 1 1 }  { m_V_q1 MemPortDOUT2 0 32 } } }
}
