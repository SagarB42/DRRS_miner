// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    template< int D ,int U ,int TI ,int TD > struct ap_axiu;
    template<> struct ap_axiu<640, 0, 0, 0> {
        ap_uint<640> data;
        ap_uint<80> keep;
        ap_uint<80> strb;
        ap_uint<1> last;
       } ;

          template< int D ,int U ,int TI ,int TD > struct ap_axiu;
          template<> struct ap_axiu<256, 0, 0, 0> {
              ap_uint<256> data;
              ap_uint<32> keep;
              ap_uint<32> strb;
              ap_uint<1> last;
             } ;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_V_data_V"
#define AUTOTB_TVIN_input_V_data_V  "../tv/cdatafile/c.sha256d.autotvin_input_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_V_data_V  "../tv/stream_size/stream_size_in_input_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_V_data_V  "../tv/stream_size/stream_ingress_status_input_V_data_V.dat"
// wrapc file define: "input_V_keep_V"
#define AUTOTB_TVIN_input_V_keep_V  "../tv/cdatafile/c.sha256d.autotvin_input_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_V_keep_V  "../tv/stream_size/stream_size_in_input_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V  "../tv/stream_size/stream_ingress_status_input_V_keep_V.dat"
// wrapc file define: "input_V_strb_V"
#define AUTOTB_TVIN_input_V_strb_V  "../tv/cdatafile/c.sha256d.autotvin_input_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_V_strb_V  "../tv/stream_size/stream_size_in_input_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V  "../tv/stream_size/stream_ingress_status_input_V_strb_V.dat"
// wrapc file define: "input_V_last_V"
#define AUTOTB_TVIN_input_V_last_V  "../tv/cdatafile/c.sha256d.autotvin_input_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_V_last_V  "../tv/stream_size/stream_size_in_input_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_V_last_V  "../tv/stream_size/stream_ingress_status_input_V_last_V.dat"
// wrapc file define: "output_V_data_V"
#define AUTOTB_TVOUT_output_V_data_V  "../tv/cdatafile/c.sha256d.autotvout_output_V_data_V.dat"
#define AUTOTB_TVIN_output_V_data_V  "../tv/cdatafile/c.sha256d.autotvin_output_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_output_V_data_V  "../tv/stream_size/stream_size_out_output_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_output_V_data_V  "../tv/stream_size/stream_egress_status_output_V_data_V.dat"
// wrapc file define: "output_V_keep_V"
#define AUTOTB_TVOUT_output_V_keep_V  "../tv/cdatafile/c.sha256d.autotvout_output_V_keep_V.dat"
#define AUTOTB_TVIN_output_V_keep_V  "../tv/cdatafile/c.sha256d.autotvin_output_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_output_V_keep_V  "../tv/stream_size/stream_size_out_output_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_output_V_keep_V  "../tv/stream_size/stream_egress_status_output_V_keep_V.dat"
// wrapc file define: "output_V_strb_V"
#define AUTOTB_TVOUT_output_V_strb_V  "../tv/cdatafile/c.sha256d.autotvout_output_V_strb_V.dat"
#define AUTOTB_TVIN_output_V_strb_V  "../tv/cdatafile/c.sha256d.autotvin_output_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_output_V_strb_V  "../tv/stream_size/stream_size_out_output_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_output_V_strb_V  "../tv/stream_size/stream_egress_status_output_V_strb_V.dat"
// wrapc file define: "output_V_last_V"
#define AUTOTB_TVOUT_output_V_last_V  "../tv/cdatafile/c.sha256d.autotvout_output_V_last_V.dat"
#define AUTOTB_TVIN_output_V_last_V  "../tv/cdatafile/c.sha256d.autotvin_output_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_output_V_last_V  "../tv/stream_size/stream_size_out_output_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_output_V_last_V  "../tv/stream_size/stream_egress_status_output_V_last_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "output_V_data_V"
#define AUTOTB_TVOUT_PC_output_V_data_V  "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_data_V.dat"
// tvout file define: "output_V_keep_V"
#define AUTOTB_TVOUT_PC_output_V_keep_V  "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_keep_V.dat"
// tvout file define: "output_V_strb_V"
#define AUTOTB_TVOUT_PC_output_V_strb_V  "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_strb_V.dat"
// tvout file define: "output_V_last_V"
#define AUTOTB_TVOUT_PC_output_V_last_V  "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_last_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_V_data_V_depth = 0;
			input_V_keep_V_depth = 0;
			input_V_strb_V_depth = 0;
			input_V_last_V_depth = 0;
			output_V_data_V_depth = 0;
			output_V_keep_V_depth = 0;
			output_V_strb_V_depth = 0;
			output_V_last_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{input_V_data_V " << input_V_data_V_depth << "}\n";
			total_list << "{input_V_keep_V " << input_V_keep_V_depth << "}\n";
			total_list << "{input_V_strb_V " << input_V_strb_V_depth << "}\n";
			total_list << "{input_V_last_V " << input_V_last_V_depth << "}\n";
			total_list << "{output_V_data_V " << output_V_data_V_depth << "}\n";
			total_list << "{output_V_keep_V " << output_V_keep_V_depth << "}\n";
			total_list << "{output_V_strb_V " << output_V_strb_V_depth << "}\n";
			total_list << "{output_V_last_V " << output_V_last_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_V_data_V_depth;
		int input_V_keep_V_depth;
		int input_V_strb_V_depth;
		int input_V_last_V_depth;
		int output_V_data_V_depth;
		int output_V_keep_V_depth;
		int output_V_strb_V_depth;
		int output_V_last_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void sha256d (
hls::stream<ap_axiu<640, 0, 0, 0 > > (&input),
hls::stream<ap_axiu<256, 0, 0, 0 > > (&output));

void AESL_WRAP_sha256d (
hls::stream<ap_axiu<640, 0, 0, 0 > > (&input),
hls::stream<ap_axiu<256, 0, 0, 0 > > (&output))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "input"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_V_data_V, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				input.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "output"
		std::vector<ap_axiu<256, 0, 0, 0 > > aesl_tmp_3;
		int aesl_tmp_4;
		int aesl_tmp_5 = 0;

		// read output stream size: "output"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_output_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_output_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_output_V_data_V, AESL_token); // pop_size
			aesl_tmp_4 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_output_V_data_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "output_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_V_data_V, AESL_token); // data

			std::vector<sc_bv<256> > output_V_data_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<256, 0, 0, 0 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_V_data_V
				{
					// bitslice(255, 0)
					// {
						// celement: output.V.data.V(255, 0)
						// {
							sc_lv<256>* output_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<256>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(255, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.data.V(255, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										output_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(255, 0) = sc_bv<256>(output_V_data_V_pc_buffer[hls_map_index].range(255, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(255, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.data.V(255, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data
									// output_left_conversion : aesl_tmp_3[i_0].data
									// output_type_conversion : (output_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].data = (output_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "output_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_V_keep_V, AESL_token); // data

			std::vector<sc_bv<32> > output_V_keep_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<256, 0, 0, 0 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_V_keep_V
				{
					// bitslice(31, 0)
					// {
						// celement: output.V.keep.V(31, 0)
						// {
							sc_lv<32>* output_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<32>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.keep.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										output_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(output_V_keep_V_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.keep.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].keep
									// output_left_conversion : aesl_tmp_3[i_0].keep
									// output_type_conversion : (output_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].keep = (output_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "output_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_V_strb_V, AESL_token); // data

			std::vector<sc_bv<32> > output_V_strb_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<256, 0, 0, 0 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_V_strb_V
				{
					// bitslice(31, 0)
					// {
						// celement: output.V.strb.V(31, 0)
						// {
							sc_lv<32>* output_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<32>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.strb.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										output_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(output_V_strb_V_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.strb.V(31, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].strb
									// output_left_conversion : aesl_tmp_3[i_0].strb
									// output_type_conversion : (output_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].strb = (output_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "output_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > output_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axiu<256, 0, 0, 0 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: output.V.last.V(0, 0)
						// {
							sc_lv<1>* output_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										output_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(output_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: output.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].last
									// output_left_conversion : aesl_tmp_3[i_0].last
									// output_type_conversion : (output_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].last = (output_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "output"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			output.write(aesl_tmp_3[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_V_data_V"
		char* tvin_input_V_data_V = new char[165];
		aesl_fh.touch(AUTOTB_TVIN_input_V_data_V);
		char* wrapc_stream_size_in_input_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_V_data_V);
		char* wrapc_stream_ingress_status_input_V_data_V = new char[165];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V);

		// "input_V_keep_V"
		char* tvin_input_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_V_keep_V);
		char* wrapc_stream_size_in_input_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_V_keep_V);
		char* wrapc_stream_ingress_status_input_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V);

		// "input_V_strb_V"
		char* tvin_input_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_V_strb_V);
		char* wrapc_stream_size_in_input_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_V_strb_V);
		char* wrapc_stream_ingress_status_input_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V);

		// "input_V_last_V"
		char* tvin_input_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_V_last_V);
		char* wrapc_stream_size_in_input_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_V_last_V);
		char* wrapc_stream_ingress_status_input_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V);

		// "output_V_data_V"
		char* tvin_output_V_data_V = new char[69];
		aesl_fh.touch(AUTOTB_TVIN_output_V_data_V);
		char* tvout_output_V_data_V = new char[69];
		aesl_fh.touch(AUTOTB_TVOUT_output_V_data_V);
		char* wrapc_stream_size_out_output_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_output_V_data_V);
		char* wrapc_stream_egress_status_output_V_data_V = new char[69];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_output_V_data_V);

		// "output_V_keep_V"
		char* tvin_output_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_V_keep_V);
		char* tvout_output_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_output_V_keep_V);
		char* wrapc_stream_size_out_output_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_output_V_keep_V);
		char* wrapc_stream_egress_status_output_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_output_V_keep_V);

		// "output_V_strb_V"
		char* tvin_output_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_V_strb_V);
		char* tvout_output_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_output_V_strb_V);
		char* wrapc_stream_size_out_output_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_output_V_strb_V);
		char* wrapc_stream_egress_status_output_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_output_V_strb_V);

		// "output_V_last_V"
		char* tvin_output_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_V_last_V);
		char* tvout_output_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_output_V_last_V);
		char* wrapc_stream_size_out_output_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_output_V_last_V);
		char* wrapc_stream_egress_status_output_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_output_V_last_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "input"
		std::vector<ap_axiu<640, 0, 0, 0 > > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!input.empty())
		{
			aesl_tmp_0.push_back(input.read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "output"
		std::vector<ap_axiu<256, 0, 0, 0 > > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!output.empty())
		{
			aesl_tmp_3.push_back(output.read());
			aesl_tmp_4++;
		}

		// push back input stream: "input"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			input.write(aesl_tmp_0[i]);
		}

		// push back input stream: "output"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			output.write(aesl_tmp_3[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		sha256d(input, output);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "input"
		int aesl_tmp_2 = input.size();

		// pop output stream: "output"
		int aesl_tmp_5 = aesl_tmp_4;
		aesl_tmp_4 = 0;
     aesl_tmp_3.clear();
		while (!output.empty())
		{
			aesl_tmp_3.push_back(output.read());
			aesl_tmp_4++;
		}

		// [[transaction]]
		sprintf(tvin_input_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_V_data_V, tvin_input_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, tvin_input_V_data_V);

		sc_bv<640>* input_V_data_V_tvin_wrapc_buffer = new sc_bv<640>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: input_V_data_V
		{
			// bitslice(639, 0)
			{
				int hls_map_index = 0;
				// celement: input.V.data.V(639, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data
							// regulate_c_name       : input_V_data_V
							// input_type_conversion : (aesl_tmp_0[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_0[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<640> input_V_data_V_tmp_mem;
								input_V_data_V_tmp_mem = (aesl_tmp_0[i_0].data).to_string(2).c_str();
								input_V_data_V_tvin_wrapc_buffer[hls_map_index].range(639, 0) = input_V_data_V_tmp_mem.range(639, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_input_V_data_V, "%s\n", (input_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_V_data_V, tvin_input_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_input_V_data_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, stream_ingress_size_input_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_input_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, stream_ingress_size_input_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, stream_ingress_size_input_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.input_V_data_V_depth);
		sprintf(tvin_input_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_V_data_V, tvin_input_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_data_V, tvin_input_V_data_V);

		// release memory allocation
		delete [] input_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_data_V, wrapc_stream_size_in_input_V_data_V);
		sprintf(wrapc_stream_size_in_input_V_data_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_data_V, wrapc_stream_size_in_input_V_data_V);
		sprintf(wrapc_stream_size_in_input_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_data_V, wrapc_stream_size_in_input_V_data_V);

		// [[transaction]]
		sprintf(tvin_input_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_V_keep_V, tvin_input_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, tvin_input_V_keep_V);

		sc_bv<80>* input_V_keep_V_tvin_wrapc_buffer = new sc_bv<80>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: input_V_keep_V
		{
			// bitslice(79, 0)
			{
				int hls_map_index = 0;
				// celement: input.V.keep.V(79, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].keep
							// regulate_c_name       : input_V_keep_V
							// input_type_conversion : (aesl_tmp_0[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_0[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<80> input_V_keep_V_tmp_mem;
								input_V_keep_V_tmp_mem = (aesl_tmp_0[i_0].keep).to_string(2).c_str();
								input_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(79, 0) = input_V_keep_V_tmp_mem.range(79, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_input_V_keep_V, "%s\n", (input_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_V_keep_V, tvin_input_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_input_V_keep_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, stream_ingress_size_input_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_input_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, stream_ingress_size_input_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, stream_ingress_size_input_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.input_V_keep_V_depth);
		sprintf(tvin_input_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_V_keep_V, tvin_input_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_keep_V, tvin_input_V_keep_V);

		// release memory allocation
		delete [] input_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_keep_V, wrapc_stream_size_in_input_V_keep_V);
		sprintf(wrapc_stream_size_in_input_V_keep_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_keep_V, wrapc_stream_size_in_input_V_keep_V);
		sprintf(wrapc_stream_size_in_input_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_keep_V, wrapc_stream_size_in_input_V_keep_V);

		// [[transaction]]
		sprintf(tvin_input_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_V_strb_V, tvin_input_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, tvin_input_V_strb_V);

		sc_bv<80>* input_V_strb_V_tvin_wrapc_buffer = new sc_bv<80>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: input_V_strb_V
		{
			// bitslice(79, 0)
			{
				int hls_map_index = 0;
				// celement: input.V.strb.V(79, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].strb
							// regulate_c_name       : input_V_strb_V
							// input_type_conversion : (aesl_tmp_0[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_0[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<80> input_V_strb_V_tmp_mem;
								input_V_strb_V_tmp_mem = (aesl_tmp_0[i_0].strb).to_string(2).c_str();
								input_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(79, 0) = input_V_strb_V_tmp_mem.range(79, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_input_V_strb_V, "%s\n", (input_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_V_strb_V, tvin_input_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_input_V_strb_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, stream_ingress_size_input_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_input_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, stream_ingress_size_input_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, stream_ingress_size_input_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.input_V_strb_V_depth);
		sprintf(tvin_input_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_V_strb_V, tvin_input_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_strb_V, tvin_input_V_strb_V);

		// release memory allocation
		delete [] input_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_strb_V, wrapc_stream_size_in_input_V_strb_V);
		sprintf(wrapc_stream_size_in_input_V_strb_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_strb_V, wrapc_stream_size_in_input_V_strb_V);
		sprintf(wrapc_stream_size_in_input_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_strb_V, wrapc_stream_size_in_input_V_strb_V);

		// [[transaction]]
		sprintf(tvin_input_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_V_last_V, tvin_input_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, tvin_input_V_last_V);

		sc_bv<1>* input_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: input_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: input.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].last
							// regulate_c_name       : input_V_last_V
							// input_type_conversion : (aesl_tmp_0[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_0[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> input_V_last_V_tmp_mem;
								input_V_last_V_tmp_mem = (aesl_tmp_0[i_0].last).to_string(2).c_str();
								input_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = input_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_input_V_last_V, "%s\n", (input_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_V_last_V, tvin_input_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_input_V_last_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, stream_ingress_size_input_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_input_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, stream_ingress_size_input_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, stream_ingress_size_input_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.input_V_last_V_depth);
		sprintf(tvin_input_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_V_last_V, tvin_input_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_V_last_V, tvin_input_V_last_V);

		// release memory allocation
		delete [] input_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_last_V, wrapc_stream_size_in_input_V_last_V);
		sprintf(wrapc_stream_size_in_input_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_last_V, wrapc_stream_size_in_input_V_last_V);
		sprintf(wrapc_stream_size_in_input_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_V_last_V, wrapc_stream_size_in_input_V_last_V);

		// [[transaction]]
		sprintf(tvout_output_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_V_data_V, tvout_output_V_data_V);

		sc_bv<256>* output_V_data_V_tvout_wrapc_buffer = new sc_bv<256>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: output_V_data_V
		{
			// bitslice(255, 0)
			{
				int hls_map_index = 0;
				// celement: output.V.data.V(255, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data
							// regulate_c_name       : output_V_data_V
							// input_type_conversion : (aesl_tmp_3[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<256> output_V_data_V_tmp_mem;
								output_V_data_V_tmp_mem = (aesl_tmp_3[i_0].data).to_string(2).c_str();
								output_V_data_V_tvout_wrapc_buffer[hls_map_index].range(255, 0) = output_V_data_V_tmp_mem.range(255, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_output_V_data_V, "%s\n", (output_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_V_data_V, tvout_output_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.output_V_data_V_depth);
		sprintf(tvout_output_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_V_data_V, tvout_output_V_data_V);

		// release memory allocation
		delete [] output_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_output_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_data_V, wrapc_stream_size_out_output_V_data_V);
		sprintf(wrapc_stream_size_out_output_V_data_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_data_V, wrapc_stream_size_out_output_V_data_V);
		sprintf(wrapc_stream_size_out_output_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_data_V, wrapc_stream_size_out_output_V_data_V);

		// [[transaction]]
		sprintf(tvout_output_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_V_keep_V, tvout_output_V_keep_V);

		sc_bv<32>* output_V_keep_V_tvout_wrapc_buffer = new sc_bv<32>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: output_V_keep_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output.V.keep.V(31, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].keep
							// regulate_c_name       : output_V_keep_V
							// input_type_conversion : (aesl_tmp_3[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> output_V_keep_V_tmp_mem;
								output_V_keep_V_tmp_mem = (aesl_tmp_3[i_0].keep).to_string(2).c_str();
								output_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = output_V_keep_V_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_output_V_keep_V, "%s\n", (output_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_V_keep_V, tvout_output_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.output_V_keep_V_depth);
		sprintf(tvout_output_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_V_keep_V, tvout_output_V_keep_V);

		// release memory allocation
		delete [] output_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_output_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_keep_V, wrapc_stream_size_out_output_V_keep_V);
		sprintf(wrapc_stream_size_out_output_V_keep_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_keep_V, wrapc_stream_size_out_output_V_keep_V);
		sprintf(wrapc_stream_size_out_output_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_keep_V, wrapc_stream_size_out_output_V_keep_V);

		// [[transaction]]
		sprintf(tvout_output_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_V_strb_V, tvout_output_V_strb_V);

		sc_bv<32>* output_V_strb_V_tvout_wrapc_buffer = new sc_bv<32>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: output_V_strb_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output.V.strb.V(31, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].strb
							// regulate_c_name       : output_V_strb_V
							// input_type_conversion : (aesl_tmp_3[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> output_V_strb_V_tmp_mem;
								output_V_strb_V_tmp_mem = (aesl_tmp_3[i_0].strb).to_string(2).c_str();
								output_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = output_V_strb_V_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_output_V_strb_V, "%s\n", (output_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_V_strb_V, tvout_output_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.output_V_strb_V_depth);
		sprintf(tvout_output_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_V_strb_V, tvout_output_V_strb_V);

		// release memory allocation
		delete [] output_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_output_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_strb_V, wrapc_stream_size_out_output_V_strb_V);
		sprintf(wrapc_stream_size_out_output_V_strb_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_strb_V, wrapc_stream_size_out_output_V_strb_V);
		sprintf(wrapc_stream_size_out_output_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_strb_V, wrapc_stream_size_out_output_V_strb_V);

		// [[transaction]]
		sprintf(tvout_output_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_V_last_V, tvout_output_V_last_V);

		sc_bv<1>* output_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: output_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: output.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].last
							// regulate_c_name       : output_V_last_V
							// input_type_conversion : (aesl_tmp_3[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> output_V_last_V_tmp_mem;
								output_V_last_V_tmp_mem = (aesl_tmp_3[i_0].last).to_string(2).c_str();
								output_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = output_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_output_V_last_V, "%s\n", (output_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_V_last_V, tvout_output_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.output_V_last_V_depth);
		sprintf(tvout_output_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_V_last_V, tvout_output_V_last_V);

		// release memory allocation
		delete [] output_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_output_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_last_V, wrapc_stream_size_out_output_V_last_V);
		sprintf(wrapc_stream_size_out_output_V_last_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_last_V, wrapc_stream_size_out_output_V_last_V);
		sprintf(wrapc_stream_size_out_output_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_output_V_last_V, wrapc_stream_size_out_output_V_last_V);

		// push back output stream: "output"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			output.write(aesl_tmp_3[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_V_data_V"
		delete [] tvin_input_V_data_V;
		delete [] wrapc_stream_size_in_input_V_data_V;
		// release memory allocation: "input_V_keep_V"
		delete [] tvin_input_V_keep_V;
		delete [] wrapc_stream_size_in_input_V_keep_V;
		// release memory allocation: "input_V_strb_V"
		delete [] tvin_input_V_strb_V;
		delete [] wrapc_stream_size_in_input_V_strb_V;
		// release memory allocation: "input_V_last_V"
		delete [] tvin_input_V_last_V;
		delete [] wrapc_stream_size_in_input_V_last_V;
		// release memory allocation: "output_V_data_V"
		delete [] tvout_output_V_data_V;
		delete [] tvin_output_V_data_V;
		delete [] wrapc_stream_size_out_output_V_data_V;
		// release memory allocation: "output_V_keep_V"
		delete [] tvout_output_V_keep_V;
		delete [] tvin_output_V_keep_V;
		delete [] wrapc_stream_size_out_output_V_keep_V;
		// release memory allocation: "output_V_strb_V"
		delete [] tvout_output_V_strb_V;
		delete [] tvin_output_V_strb_V;
		delete [] wrapc_stream_size_out_output_V_strb_V;
		// release memory allocation: "output_V_last_V"
		delete [] tvout_output_V_last_V;
		delete [] tvin_output_V_last_V;
		delete [] wrapc_stream_size_out_output_V_last_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

