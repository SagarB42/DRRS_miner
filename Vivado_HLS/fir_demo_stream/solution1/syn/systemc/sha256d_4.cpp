#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_K_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        K_address0 =  (sc_lv<6>) (zext_ln162_fu_17996_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        K_address0 =  (sc_lv<6>) (zext_ln96_fu_11227_p1.read());
    } else {
        K_address0 = "XXXXXX";
    }
}

void sha256d::thread_K_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())))) {
        K_ce0 = ap_const_logic_1;
    } else {
        K_ce0 = ap_const_logic_0;
    }
}

void sha256d::thread_Lo_assign_1_fu_18400_p3() {
    Lo_assign_1_fu_18400_p3 = esl_concat<3,5>(trunc_ln186_fu_18396_p1.read(), ap_const_lv5_0);
}

void sha256d::thread_Lo_assign_fu_1742_p3() {
    Lo_assign_fu_1742_p3 = esl_concat<7,3>(i_0_reg_1361.read(), ap_const_lv3_0);
}

void sha256d::thread_a_1_fu_18330_p2() {
    a_1_fu_18330_p2 = (!add_ln171_fu_18324_p2.read().is_01() || !xor_ln163_3_fu_18312_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln171_fu_18324_p2.read()) + sc_biguint<32>(xor_ln163_3_fu_18312_p2.read()));
}

void sha256d::thread_a_2_fu_11473_p2() {
    a_2_fu_11473_p2 = (!add_ln105_fu_11467_p2.read().is_01() || !xor_ln97_3_fu_11455_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln105_fu_11467_p2.read()) + sc_biguint<32>(xor_ln97_3_fu_11455_p2.read()));
}

void sha256d::thread_add_ln105_fu_11467_p2() {
    add_ln105_fu_11467_p2 = (!xor_ln97_1_fu_11431_p2.read().is_01() || !t1_fu_11353_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln97_1_fu_11431_p2.read()) + sc_biguint<32>(t1_fu_11353_p2.read()));
}

void sha256d::thread_add_ln150_100_fu_17382_p2() {
    add_ln150_100_fu_17382_p2 = (!m_49_reg_20601.read().is_01() || !m_40_reg_20546.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_20601.read()) + sc_biguint<32>(m_40_reg_20546.read()));
}

void sha256d::thread_add_ln150_102_fu_17462_p2() {
    add_ln150_102_fu_17462_p2 = (!xor_ln150_146_fu_17456_p2.read().is_01() || !xor_ln150_148_reg_20647.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_146_fu_17456_p2.read()) + sc_biguint<32>(xor_ln150_148_reg_20647.read()));
}

void sha256d::thread_add_ln150_103_fu_17467_p2() {
    add_ln150_103_fu_17467_p2 = (!m_50_fu_16953_p2.read().is_01() || !m_41_reg_20552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_fu_16953_p2.read()) + sc_biguint<32>(m_41_reg_20552.read()));
}

void sha256d::thread_add_ln150_105_fu_17548_p2() {
    add_ln150_105_fu_17548_p2 = (!xor_ln150_150_fu_17542_p2.read().is_01() || !xor_ln150_152_reg_20652.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_150_fu_17542_p2.read()) + sc_biguint<32>(xor_ln150_152_reg_20652.read()));
}

void sha256d::thread_add_ln150_106_fu_17553_p2() {
    add_ln150_106_fu_17553_p2 = (!m_51_fu_16962_p2.read().is_01() || !m_42_reg_20558.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_fu_16962_p2.read()) + sc_biguint<32>(m_42_reg_20558.read()));
}

void sha256d::thread_add_ln150_108_fu_17634_p2() {
    add_ln150_108_fu_17634_p2 = (!xor_ln150_154_fu_17628_p2.read().is_01() || !xor_ln150_156_reg_20657.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_154_fu_17628_p2.read()) + sc_biguint<32>(xor_ln150_156_reg_20657.read()));
}

void sha256d::thread_add_ln150_109_fu_17639_p2() {
    add_ln150_109_fu_17639_p2 = (!m_52_fu_17046_p2.read().is_01() || !m_43_reg_20564.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_fu_17046_p2.read()) + sc_biguint<32>(m_43_reg_20564.read()));
}

void sha256d::thread_add_ln150_10_fu_12280_p2() {
    add_ln150_10_fu_12280_p2 = (!xor_ln150_23_fu_12274_p2.read().is_01() || !xor_ln150_21_fu_12204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_23_fu_12274_p2.read()) + sc_biguint<32>(xor_ln150_21_fu_12204_p2.read()));
}

void sha256d::thread_add_ln150_111_fu_17720_p2() {
    add_ln150_111_fu_17720_p2 = (!xor_ln150_158_fu_17714_p2.read().is_01() || !xor_ln150_160_reg_20662.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_158_fu_17714_p2.read()) + sc_biguint<32>(xor_ln150_160_reg_20662.read()));
}

void sha256d::thread_add_ln150_112_fu_17725_p2() {
    add_ln150_112_fu_17725_p2 = (!m_53_fu_17131_p2.read().is_01() || !m_44_reg_20570.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_fu_17131_p2.read()) + sc_biguint<32>(m_44_reg_20570.read()));
}

void sha256d::thread_add_ln150_114_fu_17806_p2() {
    add_ln150_114_fu_17806_p2 = (!xor_ln150_162_fu_17800_p2.read().is_01() || !xor_ln150_164_reg_20667.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_162_fu_17800_p2.read()) + sc_biguint<32>(xor_ln150_164_reg_20667.read()));
}

void sha256d::thread_add_ln150_115_fu_17811_p2() {
    add_ln150_115_fu_17811_p2 = (!m_54_fu_17216_p2.read().is_01() || !m_45_reg_20576.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_fu_17216_p2.read()) + sc_biguint<32>(m_45_reg_20576.read()));
}

void sha256d::thread_add_ln150_117_fu_17892_p2() {
    add_ln150_117_fu_17892_p2 = (!m_55_fu_17301_p2.read().is_01() || !xor_ln150_166_fu_17886_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_fu_17301_p2.read()) + sc_biguint<32>(xor_ln150_166_fu_17886_p2.read()));
}

void sha256d::thread_add_ln150_118_fu_16867_p2() {
    add_ln150_118_fu_16867_p2 = (!xor_ln150_168_fu_16861_p2.read().is_01() || !m_46_fu_15753_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_168_fu_16861_p2.read()) + sc_biguint<32>(m_46_fu_15753_p2.read()));
}

void sha256d::thread_add_ln150_11_fu_12286_p2() {
    add_ln150_11_fu_12286_p2 = (!ap_const_lv32_100.is_01() || !g_reg_1384.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_100) + sc_biguint<32>(g_reg_1384.read()));
}

void sha256d::thread_add_ln150_120_fu_17973_p2() {
    add_ln150_120_fu_17973_p2 = (!m_56_fu_17386_p2.read().is_01() || !xor_ln150_170_fu_17967_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_fu_17386_p2.read()) + sc_biguint<32>(xor_ln150_170_fu_17967_p2.read()));
}

void sha256d::thread_add_ln150_121_fu_16943_p2() {
    add_ln150_121_fu_16943_p2 = (!xor_ln150_172_fu_16937_p2.read().is_01() || !m_47_fu_15839_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_172_fu_16937_p2.read()) + sc_biguint<32>(m_47_fu_15839_p2.read()));
}

void sha256d::thread_add_ln150_13_fu_12368_p2() {
    add_ln150_13_fu_12368_p2 = (!xor_ln150_25_fu_12362_p2.read().is_01() || !m_16_fu_11597_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_25_fu_12362_p2.read()) + sc_biguint<32>(m_16_fu_11597_p2.read()));
}

void sha256d::thread_add_ln150_14_fu_12374_p2() {
    add_ln150_14_fu_12374_p2 = (!ap_const_lv32_11002000.is_01() || !h_reg_1372.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_11002000) + sc_biguint<32>(h_reg_1372.read()));
}

void sha256d::thread_add_ln150_16_fu_12456_p2() {
    add_ln150_16_fu_12456_p2 = (!m_17_reg_19462.read().is_01() || !xor_ln150_27_fu_12450_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_19462.read()) + sc_biguint<32>(xor_ln150_27_fu_12450_p2.read()));
}

void sha256d::thread_add_ln150_22_fu_13684_p2() {
    add_ln150_22_fu_13684_p2 = (!ap_const_lv32_400022.is_01() || !xor_ln150_40_fu_13678_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_400022) + sc_biguint<32>(xor_ln150_40_fu_13678_p2.read()));
}

void sha256d::thread_add_ln150_24_fu_13695_p2() {
    add_ln150_24_fu_13695_p2 = (!xor_ln150_42_reg_20333.read().is_01() || !xor_ln150_44_reg_20338.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_42_reg_20333.read()) + sc_biguint<32>(xor_ln150_44_reg_20338.read()));
}

void sha256d::thread_add_ln150_25_fu_13699_p2() {
    add_ln150_25_fu_13699_p2 = (!ap_const_lv32_100.is_01() || !m_24_fu_13459_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_100) + sc_biguint<32>(m_24_fu_13459_p2.read()));
}

void sha256d::thread_add_ln150_27_fu_13781_p2() {
    add_ln150_27_fu_13781_p2 = (!xor_ln150_46_fu_13775_p2.read().is_01() || !xor_ln150_48_reg_19474.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_46_fu_13775_p2.read()) + sc_biguint<32>(xor_ln150_48_reg_19474.read()));
}

void sha256d::thread_add_ln150_28_fu_13786_p2() {
    add_ln150_28_fu_13786_p2 = (!m_25_reg_20312.read().is_01() || !m_16_reg_20262.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_20312.read()) + sc_biguint<32>(m_16_reg_20262.read()));
}

void sha256d::thread_add_ln150_2_fu_11743_p2() {
    add_ln150_2_fu_11743_p2 = (!xor_ln150_7_fu_11737_p2.read().is_01() || !c_reg_1432.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_7_fu_11737_p2.read()) + sc_biguint<32>(c_reg_1432.read()));
}

void sha256d::thread_add_ln150_30_fu_13866_p2() {
    add_ln150_30_fu_13866_p2 = (!xor_ln150_50_fu_13860_p2.read().is_01() || !xor_ln150_52_reg_20343.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_50_fu_13860_p2.read()) + sc_biguint<32>(xor_ln150_52_reg_20343.read()));
}

void sha256d::thread_add_ln150_31_fu_13871_p2() {
    add_ln150_31_fu_13871_p2 = (!m_26_fu_13534_p2.read().is_01() || !m_17_reg_19462.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_fu_13534_p2.read()) + sc_biguint<32>(m_17_reg_19462.read()));
}

void sha256d::thread_add_ln150_33_fu_13952_p2() {
    add_ln150_33_fu_13952_p2 = (!xor_ln150_54_fu_13946_p2.read().is_01() || !xor_ln150_56_reg_20348.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_54_fu_13946_p2.read()) + sc_biguint<32>(xor_ln150_56_reg_20348.read()));
}

void sha256d::thread_add_ln150_34_fu_13957_p2() {
    add_ln150_34_fu_13957_p2 = (!m_27_reg_20319.read().is_01() || !m_18_reg_20268.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_20319.read()) + sc_biguint<32>(m_18_reg_20268.read()));
}

void sha256d::thread_add_ln150_36_fu_14037_p2() {
    add_ln150_36_fu_14037_p2 = (!xor_ln150_58_fu_14031_p2.read().is_01() || !xor_ln150_60_reg_20353.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_58_fu_14031_p2.read()) + sc_biguint<32>(xor_ln150_60_reg_20353.read()));
}

void sha256d::thread_add_ln150_37_fu_14042_p2() {
    add_ln150_37_fu_14042_p2 = (!m_28_fu_13609_p2.read().is_01() || !m_19_reg_20274.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_fu_13609_p2.read()) + sc_biguint<32>(m_19_reg_20274.read()));
}

void sha256d::thread_add_ln150_39_fu_14123_p2() {
    add_ln150_39_fu_14123_p2 = (!xor_ln150_62_fu_14117_p2.read().is_01() || !xor_ln150_64_reg_20358.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_62_fu_14117_p2.read()) + sc_biguint<32>(xor_ln150_64_reg_20358.read()));
}

void sha256d::thread_add_ln150_40_fu_14128_p2() {
    add_ln150_40_fu_14128_p2 = (!m_29_reg_20326.read().is_01() || !m_20_reg_20281.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_20326.read()) + sc_biguint<32>(m_20_reg_20281.read()));
}

void sha256d::thread_add_ln150_42_fu_14208_p2() {
    add_ln150_42_fu_14208_p2 = (!xor_ln150_66_fu_14202_p2.read().is_01() || !xor_ln150_68_reg_20363.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_66_fu_14202_p2.read()) + sc_biguint<32>(xor_ln150_68_reg_20363.read()));
}

void sha256d::thread_add_ln150_43_fu_14213_p2() {
    add_ln150_43_fu_14213_p2 = (!m_30_fu_13690_p2.read().is_01() || !m_21_reg_20287.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_fu_13690_p2.read()) + sc_biguint<32>(m_21_reg_20287.read()));
}

void sha256d::thread_add_ln150_45_fu_15144_p2() {
    add_ln150_45_fu_15144_p2 = (!xor_ln150_70_reg_20459.read().is_01() || !xor_ln150_72_reg_20368.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_70_reg_20459.read()) + sc_biguint<32>(xor_ln150_72_reg_20368.read()));
}

void sha256d::thread_add_ln150_46_fu_14294_p2() {
    add_ln150_46_fu_14294_p2 = (!m_31_fu_13705_p2.read().is_01() || !m_22_reg_20294.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_fu_13705_p2.read()) + sc_biguint<32>(m_22_reg_20294.read()));
}

void sha256d::thread_add_ln150_48_fu_15153_p2() {
    add_ln150_48_fu_15153_p2 = (!xor_ln150_74_reg_20469.read().is_01() || !xor_ln150_76_reg_20474.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_74_reg_20469.read()) + sc_biguint<32>(xor_ln150_76_reg_20474.read()));
}

void sha256d::thread_add_ln150_49_fu_14439_p2() {
    add_ln150_49_fu_14439_p2 = (!m_32_fu_13790_p2.read().is_01() || !m_23_reg_20300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_fu_13790_p2.read()) + sc_biguint<32>(m_23_reg_20300.read()));
}

void sha256d::thread_add_ln150_4_fu_11825_p2() {
    add_ln150_4_fu_11825_p2 = (!xor_ln150_11_fu_11819_p2.read().is_01() || !d_reg_1420.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_11_fu_11819_p2.read()) + sc_biguint<32>(d_reg_1420.read()));
}

void sha256d::thread_add_ln150_51_fu_15232_p2() {
    add_ln150_51_fu_15232_p2 = (!xor_ln150_78_fu_15226_p2.read().is_01() || !xor_ln150_80_reg_20373.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_78_fu_15226_p2.read()) + sc_biguint<32>(xor_ln150_80_reg_20373.read()));
}

void sha256d::thread_add_ln150_52_fu_15237_p2() {
    add_ln150_52_fu_15237_p2 = (!m_33_reg_20424.read().is_01() || !m_24_reg_20388.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_20424.read()) + sc_biguint<32>(m_24_reg_20388.read()));
}

void sha256d::thread_add_ln150_54_fu_15317_p2() {
    add_ln150_54_fu_15317_p2 = (!xor_ln150_82_fu_15311_p2.read().is_01() || !xor_ln150_84_reg_20484.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_82_fu_15311_p2.read()) + sc_biguint<32>(xor_ln150_84_reg_20484.read()));
}

void sha256d::thread_add_ln150_55_fu_15322_p2() {
    add_ln150_55_fu_15322_p2 = (!m_34_reg_20431.read().is_01() || !m_25_reg_20312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_20431.read()) + sc_biguint<32>(m_25_reg_20312.read()));
}

void sha256d::thread_add_ln150_57_fu_15402_p2() {
    add_ln150_57_fu_15402_p2 = (!xor_ln150_86_fu_15396_p2.read().is_01() || !xor_ln150_88_reg_20378.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_86_fu_15396_p2.read()) + sc_biguint<32>(xor_ln150_88_reg_20378.read()));
}

void sha256d::thread_add_ln150_58_fu_15407_p2() {
    add_ln150_58_fu_15407_p2 = (!m_35_reg_20438.read().is_01() || !m_26_reg_20394.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_20438.read()) + sc_biguint<32>(m_26_reg_20394.read()));
}

void sha256d::thread_add_ln150_60_fu_15487_p2() {
    add_ln150_60_fu_15487_p2 = (!xor_ln150_90_fu_15481_p2.read().is_01() || !xor_ln150_92_reg_20489.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_90_fu_15481_p2.read()) + sc_biguint<32>(xor_ln150_92_reg_20489.read()));
}

void sha256d::thread_add_ln150_61_fu_15492_p2() {
    add_ln150_61_fu_15492_p2 = (!m_36_reg_20445.read().is_01() || !m_27_reg_20319.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_20445.read()) + sc_biguint<32>(m_27_reg_20319.read()));
}

void sha256d::thread_add_ln150_63_fu_15572_p2() {
    add_ln150_63_fu_15572_p2 = (!xor_ln150_94_fu_15566_p2.read().is_01() || !xor_ln150_96_reg_20383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_94_fu_15566_p2.read()) + sc_biguint<32>(xor_ln150_96_reg_20383.read()));
}

void sha256d::thread_add_ln150_64_fu_15577_p2() {
    add_ln150_64_fu_15577_p2 = (!m_37_reg_20452.read().is_01() || !m_28_reg_20400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_20452.read()) + sc_biguint<32>(m_28_reg_20400.read()));
}

void sha256d::thread_add_ln150_66_fu_15657_p2() {
    add_ln150_66_fu_15657_p2 = (!xor_ln150_98_fu_15651_p2.read().is_01() || !xor_ln150_100_reg_20494.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_98_fu_15651_p2.read()) + sc_biguint<32>(xor_ln150_100_reg_20494.read()));
}

void sha256d::thread_add_ln150_67_fu_15662_p2() {
    add_ln150_67_fu_15662_p2 = (!m_38_fu_15148_p2.read().is_01() || !m_29_reg_20326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_fu_15148_p2.read()) + sc_biguint<32>(m_29_reg_20326.read()));
}

void sha256d::thread_add_ln150_69_fu_15743_p2() {
    add_ln150_69_fu_15743_p2 = (!xor_ln150_102_fu_15737_p2.read().is_01() || !xor_ln150_104_reg_20499.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_102_fu_15737_p2.read()) + sc_biguint<32>(xor_ln150_104_reg_20499.read()));
}

void sha256d::thread_add_ln150_6_fu_11976_p2() {
    add_ln150_6_fu_11976_p2 = (!xor_ln150_15_fu_11970_p2.read().is_01() || !e_reg_1408.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_15_fu_11970_p2.read()) + sc_biguint<32>(e_reg_1408.read()));
}

void sha256d::thread_add_ln150_70_fu_15748_p2() {
    add_ln150_70_fu_15748_p2 = (!m_39_fu_15157_p2.read().is_01() || !m_30_reg_20406.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_fu_15157_p2.read()) + sc_biguint<32>(m_30_reg_20406.read()));
}

void sha256d::thread_add_ln150_72_fu_15829_p2() {
    add_ln150_72_fu_15829_p2 = (!xor_ln150_106_fu_15823_p2.read().is_01() || !xor_ln150_108_reg_20504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_106_fu_15823_p2.read()) + sc_biguint<32>(xor_ln150_108_reg_20504.read()));
}

void sha256d::thread_add_ln150_73_fu_15834_p2() {
    add_ln150_73_fu_15834_p2 = (!m_40_fu_15241_p2.read().is_01() || !m_31_reg_20412.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_fu_15241_p2.read()) + sc_biguint<32>(m_31_reg_20412.read()));
}

void sha256d::thread_add_ln150_75_fu_15915_p2() {
    add_ln150_75_fu_15915_p2 = (!xor_ln150_110_fu_15909_p2.read().is_01() || !xor_ln150_112_reg_20509.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_110_fu_15909_p2.read()) + sc_biguint<32>(xor_ln150_112_reg_20509.read()));
}

void sha256d::thread_add_ln150_76_fu_15920_p2() {
    add_ln150_76_fu_15920_p2 = (!m_41_fu_15326_p2.read().is_01() || !m_32_reg_20418.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_fu_15326_p2.read()) + sc_biguint<32>(m_32_reg_20418.read()));
}

void sha256d::thread_add_ln150_78_fu_16001_p2() {
    add_ln150_78_fu_16001_p2 = (!xor_ln150_114_fu_15995_p2.read().is_01() || !xor_ln150_116_reg_20514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_114_fu_15995_p2.read()) + sc_biguint<32>(xor_ln150_116_reg_20514.read()));
}

void sha256d::thread_add_ln150_79_fu_16006_p2() {
    add_ln150_79_fu_16006_p2 = (!m_42_fu_15411_p2.read().is_01() || !m_33_reg_20424.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_fu_15411_p2.read()) + sc_biguint<32>(m_33_reg_20424.read()));
}

void sha256d::thread_add_ln150_81_fu_16949_p2() {
    add_ln150_81_fu_16949_p2 = (!xor_ln150_118_reg_20607.read().is_01() || !xor_ln150_120_reg_20519.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_118_reg_20607.read()) + sc_biguint<32>(xor_ln150_120_reg_20519.read()));
}

void sha256d::thread_add_ln150_82_fu_16087_p2() {
    add_ln150_82_fu_16087_p2 = (!m_43_fu_15496_p2.read().is_01() || !m_34_reg_20431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_fu_15496_p2.read()) + sc_biguint<32>(m_34_reg_20431.read()));
}

void sha256d::thread_add_ln150_84_fu_16958_p2() {
    add_ln150_84_fu_16958_p2 = (!xor_ln150_122_reg_20617.read().is_01() || !xor_ln150_124_reg_20524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_122_reg_20617.read()) + sc_biguint<32>(xor_ln150_124_reg_20524.read()));
}

void sha256d::thread_add_ln150_85_fu_16162_p2() {
    add_ln150_85_fu_16162_p2 = (!m_44_fu_15581_p2.read().is_01() || !m_35_reg_20438.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_fu_15581_p2.read()) + sc_biguint<32>(m_35_reg_20438.read()));
}

void sha256d::thread_add_ln150_87_fu_17037_p2() {
    add_ln150_87_fu_17037_p2 = (!xor_ln150_126_fu_17031_p2.read().is_01() || !xor_ln150_128_reg_20529.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_126_fu_17031_p2.read()) + sc_biguint<32>(xor_ln150_128_reg_20529.read()));
}

void sha256d::thread_add_ln150_88_fu_17042_p2() {
    add_ln150_88_fu_17042_p2 = (!m_45_reg_20576.read().is_01() || !m_36_reg_20445.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_20576.read()) + sc_biguint<32>(m_36_reg_20445.read()));
}

void sha256d::thread_add_ln150_8_fu_12128_p2() {
    add_ln150_8_fu_12128_p2 = (!xor_ln150_19_fu_12122_p2.read().is_01() || !f_reg_1396.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_19_fu_12122_p2.read()) + sc_biguint<32>(f_reg_1396.read()));
}

void sha256d::thread_add_ln150_90_fu_17122_p2() {
    add_ln150_90_fu_17122_p2 = (!xor_ln150_130_fu_17116_p2.read().is_01() || !xor_ln150_132_reg_20627.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_130_fu_17116_p2.read()) + sc_biguint<32>(xor_ln150_132_reg_20627.read()));
}

void sha256d::thread_add_ln150_91_fu_17127_p2() {
    add_ln150_91_fu_17127_p2 = (!m_46_reg_20583.read().is_01() || !m_37_reg_20452.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_20583.read()) + sc_biguint<32>(m_37_reg_20452.read()));
}

void sha256d::thread_add_ln150_93_fu_17207_p2() {
    add_ln150_93_fu_17207_p2 = (!xor_ln150_134_fu_17201_p2.read().is_01() || !xor_ln150_136_reg_20632.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_134_fu_17201_p2.read()) + sc_biguint<32>(xor_ln150_136_reg_20632.read()));
}

void sha256d::thread_add_ln150_94_fu_17212_p2() {
    add_ln150_94_fu_17212_p2 = (!m_47_reg_20589.read().is_01() || !m_38_reg_20534.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_20589.read()) + sc_biguint<32>(m_38_reg_20534.read()));
}

void sha256d::thread_add_ln150_96_fu_17292_p2() {
    add_ln150_96_fu_17292_p2 = (!xor_ln150_138_fu_17286_p2.read().is_01() || !xor_ln150_140_reg_20637.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_138_fu_17286_p2.read()) + sc_biguint<32>(xor_ln150_140_reg_20637.read()));
}

void sha256d::thread_add_ln150_97_fu_17297_p2() {
    add_ln150_97_fu_17297_p2 = (!m_48_reg_20595.read().is_01() || !m_39_reg_20540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_20595.read()) + sc_biguint<32>(m_39_reg_20540.read()));
}

void sha256d::thread_add_ln150_99_fu_17377_p2() {
    add_ln150_99_fu_17377_p2 = (!xor_ln150_142_fu_17371_p2.read().is_01() || !xor_ln150_144_reg_20642.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_142_fu_17371_p2.read()) + sc_biguint<32>(xor_ln150_144_reg_20642.read()));
}

void sha256d::thread_add_ln150_fu_2564_p2() {
    add_ln150_fu_2564_p2 = (!ap_const_lv32_A00000.is_01() || !b_reg_1444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_A00000) + sc_biguint<32>(b_reg_1444.read()));
}

void sha256d::thread_add_ln162_1_fu_18199_p2() {
    add_ln162_1_fu_18199_p2 = (!xor_ln162_1_fu_18163_p2.read().is_01() || !tmp_51_reg_20766.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln162_1_fu_18163_p2.read()) + sc_biguint<32>(tmp_51_reg_20766.read()));
}

void sha256d::thread_add_ln162_2_fu_18204_p2() {
    add_ln162_2_fu_18204_p2 = (!add_ln162_1_fu_18199_p2.read().is_01() || !xor_ln162_3_fu_18187_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln162_1_fu_18199_p2.read()) + sc_biguint<32>(xor_ln162_3_fu_18187_p2.read()));
}

void sha256d::thread_add_ln162_fu_18193_p2() {
    add_ln162_fu_18193_p2 = (!K_q0.read().is_01() || !h17_0_reg_1684.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_q0.read()) + sc_biguint<32>(h17_0_reg_1684.read()));
}

void sha256d::thread_add_ln171_fu_18324_p2() {
    add_ln171_fu_18324_p2 = (!xor_ln163_1_fu_18288_p2.read().is_01() || !t1_1_fu_18210_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln163_1_fu_18288_p2.read()) + sc_biguint<32>(t1_1_fu_18210_p2.read()));
}

void sha256d::thread_add_ln84_100_fu_9377_p2() {
    add_ln84_100_fu_9377_p2 = (!add_ln84_80_fu_8784_p2.read().is_01() || !add_ln84_53_reg_19878.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_80_fu_8784_p2.read()) + sc_biguint<32>(add_ln84_53_reg_19878.read()));
}

void sha256d::thread_add_ln84_101_fu_9382_p2() {
    add_ln84_101_fu_9382_p2 = (!add_ln84_100_fu_9377_p2.read().is_01() || !add_ln84_99_fu_9372_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_100_fu_9377_p2.read()) + sc_biguint<32>(add_ln84_99_fu_9372_p2.read()));
}

void sha256d::thread_add_ln84_102_fu_9458_p2() {
    add_ln84_102_fu_9458_p2 = (!xor_ln84_137_fu_9452_p2.read().is_01() || !xor_ln84_139_reg_19980.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_137_fu_9452_p2.read()) + sc_biguint<32>(xor_ln84_139_reg_19980.read()));
}

void sha256d::thread_add_ln84_103_fu_9463_p2() {
    add_ln84_103_fu_9463_p2 = (!add_ln84_83_fu_8869_p2.read().is_01() || !add_ln84_56_reg_19884.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_83_fu_8869_p2.read()) + sc_biguint<32>(add_ln84_56_reg_19884.read()));
}

void sha256d::thread_add_ln84_104_fu_9468_p2() {
    add_ln84_104_fu_9468_p2 = (!add_ln84_103_fu_9463_p2.read().is_01() || !add_ln84_102_fu_9458_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_103_fu_9463_p2.read()) + sc_biguint<32>(add_ln84_102_fu_9458_p2.read()));
}

void sha256d::thread_add_ln84_105_fu_9544_p2() {
    add_ln84_105_fu_9544_p2 = (!xor_ln84_141_fu_9538_p2.read().is_01() || !xor_ln84_143_reg_19985.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_141_fu_9538_p2.read()) + sc_biguint<32>(xor_ln84_143_reg_19985.read()));
}

void sha256d::thread_add_ln84_106_fu_9549_p2() {
    add_ln84_106_fu_9549_p2 = (!add_ln84_86_fu_8954_p2.read().is_01() || !add_ln84_59_reg_19890.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_86_fu_8954_p2.read()) + sc_biguint<32>(add_ln84_59_reg_19890.read()));
}

void sha256d::thread_add_ln84_107_fu_9554_p2() {
    add_ln84_107_fu_9554_p2 = (!add_ln84_106_fu_9549_p2.read().is_01() || !add_ln84_105_fu_9544_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_106_fu_9549_p2.read()) + sc_biguint<32>(add_ln84_105_fu_9544_p2.read()));
}

void sha256d::thread_add_ln84_108_fu_10342_p2() {
    add_ln84_108_fu_10342_p2 = (!xor_ln84_145_reg_20078.read().is_01() || !xor_ln84_147_reg_19990.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_145_reg_20078.read()) + sc_biguint<32>(xor_ln84_147_reg_19990.read()));
}

void sha256d::thread_add_ln84_109_fu_10346_p2() {
    add_ln84_109_fu_10346_p2 = (!add_ln84_89_reg_20035.read().is_01() || !add_ln84_62_reg_19897.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_89_reg_20035.read()) + sc_biguint<32>(add_ln84_62_reg_19897.read()));
}

void sha256d::thread_add_ln84_10_fu_4296_p2() {
    add_ln84_10_fu_4296_p2 = (!or_ln82_5_11_fu_4242_p5.read().is_01() || !or_ln82_5_3_reg_19484.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_11_fu_4242_p5.read()) + sc_biguint<32>(or_ln82_5_3_reg_19484.read()));
}

void sha256d::thread_add_ln84_110_fu_10350_p2() {
    add_ln84_110_fu_10350_p2 = (!add_ln84_109_fu_10346_p2.read().is_01() || !add_ln84_108_fu_10342_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_109_fu_10346_p2.read()) + sc_biguint<32>(add_ln84_108_fu_10342_p2.read()));
}

void sha256d::thread_add_ln84_111_fu_10356_p2() {
    add_ln84_111_fu_10356_p2 = (!xor_ln84_149_reg_20083.read().is_01() || !xor_ln84_151_reg_19995.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_149_reg_20083.read()) + sc_biguint<32>(xor_ln84_151_reg_19995.read()));
}

void sha256d::thread_add_ln84_112_fu_10360_p2() {
    add_ln84_112_fu_10360_p2 = (!add_ln84_92_reg_20042.read().is_01() || !add_ln84_65_reg_19904.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_92_reg_20042.read()) + sc_biguint<32>(add_ln84_65_reg_19904.read()));
}

void sha256d::thread_add_ln84_113_fu_10364_p2() {
    add_ln84_113_fu_10364_p2 = (!add_ln84_112_fu_10360_p2.read().is_01() || !add_ln84_111_fu_10356_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_112_fu_10360_p2.read()) + sc_biguint<32>(add_ln84_111_fu_10356_p2.read()));
}

void sha256d::thread_add_ln84_114_fu_10440_p2() {
    add_ln84_114_fu_10440_p2 = (!xor_ln84_153_fu_10434_p2.read().is_01() || !xor_ln84_155_reg_20000.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_153_fu_10434_p2.read()) + sc_biguint<32>(xor_ln84_155_reg_20000.read()));
}

void sha256d::thread_add_ln84_115_fu_10445_p2() {
    add_ln84_115_fu_10445_p2 = (!add_ln84_95_reg_20048.read().is_01() || !add_ln84_68_reg_19911.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_95_reg_20048.read()) + sc_biguint<32>(add_ln84_68_reg_19911.read()));
}

void sha256d::thread_add_ln84_116_fu_10449_p2() {
    add_ln84_116_fu_10449_p2 = (!add_ln84_115_fu_10445_p2.read().is_01() || !add_ln84_114_fu_10440_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_115_fu_10445_p2.read()) + sc_biguint<32>(add_ln84_114_fu_10440_p2.read()));
}

void sha256d::thread_add_ln84_117_fu_10525_p2() {
    add_ln84_117_fu_10525_p2 = (!xor_ln84_157_fu_10519_p2.read().is_01() || !xor_ln84_159_reg_20088.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_157_fu_10519_p2.read()) + sc_biguint<32>(xor_ln84_159_reg_20088.read()));
}

void sha256d::thread_add_ln84_118_fu_10530_p2() {
    add_ln84_118_fu_10530_p2 = (!add_ln84_98_reg_20054.read().is_01() || !add_ln84_71_reg_19918.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_98_reg_20054.read()) + sc_biguint<32>(add_ln84_71_reg_19918.read()));
}

void sha256d::thread_add_ln84_119_fu_10534_p2() {
    add_ln84_119_fu_10534_p2 = (!add_ln84_118_fu_10530_p2.read().is_01() || !add_ln84_117_fu_10525_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_118_fu_10530_p2.read()) + sc_biguint<32>(add_ln84_117_fu_10525_p2.read()));
}

void sha256d::thread_add_ln84_11_fu_5288_p2() {
    add_ln84_11_fu_5288_p2 = (!add_ln84_10_reg_19593.read().is_01() || !add_ln84_9_fu_5284_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_10_reg_19593.read()) + sc_biguint<32>(add_ln84_9_fu_5284_p2.read()));
}

void sha256d::thread_add_ln84_120_fu_10610_p2() {
    add_ln84_120_fu_10610_p2 = (!xor_ln84_161_fu_10604_p2.read().is_01() || !xor_ln84_163_reg_20093.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_161_fu_10604_p2.read()) + sc_biguint<32>(xor_ln84_163_reg_20093.read()));
}

void sha256d::thread_add_ln84_121_fu_10615_p2() {
    add_ln84_121_fu_10615_p2 = (!add_ln84_101_reg_20060.read().is_01() || !add_ln84_74_reg_20005.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_101_reg_20060.read()) + sc_biguint<32>(add_ln84_74_reg_20005.read()));
}

void sha256d::thread_add_ln84_122_fu_10619_p2() {
    add_ln84_122_fu_10619_p2 = (!add_ln84_121_fu_10615_p2.read().is_01() || !add_ln84_120_fu_10610_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_121_fu_10615_p2.read()) + sc_biguint<32>(add_ln84_120_fu_10610_p2.read()));
}

void sha256d::thread_add_ln84_123_fu_10695_p2() {
    add_ln84_123_fu_10695_p2 = (!xor_ln84_165_fu_10689_p2.read().is_01() || !xor_ln84_167_reg_20098.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_165_fu_10689_p2.read()) + sc_biguint<32>(xor_ln84_167_reg_20098.read()));
}

void sha256d::thread_add_ln84_124_fu_10700_p2() {
    add_ln84_124_fu_10700_p2 = (!add_ln84_104_reg_20066.read().is_01() || !add_ln84_77_reg_20011.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_104_reg_20066.read()) + sc_biguint<32>(add_ln84_77_reg_20011.read()));
}

void sha256d::thread_add_ln84_125_fu_10704_p2() {
    add_ln84_125_fu_10704_p2 = (!add_ln84_124_fu_10700_p2.read().is_01() || !add_ln84_123_fu_10695_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_124_fu_10700_p2.read()) + sc_biguint<32>(add_ln84_123_fu_10695_p2.read()));
}

void sha256d::thread_add_ln84_126_fu_10780_p2() {
    add_ln84_126_fu_10780_p2 = (!xor_ln84_169_fu_10774_p2.read().is_01() || !xor_ln84_171_reg_20103.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_169_fu_10774_p2.read()) + sc_biguint<32>(xor_ln84_171_reg_20103.read()));
}

void sha256d::thread_add_ln84_127_fu_10785_p2() {
    add_ln84_127_fu_10785_p2 = (!add_ln84_107_reg_20072.read().is_01() || !add_ln84_80_reg_20017.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_107_reg_20072.read()) + sc_biguint<32>(add_ln84_80_reg_20017.read()));
}

void sha256d::thread_add_ln84_128_fu_10789_p2() {
    add_ln84_128_fu_10789_p2 = (!add_ln84_127_fu_10785_p2.read().is_01() || !add_ln84_126_fu_10780_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_127_fu_10785_p2.read()) + sc_biguint<32>(add_ln84_126_fu_10780_p2.read()));
}

void sha256d::thread_add_ln84_129_fu_10865_p2() {
    add_ln84_129_fu_10865_p2 = (!xor_ln84_173_fu_10859_p2.read().is_01() || !xor_ln84_175_reg_20108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_173_fu_10859_p2.read()) + sc_biguint<32>(xor_ln84_175_reg_20108.read()));
}

void sha256d::thread_add_ln84_12_fu_5579_p2() {
    add_ln84_12_fu_5579_p2 = (!xor_ln84_17_reg_19683.read().is_01() || !xor_ln84_19_reg_19514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_17_reg_19683.read()) + sc_biguint<32>(xor_ln84_19_reg_19514.read()));
}

void sha256d::thread_add_ln84_130_fu_10870_p2() {
    add_ln84_130_fu_10870_p2 = (!add_ln84_110_fu_10350_p2.read().is_01() || !add_ln84_83_reg_20023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_110_fu_10350_p2.read()) + sc_biguint<32>(add_ln84_83_reg_20023.read()));
}

void sha256d::thread_add_ln84_131_fu_10875_p2() {
    add_ln84_131_fu_10875_p2 = (!add_ln84_130_fu_10870_p2.read().is_01() || !add_ln84_129_fu_10865_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_130_fu_10870_p2.read()) + sc_biguint<32>(add_ln84_129_fu_10865_p2.read()));
}

void sha256d::thread_add_ln84_132_fu_10951_p2() {
    add_ln84_132_fu_10951_p2 = (!xor_ln84_177_fu_10945_p2.read().is_01() || !xor_ln84_179_reg_20113.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_177_fu_10945_p2.read()) + sc_biguint<32>(xor_ln84_179_reg_20113.read()));
}

void sha256d::thread_add_ln84_133_fu_10956_p2() {
    add_ln84_133_fu_10956_p2 = (!add_ln84_113_fu_10364_p2.read().is_01() || !add_ln84_86_reg_20029.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_113_fu_10364_p2.read()) + sc_biguint<32>(add_ln84_86_reg_20029.read()));
}

void sha256d::thread_add_ln84_134_fu_10961_p2() {
    add_ln84_134_fu_10961_p2 = (!add_ln84_133_fu_10956_p2.read().is_01() || !add_ln84_132_fu_10951_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_133_fu_10956_p2.read()) + sc_biguint<32>(add_ln84_132_fu_10951_p2.read()));
}

void sha256d::thread_add_ln84_135_fu_11037_p2() {
    add_ln84_135_fu_11037_p2 = (!xor_ln84_181_fu_11031_p2.read().is_01() || !xor_ln84_183_reg_20118.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_181_fu_11031_p2.read()) + sc_biguint<32>(xor_ln84_183_reg_20118.read()));
}

void sha256d::thread_add_ln84_136_fu_11042_p2() {
    add_ln84_136_fu_11042_p2 = (!add_ln84_116_fu_10449_p2.read().is_01() || !add_ln84_89_reg_20035.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_116_fu_10449_p2.read()) + sc_biguint<32>(add_ln84_89_reg_20035.read()));
}

void sha256d::thread_add_ln84_137_fu_11047_p2() {
    add_ln84_137_fu_11047_p2 = (!add_ln84_136_fu_11042_p2.read().is_01() || !add_ln84_135_fu_11037_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_136_fu_11042_p2.read()) + sc_biguint<32>(add_ln84_135_fu_11037_p2.read()));
}

void sha256d::thread_add_ln84_138_fu_11123_p2() {
    add_ln84_138_fu_11123_p2 = (!add_ln84_119_fu_10534_p2.read().is_01() || !xor_ln84_185_fu_11117_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_119_fu_10534_p2.read()) + sc_biguint<32>(xor_ln84_185_fu_11117_p2.read()));
}

void sha256d::thread_add_ln84_139_fu_10260_p2() {
    add_ln84_139_fu_10260_p2 = (!xor_ln84_187_fu_10254_p2.read().is_01() || !add_ln84_92_fu_9124_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_187_fu_10254_p2.read()) + sc_biguint<32>(add_ln84_92_fu_9124_p2.read()));
}

void sha256d::thread_add_ln84_13_fu_5583_p2() {
    add_ln84_13_fu_5583_p2 = (!or_ln82_5_12_reg_19587.read().is_01() || !or_ln82_5_4_reg_19499.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_12_reg_19587.read()) + sc_biguint<32>(or_ln82_5_4_reg_19499.read()));
}

void sha256d::thread_add_ln84_140_fu_11129_p2() {
    add_ln84_140_fu_11129_p2 = (!add_ln84_139_reg_20123.read().is_01() || !add_ln84_138_fu_11123_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_139_reg_20123.read()) + sc_biguint<32>(add_ln84_138_fu_11123_p2.read()));
}

void sha256d::thread_add_ln84_141_fu_11204_p2() {
    add_ln84_141_fu_11204_p2 = (!add_ln84_122_fu_10619_p2.read().is_01() || !xor_ln84_189_fu_11198_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_122_fu_10619_p2.read()) + sc_biguint<32>(xor_ln84_189_fu_11198_p2.read()));
}

void sha256d::thread_add_ln84_142_fu_10336_p2() {
    add_ln84_142_fu_10336_p2 = (!xor_ln84_191_fu_10330_p2.read().is_01() || !add_ln84_95_fu_9210_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_191_fu_10330_p2.read()) + sc_biguint<32>(add_ln84_95_fu_9210_p2.read()));
}

void sha256d::thread_add_ln84_143_fu_11210_p2() {
    add_ln84_143_fu_11210_p2 = (!add_ln84_142_reg_20128.read().is_01() || !add_ln84_141_fu_11204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_142_reg_20128.read()) + sc_biguint<32>(add_ln84_141_fu_11204_p2.read()));
}

void sha256d::thread_add_ln84_14_fu_5587_p2() {
    add_ln84_14_fu_5587_p2 = (!add_ln84_13_fu_5583_p2.read().is_01() || !add_ln84_12_fu_5579_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_13_fu_5583_p2.read()) + sc_biguint<32>(add_ln84_12_fu_5579_p2.read()));
}

void sha256d::thread_add_ln84_15_fu_5594_p2() {
    add_ln84_15_fu_5594_p2 = (!xor_ln84_21_reg_19688.read().is_01() || !xor_ln84_23_reg_19529.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_21_reg_19688.read()) + sc_biguint<32>(xor_ln84_23_reg_19529.read()));
}

void sha256d::thread_add_ln84_16_fu_5598_p2() {
    add_ln84_16_fu_5598_p2 = (!or_ln82_5_13_reg_19608.read().is_01() || !or_ln82_5_5_reg_19504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_13_reg_19608.read()) + sc_biguint<32>(or_ln82_5_5_reg_19504.read()));
}

void sha256d::thread_add_ln84_17_fu_5602_p2() {
    add_ln84_17_fu_5602_p2 = (!add_ln84_16_fu_5598_p2.read().is_01() || !add_ln84_15_fu_5594_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_16_fu_5598_p2.read()) + sc_biguint<32>(add_ln84_15_fu_5594_p2.read()));
}

void sha256d::thread_add_ln84_18_fu_5894_p2() {
    add_ln84_18_fu_5894_p2 = (!xor_ln84_25_reg_19719.read().is_01() || !xor_ln84_27_reg_19534.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_25_reg_19719.read()) + sc_biguint<32>(xor_ln84_27_reg_19534.read()));
}

void sha256d::thread_add_ln84_19_fu_5898_p2() {
    add_ln84_19_fu_5898_p2 = (!or_ln82_5_14_reg_19614.read().is_01() || !or_ln82_5_6_reg_19519.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_14_reg_19614.read()) + sc_biguint<32>(or_ln82_5_6_reg_19519.read()));
}

void sha256d::thread_add_ln84_1_fu_4963_p2() {
    add_ln84_1_fu_4963_p2 = (!or_ln82_5_9_reg_19544.read().is_01() || !or_ln82_5_reg_19447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_9_reg_19544.read()) + sc_biguint<32>(or_ln82_5_reg_19447.read()));
}

void sha256d::thread_add_ln84_20_fu_5902_p2() {
    add_ln84_20_fu_5902_p2 = (!add_ln84_19_fu_5898_p2.read().is_01() || !add_ln84_18_fu_5894_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_19_fu_5898_p2.read()) + sc_biguint<32>(add_ln84_18_fu_5894_p2.read()));
}

void sha256d::thread_add_ln84_21_fu_5909_p2() {
    add_ln84_21_fu_5909_p2 = (!xor_ln84_29_reg_19724.read().is_01() || !xor_ln84_31_reg_19550.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_29_reg_19724.read()) + sc_biguint<32>(xor_ln84_31_reg_19550.read()));
}

void sha256d::thread_add_ln84_22_fu_5913_p2() {
    add_ln84_22_fu_5913_p2 = (!add_ln84_2_reg_19640.read().is_01() || !or_ln82_5_7_reg_19524.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_2_reg_19640.read()) + sc_biguint<32>(or_ln82_5_7_reg_19524.read()));
}

void sha256d::thread_add_ln84_23_fu_5917_p2() {
    add_ln84_23_fu_5917_p2 = (!add_ln84_22_fu_5913_p2.read().is_01() || !add_ln84_21_fu_5909_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_22_fu_5913_p2.read()) + sc_biguint<32>(add_ln84_21_fu_5909_p2.read()));
}

void sha256d::thread_add_ln84_24_fu_6204_p2() {
    add_ln84_24_fu_6204_p2 = (!xor_ln84_33_reg_19756.read().is_01() || !xor_ln84_35_reg_19555.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_33_reg_19756.read()) + sc_biguint<32>(xor_ln84_35_reg_19555.read()));
}

void sha256d::thread_add_ln84_25_fu_6208_p2() {
    add_ln84_25_fu_6208_p2 = (!add_ln84_5_reg_19646.read().is_01() || !or_ln82_5_8_reg_19539.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_5_reg_19646.read()) + sc_biguint<32>(or_ln82_5_8_reg_19539.read()));
}

void sha256d::thread_add_ln84_26_fu_6212_p2() {
    add_ln84_26_fu_6212_p2 = (!add_ln84_25_fu_6208_p2.read().is_01() || !add_ln84_24_fu_6204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_25_fu_6208_p2.read()) + sc_biguint<32>(add_ln84_24_fu_6204_p2.read()));
}

void sha256d::thread_add_ln84_27_fu_6219_p2() {
    add_ln84_27_fu_6219_p2 = (!xor_ln84_37_reg_19761.read().is_01() || !xor_ln84_39_reg_19572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_37_reg_19761.read()) + sc_biguint<32>(xor_ln84_39_reg_19572.read()));
}

void sha256d::thread_add_ln84_28_fu_6223_p2() {
    add_ln84_28_fu_6223_p2 = (!add_ln84_8_reg_19672.read().is_01() || !or_ln82_5_9_reg_19544.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_8_reg_19672.read()) + sc_biguint<32>(or_ln82_5_9_reg_19544.read()));
}

void sha256d::thread_add_ln84_29_fu_6227_p2() {
    add_ln84_29_fu_6227_p2 = (!add_ln84_28_fu_6223_p2.read().is_01() || !add_ln84_27_fu_6219_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_28_fu_6223_p2.read()) + sc_biguint<32>(add_ln84_27_fu_6219_p2.read()));
}

void sha256d::thread_add_ln84_2_fu_4967_p2() {
    add_ln84_2_fu_4967_p2 = (!add_ln84_1_fu_4963_p2.read().is_01() || !add_ln84_fu_4959_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_1_fu_4963_p2.read()) + sc_biguint<32>(add_ln84_fu_4959_p2.read()));
}

void sha256d::thread_add_ln84_30_fu_6514_p2() {
    add_ln84_30_fu_6514_p2 = (!xor_ln84_41_reg_19788.read().is_01() || !xor_ln84_43_reg_19577.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_41_reg_19788.read()) + sc_biguint<32>(xor_ln84_43_reg_19577.read()));
}

void sha256d::thread_add_ln84_31_fu_5434_p2() {
    add_ln84_31_fu_5434_p2 = (!add_ln84_11_fu_5288_p2.read().is_01() || !or_ln82_5_s_reg_19560.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_11_fu_5288_p2.read()) + sc_biguint<32>(or_ln82_5_s_reg_19560.read()));
}

void sha256d::thread_add_ln84_32_fu_6518_p2() {
    add_ln84_32_fu_6518_p2 = (!add_ln84_31_reg_19693.read().is_01() || !add_ln84_30_fu_6514_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_31_reg_19693.read()) + sc_biguint<32>(add_ln84_30_fu_6514_p2.read()));
}

void sha256d::thread_add_ln84_33_fu_6524_p2() {
    add_ln84_33_fu_6524_p2 = (!xor_ln84_45_reg_19793.read().is_01() || !xor_ln84_47_reg_19598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_45_reg_19793.read()) + sc_biguint<32>(xor_ln84_47_reg_19598.read()));
}

void sha256d::thread_add_ln84_34_fu_5749_p2() {
    add_ln84_34_fu_5749_p2 = (!add_ln84_14_fu_5587_p2.read().is_01() || !or_ln82_5_10_reg_19566.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_14_fu_5587_p2.read()) + sc_biguint<32>(or_ln82_5_10_reg_19566.read()));
}

void sha256d::thread_add_ln84_35_fu_6528_p2() {
    add_ln84_35_fu_6528_p2 = (!add_ln84_34_reg_19729.read().is_01() || !add_ln84_33_fu_6524_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_34_reg_19729.read()) + sc_biguint<32>(add_ln84_33_fu_6524_p2.read()));
}

void sha256d::thread_add_ln84_36_fu_6822_p2() {
    add_ln84_36_fu_6822_p2 = (!xor_ln84_49_reg_19820.read().is_01() || !xor_ln84_51_reg_19603.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_49_reg_19820.read()) + sc_biguint<32>(xor_ln84_51_reg_19603.read()));
}

void sha256d::thread_add_ln84_37_fu_6604_p2() {
    add_ln84_37_fu_6604_p2 = (!add_ln84_17_reg_19713.read().is_01() || !or_ln82_5_11_reg_19582.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_17_reg_19713.read()) + sc_biguint<32>(or_ln82_5_11_reg_19582.read()));
}

void sha256d::thread_add_ln84_38_fu_6826_p2() {
    add_ln84_38_fu_6826_p2 = (!add_ln84_37_reg_19825.read().is_01() || !add_ln84_36_fu_6822_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_37_reg_19825.read()) + sc_biguint<32>(add_ln84_36_fu_6822_p2.read()));
}

void sha256d::thread_add_ln84_39_fu_6832_p2() {
    add_ln84_39_fu_6832_p2 = (!xor_ln84_53_reg_19830.read().is_01() || !xor_ln84_55_reg_19630.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_53_reg_19830.read()) + sc_biguint<32>(xor_ln84_55_reg_19630.read()));
}

void sha256d::thread_add_ln84_3_fu_4974_p2() {
    add_ln84_3_fu_4974_p2 = (!xor_ln84_5_reg_19625.read().is_01() || !xor_ln84_7_reg_19489.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_5_reg_19625.read()) + sc_biguint<32>(xor_ln84_7_reg_19489.read()));
}

void sha256d::thread_add_ln84_40_fu_6678_p2() {
    add_ln84_40_fu_6678_p2 = (!add_ln84_20_reg_19744.read().is_01() || !or_ln82_5_12_reg_19587.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_20_reg_19744.read()) + sc_biguint<32>(or_ln82_5_12_reg_19587.read()));
}

void sha256d::thread_add_ln84_41_fu_6836_p2() {
    add_ln84_41_fu_6836_p2 = (!add_ln84_40_reg_19835.read().is_01() || !add_ln84_39_fu_6832_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_40_reg_19835.read()) + sc_biguint<32>(add_ln84_39_fu_6832_p2.read()));
}

void sha256d::thread_add_ln84_42_fu_6912_p2() {
    add_ln84_42_fu_6912_p2 = (!xor_ln84_57_fu_6906_p2.read().is_01() || !xor_ln84_59_reg_19635.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_57_fu_6906_p2.read()) + sc_biguint<32>(xor_ln84_59_reg_19635.read()));
}

void sha256d::thread_add_ln84_43_fu_6917_p2() {
    add_ln84_43_fu_6917_p2 = (!add_ln84_23_reg_19750.read().is_01() || !or_ln82_5_13_reg_19608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_23_reg_19750.read()) + sc_biguint<32>(or_ln82_5_13_reg_19608.read()));
}

void sha256d::thread_add_ln84_44_fu_6921_p2() {
    add_ln84_44_fu_6921_p2 = (!add_ln84_43_fu_6917_p2.read().is_01() || !add_ln84_42_fu_6912_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_43_fu_6917_p2.read()) + sc_biguint<32>(add_ln84_42_fu_6912_p2.read()));
}

void sha256d::thread_add_ln84_45_fu_6997_p2() {
    add_ln84_45_fu_6997_p2 = (!xor_ln84_61_fu_6991_p2.read().is_01() || !xor_ln84_63_reg_19662.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_61_fu_6991_p2.read()) + sc_biguint<32>(xor_ln84_63_reg_19662.read()));
}

void sha256d::thread_add_ln84_46_fu_7002_p2() {
    add_ln84_46_fu_7002_p2 = (!add_ln84_26_reg_19776.read().is_01() || !or_ln82_5_14_reg_19614.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_26_reg_19776.read()) + sc_biguint<32>(or_ln82_5_14_reg_19614.read()));
}

void sha256d::thread_add_ln84_47_fu_7006_p2() {
    add_ln84_47_fu_7006_p2 = (!add_ln84_46_fu_7002_p2.read().is_01() || !add_ln84_45_fu_6997_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_46_fu_7002_p2.read()) + sc_biguint<32>(add_ln84_45_fu_6997_p2.read()));
}

void sha256d::thread_add_ln84_48_fu_7082_p2() {
    add_ln84_48_fu_7082_p2 = (!xor_ln84_65_fu_7076_p2.read().is_01() || !xor_ln84_67_reg_19667.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_65_fu_7076_p2.read()) + sc_biguint<32>(xor_ln84_67_reg_19667.read()));
}

void sha256d::thread_add_ln84_49_fu_7087_p2() {
    add_ln84_49_fu_7087_p2 = (!add_ln84_29_reg_19782.read().is_01() || !add_ln84_2_reg_19640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_29_reg_19782.read()) + sc_biguint<32>(add_ln84_2_reg_19640.read()));
}

void sha256d::thread_add_ln84_4_fu_4978_p2() {
    add_ln84_4_fu_4978_p2 = (!or_ln82_5_s_reg_19560.read().is_01() || !or_ln82_5_1_reg_19452.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_s_reg_19560.read()) + sc_biguint<32>(or_ln82_5_1_reg_19452.read()));
}

void sha256d::thread_add_ln84_50_fu_7091_p2() {
    add_ln84_50_fu_7091_p2 = (!add_ln84_49_fu_7087_p2.read().is_01() || !add_ln84_48_fu_7082_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_49_fu_7087_p2.read()) + sc_biguint<32>(add_ln84_48_fu_7082_p2.read()));
}

void sha256d::thread_add_ln84_51_fu_7167_p2() {
    add_ln84_51_fu_7167_p2 = (!xor_ln84_69_fu_7161_p2.read().is_01() || !xor_ln84_71_reg_19698.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_69_fu_7161_p2.read()) + sc_biguint<32>(xor_ln84_71_reg_19698.read()));
}

void sha256d::thread_add_ln84_52_fu_7172_p2() {
    add_ln84_52_fu_7172_p2 = (!add_ln84_32_reg_19808.read().is_01() || !add_ln84_5_reg_19646.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_32_reg_19808.read()) + sc_biguint<32>(add_ln84_5_reg_19646.read()));
}

void sha256d::thread_add_ln84_53_fu_7176_p2() {
    add_ln84_53_fu_7176_p2 = (!add_ln84_52_fu_7172_p2.read().is_01() || !add_ln84_51_fu_7167_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_52_fu_7172_p2.read()) + sc_biguint<32>(add_ln84_51_fu_7167_p2.read()));
}

void sha256d::thread_add_ln84_54_fu_7252_p2() {
    add_ln84_54_fu_7252_p2 = (!xor_ln84_73_fu_7246_p2.read().is_01() || !xor_ln84_75_reg_19703.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_73_fu_7246_p2.read()) + sc_biguint<32>(xor_ln84_75_reg_19703.read()));
}

void sha256d::thread_add_ln84_55_fu_7257_p2() {
    add_ln84_55_fu_7257_p2 = (!add_ln84_35_reg_19814.read().is_01() || !add_ln84_8_reg_19672.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_35_reg_19814.read()) + sc_biguint<32>(add_ln84_8_reg_19672.read()));
}

void sha256d::thread_add_ln84_56_fu_7261_p2() {
    add_ln84_56_fu_7261_p2 = (!add_ln84_55_fu_7257_p2.read().is_01() || !add_ln84_54_fu_7252_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_55_fu_7257_p2.read()) + sc_biguint<32>(add_ln84_54_fu_7252_p2.read()));
}

void sha256d::thread_add_ln84_57_fu_7337_p2() {
    add_ln84_57_fu_7337_p2 = (!xor_ln84_77_fu_7331_p2.read().is_01() || !xor_ln84_79_reg_19734.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_77_fu_7331_p2.read()) + sc_biguint<32>(xor_ln84_79_reg_19734.read()));
}

void sha256d::thread_add_ln84_58_fu_7342_p2() {
    add_ln84_58_fu_7342_p2 = (!add_ln84_38_fu_6826_p2.read().is_01() || !add_ln84_11_reg_19678.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_38_fu_6826_p2.read()) + sc_biguint<32>(add_ln84_11_reg_19678.read()));
}

void sha256d::thread_add_ln84_59_fu_7347_p2() {
    add_ln84_59_fu_7347_p2 = (!add_ln84_58_fu_7342_p2.read().is_01() || !add_ln84_57_fu_7337_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_58_fu_7342_p2.read()) + sc_biguint<32>(add_ln84_57_fu_7337_p2.read()));
}

void sha256d::thread_add_ln84_5_fu_4982_p2() {
    add_ln84_5_fu_4982_p2 = (!add_ln84_4_fu_4978_p2.read().is_01() || !add_ln84_3_fu_4974_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_4_fu_4978_p2.read()) + sc_biguint<32>(add_ln84_3_fu_4974_p2.read()));
}

void sha256d::thread_add_ln84_60_fu_7423_p2() {
    add_ln84_60_fu_7423_p2 = (!xor_ln84_81_fu_7417_p2.read().is_01() || !xor_ln84_83_reg_19739.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_81_fu_7417_p2.read()) + sc_biguint<32>(xor_ln84_83_reg_19739.read()));
}

void sha256d::thread_add_ln84_61_fu_7428_p2() {
    add_ln84_61_fu_7428_p2 = (!add_ln84_41_fu_6836_p2.read().is_01() || !add_ln84_14_reg_19708.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_41_fu_6836_p2.read()) + sc_biguint<32>(add_ln84_14_reg_19708.read()));
}

void sha256d::thread_add_ln84_62_fu_7433_p2() {
    add_ln84_62_fu_7433_p2 = (!add_ln84_61_fu_7428_p2.read().is_01() || !add_ln84_60_fu_7423_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_61_fu_7428_p2.read()) + sc_biguint<32>(add_ln84_60_fu_7423_p2.read()));
}

void sha256d::thread_add_ln84_63_fu_7509_p2() {
    add_ln84_63_fu_7509_p2 = (!xor_ln84_85_fu_7503_p2.read().is_01() || !xor_ln84_87_reg_19766.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_85_fu_7503_p2.read()) + sc_biguint<32>(xor_ln84_87_reg_19766.read()));
}

void sha256d::thread_add_ln84_64_fu_7514_p2() {
    add_ln84_64_fu_7514_p2 = (!add_ln84_44_fu_6921_p2.read().is_01() || !add_ln84_17_reg_19713.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_44_fu_6921_p2.read()) + sc_biguint<32>(add_ln84_17_reg_19713.read()));
}

void sha256d::thread_add_ln84_65_fu_7519_p2() {
    add_ln84_65_fu_7519_p2 = (!add_ln84_64_fu_7514_p2.read().is_01() || !add_ln84_63_fu_7509_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_64_fu_7514_p2.read()) + sc_biguint<32>(add_ln84_63_fu_7509_p2.read()));
}

void sha256d::thread_add_ln84_66_fu_7595_p2() {
    add_ln84_66_fu_7595_p2 = (!xor_ln84_89_fu_7589_p2.read().is_01() || !xor_ln84_91_reg_19771.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_89_fu_7589_p2.read()) + sc_biguint<32>(xor_ln84_91_reg_19771.read()));
}

void sha256d::thread_add_ln84_67_fu_7600_p2() {
    add_ln84_67_fu_7600_p2 = (!add_ln84_47_fu_7006_p2.read().is_01() || !add_ln84_20_reg_19744.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_47_fu_7006_p2.read()) + sc_biguint<32>(add_ln84_20_reg_19744.read()));
}

void sha256d::thread_add_ln84_68_fu_7605_p2() {
    add_ln84_68_fu_7605_p2 = (!add_ln84_67_fu_7600_p2.read().is_01() || !add_ln84_66_fu_7595_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_67_fu_7600_p2.read()) + sc_biguint<32>(add_ln84_66_fu_7595_p2.read()));
}

void sha256d::thread_add_ln84_69_fu_7681_p2() {
    add_ln84_69_fu_7681_p2 = (!xor_ln84_93_fu_7675_p2.read().is_01() || !xor_ln84_95_reg_19798.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_93_fu_7675_p2.read()) + sc_biguint<32>(xor_ln84_95_reg_19798.read()));
}

void sha256d::thread_add_ln84_6_fu_5269_p2() {
    add_ln84_6_fu_5269_p2 = (!xor_ln84_9_reg_19652.read().is_01() || !xor_ln84_11_reg_19494.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_9_reg_19652.read()) + sc_biguint<32>(xor_ln84_11_reg_19494.read()));
}

void sha256d::thread_add_ln84_70_fu_7686_p2() {
    add_ln84_70_fu_7686_p2 = (!add_ln84_50_fu_7091_p2.read().is_01() || !add_ln84_23_reg_19750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_50_fu_7091_p2.read()) + sc_biguint<32>(add_ln84_23_reg_19750.read()));
}

void sha256d::thread_add_ln84_71_fu_7691_p2() {
    add_ln84_71_fu_7691_p2 = (!add_ln84_70_fu_7686_p2.read().is_01() || !add_ln84_69_fu_7681_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_70_fu_7686_p2.read()) + sc_biguint<32>(add_ln84_69_fu_7681_p2.read()));
}

void sha256d::thread_add_ln84_72_fu_8687_p2() {
    add_ln84_72_fu_8687_p2 = (!xor_ln84_97_reg_19925.read().is_01() || !xor_ln84_99_reg_19803.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_97_reg_19925.read()) + sc_biguint<32>(xor_ln84_99_reg_19803.read()));
}

void sha256d::thread_add_ln84_73_fu_7767_p2() {
    add_ln84_73_fu_7767_p2 = (!add_ln84_53_fu_7176_p2.read().is_01() || !add_ln84_26_reg_19776.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_53_fu_7176_p2.read()) + sc_biguint<32>(add_ln84_26_reg_19776.read()));
}

void sha256d::thread_add_ln84_74_fu_8691_p2() {
    add_ln84_74_fu_8691_p2 = (!add_ln84_73_reg_19930.read().is_01() || !add_ln84_72_fu_8687_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_73_reg_19930.read()) + sc_biguint<32>(add_ln84_72_fu_8687_p2.read()));
}

void sha256d::thread_add_ln84_75_fu_8696_p2() {
    add_ln84_75_fu_8696_p2 = (!xor_ln84_101_reg_19935.read().is_01() || !xor_ln84_103_reg_19840.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_101_reg_19935.read()) + sc_biguint<32>(xor_ln84_103_reg_19840.read()));
}

void sha256d::thread_add_ln84_76_fu_7842_p2() {
    add_ln84_76_fu_7842_p2 = (!add_ln84_56_fu_7261_p2.read().is_01() || !add_ln84_29_reg_19782.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_56_fu_7261_p2.read()) + sc_biguint<32>(add_ln84_29_reg_19782.read()));
}

void sha256d::thread_add_ln84_77_fu_8700_p2() {
    add_ln84_77_fu_8700_p2 = (!add_ln84_76_reg_19940.read().is_01() || !add_ln84_75_fu_8696_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_76_reg_19940.read()) + sc_biguint<32>(add_ln84_75_fu_8696_p2.read()));
}

void sha256d::thread_add_ln84_78_fu_8775_p2() {
    add_ln84_78_fu_8775_p2 = (!xor_ln84_105_fu_8769_p2.read().is_01() || !xor_ln84_107_reg_19845.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_105_fu_8769_p2.read()) + sc_biguint<32>(xor_ln84_107_reg_19845.read()));
}

void sha256d::thread_add_ln84_79_fu_8780_p2() {
    add_ln84_79_fu_8780_p2 = (!add_ln84_59_reg_19890.read().is_01() || !add_ln84_32_reg_19808.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_59_reg_19890.read()) + sc_biguint<32>(add_ln84_32_reg_19808.read()));
}

void sha256d::thread_add_ln84_7_fu_5273_p2() {
    add_ln84_7_fu_5273_p2 = (!or_ln82_5_10_reg_19566.read().is_01() || !or_ln82_5_2_reg_19479.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln82_5_10_reg_19566.read()) + sc_biguint<32>(or_ln82_5_2_reg_19479.read()));
}

void sha256d::thread_add_ln84_80_fu_8784_p2() {
    add_ln84_80_fu_8784_p2 = (!add_ln84_79_fu_8780_p2.read().is_01() || !add_ln84_78_fu_8775_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_79_fu_8780_p2.read()) + sc_biguint<32>(add_ln84_78_fu_8775_p2.read()));
}

void sha256d::thread_add_ln84_81_fu_8860_p2() {
    add_ln84_81_fu_8860_p2 = (!xor_ln84_109_fu_8854_p2.read().is_01() || !xor_ln84_111_reg_19945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_109_fu_8854_p2.read()) + sc_biguint<32>(xor_ln84_111_reg_19945.read()));
}

void sha256d::thread_add_ln84_82_fu_8865_p2() {
    add_ln84_82_fu_8865_p2 = (!add_ln84_62_reg_19897.read().is_01() || !add_ln84_35_reg_19814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_62_reg_19897.read()) + sc_biguint<32>(add_ln84_35_reg_19814.read()));
}

void sha256d::thread_add_ln84_83_fu_8869_p2() {
    add_ln84_83_fu_8869_p2 = (!add_ln84_82_fu_8865_p2.read().is_01() || !add_ln84_81_fu_8860_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_82_fu_8865_p2.read()) + sc_biguint<32>(add_ln84_81_fu_8860_p2.read()));
}

void sha256d::thread_add_ln84_84_fu_8945_p2() {
    add_ln84_84_fu_8945_p2 = (!xor_ln84_113_fu_8939_p2.read().is_01() || !xor_ln84_115_reg_19950.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_113_fu_8939_p2.read()) + sc_biguint<32>(xor_ln84_115_reg_19950.read()));
}

void sha256d::thread_add_ln84_85_fu_8950_p2() {
    add_ln84_85_fu_8950_p2 = (!add_ln84_65_reg_19904.read().is_01() || !add_ln84_38_reg_19850.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_65_reg_19904.read()) + sc_biguint<32>(add_ln84_38_reg_19850.read()));
}

void sha256d::thread_add_ln84_86_fu_8954_p2() {
    add_ln84_86_fu_8954_p2 = (!add_ln84_85_fu_8950_p2.read().is_01() || !add_ln84_84_fu_8945_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_85_fu_8950_p2.read()) + sc_biguint<32>(add_ln84_84_fu_8945_p2.read()));
}

void sha256d::thread_add_ln84_87_fu_9030_p2() {
    add_ln84_87_fu_9030_p2 = (!xor_ln84_117_fu_9024_p2.read().is_01() || !xor_ln84_119_reg_19955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_117_fu_9024_p2.read()) + sc_biguint<32>(xor_ln84_119_reg_19955.read()));
}

void sha256d::thread_add_ln84_88_fu_9035_p2() {
    add_ln84_88_fu_9035_p2 = (!add_ln84_68_reg_19911.read().is_01() || !add_ln84_41_reg_19855.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_68_reg_19911.read()) + sc_biguint<32>(add_ln84_41_reg_19855.read()));
}

void sha256d::thread_add_ln84_89_fu_9039_p2() {
    add_ln84_89_fu_9039_p2 = (!add_ln84_88_fu_9035_p2.read().is_01() || !add_ln84_87_fu_9030_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_88_fu_9035_p2.read()) + sc_biguint<32>(add_ln84_87_fu_9030_p2.read()));
}

void sha256d::thread_add_ln84_8_fu_5277_p2() {
    add_ln84_8_fu_5277_p2 = (!add_ln84_7_fu_5273_p2.read().is_01() || !add_ln84_6_fu_5269_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_7_fu_5273_p2.read()) + sc_biguint<32>(add_ln84_6_fu_5269_p2.read()));
}

void sha256d::thread_add_ln84_90_fu_9115_p2() {
    add_ln84_90_fu_9115_p2 = (!xor_ln84_121_fu_9109_p2.read().is_01() || !xor_ln84_123_reg_19960.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_121_fu_9109_p2.read()) + sc_biguint<32>(xor_ln84_123_reg_19960.read()));
}

void sha256d::thread_add_ln84_91_fu_9120_p2() {
    add_ln84_91_fu_9120_p2 = (!add_ln84_71_reg_19918.read().is_01() || !add_ln84_44_reg_19860.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_71_reg_19918.read()) + sc_biguint<32>(add_ln84_44_reg_19860.read()));
}

void sha256d::thread_add_ln84_92_fu_9124_p2() {
    add_ln84_92_fu_9124_p2 = (!add_ln84_91_fu_9120_p2.read().is_01() || !add_ln84_90_fu_9115_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_91_fu_9120_p2.read()) + sc_biguint<32>(add_ln84_90_fu_9115_p2.read()));
}

void sha256d::thread_add_ln84_93_fu_9200_p2() {
    add_ln84_93_fu_9200_p2 = (!xor_ln84_125_fu_9194_p2.read().is_01() || !xor_ln84_127_reg_19965.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_125_fu_9194_p2.read()) + sc_biguint<32>(xor_ln84_127_reg_19965.read()));
}

void sha256d::thread_add_ln84_94_fu_9205_p2() {
    add_ln84_94_fu_9205_p2 = (!add_ln84_74_fu_8691_p2.read().is_01() || !add_ln84_47_reg_19866.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_74_fu_8691_p2.read()) + sc_biguint<32>(add_ln84_47_reg_19866.read()));
}

void sha256d::thread_add_ln84_95_fu_9210_p2() {
    add_ln84_95_fu_9210_p2 = (!add_ln84_94_fu_9205_p2.read().is_01() || !add_ln84_93_fu_9200_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_94_fu_9205_p2.read()) + sc_biguint<32>(add_ln84_93_fu_9200_p2.read()));
}

void sha256d::thread_add_ln84_96_fu_9286_p2() {
    add_ln84_96_fu_9286_p2 = (!xor_ln84_129_fu_9280_p2.read().is_01() || !xor_ln84_131_reg_19970.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_129_fu_9280_p2.read()) + sc_biguint<32>(xor_ln84_131_reg_19970.read()));
}

void sha256d::thread_add_ln84_97_fu_9291_p2() {
    add_ln84_97_fu_9291_p2 = (!add_ln84_77_fu_8700_p2.read().is_01() || !add_ln84_50_reg_19872.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_77_fu_8700_p2.read()) + sc_biguint<32>(add_ln84_50_reg_19872.read()));
}

void sha256d::thread_add_ln84_98_fu_9296_p2() {
    add_ln84_98_fu_9296_p2 = (!add_ln84_97_fu_9291_p2.read().is_01() || !add_ln84_96_fu_9286_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln84_97_fu_9291_p2.read()) + sc_biguint<32>(add_ln84_96_fu_9286_p2.read()));
}

void sha256d::thread_add_ln84_99_fu_9372_p2() {
    add_ln84_99_fu_9372_p2 = (!xor_ln84_133_fu_9366_p2.read().is_01() || !xor_ln84_135_reg_19975.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_133_fu_9366_p2.read()) + sc_biguint<32>(xor_ln84_135_reg_19975.read()));
}

void sha256d::thread_add_ln84_9_fu_5284_p2() {
    add_ln84_9_fu_5284_p2 = (!xor_ln84_13_reg_19657.read().is_01() || !xor_ln84_15_reg_19509.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_13_reg_19657.read()) + sc_biguint<32>(xor_ln84_15_reg_19509.read()));
}

void sha256d::thread_add_ln84_fu_4959_p2() {
    add_ln84_fu_4959_p2 = (!xor_ln84_1_reg_19620.read().is_01() || !xor_ln84_3_reg_19457.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln84_1_reg_19620.read()) + sc_biguint<32>(xor_ln84_3_reg_19457.read()));
}

void sha256d::thread_add_ln96_1_fu_11341_p2() {
    add_ln96_1_fu_11341_p2 = (!xor_ln96_3_fu_11329_p2.read().is_01() || !xor_ln96_1_fu_11305_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln96_3_fu_11329_p2.read()) + sc_biguint<32>(xor_ln96_1_fu_11305_p2.read()));
}

void sha256d::thread_add_ln96_2_fu_11347_p2() {
    add_ln96_2_fu_11347_p2 = (!add_ln96_1_fu_11341_p2.read().is_01() || !h_0_reg_1572.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln96_1_fu_11341_p2.read()) + sc_biguint<32>(h_0_reg_1572.read()));
}

void sha256d::thread_add_ln96_fu_11335_p2() {
    add_ln96_fu_11335_p2 = (!K_q0.read().is_01() || !m_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_q0.read()) + sc_biguint<32>(m_q0.read()));
}

void sha256d::thread_and_ln162_1_fu_18181_p2() {
    and_ln162_1_fu_18181_p2 = (h_2_reg_1671.read() & xor_ln162_2_fu_18175_p2.read());
}

void sha256d::thread_and_ln162_fu_18169_p2() {
    and_ln162_fu_18169_p2 = (g_2_reg_1658.read() & f_2_reg_1646.read());
}

void sha256d::thread_and_ln163_1_fu_18306_p2() {
    and_ln163_1_fu_18306_p2 = (d_2_reg_1620.read() & c_2_reg_1607.read());
}

void sha256d::thread_and_ln163_fu_18300_p2() {
    and_ln163_fu_18300_p2 = (xor_ln163_2_fu_18294_p2.read() & b_2_reg_1595.read());
}

void sha256d::thread_and_ln392_1_fu_18542_p2() {
    and_ln392_1_fu_18542_p2 = (p_Val2_1_reg_1697.read() & xor_ln392_2_fu_18536_p2.read());
}

void sha256d::thread_and_ln392_2_fu_18548_p2() {
    and_ln392_2_fu_18548_p2 = (select_ln392_3_fu_18510_p3.read() & and_ln392_fu_18530_p2.read());
}

void sha256d::thread_and_ln392_fu_18530_p2() {
    and_ln392_fu_18530_p2 = (shl_ln392_1_fu_18518_p2.read() & lshr_ln392_fu_18524_p2.read());
}

void sha256d::thread_and_ln96_1_fu_11323_p2() {
    and_ln96_1_fu_11323_p2 = (h_1_reg_1560.read() & xor_ln96_2_fu_11317_p2.read());
}

void sha256d::thread_and_ln96_fu_11311_p2() {
    and_ln96_fu_11311_p2 = (g_1_reg_1548.read() & f_1_reg_1537.read());
}

void sha256d::thread_and_ln97_1_fu_11449_p2() {
    and_ln97_1_fu_11449_p2 = (d_1_reg_1513.read() & c_1_reg_1501.read());
}

void sha256d::thread_and_ln97_fu_11443_p2() {
    and_ln97_fu_11443_p2 = (xor_ln97_2_fu_11437_p2.read() & b_1_reg_1490.read());
}

void sha256d::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[35];
}

void sha256d::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[41];
}

void sha256d::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void sha256d::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void sha256d::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void sha256d::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void sha256d::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void sha256d::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void sha256d::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void sha256d::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void sha256d::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void sha256d::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void sha256d::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void sha256d::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void sha256d::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void sha256d::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void sha256d::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void sha256d::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void sha256d::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void sha256d::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void sha256d::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void sha256d::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void sha256d::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void sha256d::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void sha256d::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void sha256d::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void sha256d::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void sha256d::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void sha256d::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void sha256d::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void sha256d::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void sha256d::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[36];
}

void sha256d::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[37];
}

void sha256d::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void sha256d::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[38];
}

void sha256d::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[39];
}

void sha256d::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[40];
}

void sha256d::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[42];
}

void sha256d::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[43];
}

void sha256d::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[44];
}

void sha256d::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void sha256d::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void sha256d::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void sha256d::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void sha256d::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void sha256d::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, input_r_TVALID_int.read()));
}

void sha256d::thread_ap_block_state36_pp0_stage0_iter0() {
    ap_block_state36_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state37_pp0_stage0_iter1() {
    ap_block_state37_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state43_pp1_stage0_iter0() {
    ap_block_state43_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state44_pp1_stage0_iter1() {
    ap_block_state44_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state46_io() {
    ap_block_state46_io = (esl_seteq<1,1,1>(icmp_ln185_fu_18384_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, output_r_TREADY_int.read()));
}

void sha256d::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_output_V_data_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_0, output_r_TREADY_int.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha256d::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sha256d::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void sha256d::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha256d::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256d::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void sha256d::thread_ap_phi_mux_i_0_phi_fu_1365_p4() {
    ap_phi_mux_i_0_phi_fu_1365_p4 = i_0_reg_1361.read();
}

void sha256d::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_output_V_data_V_U_apdone_blk.read()) || esl_seteq<1,1,1>(ap_const_logic_0, output_r_TREADY_int.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256d::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void sha256d::thread_e_1_fu_18318_p2() {
    e_1_fu_18318_p2 = (!t1_1_fu_18210_p2.read().is_01() || !d13_0_reg_1633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_1_fu_18210_p2.read()) + sc_biguint<32>(d13_0_reg_1633.read()));
}

void sha256d::thread_e_2_fu_11461_p2() {
    e_2_fu_11461_p2 = (!t1_fu_11353_p2.read().is_01() || !d_0_reg_1525.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_fu_11353_p2.read()) + sc_biguint<32>(d_0_reg_1525.read()));
}

void sha256d::thread_i_1_fu_17990_p2() {
    i_1_fu_17990_p2 = (!i18_2_reg_1584.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i18_2_reg_1584.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_i_2_fu_11221_p2() {
    i_2_fu_11221_p2 = (!i6_2_reg_1479.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i6_2_reg_1479.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_i_3_fu_18390_p2() {
    i_3_fu_18390_p2 = (!i23_0_reg_1711.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i23_0_reg_1711.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void sha256d::thread_i_fu_1736_p2() {
    i_fu_1736_p2 = (!i_0_reg_1361.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_1361.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_icmp_ln161_fu_17984_p2() {
    icmp_ln161_fu_17984_p2 = (!i18_2_reg_1584.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i18_2_reg_1584.read() == ap_const_lv7_40);
}

void sha256d::thread_icmp_ln185_fu_18384_p2() {
    icmp_ln185_fu_18384_p2 = (!i23_0_reg_1711.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i23_0_reg_1711.read() == ap_const_lv4_8);
}

void sha256d::thread_icmp_ln392_fu_18432_p2() {
    icmp_ln392_fu_18432_p2 = (!Lo_assign_1_fu_18400_p3.read().is_01() || !or_ln186_fu_18408_p2.read().is_01())? sc_lv<1>(): (sc_biguint<8>(Lo_assign_1_fu_18400_p3.read()) > sc_biguint<8>(or_ln186_fu_18408_p2.read()));
}

void sha256d::thread_icmp_ln39_fu_1730_p2() {
    icmp_ln39_fu_1730_p2 = (!i_0_reg_1361.read().is_01() || !ap_const_lv7_50.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_1361.read() == ap_const_lv7_50);
}

void sha256d::thread_icmp_ln681_fu_1756_p2() {
    icmp_ln681_fu_1756_p2 = (!Lo_assign_fu_1742_p3.read().is_01() || !or_ln40_fu_1750_p2.read().is_01())? sc_lv<1>(): (sc_biguint<10>(Lo_assign_fu_1742_p3.read()) > sc_biguint<10>(or_ln40_fu_1750_p2.read()));
}

void sha256d::thread_icmp_ln78_fu_2248_p2() {
    icmp_ln78_fu_2248_p2 = (!t_0_reg_1468.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(t_0_reg_1468.read() == ap_const_lv2_2);
}

void sha256d::thread_icmp_ln95_fu_11215_p2() {
    icmp_ln95_fu_11215_p2 = (!i6_2_reg_1479.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i6_2_reg_1479.read() == ap_const_lv7_40);
}

void sha256d::thread_input_data_0_fu_1844_p1() {
    input_data_0_fu_1844_p1 = p_Result_s_fu_1838_p2.read().range(8-1, 0);
}

void sha256d::thread_input_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        input_r_TDATA_blk_n = input_r_TVALID_int.read();
    } else {
        input_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void sha256d::thread_input_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, input_r_TVALID.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, regslice_both_input_V_data_V_U_ack_in.read()))) {
        input_r_TREADY = ap_const_logic_1;
    } else {
        input_r_TREADY = ap_const_logic_0;
    }
}

void sha256d::thread_input_r_TREADY_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, input_r_TVALID_int.read())))) {
        input_r_TREADY_int = ap_const_logic_1;
    } else {
        input_r_TREADY_int = ap_const_logic_0;
    }
}

void sha256d::thread_lshr_ln150_100_fu_14011_p4() {
    lshr_ln150_100_fu_14011_p4 = m_33_fu_13876_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_101_fu_12969_p4() {
    lshr_ln150_101_fu_12969_p4 = m_20_fu_11982_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_102_fu_12991_p4() {
    lshr_ln150_102_fu_12991_p4 = m_20_fu_11982_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_103_fu_13013_p4() {
    lshr_ln150_103_fu_13013_p4 = m_20_fu_11982_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_104_fu_14075_p4() {
    lshr_ln150_104_fu_14075_p4 = m_34_fu_13961_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_105_fu_14097_p4() {
    lshr_ln150_105_fu_14097_p4 = m_34_fu_13961_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_106_fu_13039_p4() {
    lshr_ln150_106_fu_13039_p4 = m_21_fu_12134_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_107_fu_13061_p4() {
    lshr_ln150_107_fu_13061_p4 = m_21_fu_12134_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_108_fu_13083_p4() {
    lshr_ln150_108_fu_13083_p4 = m_21_fu_12134_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_109_fu_14160_p4() {
    lshr_ln150_109_fu_14160_p4 = m_35_fu_14047_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_10_fu_13464_p4() {
    lshr_ln150_10_fu_13464_p4 = m_24_fu_13459_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_110_fu_14182_p4() {
    lshr_ln150_110_fu_14182_p4 = m_35_fu_14047_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_111_fu_13109_p4() {
    lshr_ln150_111_fu_13109_p4 = m_22_fu_12292_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_112_fu_13131_p4() {
    lshr_ln150_112_fu_13131_p4 = m_22_fu_12292_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_113_fu_13153_p4() {
    lshr_ln150_113_fu_13153_p4 = m_22_fu_12292_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_114_fu_14246_p4() {
    lshr_ln150_114_fu_14246_p4 = m_36_fu_14132_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_115_fu_14268_p4() {
    lshr_ln150_115_fu_14268_p4 = m_36_fu_14132_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_116_fu_13179_p4() {
    lshr_ln150_116_fu_13179_p4 = m_23_fu_12380_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_117_fu_13201_p4() {
    lshr_ln150_117_fu_13201_p4 = m_23_fu_12380_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_118_fu_13223_p4() {
    lshr_ln150_118_fu_13223_p4 = m_23_fu_12380_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_119_fu_14321_p4() {
    lshr_ln150_119_fu_14321_p4 = m_37_fu_14218_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_11_fu_12537_p4() {
    lshr_ln150_11_fu_12537_p4 = m_25_fu_12531_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_120_fu_14343_p4() {
    lshr_ln150_120_fu_14343_p4 = m_37_fu_14218_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_121_fu_14369_p4() {
    lshr_ln150_121_fu_14369_p4 = m_24_fu_13459_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_122_fu_14391_p4() {
    lshr_ln150_122_fu_14391_p4 = m_24_fu_13459_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_123_fu_14413_p4() {
    lshr_ln150_123_fu_14413_p4 = m_24_fu_13459_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_124_fu_15184_p4() {
    lshr_ln150_124_fu_15184_p4 = m_38_fu_15148_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_125_fu_15206_p4() {
    lshr_ln150_125_fu_15206_p4 = m_38_fu_15148_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_126_fu_13249_p4() {
    lshr_ln150_126_fu_13249_p4 = m_25_fu_12531_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_127_fu_13271_p4() {
    lshr_ln150_127_fu_13271_p4 = m_25_fu_12531_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_128_fu_13293_p4() {
    lshr_ln150_128_fu_13293_p4 = m_25_fu_12531_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_129_fu_15269_p4() {
    lshr_ln150_129_fu_15269_p4 = m_39_fu_15157_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_12_fu_13539_p4() {
    lshr_ln150_12_fu_13539_p4 = m_26_fu_13534_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_130_fu_15291_p4() {
    lshr_ln150_130_fu_15291_p4 = m_39_fu_15157_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_131_fu_14444_p4() {
    lshr_ln150_131_fu_14444_p4 = m_26_fu_13534_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_132_fu_14466_p4() {
    lshr_ln150_132_fu_14466_p4 = m_26_fu_13534_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_133_fu_14488_p4() {
    lshr_ln150_133_fu_14488_p4 = m_26_fu_13534_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_134_fu_15354_p4() {
    lshr_ln150_134_fu_15354_p4 = m_40_fu_15241_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_135_fu_15376_p4() {
    lshr_ln150_135_fu_15376_p4 = m_40_fu_15241_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_136_fu_13319_p4() {
    lshr_ln150_136_fu_13319_p4 = m_27_fu_12607_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_137_fu_13341_p4() {
    lshr_ln150_137_fu_13341_p4 = m_27_fu_12607_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_138_fu_13363_p4() {
    lshr_ln150_138_fu_13363_p4 = m_27_fu_12607_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_139_fu_15439_p4() {
    lshr_ln150_139_fu_15439_p4 = m_41_fu_15326_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_13_fu_12613_p4() {
    lshr_ln150_13_fu_12613_p4 = m_27_fu_12607_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_140_fu_15461_p4() {
    lshr_ln150_140_fu_15461_p4 = m_41_fu_15326_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_141_fu_14514_p4() {
    lshr_ln150_141_fu_14514_p4 = m_28_fu_13609_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_142_fu_14536_p4() {
    lshr_ln150_142_fu_14536_p4 = m_28_fu_13609_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_143_fu_14558_p4() {
    lshr_ln150_143_fu_14558_p4 = m_28_fu_13609_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_144_fu_15524_p4() {
    lshr_ln150_144_fu_15524_p4 = m_42_fu_15411_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_145_fu_15546_p4() {
    lshr_ln150_145_fu_15546_p4 = m_42_fu_15411_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_146_fu_13389_p4() {
    lshr_ln150_146_fu_13389_p4 = m_29_fu_12683_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_147_fu_13411_p4() {
    lshr_ln150_147_fu_13411_p4 = m_29_fu_12683_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_148_fu_13433_p4() {
    lshr_ln150_148_fu_13433_p4 = m_29_fu_12683_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_149_fu_15609_p4() {
    lshr_ln150_149_fu_15609_p4 = m_43_fu_15496_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_14_fu_13614_p4() {
    lshr_ln150_14_fu_13614_p4 = m_28_fu_13609_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_150_fu_15631_p4() {
    lshr_ln150_150_fu_15631_p4 = m_43_fu_15496_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_151_fu_14584_p4() {
    lshr_ln150_151_fu_14584_p4 = m_30_fu_13690_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_152_fu_14606_p4() {
    lshr_ln150_152_fu_14606_p4 = m_30_fu_13690_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_153_fu_14628_p4() {
    lshr_ln150_153_fu_14628_p4 = m_30_fu_13690_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_154_fu_15695_p4() {
    lshr_ln150_154_fu_15695_p4 = m_44_fu_15581_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_155_fu_15717_p4() {
    lshr_ln150_155_fu_15717_p4 = m_44_fu_15581_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_156_fu_14654_p4() {
    lshr_ln150_156_fu_14654_p4 = m_31_fu_13705_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_157_fu_14676_p4() {
    lshr_ln150_157_fu_14676_p4 = m_31_fu_13705_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_158_fu_14698_p4() {
    lshr_ln150_158_fu_14698_p4 = m_31_fu_13705_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_159_fu_15781_p4() {
    lshr_ln150_159_fu_15781_p4 = m_45_fu_15667_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_15_fu_12689_p4() {
    lshr_ln150_15_fu_12689_p4 = m_29_fu_12683_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_160_fu_15803_p4() {
    lshr_ln150_160_fu_15803_p4 = m_45_fu_15667_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_161_fu_14724_p4() {
    lshr_ln150_161_fu_14724_p4 = m_32_fu_13790_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_162_fu_14746_p4() {
    lshr_ln150_162_fu_14746_p4 = m_32_fu_13790_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_163_fu_14768_p4() {
    lshr_ln150_163_fu_14768_p4 = m_32_fu_13790_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_164_fu_15867_p4() {
    lshr_ln150_164_fu_15867_p4 = m_46_fu_15753_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_165_fu_15889_p4() {
    lshr_ln150_165_fu_15889_p4 = m_46_fu_15753_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_166_fu_14794_p4() {
    lshr_ln150_166_fu_14794_p4 = m_33_fu_13876_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_167_fu_14816_p4() {
    lshr_ln150_167_fu_14816_p4 = m_33_fu_13876_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_168_fu_14838_p4() {
    lshr_ln150_168_fu_14838_p4 = m_33_fu_13876_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_169_fu_15953_p4() {
    lshr_ln150_169_fu_15953_p4 = m_47_fu_15839_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_16_fu_13711_p4() {
    lshr_ln150_16_fu_13711_p4 = m_30_fu_13690_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_170_fu_15975_p4() {
    lshr_ln150_170_fu_15975_p4 = m_47_fu_15839_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_171_fu_14864_p4() {
    lshr_ln150_171_fu_14864_p4 = m_34_fu_13961_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_172_fu_14886_p4() {
    lshr_ln150_172_fu_14886_p4 = m_34_fu_13961_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_173_fu_14908_p4() {
    lshr_ln150_173_fu_14908_p4 = m_34_fu_13961_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_174_fu_16039_p4() {
    lshr_ln150_174_fu_16039_p4 = m_48_fu_15925_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_175_fu_16061_p4() {
    lshr_ln150_175_fu_16061_p4 = m_48_fu_15925_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_176_fu_14934_p4() {
    lshr_ln150_176_fu_14934_p4 = m_35_fu_14047_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_177_fu_14956_p4() {
    lshr_ln150_177_fu_14956_p4 = m_35_fu_14047_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_178_fu_14978_p4() {
    lshr_ln150_178_fu_14978_p4 = m_35_fu_14047_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_179_fu_16114_p4() {
    lshr_ln150_179_fu_16114_p4 = m_49_fu_16011_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_17_fu_13796_p4() {
    lshr_ln150_17_fu_13796_p4 = m_31_fu_13705_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_180_fu_16136_p4() {
    lshr_ln150_180_fu_16136_p4 = m_49_fu_16011_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_181_fu_15004_p4() {
    lshr_ln150_181_fu_15004_p4 = m_36_fu_14132_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_182_fu_15026_p4() {
    lshr_ln150_182_fu_15026_p4 = m_36_fu_14132_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_183_fu_15048_p4() {
    lshr_ln150_183_fu_15048_p4 = m_36_fu_14132_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_184_fu_16989_p4() {
    lshr_ln150_184_fu_16989_p4 = m_50_fu_16953_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_185_fu_17011_p4() {
    lshr_ln150_185_fu_17011_p4 = m_50_fu_16953_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_186_fu_15074_p4() {
    lshr_ln150_186_fu_15074_p4 = m_37_fu_14218_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_187_fu_15096_p4() {
    lshr_ln150_187_fu_15096_p4 = m_37_fu_14218_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_188_fu_15118_p4() {
    lshr_ln150_188_fu_15118_p4 = m_37_fu_14218_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_189_fu_17074_p4() {
    lshr_ln150_189_fu_17074_p4 = m_51_fu_16962_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_18_fu_13882_p4() {
    lshr_ln150_18_fu_13882_p4 = m_32_fu_13790_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_190_fu_17096_p4() {
    lshr_ln150_190_fu_17096_p4 = m_51_fu_16962_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_191_fu_16167_p4() {
    lshr_ln150_191_fu_16167_p4 = m_38_fu_15148_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_192_fu_16189_p4() {
    lshr_ln150_192_fu_16189_p4 = m_38_fu_15148_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_193_fu_16211_p4() {
    lshr_ln150_193_fu_16211_p4 = m_38_fu_15148_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_194_fu_17159_p4() {
    lshr_ln150_194_fu_17159_p4 = m_52_fu_17046_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_195_fu_17181_p4() {
    lshr_ln150_195_fu_17181_p4 = m_52_fu_17046_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_196_fu_16237_p4() {
    lshr_ln150_196_fu_16237_p4 = m_39_fu_15157_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_197_fu_16259_p4() {
    lshr_ln150_197_fu_16259_p4 = m_39_fu_15157_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_198_fu_16281_p4() {
    lshr_ln150_198_fu_16281_p4 = m_39_fu_15157_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_199_fu_17244_p4() {
    lshr_ln150_199_fu_17244_p4 = m_53_fu_17131_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_19_fu_13967_p4() {
    lshr_ln150_19_fu_13967_p4 = m_33_fu_13876_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_1_fu_11625_p4() {
    lshr_ln150_1_fu_11625_p4 = m_16_fu_11597_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_200_fu_17266_p4() {
    lshr_ln150_200_fu_17266_p4 = m_53_fu_17131_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_201_fu_16307_p4() {
    lshr_ln150_201_fu_16307_p4 = m_40_fu_15241_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_202_fu_16329_p4() {
    lshr_ln150_202_fu_16329_p4 = m_40_fu_15241_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_203_fu_16351_p4() {
    lshr_ln150_203_fu_16351_p4 = m_40_fu_15241_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_204_fu_17329_p4() {
    lshr_ln150_204_fu_17329_p4 = m_54_fu_17216_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_205_fu_17351_p4() {
    lshr_ln150_205_fu_17351_p4 = m_54_fu_17216_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_206_fu_16377_p4() {
    lshr_ln150_206_fu_16377_p4 = m_41_fu_15326_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_207_fu_16399_p4() {
    lshr_ln150_207_fu_16399_p4 = m_41_fu_15326_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_208_fu_16421_p4() {
    lshr_ln150_208_fu_16421_p4 = m_41_fu_15326_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_209_fu_17414_p4() {
    lshr_ln150_209_fu_17414_p4 = m_55_fu_17301_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_20_fu_14053_p4() {
    lshr_ln150_20_fu_14053_p4 = m_34_fu_13961_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_210_fu_17436_p4() {
    lshr_ln150_210_fu_17436_p4 = m_55_fu_17301_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_211_fu_16447_p4() {
    lshr_ln150_211_fu_16447_p4 = m_42_fu_15411_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_212_fu_16469_p4() {
    lshr_ln150_212_fu_16469_p4 = m_42_fu_15411_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_213_fu_16491_p4() {
    lshr_ln150_213_fu_16491_p4 = m_42_fu_15411_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_214_fu_17500_p4() {
    lshr_ln150_214_fu_17500_p4 = m_56_fu_17386_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_215_fu_17522_p4() {
    lshr_ln150_215_fu_17522_p4 = m_56_fu_17386_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_216_fu_16517_p4() {
    lshr_ln150_216_fu_16517_p4 = m_43_fu_15496_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_217_fu_16539_p4() {
    lshr_ln150_217_fu_16539_p4 = m_43_fu_15496_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_218_fu_16561_p4() {
    lshr_ln150_218_fu_16561_p4 = m_43_fu_15496_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_219_fu_17586_p4() {
    lshr_ln150_219_fu_17586_p4 = m_57_fu_17472_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_21_fu_14138_p4() {
    lshr_ln150_21_fu_14138_p4 = m_35_fu_14047_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_220_fu_17608_p4() {
    lshr_ln150_220_fu_17608_p4 = m_57_fu_17472_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_221_fu_16587_p4() {
    lshr_ln150_221_fu_16587_p4 = m_44_fu_15581_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_222_fu_16609_p4() {
    lshr_ln150_222_fu_16609_p4 = m_44_fu_15581_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_223_fu_16631_p4() {
    lshr_ln150_223_fu_16631_p4 = m_44_fu_15581_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_224_fu_17672_p4() {
    lshr_ln150_224_fu_17672_p4 = m_58_fu_17558_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_225_fu_17694_p4() {
    lshr_ln150_225_fu_17694_p4 = m_58_fu_17558_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_226_fu_16657_p4() {
    lshr_ln150_226_fu_16657_p4 = m_45_fu_15667_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_227_fu_16679_p4() {
    lshr_ln150_227_fu_16679_p4 = m_45_fu_15667_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_228_fu_16701_p4() {
    lshr_ln150_228_fu_16701_p4 = m_45_fu_15667_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_229_fu_17758_p4() {
    lshr_ln150_229_fu_17758_p4 = m_59_fu_17644_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_22_fu_14224_p4() {
    lshr_ln150_22_fu_14224_p4 = m_36_fu_14132_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_230_fu_17780_p4() {
    lshr_ln150_230_fu_17780_p4 = m_59_fu_17644_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_231_fu_16727_p4() {
    lshr_ln150_231_fu_16727_p4 = m_46_fu_15753_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_232_fu_16749_p4() {
    lshr_ln150_232_fu_16749_p4 = m_46_fu_15753_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_233_fu_16771_p4() {
    lshr_ln150_233_fu_16771_p4 = m_46_fu_15753_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_234_fu_17844_p4() {
    lshr_ln150_234_fu_17844_p4 = m_60_fu_17730_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_235_fu_17866_p4() {
    lshr_ln150_235_fu_17866_p4 = m_60_fu_17730_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_236_fu_16797_p4() {
    lshr_ln150_236_fu_16797_p4 = m_47_fu_15839_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_237_fu_16819_p4() {
    lshr_ln150_237_fu_16819_p4 = m_47_fu_15839_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_238_fu_16841_p4() {
    lshr_ln150_238_fu_16841_p4 = m_47_fu_15839_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_239_fu_17925_p4() {
    lshr_ln150_239_fu_17925_p4 = m_61_fu_17816_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_23_fu_14299_p4() {
    lshr_ln150_23_fu_14299_p4 = m_37_fu_14218_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_240_fu_17947_p4() {
    lshr_ln150_240_fu_17947_p4 = m_61_fu_17816_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_241_fu_16873_p4() {
    lshr_ln150_241_fu_16873_p4 = m_48_fu_15925_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_242_fu_16895_p4() {
    lshr_ln150_242_fu_16895_p4 = m_48_fu_15925_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_243_fu_16917_p4() {
    lshr_ln150_243_fu_16917_p4 = m_48_fu_15925_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_24_fu_15162_p4() {
    lshr_ln150_24_fu_15162_p4 = m_38_fu_15148_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_25_fu_15247_p4() {
    lshr_ln150_25_fu_15247_p4 = m_39_fu_15157_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_26_fu_15332_p4() {
    lshr_ln150_26_fu_15332_p4 = m_40_fu_15241_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_27_fu_15417_p4() {
    lshr_ln150_27_fu_15417_p4 = m_41_fu_15326_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_28_fu_15502_p4() {
    lshr_ln150_28_fu_15502_p4 = m_42_fu_15411_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_29_fu_15587_p4() {
    lshr_ln150_29_fu_15587_p4 = m_43_fu_15496_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_2_fu_11571_p4() {
    lshr_ln150_2_fu_11571_p4 = b_reg_1444.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_30_fu_15673_p4() {
    lshr_ln150_30_fu_15673_p4 = m_44_fu_15581_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_31_fu_15759_p4() {
    lshr_ln150_31_fu_15759_p4 = m_45_fu_15667_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_32_fu_15845_p4() {
    lshr_ln150_32_fu_15845_p4 = m_46_fu_15753_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_33_fu_15931_p4() {
    lshr_ln150_33_fu_15931_p4 = m_47_fu_15839_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_34_fu_16017_p4() {
    lshr_ln150_34_fu_16017_p4 = m_48_fu_15925_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_35_fu_16092_p4() {
    lshr_ln150_35_fu_16092_p4 = m_49_fu_16011_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_36_fu_16967_p4() {
    lshr_ln150_36_fu_16967_p4 = m_50_fu_16953_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_37_fu_17052_p4() {
    lshr_ln150_37_fu_17052_p4 = m_51_fu_16962_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_38_fu_17137_p4() {
    lshr_ln150_38_fu_17137_p4 = m_52_fu_17046_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_39_fu_17222_p4() {
    lshr_ln150_39_fu_17222_p4 = m_53_fu_17131_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_3_fu_11647_p4() {
    lshr_ln150_3_fu_11647_p4 = m_16_fu_11597_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_40_fu_17307_p4() {
    lshr_ln150_40_fu_17307_p4 = m_54_fu_17216_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_41_fu_17392_p4() {
    lshr_ln150_41_fu_17392_p4 = m_55_fu_17301_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_42_fu_17478_p4() {
    lshr_ln150_42_fu_17478_p4 = m_56_fu_17386_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_43_fu_17564_p4() {
    lshr_ln150_43_fu_17564_p4 = m_57_fu_17472_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_44_fu_17650_p4() {
    lshr_ln150_44_fu_17650_p4 = m_58_fu_17558_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_45_fu_17736_p4() {
    lshr_ln150_45_fu_17736_p4 = m_59_fu_17644_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_46_fu_17822_p4() {
    lshr_ln150_46_fu_17822_p4 = m_60_fu_17730_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_47_fu_17903_p4() {
    lshr_ln150_47_fu_17903_p4 = m_61_fu_17816_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_48_fu_2576_p4() {
    lshr_ln150_48_fu_2576_p4 = m_17_fu_2570_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_49_fu_2598_p4() {
    lshr_ln150_49_fu_2598_p4 = m_17_fu_2570_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_4_fu_11717_p4() {
    lshr_ln150_4_fu_11717_p4 = d_reg_1420.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_50_fu_2620_p4() {
    lshr_ln150_50_fu_2620_p4 = m_17_fu_2570_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_51_fu_11799_p4() {
    lshr_ln150_51_fu_11799_p4 = e_reg_1408.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_52_fu_11836_p4() {
    lshr_ln150_52_fu_11836_p4 = m_18_fu_11749_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_53_fu_11858_p4() {
    lshr_ln150_53_fu_11858_p4 = m_18_fu_11749_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_54_fu_11880_p4() {
    lshr_ln150_54_fu_11880_p4 = m_18_fu_11749_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_55_fu_11950_p4() {
    lshr_ln150_55_fu_11950_p4 = f_reg_1396.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_56_fu_11988_p4() {
    lshr_ln150_56_fu_11988_p4 = m_19_fu_11831_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_57_fu_12010_p4() {
    lshr_ln150_57_fu_12010_p4 = m_19_fu_11831_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_58_fu_12032_p4() {
    lshr_ln150_58_fu_12032_p4 = m_19_fu_11831_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_59_fu_12102_p4() {
    lshr_ln150_59_fu_12102_p4 = g_reg_1384.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_5_fu_2538_p4() {
    lshr_ln150_5_fu_2538_p4 = c_reg_1432.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_60_fu_12162_p4() {
    lshr_ln150_60_fu_12162_p4 = m_20_fu_11982_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_61_fu_12184_p4() {
    lshr_ln150_61_fu_12184_p4 = m_20_fu_11982_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_62_fu_12254_p4() {
    lshr_ln150_62_fu_12254_p4 = h_reg_1372.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_63_fu_12320_p4() {
    lshr_ln150_63_fu_12320_p4 = m_21_fu_12134_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_64_fu_12342_p4() {
    lshr_ln150_64_fu_12342_p4 = m_21_fu_12134_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_65_fu_12408_p4() {
    lshr_ln150_65_fu_12408_p4 = m_22_fu_12292_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_66_fu_12430_p4() {
    lshr_ln150_66_fu_12430_p4 = m_22_fu_12292_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_67_fu_12483_p4() {
    lshr_ln150_67_fu_12483_p4 = m_23_fu_12380_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_68_fu_12505_p4() {
    lshr_ln150_68_fu_12505_p4 = m_23_fu_12380_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_69_fu_13486_p4() {
    lshr_ln150_69_fu_13486_p4 = m_24_fu_13459_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_6_fu_12140_p4() {
    lshr_ln150_6_fu_12140_p4 = m_20_fu_11982_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_70_fu_13508_p4() {
    lshr_ln150_70_fu_13508_p4 = m_24_fu_13459_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_71_fu_12559_p4() {
    lshr_ln150_71_fu_12559_p4 = m_25_fu_12531_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_72_fu_12581_p4() {
    lshr_ln150_72_fu_12581_p4 = m_25_fu_12531_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_73_fu_13561_p4() {
    lshr_ln150_73_fu_13561_p4 = m_26_fu_13534_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_74_fu_13583_p4() {
    lshr_ln150_74_fu_13583_p4 = m_26_fu_13534_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_75_fu_12635_p4() {
    lshr_ln150_75_fu_12635_p4 = m_27_fu_12607_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_76_fu_12657_p4() {
    lshr_ln150_76_fu_12657_p4 = m_27_fu_12607_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_77_fu_13636_p4() {
    lshr_ln150_77_fu_13636_p4 = m_28_fu_13609_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_78_fu_13658_p4() {
    lshr_ln150_78_fu_13658_p4 = m_28_fu_13609_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_79_fu_12711_p4() {
    lshr_ln150_79_fu_12711_p4 = m_29_fu_12683_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_7_fu_12298_p4() {
    lshr_ln150_7_fu_12298_p4 = m_21_fu_12134_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_80_fu_12733_p4() {
    lshr_ln150_80_fu_12733_p4 = m_29_fu_12683_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_81_fu_12759_p4() {
    lshr_ln150_81_fu_12759_p4 = m_16_fu_11597_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_82_fu_12781_p4() {
    lshr_ln150_82_fu_12781_p4 = m_16_fu_11597_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_83_fu_12803_p4() {
    lshr_ln150_83_fu_12803_p4 = m_16_fu_11597_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_84_fu_13733_p4() {
    lshr_ln150_84_fu_13733_p4 = m_30_fu_13690_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_85_fu_13755_p4() {
    lshr_ln150_85_fu_13755_p4 = m_30_fu_13690_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_86_fu_2646_p4() {
    lshr_ln150_86_fu_2646_p4 = m_17_fu_2570_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_87_fu_2668_p4() {
    lshr_ln150_87_fu_2668_p4 = m_17_fu_2570_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_88_fu_2690_p4() {
    lshr_ln150_88_fu_2690_p4 = m_17_fu_2570_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_89_fu_13818_p4() {
    lshr_ln150_89_fu_13818_p4 = m_31_fu_13705_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_8_fu_12386_p4() {
    lshr_ln150_8_fu_12386_p4 = m_22_fu_12292_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_90_fu_13840_p4() {
    lshr_ln150_90_fu_13840_p4 = m_31_fu_13705_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_91_fu_12829_p4() {
    lshr_ln150_91_fu_12829_p4 = m_18_fu_11749_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_92_fu_12851_p4() {
    lshr_ln150_92_fu_12851_p4 = m_18_fu_11749_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_93_fu_12873_p4() {
    lshr_ln150_93_fu_12873_p4 = m_18_fu_11749_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_94_fu_13904_p4() {
    lshr_ln150_94_fu_13904_p4 = m_32_fu_13790_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_95_fu_13926_p4() {
    lshr_ln150_95_fu_13926_p4 = m_32_fu_13790_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln150_96_fu_12899_p4() {
    lshr_ln150_96_fu_12899_p4 = m_19_fu_11831_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln150_97_fu_12921_p4() {
    lshr_ln150_97_fu_12921_p4 = m_19_fu_11831_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln150_98_fu_12943_p4() {
    lshr_ln150_98_fu_12943_p4 = m_19_fu_11831_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln150_99_fu_13989_p4() {
    lshr_ln150_99_fu_13989_p4 = m_33_fu_13876_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln150_9_fu_12461_p4() {
    lshr_ln150_9_fu_12461_p4 = m_23_fu_12380_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln150_s_fu_11603_p4() {
    lshr_ln150_s_fu_11603_p4 = m_16_fu_11597_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln162_1_fu_18113_p4() {
    lshr_ln162_1_fu_18113_p4 = f_2_reg_1646.read().range(31, 11);
}

void sha256d::thread_lshr_ln162_2_fu_18135_p4() {
    lshr_ln162_2_fu_18135_p4 = f_2_reg_1646.read().range(31, 25);
}

void sha256d::thread_lshr_ln163_1_fu_18238_p4() {
    lshr_ln163_1_fu_18238_p4 = b_2_reg_1595.read().range(31, 13);
}

void sha256d::thread_lshr_ln163_2_fu_18260_p4() {
    lshr_ln163_2_fu_18260_p4 = b_2_reg_1595.read().range(31, 22);
}

void sha256d::thread_lshr_ln1_fu_18216_p4() {
    lshr_ln1_fu_18216_p4 = b_2_reg_1595.read().range(31, 2);
}

void sha256d::thread_lshr_ln2_fu_11233_p4() {
    lshr_ln2_fu_11233_p4 = f_1_reg_1537.read().range(31, 6);
}

void sha256d::thread_lshr_ln392_fu_18524_p2() {
    lshr_ln392_fu_18524_p2 = (!zext_ln392_4_fu_18490_p1.read().is_01())? sc_lv<256>(): ap_const_lv256_lc_2 >> (unsigned short)zext_ln392_4_fu_18490_p1.read().to_uint();
}

void sha256d::thread_lshr_ln3_fu_11359_p4() {
    lshr_ln3_fu_11359_p4 = b_1_reg_1490.read().range(31, 2);
}

void sha256d::thread_lshr_ln681_1_fu_1832_p2() {
    lshr_ln681_1_fu_1832_p2 = (!zext_ln681_1_fu_1822_p1.read().is_01())? sc_lv<640>(): ap_const_lv640_lc_1 >> (unsigned short)zext_ln681_1_fu_1822_p1.read().to_uint();
}

void sha256d::thread_lshr_ln681_fu_1826_p2() {
    lshr_ln681_fu_1826_p2 = (!zext_ln681_fu_1818_p1.read().is_01())? sc_lv<640>(): select_ln681_1_fu_1797_p3.read() >> (unsigned short)zext_ln681_fu_1818_p1.read().to_uint();
}

void sha256d::thread_lshr_ln84_100_fu_7141_p4() {
    lshr_ln84_100_fu_7141_p4 = add_ln84_47_fu_7006_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_101_fu_5439_p4() {
    lshr_ln84_101_fu_5439_p4 = add_ln84_8_fu_5277_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_102_fu_5461_p4() {
    lshr_ln84_102_fu_5461_p4 = add_ln84_8_fu_5277_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_103_fu_5483_p4() {
    lshr_ln84_103_fu_5483_p4 = add_ln84_8_fu_5277_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_104_fu_7204_p4() {
    lshr_ln84_104_fu_7204_p4 = add_ln84_50_fu_7091_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_105_fu_7226_p4() {
    lshr_ln84_105_fu_7226_p4 = add_ln84_50_fu_7091_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_106_fu_5509_p4() {
    lshr_ln84_106_fu_5509_p4 = add_ln84_11_fu_5288_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_107_fu_5531_p4() {
    lshr_ln84_107_fu_5531_p4 = add_ln84_11_fu_5288_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_108_fu_5553_p4() {
    lshr_ln84_108_fu_5553_p4 = add_ln84_11_fu_5288_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_109_fu_7289_p4() {
    lshr_ln84_109_fu_7289_p4 = add_ln84_53_fu_7176_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_10_fu_6234_p4() {
    lshr_ln84_10_fu_6234_p4 = add_ln84_26_fu_6212_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_110_fu_7311_p4() {
    lshr_ln84_110_fu_7311_p4 = add_ln84_53_fu_7176_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_111_fu_5754_p4() {
    lshr_ln84_111_fu_5754_p4 = add_ln84_14_fu_5587_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_112_fu_5776_p4() {
    lshr_ln84_112_fu_5776_p4 = add_ln84_14_fu_5587_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_113_fu_5798_p4() {
    lshr_ln84_113_fu_5798_p4 = add_ln84_14_fu_5587_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_114_fu_7375_p4() {
    lshr_ln84_114_fu_7375_p4 = add_ln84_56_fu_7261_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_115_fu_7397_p4() {
    lshr_ln84_115_fu_7397_p4 = add_ln84_56_fu_7261_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_116_fu_5824_p4() {
    lshr_ln84_116_fu_5824_p4 = add_ln84_17_fu_5602_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_117_fu_5846_p4() {
    lshr_ln84_117_fu_5846_p4 = add_ln84_17_fu_5602_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_118_fu_5868_p4() {
    lshr_ln84_118_fu_5868_p4 = add_ln84_17_fu_5602_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_119_fu_7461_p4() {
    lshr_ln84_119_fu_7461_p4 = add_ln84_59_fu_7347_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_11_fu_6304_p4() {
    lshr_ln84_11_fu_6304_p4 = add_ln84_29_fu_6227_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_120_fu_7483_p4() {
    lshr_ln84_120_fu_7483_p4 = add_ln84_59_fu_7347_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_121_fu_6064_p4() {
    lshr_ln84_121_fu_6064_p4 = add_ln84_20_fu_5902_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_122_fu_6086_p4() {
    lshr_ln84_122_fu_6086_p4 = add_ln84_20_fu_5902_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_123_fu_6108_p4() {
    lshr_ln84_123_fu_6108_p4 = add_ln84_20_fu_5902_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_124_fu_7547_p4() {
    lshr_ln84_124_fu_7547_p4 = add_ln84_62_fu_7433_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_125_fu_7569_p4() {
    lshr_ln84_125_fu_7569_p4 = add_ln84_62_fu_7433_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_126_fu_6134_p4() {
    lshr_ln84_126_fu_6134_p4 = add_ln84_23_fu_5917_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_127_fu_6156_p4() {
    lshr_ln84_127_fu_6156_p4 = add_ln84_23_fu_5917_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_128_fu_6178_p4() {
    lshr_ln84_128_fu_6178_p4 = add_ln84_23_fu_5917_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_129_fu_7633_p4() {
    lshr_ln84_129_fu_7633_p4 = add_ln84_65_fu_7519_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_12_fu_6534_p4() {
    lshr_ln84_12_fu_6534_p4 = add_ln84_32_fu_6518_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_130_fu_7655_p4() {
    lshr_ln84_130_fu_7655_p4 = add_ln84_65_fu_7519_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_131_fu_6374_p4() {
    lshr_ln84_131_fu_6374_p4 = add_ln84_26_fu_6212_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_132_fu_6396_p4() {
    lshr_ln84_132_fu_6396_p4 = add_ln84_26_fu_6212_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_133_fu_6418_p4() {
    lshr_ln84_133_fu_6418_p4 = add_ln84_26_fu_6212_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_134_fu_7719_p4() {
    lshr_ln84_134_fu_7719_p4 = add_ln84_68_fu_7605_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_135_fu_7741_p4() {
    lshr_ln84_135_fu_7741_p4 = add_ln84_68_fu_7605_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_136_fu_6444_p4() {
    lshr_ln84_136_fu_6444_p4 = add_ln84_29_fu_6227_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_137_fu_6466_p4() {
    lshr_ln84_137_fu_6466_p4 = add_ln84_29_fu_6227_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_138_fu_6488_p4() {
    lshr_ln84_138_fu_6488_p4 = add_ln84_29_fu_6227_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_139_fu_7794_p4() {
    lshr_ln84_139_fu_7794_p4 = add_ln84_71_fu_7691_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_13_fu_6608_p4() {
    lshr_ln84_13_fu_6608_p4 = add_ln84_35_fu_6528_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_140_fu_7816_p4() {
    lshr_ln84_140_fu_7816_p4 = add_ln84_71_fu_7691_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_141_fu_6682_p4() {
    lshr_ln84_141_fu_6682_p4 = add_ln84_32_fu_6518_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_142_fu_6704_p4() {
    lshr_ln84_142_fu_6704_p4 = add_ln84_32_fu_6518_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_143_fu_6726_p4() {
    lshr_ln84_143_fu_6726_p4 = add_ln84_32_fu_6518_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_144_fu_8727_p4() {
    lshr_ln84_144_fu_8727_p4 = add_ln84_74_fu_8691_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_145_fu_8749_p4() {
    lshr_ln84_145_fu_8749_p4 = add_ln84_74_fu_8691_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_146_fu_6752_p4() {
    lshr_ln84_146_fu_6752_p4 = add_ln84_35_fu_6528_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_147_fu_6774_p4() {
    lshr_ln84_147_fu_6774_p4 = add_ln84_35_fu_6528_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_148_fu_6796_p4() {
    lshr_ln84_148_fu_6796_p4 = add_ln84_35_fu_6528_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_149_fu_8812_p4() {
    lshr_ln84_149_fu_8812_p4 = add_ln84_77_fu_8700_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_14_fu_6842_p4() {
    lshr_ln84_14_fu_6842_p4 = add_ln84_38_fu_6826_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_150_fu_8834_p4() {
    lshr_ln84_150_fu_8834_p4 = add_ln84_77_fu_8700_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_151_fu_7847_p4() {
    lshr_ln84_151_fu_7847_p4 = add_ln84_38_fu_6826_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_152_fu_7869_p4() {
    lshr_ln84_152_fu_7869_p4 = add_ln84_38_fu_6826_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_153_fu_7891_p4() {
    lshr_ln84_153_fu_7891_p4 = add_ln84_38_fu_6826_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_154_fu_8897_p4() {
    lshr_ln84_154_fu_8897_p4 = add_ln84_80_fu_8784_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_155_fu_8919_p4() {
    lshr_ln84_155_fu_8919_p4 = add_ln84_80_fu_8784_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_156_fu_7917_p4() {
    lshr_ln84_156_fu_7917_p4 = add_ln84_41_fu_6836_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_157_fu_7939_p4() {
    lshr_ln84_157_fu_7939_p4 = add_ln84_41_fu_6836_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_158_fu_7961_p4() {
    lshr_ln84_158_fu_7961_p4 = add_ln84_41_fu_6836_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_159_fu_8982_p4() {
    lshr_ln84_159_fu_8982_p4 = add_ln84_83_fu_8869_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_15_fu_6927_p4() {
    lshr_ln84_15_fu_6927_p4 = add_ln84_41_fu_6836_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_160_fu_9004_p4() {
    lshr_ln84_160_fu_9004_p4 = add_ln84_83_fu_8869_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_161_fu_7987_p4() {
    lshr_ln84_161_fu_7987_p4 = add_ln84_44_fu_6921_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_162_fu_8009_p4() {
    lshr_ln84_162_fu_8009_p4 = add_ln84_44_fu_6921_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_163_fu_8031_p4() {
    lshr_ln84_163_fu_8031_p4 = add_ln84_44_fu_6921_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_164_fu_9067_p4() {
    lshr_ln84_164_fu_9067_p4 = add_ln84_86_fu_8954_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_165_fu_9089_p4() {
    lshr_ln84_165_fu_9089_p4 = add_ln84_86_fu_8954_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_166_fu_8057_p4() {
    lshr_ln84_166_fu_8057_p4 = add_ln84_47_fu_7006_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_167_fu_8079_p4() {
    lshr_ln84_167_fu_8079_p4 = add_ln84_47_fu_7006_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_168_fu_8101_p4() {
    lshr_ln84_168_fu_8101_p4 = add_ln84_47_fu_7006_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_169_fu_9152_p4() {
    lshr_ln84_169_fu_9152_p4 = add_ln84_89_fu_9039_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_16_fu_7012_p4() {
    lshr_ln84_16_fu_7012_p4 = add_ln84_44_fu_6921_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_170_fu_9174_p4() {
    lshr_ln84_170_fu_9174_p4 = add_ln84_89_fu_9039_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_171_fu_8127_p4() {
    lshr_ln84_171_fu_8127_p4 = add_ln84_50_fu_7091_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_172_fu_8149_p4() {
    lshr_ln84_172_fu_8149_p4 = add_ln84_50_fu_7091_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_173_fu_8171_p4() {
    lshr_ln84_173_fu_8171_p4 = add_ln84_50_fu_7091_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_174_fu_9238_p4() {
    lshr_ln84_174_fu_9238_p4 = add_ln84_92_fu_9124_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_175_fu_9260_p4() {
    lshr_ln84_175_fu_9260_p4 = add_ln84_92_fu_9124_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_176_fu_8197_p4() {
    lshr_ln84_176_fu_8197_p4 = add_ln84_53_fu_7176_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_177_fu_8219_p4() {
    lshr_ln84_177_fu_8219_p4 = add_ln84_53_fu_7176_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_178_fu_8241_p4() {
    lshr_ln84_178_fu_8241_p4 = add_ln84_53_fu_7176_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_179_fu_9324_p4() {
    lshr_ln84_179_fu_9324_p4 = add_ln84_95_fu_9210_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_17_fu_7097_p4() {
    lshr_ln84_17_fu_7097_p4 = add_ln84_47_fu_7006_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_180_fu_9346_p4() {
    lshr_ln84_180_fu_9346_p4 = add_ln84_95_fu_9210_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_181_fu_8267_p4() {
    lshr_ln84_181_fu_8267_p4 = add_ln84_56_fu_7261_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_182_fu_8289_p4() {
    lshr_ln84_182_fu_8289_p4 = add_ln84_56_fu_7261_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_183_fu_8311_p4() {
    lshr_ln84_183_fu_8311_p4 = add_ln84_56_fu_7261_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_184_fu_9410_p4() {
    lshr_ln84_184_fu_9410_p4 = add_ln84_98_fu_9296_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_185_fu_9432_p4() {
    lshr_ln84_185_fu_9432_p4 = add_ln84_98_fu_9296_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_186_fu_8337_p4() {
    lshr_ln84_186_fu_8337_p4 = add_ln84_59_fu_7347_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_187_fu_8359_p4() {
    lshr_ln84_187_fu_8359_p4 = add_ln84_59_fu_7347_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_188_fu_8381_p4() {
    lshr_ln84_188_fu_8381_p4 = add_ln84_59_fu_7347_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_189_fu_9496_p4() {
    lshr_ln84_189_fu_9496_p4 = add_ln84_101_fu_9382_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_18_fu_7182_p4() {
    lshr_ln84_18_fu_7182_p4 = add_ln84_50_fu_7091_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_190_fu_9518_p4() {
    lshr_ln84_190_fu_9518_p4 = add_ln84_101_fu_9382_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_191_fu_8407_p4() {
    lshr_ln84_191_fu_8407_p4 = add_ln84_62_fu_7433_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_192_fu_8429_p4() {
    lshr_ln84_192_fu_8429_p4 = add_ln84_62_fu_7433_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_193_fu_8451_p4() {
    lshr_ln84_193_fu_8451_p4 = add_ln84_62_fu_7433_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_194_fu_9582_p4() {
    lshr_ln84_194_fu_9582_p4 = add_ln84_104_fu_9468_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_195_fu_9604_p4() {
    lshr_ln84_195_fu_9604_p4 = add_ln84_104_fu_9468_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_196_fu_8477_p4() {
    lshr_ln84_196_fu_8477_p4 = add_ln84_65_fu_7519_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_197_fu_8499_p4() {
    lshr_ln84_197_fu_8499_p4 = add_ln84_65_fu_7519_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_198_fu_8521_p4() {
    lshr_ln84_198_fu_8521_p4 = add_ln84_65_fu_7519_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_199_fu_9652_p4() {
    lshr_ln84_199_fu_9652_p4 = add_ln84_107_fu_9554_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_19_fu_7267_p4() {
    lshr_ln84_19_fu_7267_p4 = add_ln84_53_fu_7176_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_1_fu_2910_p5() {
    lshr_ln84_1_fu_2910_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_8_fu_2764_p3.read(), select_ln82_9_fu_2771_p3.read()), select_ln82_10_fu_2778_p3.read()), tmp_28_fu_2900_p4.read());
}

void sha256d::thread_lshr_ln84_200_fu_9674_p4() {
    lshr_ln84_200_fu_9674_p4 = add_ln84_107_fu_9554_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_201_fu_8547_p4() {
    lshr_ln84_201_fu_8547_p4 = add_ln84_68_fu_7605_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_202_fu_8569_p4() {
    lshr_ln84_202_fu_8569_p4 = add_ln84_68_fu_7605_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_203_fu_8591_p4() {
    lshr_ln84_203_fu_8591_p4 = add_ln84_68_fu_7605_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_204_fu_10392_p4() {
    lshr_ln84_204_fu_10392_p4 = add_ln84_110_fu_10350_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_205_fu_10414_p4() {
    lshr_ln84_205_fu_10414_p4 = add_ln84_110_fu_10350_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_206_fu_8617_p4() {
    lshr_ln84_206_fu_8617_p4 = add_ln84_71_fu_7691_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_207_fu_8639_p4() {
    lshr_ln84_207_fu_8639_p4 = add_ln84_71_fu_7691_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_208_fu_8661_p4() {
    lshr_ln84_208_fu_8661_p4 = add_ln84_71_fu_7691_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_209_fu_10477_p4() {
    lshr_ln84_209_fu_10477_p4 = add_ln84_113_fu_10364_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_20_fu_7353_p4() {
    lshr_ln84_20_fu_7353_p4 = add_ln84_56_fu_7261_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_210_fu_10499_p4() {
    lshr_ln84_210_fu_10499_p4 = add_ln84_113_fu_10364_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_211_fu_9700_p4() {
    lshr_ln84_211_fu_9700_p4 = add_ln84_74_fu_8691_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_212_fu_9722_p4() {
    lshr_ln84_212_fu_9722_p4 = add_ln84_74_fu_8691_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_213_fu_9744_p4() {
    lshr_ln84_213_fu_9744_p4 = add_ln84_74_fu_8691_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_214_fu_10562_p4() {
    lshr_ln84_214_fu_10562_p4 = add_ln84_116_fu_10449_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_215_fu_10584_p4() {
    lshr_ln84_215_fu_10584_p4 = add_ln84_116_fu_10449_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_216_fu_9770_p4() {
    lshr_ln84_216_fu_9770_p4 = add_ln84_77_fu_8700_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_217_fu_9792_p4() {
    lshr_ln84_217_fu_9792_p4 = add_ln84_77_fu_8700_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_218_fu_9814_p4() {
    lshr_ln84_218_fu_9814_p4 = add_ln84_77_fu_8700_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_219_fu_10647_p4() {
    lshr_ln84_219_fu_10647_p4 = add_ln84_119_fu_10534_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_21_fu_7439_p4() {
    lshr_ln84_21_fu_7439_p4 = add_ln84_59_fu_7347_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_220_fu_10669_p4() {
    lshr_ln84_220_fu_10669_p4 = add_ln84_119_fu_10534_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_221_fu_9840_p4() {
    lshr_ln84_221_fu_9840_p4 = add_ln84_80_fu_8784_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_222_fu_9862_p4() {
    lshr_ln84_222_fu_9862_p4 = add_ln84_80_fu_8784_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_223_fu_9884_p4() {
    lshr_ln84_223_fu_9884_p4 = add_ln84_80_fu_8784_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_224_fu_10732_p4() {
    lshr_ln84_224_fu_10732_p4 = add_ln84_122_fu_10619_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_225_fu_10754_p4() {
    lshr_ln84_225_fu_10754_p4 = add_ln84_122_fu_10619_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_226_fu_9910_p4() {
    lshr_ln84_226_fu_9910_p4 = add_ln84_83_fu_8869_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_227_fu_9932_p4() {
    lshr_ln84_227_fu_9932_p4 = add_ln84_83_fu_8869_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_228_fu_9954_p4() {
    lshr_ln84_228_fu_9954_p4 = add_ln84_83_fu_8869_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_229_fu_10817_p4() {
    lshr_ln84_229_fu_10817_p4 = add_ln84_125_fu_10704_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_22_fu_7525_p4() {
    lshr_ln84_22_fu_7525_p4 = add_ln84_62_fu_7433_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_230_fu_10839_p4() {
    lshr_ln84_230_fu_10839_p4 = add_ln84_125_fu_10704_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_231_fu_9980_p4() {
    lshr_ln84_231_fu_9980_p4 = add_ln84_86_fu_8954_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_232_fu_10002_p4() {
    lshr_ln84_232_fu_10002_p4 = add_ln84_86_fu_8954_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_233_fu_10024_p4() {
    lshr_ln84_233_fu_10024_p4 = add_ln84_86_fu_8954_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_234_fu_10903_p4() {
    lshr_ln84_234_fu_10903_p4 = add_ln84_128_fu_10789_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_235_fu_10925_p4() {
    lshr_ln84_235_fu_10925_p4 = add_ln84_128_fu_10789_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_236_fu_10050_p4() {
    lshr_ln84_236_fu_10050_p4 = add_ln84_89_fu_9039_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_237_fu_10072_p4() {
    lshr_ln84_237_fu_10072_p4 = add_ln84_89_fu_9039_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_238_fu_10094_p4() {
    lshr_ln84_238_fu_10094_p4 = add_ln84_89_fu_9039_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_239_fu_10989_p4() {
    lshr_ln84_239_fu_10989_p4 = add_ln84_131_fu_10875_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_23_fu_7611_p4() {
    lshr_ln84_23_fu_7611_p4 = add_ln84_65_fu_7519_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_240_fu_11011_p4() {
    lshr_ln84_240_fu_11011_p4 = add_ln84_131_fu_10875_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_241_fu_10120_p4() {
    lshr_ln84_241_fu_10120_p4 = add_ln84_92_fu_9124_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_242_fu_10142_p4() {
    lshr_ln84_242_fu_10142_p4 = add_ln84_92_fu_9124_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_243_fu_10164_p4() {
    lshr_ln84_243_fu_10164_p4 = add_ln84_92_fu_9124_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_244_fu_11075_p4() {
    lshr_ln84_244_fu_11075_p4 = add_ln84_134_fu_10961_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_245_fu_11097_p4() {
    lshr_ln84_245_fu_11097_p4 = add_ln84_134_fu_10961_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_246_fu_10190_p4() {
    lshr_ln84_246_fu_10190_p4 = add_ln84_95_fu_9210_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_247_fu_10212_p4() {
    lshr_ln84_247_fu_10212_p4 = add_ln84_95_fu_9210_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_248_fu_10234_p4() {
    lshr_ln84_248_fu_10234_p4 = add_ln84_95_fu_9210_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_249_fu_11156_p4() {
    lshr_ln84_249_fu_11156_p4 = add_ln84_137_fu_11047_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_24_fu_7697_p4() {
    lshr_ln84_24_fu_7697_p4 = add_ln84_68_fu_7605_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_250_fu_11178_p4() {
    lshr_ln84_250_fu_11178_p4 = add_ln84_137_fu_11047_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_251_fu_10266_p4() {
    lshr_ln84_251_fu_10266_p4 = add_ln84_98_fu_9296_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_252_fu_10288_p4() {
    lshr_ln84_252_fu_10288_p4 = add_ln84_98_fu_9296_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_253_fu_10310_p4() {
    lshr_ln84_253_fu_10310_p4 = add_ln84_98_fu_9296_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_25_fu_7772_p4() {
    lshr_ln84_25_fu_7772_p4 = add_ln84_71_fu_7691_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_26_fu_8705_p4() {
    lshr_ln84_26_fu_8705_p4 = add_ln84_74_fu_8691_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_27_fu_8790_p4() {
    lshr_ln84_27_fu_8790_p4 = add_ln84_77_fu_8700_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_28_fu_8875_p4() {
    lshr_ln84_28_fu_8875_p4 = add_ln84_80_fu_8784_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_29_fu_8960_p4() {
    lshr_ln84_29_fu_8960_p4 = add_ln84_83_fu_8869_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_2_fu_4657_p4() {
    lshr_ln84_2_fu_4657_p4 = esl_concat<16,6>(esl_concat<8,8>(select_ln82_56_fu_4509_p3.read(), select_ln82_57_fu_4516_p3.read()), tmp_18_fu_4647_p4.read());
}

void sha256d::thread_lshr_ln84_30_fu_9045_p4() {
    lshr_ln84_30_fu_9045_p4 = add_ln84_86_fu_8954_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_31_fu_9130_p4() {
    lshr_ln84_31_fu_9130_p4 = add_ln84_89_fu_9039_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_32_fu_9216_p4() {
    lshr_ln84_32_fu_9216_p4 = add_ln84_92_fu_9124_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_33_fu_9302_p4() {
    lshr_ln84_33_fu_9302_p4 = add_ln84_95_fu_9210_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_34_fu_9388_p4() {
    lshr_ln84_34_fu_9388_p4 = add_ln84_98_fu_9296_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_35_fu_9474_p4() {
    lshr_ln84_35_fu_9474_p4 = add_ln84_101_fu_9382_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_36_fu_9560_p4() {
    lshr_ln84_36_fu_9560_p4 = add_ln84_104_fu_9468_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_37_fu_9630_p4() {
    lshr_ln84_37_fu_9630_p4 = add_ln84_107_fu_9554_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_38_fu_10370_p4() {
    lshr_ln84_38_fu_10370_p4 = add_ln84_110_fu_10350_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_39_fu_10455_p4() {
    lshr_ln84_39_fu_10455_p4 = add_ln84_113_fu_10364_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_3_fu_4989_p4() {
    lshr_ln84_3_fu_4989_p4 = add_ln84_2_fu_4967_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_40_fu_10540_p4() {
    lshr_ln84_40_fu_10540_p4 = add_ln84_116_fu_10449_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_41_fu_10625_p4() {
    lshr_ln84_41_fu_10625_p4 = add_ln84_119_fu_10534_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_42_fu_10710_p4() {
    lshr_ln84_42_fu_10710_p4 = add_ln84_122_fu_10619_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_43_fu_10795_p4() {
    lshr_ln84_43_fu_10795_p4 = add_ln84_125_fu_10704_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_44_fu_10881_p4() {
    lshr_ln84_44_fu_10881_p4 = add_ln84_128_fu_10789_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_45_fu_10967_p4() {
    lshr_ln84_45_fu_10967_p4 = add_ln84_131_fu_10875_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_46_fu_11053_p4() {
    lshr_ln84_46_fu_11053_p4 = add_ln84_134_fu_10961_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_47_fu_11134_p4() {
    lshr_ln84_47_fu_11134_p4 = add_ln84_137_fu_11047_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_48_fu_5033_p4() {
    lshr_ln84_48_fu_5033_p4 = add_ln84_2_fu_4967_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_49_fu_3002_p5() {
    lshr_ln84_49_fu_3002_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_12_fu_2805_p3.read(), select_ln82_13_fu_2812_p3.read()), select_ln82_14_fu_2819_p3.read()), tmp_31_fu_2992_p4.read());
}

void sha256d::thread_lshr_ln84_4_fu_5011_p4() {
    lshr_ln84_4_fu_5011_p4 = add_ln84_2_fu_4967_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_50_fu_5059_p4() {
    lshr_ln84_50_fu_5059_p4 = add_ln84_5_fu_4982_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_51_fu_5081_p4() {
    lshr_ln84_51_fu_5081_p4 = add_ln84_5_fu_4982_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_52_fu_5103_p4() {
    lshr_ln84_52_fu_5103_p4 = add_ln84_5_fu_4982_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_53_fu_3200_p5() {
    lshr_ln84_53_fu_3200_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_16_fu_3054_p3.read(), select_ln82_17_fu_3061_p3.read()), select_ln82_18_fu_3068_p3.read()), tmp_34_fu_3190_p4.read());
}

void sha256d::thread_lshr_ln84_54_fu_5294_p4() {
    lshr_ln84_54_fu_5294_p4 = add_ln84_8_fu_5277_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_55_fu_5316_p4() {
    lshr_ln84_55_fu_5316_p4 = add_ln84_8_fu_5277_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_56_fu_5338_p4() {
    lshr_ln84_56_fu_5338_p4 = add_ln84_8_fu_5277_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_57_fu_3292_p5() {
    lshr_ln84_57_fu_3292_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_20_fu_3095_p3.read(), select_ln82_21_fu_3102_p3.read()), select_ln82_22_fu_3109_p3.read()), tmp_37_fu_3282_p4.read());
}

void sha256d::thread_lshr_ln84_58_fu_5364_p4() {
    lshr_ln84_58_fu_5364_p4 = add_ln84_11_fu_5288_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_59_fu_5386_p4() {
    lshr_ln84_59_fu_5386_p4 = add_ln84_11_fu_5288_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_5_fu_2466_p5() {
    lshr_ln84_5_fu_2466_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_4_fu_2357_p3.read(), select_ln82_5_fu_2365_p3.read()), select_ln82_6_fu_2373_p3.read()), tmp_21_fu_2456_p4.read());
}

void sha256d::thread_lshr_ln84_60_fu_5408_p4() {
    lshr_ln84_60_fu_5408_p4 = add_ln84_11_fu_5288_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_61_fu_3490_p5() {
    lshr_ln84_61_fu_3490_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_24_fu_3344_p3.read(), select_ln82_25_fu_3351_p3.read()), select_ln82_26_fu_3358_p3.read()), tmp_40_fu_3480_p4.read());
}

void sha256d::thread_lshr_ln84_62_fu_5631_p4() {
    lshr_ln84_62_fu_5631_p4 = add_ln84_14_fu_5587_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_63_fu_5653_p4() {
    lshr_ln84_63_fu_5653_p4 = add_ln84_14_fu_5587_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_64_fu_3582_p5() {
    lshr_ln84_64_fu_3582_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_28_fu_3385_p3.read(), select_ln82_29_fu_3392_p3.read()), select_ln82_30_fu_3399_p3.read()), tmp_43_fu_3572_p4.read());
}

void sha256d::thread_lshr_ln84_65_fu_5701_p4() {
    lshr_ln84_65_fu_5701_p4 = add_ln84_17_fu_5602_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_66_fu_5723_p4() {
    lshr_ln84_66_fu_5723_p4 = add_ln84_17_fu_5602_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_67_fu_3780_p5() {
    lshr_ln84_67_fu_3780_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_32_fu_3634_p3.read(), select_ln82_33_fu_3641_p3.read()), select_ln82_34_fu_3648_p3.read()), tmp_46_fu_3770_p4.read());
}

void sha256d::thread_lshr_ln84_68_fu_5946_p4() {
    lshr_ln84_68_fu_5946_p4 = add_ln84_20_fu_5902_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_69_fu_5968_p4() {
    lshr_ln84_69_fu_5968_p4 = add_ln84_20_fu_5902_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_6_fu_5609_p4() {
    lshr_ln84_6_fu_5609_p4 = add_ln84_14_fu_5587_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_70_fu_3872_p5() {
    lshr_ln84_70_fu_3872_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_36_fu_3675_p3.read(), select_ln82_37_fu_3682_p3.read()), select_ln82_38_fu_3689_p3.read()), tmp_49_fu_3862_p4.read());
}

void sha256d::thread_lshr_ln84_71_fu_6016_p4() {
    lshr_ln84_71_fu_6016_p4 = add_ln84_23_fu_5917_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_72_fu_6038_p4() {
    lshr_ln84_72_fu_6038_p4 = add_ln84_23_fu_5917_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_73_fu_4070_p5() {
    lshr_ln84_73_fu_4070_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_40_fu_3924_p3.read(), select_ln82_41_fu_3931_p3.read()), select_ln82_42_fu_3938_p3.read()), tmp_53_fu_4060_p4.read());
}

void sha256d::thread_lshr_ln84_74_fu_6256_p4() {
    lshr_ln84_74_fu_6256_p4 = add_ln84_26_fu_6212_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_75_fu_6278_p4() {
    lshr_ln84_75_fu_6278_p4 = add_ln84_26_fu_6212_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_76_fu_4162_p5() {
    lshr_ln84_76_fu_4162_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_44_fu_3965_p3.read(), select_ln82_45_fu_3972_p3.read()), select_ln82_46_fu_3979_p3.read()), tmp_56_fu_4152_p4.read());
}

void sha256d::thread_lshr_ln84_77_fu_6326_p4() {
    lshr_ln84_77_fu_6326_p4 = add_ln84_29_fu_6227_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_78_fu_6348_p4() {
    lshr_ln84_78_fu_6348_p4 = add_ln84_29_fu_6227_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_79_fu_4365_p5() {
    lshr_ln84_79_fu_4365_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_48_fu_4214_p3.read(), select_ln82_49_fu_4221_p3.read()), select_ln82_50_fu_4228_p3.read()), tmp_59_fu_4355_p4.read());
}

void sha256d::thread_lshr_ln84_7_fu_5679_p4() {
    lshr_ln84_7_fu_5679_p4 = add_ln84_17_fu_5602_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_80_fu_6556_p4() {
    lshr_ln84_80_fu_6556_p4 = add_ln84_32_fu_6518_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_81_fu_6578_p4() {
    lshr_ln84_81_fu_6578_p4 = add_ln84_32_fu_6518_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_82_fu_4457_p5() {
    lshr_ln84_82_fu_4457_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_52_fu_4255_p3.read(), select_ln82_53_fu_4262_p3.read()), select_ln82_54_fu_4269_p3.read()), tmp_62_fu_4447_p4.read());
}

void sha256d::thread_lshr_ln84_83_fu_6630_p4() {
    lshr_ln84_83_fu_6630_p4 = add_ln84_35_fu_6528_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_84_fu_6652_p4() {
    lshr_ln84_84_fu_6652_p4 = add_ln84_35_fu_6528_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_85_fu_4839_p5() {
    lshr_ln84_85_fu_4839_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_56_fu_4509_p3.read(), select_ln82_57_fu_4516_p3.read()), select_ln82_58_fu_4523_p3.read()), tmp_65_fu_4829_p4.read());
}

void sha256d::thread_lshr_ln84_86_fu_6864_p4() {
    lshr_ln84_86_fu_6864_p4 = add_ln84_38_fu_6826_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_87_fu_6886_p4() {
    lshr_ln84_87_fu_6886_p4 = add_ln84_38_fu_6826_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_88_fu_4931_p5() {
    lshr_ln84_88_fu_4931_p5 = esl_concat<24,5>(esl_concat<16,8>(esl_concat<8,8>(select_ln82_60_fu_4550_p3.read(), select_ln82_61_fu_4557_p3.read()), select_ln82_62_fu_4564_p3.read()), tmp_68_fu_4921_p4.read());
}

void sha256d::thread_lshr_ln84_89_fu_6949_p4() {
    lshr_ln84_89_fu_6949_p4 = add_ln84_41_fu_6836_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_8_fu_5924_p4() {
    lshr_ln84_8_fu_5924_p4 = add_ln84_20_fu_5902_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_90_fu_6971_p4() {
    lshr_ln84_90_fu_6971_p4 = add_ln84_41_fu_6836_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_91_fu_5129_p4() {
    lshr_ln84_91_fu_5129_p4 = add_ln84_2_fu_4967_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_92_fu_5151_p4() {
    lshr_ln84_92_fu_5151_p4 = add_ln84_2_fu_4967_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_93_fu_5173_p4() {
    lshr_ln84_93_fu_5173_p4 = add_ln84_2_fu_4967_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_94_fu_7034_p4() {
    lshr_ln84_94_fu_7034_p4 = add_ln84_44_fu_6921_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_95_fu_7056_p4() {
    lshr_ln84_95_fu_7056_p4 = add_ln84_44_fu_6921_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln84_96_fu_5199_p4() {
    lshr_ln84_96_fu_5199_p4 = add_ln84_5_fu_4982_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln84_97_fu_5221_p4() {
    lshr_ln84_97_fu_5221_p4 = add_ln84_5_fu_4982_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln84_98_fu_5243_p4() {
    lshr_ln84_98_fu_5243_p4 = add_ln84_5_fu_4982_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln84_99_fu_7119_p4() {
    lshr_ln84_99_fu_7119_p4 = add_ln84_47_fu_7006_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln84_9_fu_5994_p4() {
    lshr_ln84_9_fu_5994_p4 = add_ln84_23_fu_5917_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln84_s_fu_4749_p4() {
    lshr_ln84_s_fu_4749_p4 = esl_concat<16,6>(esl_concat<8,8>(select_ln82_60_fu_4550_p3.read(), select_ln82_61_fu_4557_p3.read()), tmp_25_fu_4739_p4.read());
}

void sha256d::thread_lshr_ln96_1_fu_11255_p4() {
    lshr_ln96_1_fu_11255_p4 = f_1_reg_1537.read().range(31, 11);
}

void sha256d::thread_lshr_ln96_2_fu_11277_p4() {
    lshr_ln96_2_fu_11277_p4 = f_1_reg_1537.read().range(31, 25);
}

void sha256d::thread_lshr_ln97_1_fu_11381_p4() {
    lshr_ln97_1_fu_11381_p4 = b_1_reg_1490.read().range(31, 13);
}

void sha256d::thread_lshr_ln97_2_fu_11403_p4() {
    lshr_ln97_2_fu_11403_p4 = b_1_reg_1490.read().range(31, 22);
}

void sha256d::thread_lshr_ln_fu_18091_p4() {
    lshr_ln_fu_18091_p4 = f_2_reg_1646.read().range(31, 6);
}

void sha256d::thread_m_16_fu_11597_p2() {
    m_16_fu_11597_p2 = (!xor_ln150_1_fu_11591_p2.read().is_01() || !a_reg_1456.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln150_1_fu_11591_p2.read()) + sc_biguint<32>(a_reg_1456.read()));
}

void sha256d::thread_m_17_fu_2570_p2() {
    m_17_fu_2570_p2 = (!add_ln150_fu_2564_p2.read().is_01() || !xor_ln150_3_fu_2558_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_fu_2564_p2.read()) + sc_biguint<32>(xor_ln150_3_fu_2558_p2.read()));
}

void sha256d::thread_m_18_fu_11749_p2() {
    m_18_fu_11749_p2 = (!add_ln150_2_fu_11743_p2.read().is_01() || !xor_ln150_5_fu_11667_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_2_fu_11743_p2.read()) + sc_biguint<32>(xor_ln150_5_fu_11667_p2.read()));
}

void sha256d::thread_m_19_fu_11831_p2() {
    m_19_fu_11831_p2 = (!add_ln150_4_fu_11825_p2.read().is_01() || !xor_ln150_9_reg_19469.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_4_fu_11825_p2.read()) + sc_biguint<32>(xor_ln150_9_reg_19469.read()));
}

void sha256d::thread_m_20_fu_11982_p2() {
    m_20_fu_11982_p2 = (!add_ln150_6_fu_11976_p2.read().is_01() || !xor_ln150_13_fu_11900_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_6_fu_11976_p2.read()) + sc_biguint<32>(xor_ln150_13_fu_11900_p2.read()));
}

void sha256d::thread_m_21_fu_12134_p2() {
    m_21_fu_12134_p2 = (!add_ln150_8_fu_12128_p2.read().is_01() || !xor_ln150_17_fu_12052_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_8_fu_12128_p2.read()) + sc_biguint<32>(xor_ln150_17_fu_12052_p2.read()));
}

void sha256d::thread_m_22_fu_12292_p2() {
    m_22_fu_12292_p2 = (!add_ln150_11_fu_12286_p2.read().is_01() || !add_ln150_10_fu_12280_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_11_fu_12286_p2.read()) + sc_biguint<32>(add_ln150_10_fu_12280_p2.read()));
}

void sha256d::thread_m_23_fu_12380_p2() {
    m_23_fu_12380_p2 = (!add_ln150_14_fu_12374_p2.read().is_01() || !add_ln150_13_fu_12368_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_14_fu_12374_p2.read()) + sc_biguint<32>(add_ln150_13_fu_12368_p2.read()));
}

void sha256d::thread_m_24_fu_13459_p2() {
    m_24_fu_13459_p2 = (add_ln150_16_reg_20307.read() ^ ap_const_lv32_80000000);
}

void sha256d::thread_m_25_fu_12531_p2() {
    m_25_fu_12531_p2 = (!m_18_fu_11749_p2.read().is_01() || !xor_ln150_30_fu_12525_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_fu_11749_p2.read()) + sc_biguint<32>(xor_ln150_30_fu_12525_p2.read()));
}

void sha256d::thread_m_26_fu_13534_p2() {
    m_26_fu_13534_p2 = (!m_19_reg_20274.read().is_01() || !xor_ln150_32_fu_13528_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_20274.read()) + sc_biguint<32>(xor_ln150_32_fu_13528_p2.read()));
}

void sha256d::thread_m_27_fu_12607_p2() {
    m_27_fu_12607_p2 = (!m_20_fu_11982_p2.read().is_01() || !xor_ln150_34_fu_12601_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_fu_11982_p2.read()) + sc_biguint<32>(xor_ln150_34_fu_12601_p2.read()));
}

void sha256d::thread_m_28_fu_13609_p2() {
    m_28_fu_13609_p2 = (!m_21_reg_20287.read().is_01() || !xor_ln150_36_fu_13603_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_20287.read()) + sc_biguint<32>(xor_ln150_36_fu_13603_p2.read()));
}

void sha256d::thread_m_29_fu_12683_p2() {
    m_29_fu_12683_p2 = (!m_22_fu_12292_p2.read().is_01() || !xor_ln150_38_fu_12677_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_fu_12292_p2.read()) + sc_biguint<32>(xor_ln150_38_fu_12677_p2.read()));
}

void sha256d::thread_m_30_fu_13690_p2() {
    m_30_fu_13690_p2 = (!add_ln150_22_fu_13684_p2.read().is_01() || !m_23_reg_20300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_22_fu_13684_p2.read()) + sc_biguint<32>(m_23_reg_20300.read()));
}

void sha256d::thread_m_31_fu_13705_p2() {
    m_31_fu_13705_p2 = (!add_ln150_25_fu_13699_p2.read().is_01() || !add_ln150_24_fu_13695_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_25_fu_13699_p2.read()) + sc_biguint<32>(add_ln150_24_fu_13695_p2.read()));
}

void sha256d::thread_m_32_fu_13790_p2() {
    m_32_fu_13790_p2 = (!add_ln150_28_fu_13786_p2.read().is_01() || !add_ln150_27_fu_13781_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_28_fu_13786_p2.read()) + sc_biguint<32>(add_ln150_27_fu_13781_p2.read()));
}

void sha256d::thread_m_33_fu_13876_p2() {
    m_33_fu_13876_p2 = (!add_ln150_31_fu_13871_p2.read().is_01() || !add_ln150_30_fu_13866_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_31_fu_13871_p2.read()) + sc_biguint<32>(add_ln150_30_fu_13866_p2.read()));
}

void sha256d::thread_m_34_fu_13961_p2() {
    m_34_fu_13961_p2 = (!add_ln150_34_fu_13957_p2.read().is_01() || !add_ln150_33_fu_13952_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_34_fu_13957_p2.read()) + sc_biguint<32>(add_ln150_33_fu_13952_p2.read()));
}

void sha256d::thread_m_35_fu_14047_p2() {
    m_35_fu_14047_p2 = (!add_ln150_37_fu_14042_p2.read().is_01() || !add_ln150_36_fu_14037_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_37_fu_14042_p2.read()) + sc_biguint<32>(add_ln150_36_fu_14037_p2.read()));
}

void sha256d::thread_m_36_fu_14132_p2() {
    m_36_fu_14132_p2 = (!add_ln150_40_fu_14128_p2.read().is_01() || !add_ln150_39_fu_14123_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_40_fu_14128_p2.read()) + sc_biguint<32>(add_ln150_39_fu_14123_p2.read()));
}

void sha256d::thread_m_37_fu_14218_p2() {
    m_37_fu_14218_p2 = (!add_ln150_43_fu_14213_p2.read().is_01() || !add_ln150_42_fu_14208_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_43_fu_14213_p2.read()) + sc_biguint<32>(add_ln150_42_fu_14208_p2.read()));
}

void sha256d::thread_m_38_fu_15148_p2() {
    m_38_fu_15148_p2 = (!add_ln150_46_reg_20464.read().is_01() || !add_ln150_45_fu_15144_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_46_reg_20464.read()) + sc_biguint<32>(add_ln150_45_fu_15144_p2.read()));
}

void sha256d::thread_m_39_fu_15157_p2() {
    m_39_fu_15157_p2 = (!add_ln150_49_reg_20479.read().is_01() || !add_ln150_48_fu_15153_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_49_reg_20479.read()) + sc_biguint<32>(add_ln150_48_fu_15153_p2.read()));
}

void sha256d::thread_m_40_fu_15241_p2() {
    m_40_fu_15241_p2 = (!add_ln150_52_fu_15237_p2.read().is_01() || !add_ln150_51_fu_15232_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_52_fu_15237_p2.read()) + sc_biguint<32>(add_ln150_51_fu_15232_p2.read()));
}

void sha256d::thread_m_41_fu_15326_p2() {
    m_41_fu_15326_p2 = (!add_ln150_55_fu_15322_p2.read().is_01() || !add_ln150_54_fu_15317_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_55_fu_15322_p2.read()) + sc_biguint<32>(add_ln150_54_fu_15317_p2.read()));
}

void sha256d::thread_m_42_fu_15411_p2() {
    m_42_fu_15411_p2 = (!add_ln150_58_fu_15407_p2.read().is_01() || !add_ln150_57_fu_15402_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_58_fu_15407_p2.read()) + sc_biguint<32>(add_ln150_57_fu_15402_p2.read()));
}

void sha256d::thread_m_43_fu_15496_p2() {
    m_43_fu_15496_p2 = (!add_ln150_61_fu_15492_p2.read().is_01() || !add_ln150_60_fu_15487_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_61_fu_15492_p2.read()) + sc_biguint<32>(add_ln150_60_fu_15487_p2.read()));
}

void sha256d::thread_m_44_fu_15581_p2() {
    m_44_fu_15581_p2 = (!add_ln150_64_fu_15577_p2.read().is_01() || !add_ln150_63_fu_15572_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_64_fu_15577_p2.read()) + sc_biguint<32>(add_ln150_63_fu_15572_p2.read()));
}

void sha256d::thread_m_45_fu_15667_p2() {
    m_45_fu_15667_p2 = (!add_ln150_67_fu_15662_p2.read().is_01() || !add_ln150_66_fu_15657_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_67_fu_15662_p2.read()) + sc_biguint<32>(add_ln150_66_fu_15657_p2.read()));
}

void sha256d::thread_m_46_fu_15753_p2() {
    m_46_fu_15753_p2 = (!add_ln150_70_fu_15748_p2.read().is_01() || !add_ln150_69_fu_15743_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_70_fu_15748_p2.read()) + sc_biguint<32>(add_ln150_69_fu_15743_p2.read()));
}

void sha256d::thread_m_47_fu_15839_p2() {
    m_47_fu_15839_p2 = (!add_ln150_73_fu_15834_p2.read().is_01() || !add_ln150_72_fu_15829_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_73_fu_15834_p2.read()) + sc_biguint<32>(add_ln150_72_fu_15829_p2.read()));
}

void sha256d::thread_m_48_fu_15925_p2() {
    m_48_fu_15925_p2 = (!add_ln150_76_fu_15920_p2.read().is_01() || !add_ln150_75_fu_15915_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_76_fu_15920_p2.read()) + sc_biguint<32>(add_ln150_75_fu_15915_p2.read()));
}

void sha256d::thread_m_49_fu_16011_p2() {
    m_49_fu_16011_p2 = (!add_ln150_79_fu_16006_p2.read().is_01() || !add_ln150_78_fu_16001_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_79_fu_16006_p2.read()) + sc_biguint<32>(add_ln150_78_fu_16001_p2.read()));
}

void sha256d::thread_m_50_fu_16953_p2() {
    m_50_fu_16953_p2 = (!add_ln150_82_reg_20612.read().is_01() || !add_ln150_81_fu_16949_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_82_reg_20612.read()) + sc_biguint<32>(add_ln150_81_fu_16949_p2.read()));
}

void sha256d::thread_m_51_fu_16962_p2() {
    m_51_fu_16962_p2 = (!add_ln150_85_reg_20622.read().is_01() || !add_ln150_84_fu_16958_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_85_reg_20622.read()) + sc_biguint<32>(add_ln150_84_fu_16958_p2.read()));
}

void sha256d::thread_m_52_fu_17046_p2() {
    m_52_fu_17046_p2 = (!add_ln150_88_fu_17042_p2.read().is_01() || !add_ln150_87_fu_17037_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_88_fu_17042_p2.read()) + sc_biguint<32>(add_ln150_87_fu_17037_p2.read()));
}

void sha256d::thread_m_53_fu_17131_p2() {
    m_53_fu_17131_p2 = (!add_ln150_91_fu_17127_p2.read().is_01() || !add_ln150_90_fu_17122_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_91_fu_17127_p2.read()) + sc_biguint<32>(add_ln150_90_fu_17122_p2.read()));
}

void sha256d::thread_m_54_fu_17216_p2() {
    m_54_fu_17216_p2 = (!add_ln150_94_fu_17212_p2.read().is_01() || !add_ln150_93_fu_17207_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_94_fu_17212_p2.read()) + sc_biguint<32>(add_ln150_93_fu_17207_p2.read()));
}

void sha256d::thread_m_55_fu_17301_p2() {
    m_55_fu_17301_p2 = (!add_ln150_97_fu_17297_p2.read().is_01() || !add_ln150_96_fu_17292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_97_fu_17297_p2.read()) + sc_biguint<32>(add_ln150_96_fu_17292_p2.read()));
}

void sha256d::thread_m_56_fu_17386_p2() {
    m_56_fu_17386_p2 = (!add_ln150_100_fu_17382_p2.read().is_01() || !add_ln150_99_fu_17377_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_100_fu_17382_p2.read()) + sc_biguint<32>(add_ln150_99_fu_17377_p2.read()));
}

void sha256d::thread_m_57_fu_17472_p2() {
    m_57_fu_17472_p2 = (!add_ln150_103_fu_17467_p2.read().is_01() || !add_ln150_102_fu_17462_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_103_fu_17467_p2.read()) + sc_biguint<32>(add_ln150_102_fu_17462_p2.read()));
}

void sha256d::thread_m_58_fu_17558_p2() {
    m_58_fu_17558_p2 = (!add_ln150_106_fu_17553_p2.read().is_01() || !add_ln150_105_fu_17548_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_106_fu_17553_p2.read()) + sc_biguint<32>(add_ln150_105_fu_17548_p2.read()));
}

void sha256d::thread_m_59_fu_17644_p2() {
    m_59_fu_17644_p2 = (!add_ln150_109_fu_17639_p2.read().is_01() || !add_ln150_108_fu_17634_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_109_fu_17639_p2.read()) + sc_biguint<32>(add_ln150_108_fu_17634_p2.read()));
}

void sha256d::thread_m_60_fu_17730_p2() {
    m_60_fu_17730_p2 = (!add_ln150_112_fu_17725_p2.read().is_01() || !add_ln150_111_fu_17720_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_112_fu_17725_p2.read()) + sc_biguint<32>(add_ln150_111_fu_17720_p2.read()));
}

void sha256d::thread_m_61_fu_17816_p2() {
    m_61_fu_17816_p2 = (!add_ln150_115_fu_17811_p2.read().is_01() || !add_ln150_114_fu_17806_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_115_fu_17811_p2.read()) + sc_biguint<32>(add_ln150_114_fu_17806_p2.read()));
}

void sha256d::thread_m_62_fu_17898_p2() {
    m_62_fu_17898_p2 = (!add_ln150_118_reg_20672.read().is_01() || !add_ln150_117_fu_17892_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_118_reg_20672.read()) + sc_biguint<32>(add_ln150_117_fu_17892_p2.read()));
}

void sha256d::thread_m_63_fu_17979_p2() {
    m_63_fu_17979_p2 = (!add_ln150_121_reg_20677.read().is_01() || !add_ln150_120_fu_17973_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln150_121_reg_20677.read()) + sc_biguint<32>(add_ln150_120_fu_17973_p2.read()));
}

void sha256d::thread_m_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        m_address0 =  (sc_lv<6>) (zext_ln96_fu_11227_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_3E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_3C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_3A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_38);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_36);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_34);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_30);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_2E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_2C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_2A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_28);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_26);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_24);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_22);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_1E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_1C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_1A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_18);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_16);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_14);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_12);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_10);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else {
        m_address0 = "XXXXXX";
    }
}

void sha256d::thread_m_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_3F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_3D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_3B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_39);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_37);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_35);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_33);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_31);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_2F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_2D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_2B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_29);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_27);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_25);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_23);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_21);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_1F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_1D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_1B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_19);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_17);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_15);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_13);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_11);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_address1 =  (sc_lv<6>) (ap_const_lv64_1);
    } else {
        m_address1 = "XXXXXX";
    }
}

void sha256d::thread_m_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        m_ce0 = ap_const_logic_1;
    } else {
        m_ce0 = ap_const_logic_0;
    }
}

void sha256d::thread_m_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        m_ce1 = ap_const_logic_1;
    } else {
        m_ce1 = ap_const_logic_0;
    }
}

void sha256d::thread_m_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        m_d0 = add_ln84_140_reg_20183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        m_d0 = add_ln84_134_reg_20173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_d0 = add_ln84_128_reg_20163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_d0 = add_ln84_122_reg_20153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_d0 = add_ln84_116_reg_20143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_d0 = add_ln84_110_reg_20133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_d0 = add_ln84_104_reg_20066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_d0 = add_ln84_98_reg_20054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_d0 = add_ln84_92_reg_20042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_d0 = add_ln84_86_reg_20029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_d0 = add_ln84_80_reg_20017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_d0 = add_ln84_74_reg_20005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_d0 = add_ln84_68_reg_19911.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_d0 = add_ln84_62_reg_19897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_d0 = add_ln84_56_reg_19884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_d0 = add_ln84_50_reg_19872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_d0 = add_ln84_44_reg_19860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_d0 = add_ln84_38_fu_6826_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_d0 = add_ln84_32_fu_6518_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_d0 = add_ln84_26_fu_6212_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_d0 = add_ln84_20_fu_5902_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_d0 = add_ln84_14_fu_5587_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_d0 = add_ln84_8_fu_5277_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_d0 = add_ln84_2_fu_4967_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_d0 = or_ln82_5_13_fu_4537_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_d0 = or_ln82_5_11_fu_4242_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_d0 = or_ln82_5_s_fu_3952_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_d0 = or_ln82_5_8_fu_3662_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_d0 = or_ln82_5_6_fu_3372_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_d0 = or_ln82_5_4_fu_3082_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_d0 = or_ln82_5_2_fu_2792_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_d0 = or_ln82_5_fu_2344_p5.read();
    } else {
        m_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        m_d1 = add_ln84_143_reg_20188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        m_d1 = add_ln84_137_reg_20178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_d1 = add_ln84_131_reg_20168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_d1 = add_ln84_125_reg_20158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_d1 = add_ln84_119_reg_20148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_d1 = add_ln84_113_reg_20138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_d1 = add_ln84_107_reg_20072.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_d1 = add_ln84_101_reg_20060.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_d1 = add_ln84_95_reg_20048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_d1 = add_ln84_89_reg_20035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_d1 = add_ln84_83_reg_20023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_d1 = add_ln84_77_reg_20011.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_d1 = add_ln84_71_reg_19918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_d1 = add_ln84_65_reg_19904.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_d1 = add_ln84_59_reg_19890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_d1 = add_ln84_53_reg_19878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_d1 = add_ln84_47_reg_19866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_d1 = add_ln84_41_fu_6836_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_d1 = add_ln84_35_fu_6528_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_d1 = add_ln84_29_fu_6227_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_d1 = add_ln84_23_fu_5917_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_d1 = add_ln84_17_fu_5602_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_d1 = add_ln84_11_fu_5288_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_d1 = add_ln84_5_fu_4982_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_d1 = or_ln82_5_14_fu_4578_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_d1 = or_ln82_5_12_fu_4283_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_d1 = or_ln82_5_10_fu_3993_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_d1 = or_ln82_5_9_fu_3703_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_d1 = or_ln82_5_7_fu_3413_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_d1 = or_ln82_5_5_fu_3123_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_d1 = or_ln82_5_3_fu_2833_p5.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_d1 = or_ln82_5_1_fu_2389_p5.read();
    } else {
        m_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln78_fu_2248_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        m_we0 = ap_const_logic_1;
    } else {
        m_we0 = ap_const_logic_0;
    }
}

void sha256d::thread_m_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln78_fu_2248_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        m_we1 = ap_const_logic_1;
    } else {
        m_we1 = ap_const_logic_0;
    }
}

void sha256d::thread_or_ln150_100_fu_13263_p3() {
    or_ln150_100_fu_13263_p3 = esl_concat<7,25>(trunc_ln150_78_fu_13259_p1.read(), lshr_ln150_126_fu_13249_p4.read());
}

void sha256d::thread_or_ln150_101_fu_13285_p3() {
    or_ln150_101_fu_13285_p3 = esl_concat<18,14>(trunc_ln150_79_fu_13281_p1.read(), lshr_ln150_127_fu_13271_p4.read());
}

void sha256d::thread_or_ln150_102_fu_15283_p3() {
    or_ln150_102_fu_15283_p3 = esl_concat<19,13>(trunc_ln150_81_fu_15279_p1.read(), lshr_ln150_129_fu_15269_p4.read());
}

void sha256d::thread_or_ln150_103_fu_14458_p3() {
    or_ln150_103_fu_14458_p3 = esl_concat<7,25>(trunc_ln150_82_fu_14454_p1.read(), lshr_ln150_131_fu_14444_p4.read());
}

void sha256d::thread_or_ln150_104_fu_14480_p3() {
    or_ln150_104_fu_14480_p3 = esl_concat<18,14>(trunc_ln150_83_fu_14476_p1.read(), lshr_ln150_132_fu_14466_p4.read());
}

void sha256d::thread_or_ln150_105_fu_15368_p3() {
    or_ln150_105_fu_15368_p3 = esl_concat<19,13>(trunc_ln150_85_fu_15364_p1.read(), lshr_ln150_134_fu_15354_p4.read());
}

void sha256d::thread_or_ln150_106_fu_13333_p3() {
    or_ln150_106_fu_13333_p3 = esl_concat<7,25>(trunc_ln150_86_fu_13329_p1.read(), lshr_ln150_136_fu_13319_p4.read());
}

void sha256d::thread_or_ln150_107_fu_13355_p3() {
    or_ln150_107_fu_13355_p3 = esl_concat<18,14>(trunc_ln150_87_fu_13351_p1.read(), lshr_ln150_137_fu_13341_p4.read());
}

void sha256d::thread_or_ln150_108_fu_15453_p3() {
    or_ln150_108_fu_15453_p3 = esl_concat<19,13>(trunc_ln150_89_fu_15449_p1.read(), lshr_ln150_139_fu_15439_p4.read());
}

void sha256d::thread_or_ln150_109_fu_14528_p3() {
    or_ln150_109_fu_14528_p3 = esl_concat<7,25>(trunc_ln150_90_fu_14524_p1.read(), lshr_ln150_141_fu_14514_p4.read());
}

void sha256d::thread_or_ln150_10_fu_13478_p3() {
    or_ln150_10_fu_13478_p3 = esl_concat<17,15>(trunc_ln150_30_fu_13474_p1.read(), lshr_ln150_10_fu_13464_p4.read());
}

void sha256d::thread_or_ln150_110_fu_14550_p3() {
    or_ln150_110_fu_14550_p3 = esl_concat<18,14>(trunc_ln150_91_fu_14546_p1.read(), lshr_ln150_142_fu_14536_p4.read());
}

void sha256d::thread_or_ln150_111_fu_15538_p3() {
    or_ln150_111_fu_15538_p3 = esl_concat<19,13>(trunc_ln150_93_fu_15534_p1.read(), lshr_ln150_144_fu_15524_p4.read());
}

void sha256d::thread_or_ln150_112_fu_13403_p3() {
    or_ln150_112_fu_13403_p3 = esl_concat<7,25>(trunc_ln150_94_fu_13399_p1.read(), lshr_ln150_146_fu_13389_p4.read());
}

void sha256d::thread_or_ln150_113_fu_13425_p3() {
    or_ln150_113_fu_13425_p3 = esl_concat<18,14>(trunc_ln150_95_fu_13421_p1.read(), lshr_ln150_147_fu_13411_p4.read());
}

void sha256d::thread_or_ln150_114_fu_15623_p3() {
    or_ln150_114_fu_15623_p3 = esl_concat<19,13>(trunc_ln150_97_fu_15619_p1.read(), lshr_ln150_149_fu_15609_p4.read());
}

void sha256d::thread_or_ln150_115_fu_14598_p3() {
    or_ln150_115_fu_14598_p3 = esl_concat<7,25>(trunc_ln150_98_fu_14594_p1.read(), lshr_ln150_151_fu_14584_p4.read());
}

void sha256d::thread_or_ln150_116_fu_14620_p3() {
    or_ln150_116_fu_14620_p3 = esl_concat<18,14>(trunc_ln150_99_fu_14616_p1.read(), lshr_ln150_152_fu_14606_p4.read());
}

void sha256d::thread_or_ln150_117_fu_15709_p3() {
    or_ln150_117_fu_15709_p3 = esl_concat<19,13>(trunc_ln150_101_fu_15705_p1.read(), lshr_ln150_154_fu_15695_p4.read());
}

void sha256d::thread_or_ln150_118_fu_14668_p3() {
    or_ln150_118_fu_14668_p3 = esl_concat<7,25>(trunc_ln150_102_fu_14664_p1.read(), lshr_ln150_156_fu_14654_p4.read());
}

void sha256d::thread_or_ln150_119_fu_14690_p3() {
    or_ln150_119_fu_14690_p3 = esl_concat<18,14>(trunc_ln150_103_fu_14686_p1.read(), lshr_ln150_157_fu_14676_p4.read());
}

void sha256d::thread_or_ln150_11_fu_12551_p3() {
    or_ln150_11_fu_12551_p3 = esl_concat<17,15>(trunc_ln150_32_fu_12547_p1.read(), lshr_ln150_11_fu_12537_p4.read());
}

void sha256d::thread_or_ln150_120_fu_15795_p3() {
    or_ln150_120_fu_15795_p3 = esl_concat<19,13>(trunc_ln150_105_fu_15791_p1.read(), lshr_ln150_159_fu_15781_p4.read());
}

void sha256d::thread_or_ln150_121_fu_14738_p3() {
    or_ln150_121_fu_14738_p3 = esl_concat<7,25>(trunc_ln150_106_fu_14734_p1.read(), lshr_ln150_161_fu_14724_p4.read());
}

void sha256d::thread_or_ln150_122_fu_14760_p3() {
    or_ln150_122_fu_14760_p3 = esl_concat<18,14>(trunc_ln150_107_fu_14756_p1.read(), lshr_ln150_162_fu_14746_p4.read());
}

void sha256d::thread_or_ln150_123_fu_15881_p3() {
    or_ln150_123_fu_15881_p3 = esl_concat<19,13>(trunc_ln150_109_fu_15877_p1.read(), lshr_ln150_164_fu_15867_p4.read());
}

void sha256d::thread_or_ln150_124_fu_14808_p3() {
    or_ln150_124_fu_14808_p3 = esl_concat<7,25>(trunc_ln150_110_fu_14804_p1.read(), lshr_ln150_166_fu_14794_p4.read());
}

void sha256d::thread_or_ln150_125_fu_14830_p3() {
    or_ln150_125_fu_14830_p3 = esl_concat<18,14>(trunc_ln150_111_fu_14826_p1.read(), lshr_ln150_167_fu_14816_p4.read());
}

void sha256d::thread_or_ln150_126_fu_15967_p3() {
    or_ln150_126_fu_15967_p3 = esl_concat<19,13>(trunc_ln150_113_fu_15963_p1.read(), lshr_ln150_169_fu_15953_p4.read());
}

void sha256d::thread_or_ln150_127_fu_14878_p3() {
    or_ln150_127_fu_14878_p3 = esl_concat<7,25>(trunc_ln150_114_fu_14874_p1.read(), lshr_ln150_171_fu_14864_p4.read());
}

void sha256d::thread_or_ln150_128_fu_14900_p3() {
    or_ln150_128_fu_14900_p3 = esl_concat<18,14>(trunc_ln150_115_fu_14896_p1.read(), lshr_ln150_172_fu_14886_p4.read());
}

void sha256d::thread_or_ln150_129_fu_16053_p3() {
    or_ln150_129_fu_16053_p3 = esl_concat<19,13>(trunc_ln150_117_fu_16049_p1.read(), lshr_ln150_174_fu_16039_p4.read());
}

void sha256d::thread_or_ln150_12_fu_13553_p3() {
    or_ln150_12_fu_13553_p3 = esl_concat<17,15>(trunc_ln150_34_fu_13549_p1.read(), lshr_ln150_12_fu_13539_p4.read());
}

void sha256d::thread_or_ln150_130_fu_14948_p3() {
    or_ln150_130_fu_14948_p3 = esl_concat<7,25>(trunc_ln150_118_fu_14944_p1.read(), lshr_ln150_176_fu_14934_p4.read());
}

void sha256d::thread_or_ln150_131_fu_14970_p3() {
    or_ln150_131_fu_14970_p3 = esl_concat<18,14>(trunc_ln150_119_fu_14966_p1.read(), lshr_ln150_177_fu_14956_p4.read());
}

void sha256d::thread_or_ln150_132_fu_16128_p3() {
    or_ln150_132_fu_16128_p3 = esl_concat<19,13>(trunc_ln150_121_fu_16124_p1.read(), lshr_ln150_179_fu_16114_p4.read());
}

void sha256d::thread_or_ln150_133_fu_15018_p3() {
    or_ln150_133_fu_15018_p3 = esl_concat<7,25>(trunc_ln150_122_fu_15014_p1.read(), lshr_ln150_181_fu_15004_p4.read());
}

void sha256d::thread_or_ln150_134_fu_15040_p3() {
    or_ln150_134_fu_15040_p3 = esl_concat<18,14>(trunc_ln150_123_fu_15036_p1.read(), lshr_ln150_182_fu_15026_p4.read());
}

void sha256d::thread_or_ln150_135_fu_17003_p3() {
    or_ln150_135_fu_17003_p3 = esl_concat<19,13>(trunc_ln150_125_fu_16999_p1.read(), lshr_ln150_184_fu_16989_p4.read());
}

void sha256d::thread_or_ln150_136_fu_15088_p3() {
    or_ln150_136_fu_15088_p3 = esl_concat<7,25>(trunc_ln150_126_fu_15084_p1.read(), lshr_ln150_186_fu_15074_p4.read());
}

void sha256d::thread_or_ln150_137_fu_15110_p3() {
    or_ln150_137_fu_15110_p3 = esl_concat<18,14>(trunc_ln150_127_fu_15106_p1.read(), lshr_ln150_187_fu_15096_p4.read());
}

void sha256d::thread_or_ln150_138_fu_17088_p3() {
    or_ln150_138_fu_17088_p3 = esl_concat<19,13>(trunc_ln150_129_fu_17084_p1.read(), lshr_ln150_189_fu_17074_p4.read());
}

void sha256d::thread_or_ln150_139_fu_16181_p3() {
    or_ln150_139_fu_16181_p3 = esl_concat<7,25>(trunc_ln150_130_fu_16177_p1.read(), lshr_ln150_191_fu_16167_p4.read());
}

void sha256d::thread_or_ln150_13_fu_12627_p3() {
    or_ln150_13_fu_12627_p3 = esl_concat<17,15>(trunc_ln150_36_fu_12623_p1.read(), lshr_ln150_13_fu_12613_p4.read());
}

void sha256d::thread_or_ln150_140_fu_16203_p3() {
    or_ln150_140_fu_16203_p3 = esl_concat<18,14>(trunc_ln150_131_fu_16199_p1.read(), lshr_ln150_192_fu_16189_p4.read());
}

void sha256d::thread_or_ln150_141_fu_17173_p3() {
    or_ln150_141_fu_17173_p3 = esl_concat<19,13>(trunc_ln150_133_fu_17169_p1.read(), lshr_ln150_194_fu_17159_p4.read());
}

void sha256d::thread_or_ln150_142_fu_16251_p3() {
    or_ln150_142_fu_16251_p3 = esl_concat<7,25>(trunc_ln150_134_fu_16247_p1.read(), lshr_ln150_196_fu_16237_p4.read());
}

void sha256d::thread_or_ln150_143_fu_16273_p3() {
    or_ln150_143_fu_16273_p3 = esl_concat<18,14>(trunc_ln150_135_fu_16269_p1.read(), lshr_ln150_197_fu_16259_p4.read());
}

void sha256d::thread_or_ln150_144_fu_17258_p3() {
    or_ln150_144_fu_17258_p3 = esl_concat<19,13>(trunc_ln150_137_fu_17254_p1.read(), lshr_ln150_199_fu_17244_p4.read());
}

void sha256d::thread_or_ln150_145_fu_16321_p3() {
    or_ln150_145_fu_16321_p3 = esl_concat<7,25>(trunc_ln150_138_fu_16317_p1.read(), lshr_ln150_201_fu_16307_p4.read());
}

void sha256d::thread_or_ln150_146_fu_16343_p3() {
    or_ln150_146_fu_16343_p3 = esl_concat<18,14>(trunc_ln150_139_fu_16339_p1.read(), lshr_ln150_202_fu_16329_p4.read());
}

void sha256d::thread_or_ln150_147_fu_17343_p3() {
    or_ln150_147_fu_17343_p3 = esl_concat<19,13>(trunc_ln150_141_fu_17339_p1.read(), lshr_ln150_204_fu_17329_p4.read());
}

void sha256d::thread_or_ln150_148_fu_16391_p3() {
    or_ln150_148_fu_16391_p3 = esl_concat<7,25>(trunc_ln150_142_fu_16387_p1.read(), lshr_ln150_206_fu_16377_p4.read());
}

void sha256d::thread_or_ln150_149_fu_16413_p3() {
    or_ln150_149_fu_16413_p3 = esl_concat<18,14>(trunc_ln150_143_fu_16409_p1.read(), lshr_ln150_207_fu_16399_p4.read());
}

void sha256d::thread_or_ln150_14_fu_13628_p3() {
    or_ln150_14_fu_13628_p3 = esl_concat<17,15>(trunc_ln150_38_fu_13624_p1.read(), lshr_ln150_14_fu_13614_p4.read());
}

void sha256d::thread_or_ln150_150_fu_17428_p3() {
    or_ln150_150_fu_17428_p3 = esl_concat<19,13>(trunc_ln150_145_fu_17424_p1.read(), lshr_ln150_209_fu_17414_p4.read());
}

void sha256d::thread_or_ln150_151_fu_16461_p3() {
    or_ln150_151_fu_16461_p3 = esl_concat<7,25>(trunc_ln150_146_fu_16457_p1.read(), lshr_ln150_211_fu_16447_p4.read());
}

void sha256d::thread_or_ln150_152_fu_16483_p3() {
    or_ln150_152_fu_16483_p3 = esl_concat<18,14>(trunc_ln150_147_fu_16479_p1.read(), lshr_ln150_212_fu_16469_p4.read());
}

void sha256d::thread_or_ln150_153_fu_17514_p3() {
    or_ln150_153_fu_17514_p3 = esl_concat<19,13>(trunc_ln150_149_fu_17510_p1.read(), lshr_ln150_214_fu_17500_p4.read());
}

void sha256d::thread_or_ln150_154_fu_16531_p3() {
    or_ln150_154_fu_16531_p3 = esl_concat<7,25>(trunc_ln150_150_fu_16527_p1.read(), lshr_ln150_216_fu_16517_p4.read());
}

void sha256d::thread_or_ln150_155_fu_16553_p3() {
    or_ln150_155_fu_16553_p3 = esl_concat<18,14>(trunc_ln150_151_fu_16549_p1.read(), lshr_ln150_217_fu_16539_p4.read());
}

void sha256d::thread_or_ln150_156_fu_17600_p3() {
    or_ln150_156_fu_17600_p3 = esl_concat<19,13>(trunc_ln150_153_fu_17596_p1.read(), lshr_ln150_219_fu_17586_p4.read());
}

void sha256d::thread_or_ln150_157_fu_16601_p3() {
    or_ln150_157_fu_16601_p3 = esl_concat<7,25>(trunc_ln150_154_fu_16597_p1.read(), lshr_ln150_221_fu_16587_p4.read());
}

void sha256d::thread_or_ln150_158_fu_16623_p3() {
    or_ln150_158_fu_16623_p3 = esl_concat<18,14>(trunc_ln150_155_fu_16619_p1.read(), lshr_ln150_222_fu_16609_p4.read());
}

void sha256d::thread_or_ln150_159_fu_17686_p3() {
    or_ln150_159_fu_17686_p3 = esl_concat<19,13>(trunc_ln150_157_fu_17682_p1.read(), lshr_ln150_224_fu_17672_p4.read());
}

void sha256d::thread_or_ln150_15_fu_12703_p3() {
    or_ln150_15_fu_12703_p3 = esl_concat<17,15>(trunc_ln150_40_fu_12699_p1.read(), lshr_ln150_15_fu_12689_p4.read());
}

void sha256d::thread_or_ln150_160_fu_16671_p3() {
    or_ln150_160_fu_16671_p3 = esl_concat<7,25>(trunc_ln150_158_fu_16667_p1.read(), lshr_ln150_226_fu_16657_p4.read());
}

void sha256d::thread_or_ln150_161_fu_16693_p3() {
    or_ln150_161_fu_16693_p3 = esl_concat<18,14>(trunc_ln150_159_fu_16689_p1.read(), lshr_ln150_227_fu_16679_p4.read());
}

void sha256d::thread_or_ln150_162_fu_17772_p3() {
    or_ln150_162_fu_17772_p3 = esl_concat<19,13>(trunc_ln150_161_fu_17768_p1.read(), lshr_ln150_229_fu_17758_p4.read());
}

void sha256d::thread_or_ln150_163_fu_16741_p3() {
    or_ln150_163_fu_16741_p3 = esl_concat<7,25>(trunc_ln150_162_fu_16737_p1.read(), lshr_ln150_231_fu_16727_p4.read());
}

void sha256d::thread_or_ln150_164_fu_16763_p3() {
    or_ln150_164_fu_16763_p3 = esl_concat<18,14>(trunc_ln150_163_fu_16759_p1.read(), lshr_ln150_232_fu_16749_p4.read());
}

void sha256d::thread_or_ln150_165_fu_17858_p3() {
    or_ln150_165_fu_17858_p3 = esl_concat<19,13>(trunc_ln150_165_fu_17854_p1.read(), lshr_ln150_234_fu_17844_p4.read());
}

void sha256d::thread_or_ln150_166_fu_16811_p3() {
    or_ln150_166_fu_16811_p3 = esl_concat<7,25>(trunc_ln150_166_fu_16807_p1.read(), lshr_ln150_236_fu_16797_p4.read());
}

void sha256d::thread_or_ln150_167_fu_16833_p3() {
    or_ln150_167_fu_16833_p3 = esl_concat<18,14>(trunc_ln150_167_fu_16829_p1.read(), lshr_ln150_237_fu_16819_p4.read());
}

void sha256d::thread_or_ln150_168_fu_17939_p3() {
    or_ln150_168_fu_17939_p3 = esl_concat<19,13>(trunc_ln150_169_fu_17935_p1.read(), lshr_ln150_239_fu_17925_p4.read());
}

void sha256d::thread_or_ln150_169_fu_16887_p3() {
    or_ln150_169_fu_16887_p3 = esl_concat<7,25>(trunc_ln150_170_fu_16883_p1.read(), lshr_ln150_241_fu_16873_p4.read());
}

void sha256d::thread_or_ln150_16_fu_13725_p3() {
    or_ln150_16_fu_13725_p3 = esl_concat<17,15>(trunc_ln150_44_fu_13721_p1.read(), lshr_ln150_16_fu_13711_p4.read());
}

void sha256d::thread_or_ln150_170_fu_16909_p3() {
    or_ln150_170_fu_16909_p3 = esl_concat<18,14>(trunc_ln150_171_fu_16905_p1.read(), lshr_ln150_242_fu_16895_p4.read());
}

void sha256d::thread_or_ln150_17_fu_13810_p3() {
    or_ln150_17_fu_13810_p3 = esl_concat<17,15>(trunc_ln150_48_fu_13806_p1.read(), lshr_ln150_17_fu_13796_p4.read());
}

void sha256d::thread_or_ln150_18_fu_13896_p3() {
    or_ln150_18_fu_13896_p3 = esl_concat<17,15>(trunc_ln150_52_fu_13892_p1.read(), lshr_ln150_18_fu_13882_p4.read());
}

void sha256d::thread_or_ln150_19_fu_13981_p3() {
    or_ln150_19_fu_13981_p3 = esl_concat<17,15>(trunc_ln150_56_fu_13977_p1.read(), lshr_ln150_19_fu_13967_p4.read());
}

void sha256d::thread_or_ln150_1_fu_11563_p3() {
    or_ln150_1_fu_11563_p3 = esl_concat<18,14>(trunc_ln150_1_fu_11549_p1.read(), tmp_3_fu_11553_p4.read());
}

void sha256d::thread_or_ln150_20_fu_14067_p3() {
    or_ln150_20_fu_14067_p3 = esl_concat<17,15>(trunc_ln150_60_fu_14063_p1.read(), lshr_ln150_20_fu_14053_p4.read());
}

void sha256d::thread_or_ln150_21_fu_14152_p3() {
    or_ln150_21_fu_14152_p3 = esl_concat<17,15>(trunc_ln150_64_fu_14148_p1.read(), lshr_ln150_21_fu_14138_p4.read());
}

void sha256d::thread_or_ln150_22_fu_14238_p3() {
    or_ln150_22_fu_14238_p3 = esl_concat<17,15>(trunc_ln150_68_fu_14234_p1.read(), lshr_ln150_22_fu_14224_p4.read());
}

void sha256d::thread_or_ln150_23_fu_14313_p3() {
    or_ln150_23_fu_14313_p3 = esl_concat<17,15>(trunc_ln150_72_fu_14309_p1.read(), lshr_ln150_23_fu_14299_p4.read());
}

void sha256d::thread_or_ln150_24_fu_15176_p3() {
    or_ln150_24_fu_15176_p3 = esl_concat<17,15>(trunc_ln150_76_fu_15172_p1.read(), lshr_ln150_24_fu_15162_p4.read());
}

void sha256d::thread_or_ln150_25_fu_15261_p3() {
    or_ln150_25_fu_15261_p3 = esl_concat<17,15>(trunc_ln150_80_fu_15257_p1.read(), lshr_ln150_25_fu_15247_p4.read());
}

void sha256d::thread_or_ln150_26_fu_15346_p3() {
    or_ln150_26_fu_15346_p3 = esl_concat<17,15>(trunc_ln150_84_fu_15342_p1.read(), lshr_ln150_26_fu_15332_p4.read());
}

void sha256d::thread_or_ln150_27_fu_15431_p3() {
    or_ln150_27_fu_15431_p3 = esl_concat<17,15>(trunc_ln150_88_fu_15427_p1.read(), lshr_ln150_27_fu_15417_p4.read());
}

void sha256d::thread_or_ln150_28_fu_15516_p3() {
    or_ln150_28_fu_15516_p3 = esl_concat<17,15>(trunc_ln150_92_fu_15512_p1.read(), lshr_ln150_28_fu_15502_p4.read());
}

void sha256d::thread_or_ln150_29_fu_15601_p3() {
    or_ln150_29_fu_15601_p3 = esl_concat<17,15>(trunc_ln150_96_fu_15597_p1.read(), lshr_ln150_29_fu_15587_p4.read());
}

void sha256d::thread_or_ln150_2_fu_2508_p3() {
    or_ln150_2_fu_2508_p3 = esl_concat<7,25>(trunc_ln150_2_fu_2494_p1.read(), tmp_5_fu_2498_p4.read());
}

void sha256d::thread_or_ln150_30_fu_15687_p3() {
    or_ln150_30_fu_15687_p3 = esl_concat<17,15>(trunc_ln150_100_fu_15683_p1.read(), lshr_ln150_30_fu_15673_p4.read());
}

void sha256d::thread_or_ln150_31_fu_15773_p3() {
    or_ln150_31_fu_15773_p3 = esl_concat<17,15>(trunc_ln150_104_fu_15769_p1.read(), lshr_ln150_31_fu_15759_p4.read());
}

void sha256d::thread_or_ln150_32_fu_15859_p3() {
    or_ln150_32_fu_15859_p3 = esl_concat<17,15>(trunc_ln150_108_fu_15855_p1.read(), lshr_ln150_32_fu_15845_p4.read());
}

void sha256d::thread_or_ln150_33_fu_15945_p3() {
    or_ln150_33_fu_15945_p3 = esl_concat<17,15>(trunc_ln150_112_fu_15941_p1.read(), lshr_ln150_33_fu_15931_p4.read());
}

void sha256d::thread_or_ln150_34_fu_16031_p3() {
    or_ln150_34_fu_16031_p3 = esl_concat<17,15>(trunc_ln150_116_fu_16027_p1.read(), lshr_ln150_34_fu_16017_p4.read());
}

void sha256d::thread_or_ln150_35_fu_16106_p3() {
    or_ln150_35_fu_16106_p3 = esl_concat<17,15>(trunc_ln150_120_fu_16102_p1.read(), lshr_ln150_35_fu_16092_p4.read());
}

void sha256d::thread_or_ln150_36_fu_16981_p3() {
    or_ln150_36_fu_16981_p3 = esl_concat<17,15>(trunc_ln150_124_fu_16977_p1.read(), lshr_ln150_36_fu_16967_p4.read());
}

void sha256d::thread_or_ln150_37_fu_17066_p3() {
    or_ln150_37_fu_17066_p3 = esl_concat<17,15>(trunc_ln150_128_fu_17062_p1.read(), lshr_ln150_37_fu_17052_p4.read());
}

void sha256d::thread_or_ln150_38_fu_17151_p3() {
    or_ln150_38_fu_17151_p3 = esl_concat<17,15>(trunc_ln150_132_fu_17147_p1.read(), lshr_ln150_38_fu_17137_p4.read());
}

}

