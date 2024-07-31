#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_0_V\" :  \"" << input_0_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_1_V\" :  \"" << input_1_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_2_V\" :  \"" << input_2_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_3_V\" :  \"" << input_3_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_4_V\" :  \"" << input_4_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_V\" :  \"" << input_5_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_6_V\" :  \"" << input_6_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_7_V\" :  \"" << input_7_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_8_V\" :  \"" << input_8_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_9_V\" :  \"" << input_9_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_10_V\" :  \"" << input_10_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_11_V\" :  \"" << input_11_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_12_V\" :  \"" << input_12_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_13_V\" :  \"" << input_13_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_14_V\" :  \"" << input_14_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_15_V\" :  \"" << input_15_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_16_V\" :  \"" << input_16_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_17_V\" :  \"" << input_17_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_18_V\" :  \"" << input_18_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_19_V\" :  \"" << input_19_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_20_V\" :  \"" << input_20_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_21_V\" :  \"" << input_21_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_22_V\" :  \"" << input_22_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_23_V\" :  \"" << input_23_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_24_V\" :  \"" << input_24_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_25_V\" :  \"" << input_25_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_26_V\" :  \"" << input_26_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_27_V\" :  \"" << input_27_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_28_V\" :  \"" << input_28_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_29_V\" :  \"" << input_29_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_30_V\" :  \"" << input_30_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_31_V\" :  \"" << input_31_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_32_V\" :  \"" << input_32_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_33_V\" :  \"" << input_33_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_34_V\" :  \"" << input_34_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_35_V\" :  \"" << input_35_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_36_V\" :  \"" << input_36_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_37_V\" :  \"" << input_37_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_38_V\" :  \"" << input_38_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_39_V\" :  \"" << input_39_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_40_V\" :  \"" << input_40_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_41_V\" :  \"" << input_41_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_42_V\" :  \"" << input_42_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_43_V\" :  \"" << input_43_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_44_V\" :  \"" << input_44_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_45_V\" :  \"" << input_45_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_46_V\" :  \"" << input_46_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_47_V\" :  \"" << input_47_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_48_V\" :  \"" << input_48_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_49_V\" :  \"" << input_49_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_50_V\" :  \"" << input_50_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_51_V\" :  \"" << input_51_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_52_V\" :  \"" << input_52_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_53_V\" :  \"" << input_53_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_54_V\" :  \"" << input_54_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_55_V\" :  \"" << input_55_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_56_V\" :  \"" << input_56_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_57_V\" :  \"" << input_57_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_58_V\" :  \"" << input_58_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_59_V\" :  \"" << input_59_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_60_V\" :  \"" << input_60_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_61_V\" :  \"" << input_61_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_62_V\" :  \"" << input_62_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_63_V\" :  \"" << input_63_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_64_V\" :  \"" << input_64_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_65_V\" :  \"" << input_65_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_66_V\" :  \"" << input_66_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_67_V\" :  \"" << input_67_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_68_V\" :  \"" << input_68_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_69_V\" :  \"" << input_69_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_70_V\" :  \"" << input_70_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_71_V\" :  \"" << input_71_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_72_V\" :  \"" << input_72_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_73_V\" :  \"" << input_73_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_74_V\" :  \"" << input_74_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_75_V\" :  \"" << input_75_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_76_V\" :  \"" << input_76_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_77_V\" :  \"" << input_77_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_78_V\" :  \"" << input_78_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_79_V\" :  \"" << input_79_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_0_V\" :  \"" << output_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_0_V_ap_vld\" :  \"" << output_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_1_V\" :  \"" << output_1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_1_V_ap_vld\" :  \"" << output_1_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_2_V\" :  \"" << output_2_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_2_V_ap_vld\" :  \"" << output_2_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_3_V\" :  \"" << output_3_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_3_V_ap_vld\" :  \"" << output_3_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_4_V\" :  \"" << output_4_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_4_V_ap_vld\" :  \"" << output_4_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_5_V\" :  \"" << output_5_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_5_V_ap_vld\" :  \"" << output_5_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_6_V\" :  \"" << output_6_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_6_V_ap_vld\" :  \"" << output_6_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_7_V\" :  \"" << output_7_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_7_V_ap_vld\" :  \"" << output_7_V_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

