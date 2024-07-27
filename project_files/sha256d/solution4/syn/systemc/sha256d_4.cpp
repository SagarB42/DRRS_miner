#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_K_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        K_V_address0 =  (sc_lv<6>) (zext_ln544_fu_16907_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        K_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_10383_p1.read());
    } else {
        K_V_address0 = "XXXXXX";
    }
}

void sha256d::thread_K_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())))) {
        K_V_ce0 = ap_const_logic_1;
    } else {
        K_V_ce0 = ap_const_logic_0;
    }
}

void sha256d::thread_a_V_1_fu_17233_p2() {
    a_V_1_fu_17233_p2 = (!add_ln209_264_fu_17227_p2.read().is_01() || !ret_V_13_fu_17215_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_264_fu_17227_p2.read()) + sc_biguint<32>(ret_V_13_fu_17215_p2.read()));
}

void sha256d::thread_a_V_2_fu_10629_p2() {
    a_V_2_fu_10629_p2 = (!add_ln209_271_fu_10623_p2.read().is_01() || !ret_V_27_fu_10611_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_271_fu_10623_p2.read()) + sc_biguint<32>(ret_V_27_fu_10611_p2.read()));
}

void sha256d::thread_add_ln209_100_fu_16466_p2() {
    add_ln209_100_fu_16466_p2 = (!xor_ln1357_144_fu_16456_p2.read().is_01() || !m_42_V_reg_18838.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_144_fu_16456_p2.read()) + sc_biguint<32>(m_42_V_reg_18838.read()));
}

void sha256d::thread_add_ln209_102_fu_16547_p2() {
    add_ln209_102_fu_16547_p2 = (!m_52_V_reg_18951.read().is_01() || !xor_ln1357_150_reg_18906.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_V_reg_18951.read()) + sc_biguint<32>(xor_ln1357_150_reg_18906.read()));
}

void sha256d::thread_add_ln209_103_fu_16551_p2() {
    add_ln209_103_fu_16551_p2 = (!xor_ln1357_148_fu_16541_p2.read().is_01() || !m_43_V_reg_18845.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_148_fu_16541_p2.read()) + sc_biguint<32>(m_43_V_reg_18845.read()));
}

void sha256d::thread_add_ln209_105_fu_16632_p2() {
    add_ln209_105_fu_16632_p2 = (!m_53_V_reg_18957.read().is_01() || !xor_ln1357_154_reg_18911.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_V_reg_18957.read()) + sc_biguint<32>(xor_ln1357_154_reg_18911.read()));
}

void sha256d::thread_add_ln209_106_fu_16636_p2() {
    add_ln209_106_fu_16636_p2 = (!xor_ln1357_152_fu_16626_p2.read().is_01() || !m_44_V_reg_18852.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_152_fu_16626_p2.read()) + sc_biguint<32>(m_44_V_reg_18852.read()));
}

void sha256d::thread_add_ln209_108_fu_16717_p2() {
    add_ln209_108_fu_16717_p2 = (!m_54_V_fu_16208_p2.read().is_01() || !xor_ln1357_158_reg_18973.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_V_fu_16208_p2.read()) + sc_biguint<32>(xor_ln1357_158_reg_18973.read()));
}

void sha256d::thread_add_ln209_109_fu_16722_p2() {
    add_ln209_109_fu_16722_p2 = (!xor_ln1357_156_fu_16711_p2.read().is_01() || !m_45_V_reg_18859.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_156_fu_16711_p2.read()) + sc_biguint<32>(m_45_V_reg_18859.read()));
}

void sha256d::thread_add_ln209_10_fu_11455_p2() {
    add_ln209_10_fu_11455_p2 = (!m_16_V_reg_17941.read().is_01() || !m_7_V_fu_10811_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_V_reg_17941.read()) + sc_biguint<32>(m_7_V_fu_10811_p1.read()));
}

void sha256d::thread_add_ln209_111_fu_16803_p2() {
    add_ln209_111_fu_16803_p2 = (!xor_ln1357_160_fu_16797_p2.read().is_01() || !m_55_V_fu_16217_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_160_fu_16797_p2.read()) + sc_biguint<32>(m_55_V_fu_16217_p2.read()));
}

void sha256d::thread_add_ln209_112_fu_16122_p2() {
    add_ln209_112_fu_16122_p2 = (!xor_ln1357_162_fu_16116_p2.read().is_01() || !m_46_V_fu_15307_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_162_fu_16116_p2.read()) + sc_biguint<32>(m_46_V_fu_15307_p2.read()));
}

void sha256d::thread_add_ln209_114_fu_16884_p2() {
    add_ln209_114_fu_16884_p2 = (!xor_ln1357_164_fu_16878_p2.read().is_01() || !m_56_V_fu_16301_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_164_fu_16878_p2.read()) + sc_biguint<32>(m_56_V_fu_16301_p2.read()));
}

void sha256d::thread_add_ln209_115_fu_16198_p2() {
    add_ln209_115_fu_16198_p2 = (!xor_ln1357_166_fu_16192_p2.read().is_01() || !m_47_V_fu_15316_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_166_fu_16192_p2.read()) + sc_biguint<32>(m_47_V_fu_15316_p2.read()));
}

void sha256d::thread_add_ln209_117_fu_1969_p2() {
    add_ln209_117_fu_1969_p2 = (!zext_ln321_10_fu_1666_p1.read().is_01() || !zext_ln209_24_fu_1965_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(zext_ln321_10_fu_1666_p1.read()) + sc_biguint<24>(zext_ln209_24_fu_1965_p1.read()));
}

void sha256d::thread_add_ln209_118_fu_1979_p2() {
    add_ln209_118_fu_1979_p2 = (!or_ln1357_7_fu_1939_p3.read().is_01() || !zext_ln209_25_fu_1975_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_7_fu_1939_p3.read()) + sc_biguint<32>(zext_ln209_25_fu_1975_p1.read()));
}

void sha256d::thread_add_ln209_119_fu_2129_p2() {
    add_ln209_119_fu_2129_p2 = (!zext_ln321_11_fu_1681_p1.read().is_01() || !zext_ln209_31_fu_2125_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(zext_ln321_11_fu_1681_p1.read()) + sc_biguint<24>(zext_ln209_31_fu_2125_p1.read()));
}

void sha256d::thread_add_ln209_120_fu_2139_p2() {
    add_ln209_120_fu_2139_p2 = (!or_ln1357_8_fu_2099_p3.read().is_01() || !zext_ln209_32_fu_2135_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_8_fu_2099_p3.read()) + sc_biguint<32>(zext_ln209_32_fu_2135_p1.read()));
}

void sha256d::thread_add_ln209_121_fu_2311_p2() {
    add_ln209_121_fu_2311_p2 = (!xor_ln1357_172_fu_2209_p2.read().is_01() || !or_ln1357_9_fu_2303_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_172_fu_2209_p2.read()) + sc_biguint<32>(or_ln1357_9_fu_2303_p3.read()));
}

void sha256d::thread_add_ln209_122_fu_2317_p2() {
    add_ln209_122_fu_2317_p2 = (!zext_ln321_fu_1691_p1.read().is_01() || !zext_ln321_5_fu_1777_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_fu_1691_p1.read()) + sc_biguint<9>(zext_ln321_5_fu_1777_p1.read()));
}

void sha256d::thread_add_ln209_123_fu_2327_p2() {
    add_ln209_123_fu_2327_p2 = (!add_ln209_121_fu_2311_p2.read().is_01() || !zext_ln209_26_fu_2323_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_121_fu_2311_p2.read()) + sc_biguint<32>(zext_ln209_26_fu_2323_p1.read()));
}

void sha256d::thread_add_ln209_124_fu_2499_p2() {
    add_ln209_124_fu_2499_p2 = (!xor_ln1357_175_fu_2397_p2.read().is_01() || !or_ln1357_s_fu_2491_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_175_fu_2397_p2.read()) + sc_biguint<32>(or_ln1357_s_fu_2491_p3.read()));
}

void sha256d::thread_add_ln209_125_fu_2505_p2() {
    add_ln209_125_fu_2505_p2 = (!zext_ln321_1_fu_1701_p1.read().is_01() || !zext_ln321_6_fu_1788_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_1_fu_1701_p1.read()) + sc_biguint<9>(zext_ln321_6_fu_1788_p1.read()));
}

void sha256d::thread_add_ln209_126_fu_2515_p2() {
    add_ln209_126_fu_2515_p2 = (!add_ln209_124_fu_2499_p2.read().is_01() || !zext_ln209_27_fu_2511_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_124_fu_2499_p2.read()) + sc_biguint<32>(zext_ln209_27_fu_2511_p1.read()));
}

void sha256d::thread_add_ln209_127_fu_2687_p2() {
    add_ln209_127_fu_2687_p2 = (!xor_ln1357_178_fu_2585_p2.read().is_01() || !or_ln1357_10_fu_2679_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_178_fu_2585_p2.read()) + sc_biguint<32>(or_ln1357_10_fu_2679_p3.read()));
}

void sha256d::thread_add_ln209_128_fu_2693_p2() {
    add_ln209_128_fu_2693_p2 = (!zext_ln321_2_fu_1712_p1.read().is_01() || !zext_ln321_7_fu_1799_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_2_fu_1712_p1.read()) + sc_biguint<9>(zext_ln321_7_fu_1799_p1.read()));
}

void sha256d::thread_add_ln209_129_fu_2703_p2() {
    add_ln209_129_fu_2703_p2 = (!add_ln209_127_fu_2687_p2.read().is_01() || !zext_ln209_28_fu_2699_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_127_fu_2687_p2.read()) + sc_biguint<32>(zext_ln209_28_fu_2699_p1.read()));
}

void sha256d::thread_add_ln209_130_fu_2875_p2() {
    add_ln209_130_fu_2875_p2 = (!xor_ln1357_181_fu_2773_p2.read().is_01() || !or_ln1357_11_fu_2867_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_181_fu_2773_p2.read()) + sc_biguint<32>(or_ln1357_11_fu_2867_p3.read()));
}

void sha256d::thread_add_ln209_131_fu_2881_p2() {
    add_ln209_131_fu_2881_p2 = (!zext_ln321_3_fu_1723_p1.read().is_01() || !zext_ln321_8_fu_1810_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_3_fu_1723_p1.read()) + sc_biguint<9>(zext_ln321_8_fu_1810_p1.read()));
}

void sha256d::thread_add_ln209_132_fu_2891_p2() {
    add_ln209_132_fu_2891_p2 = (!add_ln209_130_fu_2875_p2.read().is_01() || !zext_ln209_29_fu_2887_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_130_fu_2875_p2.read()) + sc_biguint<32>(zext_ln209_29_fu_2887_p1.read()));
}

void sha256d::thread_add_ln209_133_fu_3063_p2() {
    add_ln209_133_fu_3063_p2 = (!xor_ln1357_184_fu_2961_p2.read().is_01() || !or_ln1357_12_fu_3055_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_184_fu_2961_p2.read()) + sc_biguint<32>(or_ln1357_12_fu_3055_p3.read()));
}

void sha256d::thread_add_ln209_134_fu_3069_p2() {
    add_ln209_134_fu_3069_p2 = (!zext_ln321_4_fu_1734_p1.read().is_01() || !zext_ln321_9_fu_1821_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_4_fu_1734_p1.read()) + sc_biguint<9>(zext_ln321_9_fu_1821_p1.read()));
}

void sha256d::thread_add_ln209_135_fu_3079_p2() {
    add_ln209_135_fu_3079_p2 = (!add_ln209_133_fu_3063_p2.read().is_01() || !zext_ln209_30_fu_3075_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_133_fu_3063_p2.read()) + sc_biguint<32>(zext_ln209_30_fu_3075_p1.read()));
}

void sha256d::thread_add_ln209_136_fu_3251_p2() {
    add_ln209_136_fu_3251_p2 = (!or_ln1357_13_fu_3243_p3.read().is_01() || !add_ln209_118_fu_1979_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_13_fu_3243_p3.read()) + sc_biguint<32>(add_ln209_118_fu_1979_p2.read()));
}

void sha256d::thread_add_ln209_137_fu_3257_p2() {
    add_ln209_137_fu_3257_p2 = (!zext_ln209_7_fu_1745_p1.read().is_01() || !xor_ln1357_187_fu_3149_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_7_fu_1745_p1.read()) + sc_biguint<32>(xor_ln1357_187_fu_3149_p2.read()));
}

void sha256d::thread_add_ln209_138_fu_3263_p2() {
    add_ln209_138_fu_3263_p2 = (!add_ln209_136_fu_3251_p2.read().is_01() || !add_ln209_137_fu_3257_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_136_fu_3251_p2.read()) + sc_biguint<32>(add_ln209_137_fu_3257_p2.read()));
}

void sha256d::thread_add_ln209_139_fu_3435_p2() {
    add_ln209_139_fu_3435_p2 = (!or_ln1357_14_fu_3427_p3.read().is_01() || !add_ln209_120_fu_2139_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_14_fu_3427_p3.read()) + sc_biguint<32>(add_ln209_120_fu_2139_p2.read()));
}

void sha256d::thread_add_ln209_140_fu_4919_p2() {
    add_ln209_140_fu_4919_p2 = (!zext_ln209_8_reg_17987.read().is_01() || !xor_ln1357_190_reg_17881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_8_reg_17987.read()) + sc_biguint<32>(xor_ln1357_190_reg_17881.read()));
}

void sha256d::thread_add_ln209_141_fu_4923_p2() {
    add_ln209_141_fu_4923_p2 = (!add_ln209_139_reg_17886.read().is_01() || !add_ln209_140_fu_4919_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_139_reg_17886.read()) + sc_biguint<32>(add_ln209_140_fu_4919_p2.read()));
}

void sha256d::thread_add_ln209_142_fu_3607_p2() {
    add_ln209_142_fu_3607_p2 = (!or_ln1357_15_fu_3599_p3.read().is_01() || !add_ln209_123_fu_2327_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_15_fu_3599_p3.read()) + sc_biguint<32>(add_ln209_123_fu_2327_p2.read()));
}

void sha256d::thread_add_ln209_143_fu_4928_p2() {
    add_ln209_143_fu_4928_p2 = (!zext_ln209_9_reg_17992.read().is_01() || !xor_ln1357_193_reg_17891.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_9_reg_17992.read()) + sc_biguint<32>(xor_ln1357_193_reg_17891.read()));
}

void sha256d::thread_add_ln209_144_fu_4932_p2() {
    add_ln209_144_fu_4932_p2 = (!add_ln209_142_reg_17896.read().is_01() || !add_ln209_143_fu_4928_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_142_reg_17896.read()) + sc_biguint<32>(add_ln209_143_fu_4928_p2.read()));
}

void sha256d::thread_add_ln209_145_fu_3709_p2() {
    add_ln209_145_fu_3709_p2 = (!or_ln1357_16_fu_3701_p3.read().is_01() || !add_ln209_126_fu_2515_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_16_fu_3701_p3.read()) + sc_biguint<32>(add_ln209_126_fu_2515_p2.read()));
}

void sha256d::thread_add_ln209_146_fu_5007_p2() {
    add_ln209_146_fu_5007_p2 = (!zext_ln209_10_reg_17997.read().is_01() || !xor_ln1357_196_fu_5001_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_10_reg_17997.read()) + sc_biguint<32>(xor_ln1357_196_fu_5001_p2.read()));
}

void sha256d::thread_add_ln209_147_fu_5012_p2() {
    add_ln209_147_fu_5012_p2 = (!add_ln209_145_reg_17901.read().is_01() || !add_ln209_146_fu_5007_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_145_reg_17901.read()) + sc_biguint<32>(add_ln209_146_fu_5007_p2.read()));
}

void sha256d::thread_add_ln209_148_fu_3811_p2() {
    add_ln209_148_fu_3811_p2 = (!or_ln1357_17_fu_3803_p3.read().is_01() || !add_ln209_129_fu_2703_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_17_fu_3803_p3.read()) + sc_biguint<32>(add_ln209_129_fu_2703_p2.read()));
}

void sha256d::thread_add_ln209_149_fu_5087_p2() {
    add_ln209_149_fu_5087_p2 = (!zext_ln209_11_reg_18002.read().is_01() || !xor_ln1357_199_fu_5081_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_11_reg_18002.read()) + sc_biguint<32>(xor_ln1357_199_fu_5081_p2.read()));
}

void sha256d::thread_add_ln209_150_fu_5092_p2() {
    add_ln209_150_fu_5092_p2 = (!add_ln209_148_reg_17906.read().is_01() || !add_ln209_149_fu_5087_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_148_reg_17906.read()) + sc_biguint<32>(add_ln209_149_fu_5087_p2.read()));
}

void sha256d::thread_add_ln209_151_fu_3913_p2() {
    add_ln209_151_fu_3913_p2 = (!or_ln1357_18_fu_3905_p3.read().is_01() || !add_ln209_132_fu_2891_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_18_fu_3905_p3.read()) + sc_biguint<32>(add_ln209_132_fu_2891_p2.read()));
}

void sha256d::thread_add_ln209_152_fu_5167_p2() {
    add_ln209_152_fu_5167_p2 = (!zext_ln209_12_reg_18007.read().is_01() || !xor_ln1357_202_fu_5161_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_12_reg_18007.read()) + sc_biguint<32>(xor_ln1357_202_fu_5161_p2.read()));
}

void sha256d::thread_add_ln209_153_fu_5172_p2() {
    add_ln209_153_fu_5172_p2 = (!add_ln209_151_reg_17911.read().is_01() || !add_ln209_152_fu_5167_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_151_reg_17911.read()) + sc_biguint<32>(add_ln209_152_fu_5167_p2.read()));
}

void sha256d::thread_add_ln209_154_fu_4015_p2() {
    add_ln209_154_fu_4015_p2 = (!or_ln1357_19_fu_4007_p3.read().is_01() || !add_ln209_135_fu_3079_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_19_fu_4007_p3.read()) + sc_biguint<32>(add_ln209_135_fu_3079_p2.read()));
}

void sha256d::thread_add_ln209_155_fu_5247_p2() {
    add_ln209_155_fu_5247_p2 = (!zext_ln209_13_reg_18012.read().is_01() || !xor_ln1357_205_fu_5241_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_13_reg_18012.read()) + sc_biguint<32>(xor_ln1357_205_fu_5241_p2.read()));
}

void sha256d::thread_add_ln209_156_fu_5252_p2() {
    add_ln209_156_fu_5252_p2 = (!add_ln209_154_reg_17916.read().is_01() || !add_ln209_155_fu_5247_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_154_reg_17916.read()) + sc_biguint<32>(add_ln209_155_fu_5247_p2.read()));
}

void sha256d::thread_add_ln209_157_fu_4117_p2() {
    add_ln209_157_fu_4117_p2 = (!or_ln1357_20_fu_4109_p3.read().is_01() || !add_ln209_138_fu_3263_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_20_fu_4109_p3.read()) + sc_biguint<32>(add_ln209_138_fu_3263_p2.read()));
}

void sha256d::thread_add_ln209_158_fu_5327_p2() {
    add_ln209_158_fu_5327_p2 = (!zext_ln209_14_reg_18017.read().is_01() || !xor_ln1357_208_fu_5321_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_14_reg_18017.read()) + sc_biguint<32>(xor_ln1357_208_fu_5321_p2.read()));
}

void sha256d::thread_add_ln209_159_fu_5332_p2() {
    add_ln209_159_fu_5332_p2 = (!add_ln209_157_reg_17921.read().is_01() || !add_ln209_158_fu_5327_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_157_reg_17921.read()) + sc_biguint<32>(add_ln209_158_fu_5327_p2.read()));
}

void sha256d::thread_add_ln209_160_fu_5472_p2() {
    add_ln209_160_fu_5472_p2 = (!xor_ln1357_213_fu_5466_p2.read().is_01() || !add_ln209_141_fu_4923_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_213_fu_5466_p2.read()) + sc_biguint<32>(add_ln209_141_fu_4923_p2.read()));
}

void sha256d::thread_add_ln209_161_fu_5478_p2() {
    add_ln209_161_fu_5478_p2 = (!zext_ln209_15_reg_18022.read().is_01() || !xor_ln1357_211_fu_5401_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_15_reg_18022.read()) + sc_biguint<32>(xor_ln1357_211_fu_5401_p2.read()));
}

void sha256d::thread_add_ln209_162_fu_5483_p2() {
    add_ln209_162_fu_5483_p2 = (!add_ln209_160_fu_5472_p2.read().is_01() || !add_ln209_161_fu_5478_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_160_fu_5472_p2.read()) + sc_biguint<32>(add_ln209_161_fu_5478_p2.read()));
}

void sha256d::thread_add_ln209_163_fu_5624_p2() {
    add_ln209_163_fu_5624_p2 = (!xor_ln1357_217_fu_5618_p2.read().is_01() || !add_ln209_144_fu_4932_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_217_fu_5618_p2.read()) + sc_biguint<32>(add_ln209_144_fu_4932_p2.read()));
}

void sha256d::thread_add_ln209_164_fu_5630_p2() {
    add_ln209_164_fu_5630_p2 = (!add_ln209_118_reg_17793.read().is_01() || !xor_ln1357_215_fu_5553_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_118_reg_17793.read()) + sc_biguint<32>(xor_ln1357_215_fu_5553_p2.read()));
}

void sha256d::thread_add_ln209_165_fu_5635_p2() {
    add_ln209_165_fu_5635_p2 = (!add_ln209_163_fu_5624_p2.read().is_01() || !add_ln209_164_fu_5630_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_163_fu_5624_p2.read()) + sc_biguint<32>(add_ln209_164_fu_5630_p2.read()));
}

void sha256d::thread_add_ln209_166_fu_5776_p2() {
    add_ln209_166_fu_5776_p2 = (!xor_ln1357_221_fu_5770_p2.read().is_01() || !add_ln209_147_fu_5012_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_221_fu_5770_p2.read()) + sc_biguint<32>(add_ln209_147_fu_5012_p2.read()));
}

void sha256d::thread_add_ln209_167_fu_5782_p2() {
    add_ln209_167_fu_5782_p2 = (!add_ln209_120_reg_17804.read().is_01() || !xor_ln1357_219_fu_5705_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_120_reg_17804.read()) + sc_biguint<32>(xor_ln1357_219_fu_5705_p2.read()));
}

void sha256d::thread_add_ln209_168_fu_5787_p2() {
    add_ln209_168_fu_5787_p2 = (!add_ln209_166_fu_5776_p2.read().is_01() || !add_ln209_167_fu_5782_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_166_fu_5776_p2.read()) + sc_biguint<32>(add_ln209_167_fu_5782_p2.read()));
}

void sha256d::thread_add_ln209_169_fu_5928_p2() {
    add_ln209_169_fu_5928_p2 = (!xor_ln1357_225_fu_5922_p2.read().is_01() || !add_ln209_150_fu_5092_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_225_fu_5922_p2.read()) + sc_biguint<32>(add_ln209_150_fu_5092_p2.read()));
}

void sha256d::thread_add_ln209_170_fu_5934_p2() {
    add_ln209_170_fu_5934_p2 = (!add_ln209_123_reg_17815.read().is_01() || !xor_ln1357_223_fu_5857_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_123_reg_17815.read()) + sc_biguint<32>(xor_ln1357_223_fu_5857_p2.read()));
}

void sha256d::thread_add_ln209_171_fu_5939_p2() {
    add_ln209_171_fu_5939_p2 = (!add_ln209_169_fu_5928_p2.read().is_01() || !add_ln209_170_fu_5934_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_169_fu_5928_p2.read()) + sc_biguint<32>(add_ln209_170_fu_5934_p2.read()));
}

void sha256d::thread_add_ln209_172_fu_6080_p2() {
    add_ln209_172_fu_6080_p2 = (!xor_ln1357_229_fu_6074_p2.read().is_01() || !add_ln209_153_fu_5172_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_229_fu_6074_p2.read()) + sc_biguint<32>(add_ln209_153_fu_5172_p2.read()));
}

void sha256d::thread_add_ln209_173_fu_6086_p2() {
    add_ln209_173_fu_6086_p2 = (!add_ln209_126_reg_17826.read().is_01() || !xor_ln1357_227_fu_6009_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_126_reg_17826.read()) + sc_biguint<32>(xor_ln1357_227_fu_6009_p2.read()));
}

void sha256d::thread_add_ln209_174_fu_6091_p2() {
    add_ln209_174_fu_6091_p2 = (!add_ln209_172_fu_6080_p2.read().is_01() || !add_ln209_173_fu_6086_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_172_fu_6080_p2.read()) + sc_biguint<32>(add_ln209_173_fu_6086_p2.read()));
}

void sha256d::thread_add_ln209_175_fu_6606_p2() {
    add_ln209_175_fu_6606_p2 = (!xor_ln1357_233_fu_6600_p2.read().is_01() || !add_ln209_156_reg_18062.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_233_fu_6600_p2.read()) + sc_biguint<32>(add_ln209_156_reg_18062.read()));
}

void sha256d::thread_add_ln209_176_fu_6681_p2() {
    add_ln209_176_fu_6681_p2 = (!add_ln209_129_reg_17837.read().is_01() || !xor_ln1357_231_reg_18142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_129_reg_17837.read()) + sc_biguint<32>(xor_ln1357_231_reg_18142.read()));
}

void sha256d::thread_add_ln209_177_fu_6685_p2() {
    add_ln209_177_fu_6685_p2 = (!add_ln209_175_reg_18172.read().is_01() || !add_ln209_176_fu_6681_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_175_reg_18172.read()) + sc_biguint<32>(add_ln209_176_fu_6681_p2.read()));
}

void sha256d::thread_add_ln209_178_fu_6676_p2() {
    add_ln209_178_fu_6676_p2 = (!xor_ln1357_237_fu_6670_p2.read().is_01() || !add_ln209_159_reg_18074.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_237_fu_6670_p2.read()) + sc_biguint<32>(add_ln209_159_reg_18074.read()));
}

void sha256d::thread_add_ln209_179_fu_6690_p2() {
    add_ln209_179_fu_6690_p2 = (!add_ln209_132_reg_17848.read().is_01() || !xor_ln1357_235_reg_18147.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_132_reg_17848.read()) + sc_biguint<32>(xor_ln1357_235_reg_18147.read()));
}

void sha256d::thread_add_ln209_180_fu_6694_p2() {
    add_ln209_180_fu_6694_p2 = (!add_ln209_178_reg_18177.read().is_01() || !add_ln209_179_fu_6690_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_178_reg_18177.read()) + sc_biguint<32>(add_ln209_179_fu_6690_p2.read()));
}

void sha256d::thread_add_ln209_181_fu_6834_p2() {
    add_ln209_181_fu_6834_p2 = (!xor_ln1357_241_fu_6828_p2.read().is_01() || !add_ln209_162_reg_18086.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_241_fu_6828_p2.read()) + sc_biguint<32>(add_ln209_162_reg_18086.read()));
}

void sha256d::thread_add_ln209_182_fu_6839_p2() {
    add_ln209_182_fu_6839_p2 = (!add_ln209_135_reg_17859.read().is_01() || !xor_ln1357_239_fu_6763_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_135_reg_17859.read()) + sc_biguint<32>(xor_ln1357_239_fu_6763_p2.read()));
}

void sha256d::thread_add_ln209_183_fu_6844_p2() {
    add_ln209_183_fu_6844_p2 = (!add_ln209_181_fu_6834_p2.read().is_01() || !add_ln209_182_fu_6839_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_181_fu_6834_p2.read()) + sc_biguint<32>(add_ln209_182_fu_6839_p2.read()));
}

void sha256d::thread_add_ln209_184_fu_6307_p2() {
    add_ln209_184_fu_6307_p2 = (!xor_ln1357_245_fu_6301_p2.read().is_01() || !add_ln209_165_fu_5635_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_245_fu_6301_p2.read()) + sc_biguint<32>(add_ln209_165_fu_5635_p2.read()));
}

void sha256d::thread_add_ln209_185_fu_6920_p2() {
    add_ln209_185_fu_6920_p2 = (!add_ln209_138_reg_17870.read().is_01() || !xor_ln1357_243_fu_6914_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_138_reg_17870.read()) + sc_biguint<32>(xor_ln1357_243_fu_6914_p2.read()));
}

void sha256d::thread_add_ln209_186_fu_6925_p2() {
    add_ln209_186_fu_6925_p2 = (!add_ln209_184_reg_18152.read().is_01() || !add_ln209_185_fu_6920_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_184_reg_18152.read()) + sc_biguint<32>(add_ln209_185_fu_6920_p2.read()));
}

void sha256d::thread_add_ln209_187_fu_6383_p2() {
    add_ln209_187_fu_6383_p2 = (!xor_ln1357_249_fu_6377_p2.read().is_01() || !add_ln209_168_fu_5787_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_249_fu_6377_p2.read()) + sc_biguint<32>(add_ln209_168_fu_5787_p2.read()));
}

void sha256d::thread_add_ln209_188_fu_7000_p2() {
    add_ln209_188_fu_7000_p2 = (!add_ln209_141_reg_18027.read().is_01() || !xor_ln1357_247_fu_6994_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_141_reg_18027.read()) + sc_biguint<32>(xor_ln1357_247_fu_6994_p2.read()));
}

void sha256d::thread_add_ln209_189_fu_7005_p2() {
    add_ln209_189_fu_7005_p2 = (!add_ln209_187_reg_18157.read().is_01() || !add_ln209_188_fu_7000_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_187_reg_18157.read()) + sc_biguint<32>(add_ln209_188_fu_7000_p2.read()));
}

void sha256d::thread_add_ln209_190_fu_6459_p2() {
    add_ln209_190_fu_6459_p2 = (!xor_ln1357_253_fu_6453_p2.read().is_01() || !add_ln209_171_fu_5939_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_253_fu_6453_p2.read()) + sc_biguint<32>(add_ln209_171_fu_5939_p2.read()));
}

void sha256d::thread_add_ln209_191_fu_7080_p2() {
    add_ln209_191_fu_7080_p2 = (!add_ln209_144_reg_18033.read().is_01() || !xor_ln1357_251_fu_7074_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_144_reg_18033.read()) + sc_biguint<32>(xor_ln1357_251_fu_7074_p2.read()));
}

void sha256d::thread_add_ln209_192_fu_7085_p2() {
    add_ln209_192_fu_7085_p2 = (!add_ln209_190_reg_18162.read().is_01() || !add_ln209_191_fu_7080_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_190_reg_18162.read()) + sc_biguint<32>(add_ln209_191_fu_7080_p2.read()));
}

void sha256d::thread_add_ln209_193_fu_6535_p2() {
    add_ln209_193_fu_6535_p2 = (!xor_ln1357_257_fu_6529_p2.read().is_01() || !add_ln209_174_fu_6091_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_257_fu_6529_p2.read()) + sc_biguint<32>(add_ln209_174_fu_6091_p2.read()));
}

void sha256d::thread_add_ln209_194_fu_7160_p2() {
    add_ln209_194_fu_7160_p2 = (!add_ln209_147_reg_18039.read().is_01() || !xor_ln1357_255_fu_7154_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_147_reg_18039.read()) + sc_biguint<32>(xor_ln1357_255_fu_7154_p2.read()));
}

void sha256d::thread_add_ln209_195_fu_7165_p2() {
    add_ln209_195_fu_7165_p2 = (!add_ln209_193_reg_18167.read().is_01() || !add_ln209_194_fu_7160_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_193_reg_18167.read()) + sc_biguint<32>(add_ln209_194_fu_7160_p2.read()));
}

void sha256d::thread_add_ln209_196_fu_7305_p2() {
    add_ln209_196_fu_7305_p2 = (!xor_ln1357_261_fu_7299_p2.read().is_01() || !add_ln209_177_fu_6685_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_261_fu_7299_p2.read()) + sc_biguint<32>(add_ln209_177_fu_6685_p2.read()));
}

void sha256d::thread_add_ln209_197_fu_7311_p2() {
    add_ln209_197_fu_7311_p2 = (!add_ln209_150_reg_18045.read().is_01() || !xor_ln1357_259_fu_7234_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_150_reg_18045.read()) + sc_biguint<32>(xor_ln1357_259_fu_7234_p2.read()));
}

void sha256d::thread_add_ln209_198_fu_7316_p2() {
    add_ln209_198_fu_7316_p2 = (!add_ln209_196_fu_7305_p2.read().is_01() || !add_ln209_197_fu_7311_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_196_fu_7305_p2.read()) + sc_biguint<32>(add_ln209_197_fu_7311_p2.read()));
}

void sha256d::thread_add_ln209_199_fu_7457_p2() {
    add_ln209_199_fu_7457_p2 = (!xor_ln1357_265_fu_7451_p2.read().is_01() || !add_ln209_180_fu_6694_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_265_fu_7451_p2.read()) + sc_biguint<32>(add_ln209_180_fu_6694_p2.read()));
}

void sha256d::thread_add_ln209_19_fu_12981_p2() {
    add_ln209_19_fu_12981_p2 = (!m_24_V_reg_18598.read().is_01() || !xor_ln1357_38_reg_17972.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_V_reg_18598.read()) + sc_biguint<32>(xor_ln1357_38_reg_17972.read()));
}

void sha256d::thread_add_ln209_200_fu_7463_p2() {
    add_ln209_200_fu_7463_p2 = (!add_ln209_153_reg_18051.read().is_01() || !xor_ln1357_263_fu_7386_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_153_reg_18051.read()) + sc_biguint<32>(xor_ln1357_263_fu_7386_p2.read()));
}

void sha256d::thread_add_ln209_201_fu_7468_p2() {
    add_ln209_201_fu_7468_p2 = (!add_ln209_199_fu_7457_p2.read().is_01() || !add_ln209_200_fu_7463_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_199_fu_7457_p2.read()) + sc_biguint<32>(add_ln209_200_fu_7463_p2.read()));
}

void sha256d::thread_add_ln209_202_fu_7609_p2() {
    add_ln209_202_fu_7609_p2 = (!xor_ln1357_269_fu_7603_p2.read().is_01() || !add_ln209_183_fu_6844_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_269_fu_7603_p2.read()) + sc_biguint<32>(add_ln209_183_fu_6844_p2.read()));
}

void sha256d::thread_add_ln209_203_fu_7615_p2() {
    add_ln209_203_fu_7615_p2 = (!add_ln209_156_reg_18062.read().is_01() || !xor_ln1357_267_fu_7538_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_156_reg_18062.read()) + sc_biguint<32>(xor_ln1357_267_fu_7538_p2.read()));
}

void sha256d::thread_add_ln209_204_fu_7620_p2() {
    add_ln209_204_fu_7620_p2 = (!add_ln209_202_fu_7609_p2.read().is_01() || !add_ln209_203_fu_7615_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_202_fu_7609_p2.read()) + sc_biguint<32>(add_ln209_203_fu_7615_p2.read()));
}

void sha256d::thread_add_ln209_205_fu_7761_p2() {
    add_ln209_205_fu_7761_p2 = (!xor_ln1357_273_fu_7755_p2.read().is_01() || !add_ln209_186_fu_6925_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_273_fu_7755_p2.read()) + sc_biguint<32>(add_ln209_186_fu_6925_p2.read()));
}

void sha256d::thread_add_ln209_206_fu_7767_p2() {
    add_ln209_206_fu_7767_p2 = (!add_ln209_159_reg_18074.read().is_01() || !xor_ln1357_271_fu_7690_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_159_reg_18074.read()) + sc_biguint<32>(xor_ln1357_271_fu_7690_p2.read()));
}

void sha256d::thread_add_ln209_207_fu_7772_p2() {
    add_ln209_207_fu_7772_p2 = (!add_ln209_205_fu_7761_p2.read().is_01() || !add_ln209_206_fu_7767_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_205_fu_7761_p2.read()) + sc_biguint<32>(add_ln209_206_fu_7767_p2.read()));
}

void sha256d::thread_add_ln209_208_fu_7913_p2() {
    add_ln209_208_fu_7913_p2 = (!xor_ln1357_277_fu_7907_p2.read().is_01() || !add_ln209_189_fu_7005_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_277_fu_7907_p2.read()) + sc_biguint<32>(add_ln209_189_fu_7005_p2.read()));
}

void sha256d::thread_add_ln209_209_fu_7919_p2() {
    add_ln209_209_fu_7919_p2 = (!add_ln209_162_reg_18086.read().is_01() || !xor_ln1357_275_fu_7842_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_162_reg_18086.read()) + sc_biguint<32>(xor_ln1357_275_fu_7842_p2.read()));
}

void sha256d::thread_add_ln209_210_fu_7924_p2() {
    add_ln209_210_fu_7924_p2 = (!add_ln209_208_fu_7913_p2.read().is_01() || !add_ln209_209_fu_7919_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_208_fu_7913_p2.read()) + sc_biguint<32>(add_ln209_209_fu_7919_p2.read()));
}

void sha256d::thread_add_ln209_211_fu_8509_p2() {
    add_ln209_211_fu_8509_p2 = (!xor_ln1357_281_fu_8503_p2.read().is_01() || !add_ln209_192_reg_18217.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_281_fu_8503_p2.read()) + sc_biguint<32>(add_ln209_192_reg_18217.read()));
}

void sha256d::thread_add_ln209_212_fu_8514_p2() {
    add_ln209_212_fu_8514_p2 = (!add_ln209_165_reg_18098.read().is_01() || !xor_ln1357_279_reg_18292.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_165_reg_18098.read()) + sc_biguint<32>(xor_ln1357_279_reg_18292.read()));
}

void sha256d::thread_add_ln209_213_fu_8518_p2() {
    add_ln209_213_fu_8518_p2 = (!add_ln209_211_fu_8509_p2.read().is_01() || !add_ln209_212_fu_8514_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_211_fu_8509_p2.read()) + sc_biguint<32>(add_ln209_212_fu_8514_p2.read()));
}

void sha256d::thread_add_ln209_214_fu_8589_p2() {
    add_ln209_214_fu_8589_p2 = (!xor_ln1357_285_fu_8583_p2.read().is_01() || !add_ln209_195_reg_18229.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_285_fu_8583_p2.read()) + sc_biguint<32>(add_ln209_195_reg_18229.read()));
}

void sha256d::thread_add_ln209_215_fu_8594_p2() {
    add_ln209_215_fu_8594_p2 = (!add_ln209_168_reg_18109.read().is_01() || !xor_ln1357_283_reg_18297.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_168_reg_18109.read()) + sc_biguint<32>(xor_ln1357_283_reg_18297.read()));
}

void sha256d::thread_add_ln209_216_fu_8598_p2() {
    add_ln209_216_fu_8598_p2 = (!add_ln209_214_fu_8589_p2.read().is_01() || !add_ln209_215_fu_8594_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_214_fu_8589_p2.read()) + sc_biguint<32>(add_ln209_215_fu_8594_p2.read()));
}

void sha256d::thread_add_ln209_217_fu_8739_p2() {
    add_ln209_217_fu_8739_p2 = (!xor_ln1357_289_fu_8733_p2.read().is_01() || !add_ln209_198_reg_18241.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_289_fu_8733_p2.read()) + sc_biguint<32>(add_ln209_198_reg_18241.read()));
}

void sha256d::thread_add_ln209_218_fu_8744_p2() {
    add_ln209_218_fu_8744_p2 = (!add_ln209_171_reg_18120.read().is_01() || !xor_ln1357_287_fu_8668_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_171_reg_18120.read()) + sc_biguint<32>(xor_ln1357_287_fu_8668_p2.read()));
}

void sha256d::thread_add_ln209_219_fu_8749_p2() {
    add_ln209_219_fu_8749_p2 = (!add_ln209_217_fu_8739_p2.read().is_01() || !add_ln209_218_fu_8744_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_217_fu_8739_p2.read()) + sc_biguint<32>(add_ln209_218_fu_8744_p2.read()));
}

void sha256d::thread_add_ln209_21_fu_12990_p2() {
    add_ln209_21_fu_12990_p2 = (!m_25_V_reg_18605.read().is_01() || !xor_ln1357_42_reg_17977.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_V_reg_18605.read()) + sc_biguint<32>(xor_ln1357_42_reg_17977.read()));
}

void sha256d::thread_add_ln209_220_fu_8140_p2() {
    add_ln209_220_fu_8140_p2 = (!xor_ln1357_293_fu_8134_p2.read().is_01() || !add_ln209_201_fu_7468_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_293_fu_8134_p2.read()) + sc_biguint<32>(add_ln209_201_fu_7468_p2.read()));
}

void sha256d::thread_add_ln209_221_fu_8825_p2() {
    add_ln209_221_fu_8825_p2 = (!add_ln209_174_reg_18131.read().is_01() || !xor_ln1357_291_fu_8819_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_174_reg_18131.read()) + sc_biguint<32>(xor_ln1357_291_fu_8819_p2.read()));
}

void sha256d::thread_add_ln209_222_fu_8830_p2() {
    add_ln209_222_fu_8830_p2 = (!add_ln209_220_reg_18302.read().is_01() || !add_ln209_221_fu_8825_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_220_reg_18302.read()) + sc_biguint<32>(add_ln209_221_fu_8825_p2.read()));
}

void sha256d::thread_add_ln209_223_fu_8216_p2() {
    add_ln209_223_fu_8216_p2 = (!xor_ln1357_297_fu_8210_p2.read().is_01() || !add_ln209_204_fu_7620_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_297_fu_8210_p2.read()) + sc_biguint<32>(add_ln209_204_fu_7620_p2.read()));
}

void sha256d::thread_add_ln209_224_fu_8905_p2() {
    add_ln209_224_fu_8905_p2 = (!add_ln209_177_reg_18182.read().is_01() || !xor_ln1357_295_fu_8899_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_177_reg_18182.read()) + sc_biguint<32>(xor_ln1357_295_fu_8899_p2.read()));
}

void sha256d::thread_add_ln209_225_fu_8910_p2() {
    add_ln209_225_fu_8910_p2 = (!add_ln209_223_reg_18307.read().is_01() || !add_ln209_224_fu_8905_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_223_reg_18307.read()) + sc_biguint<32>(add_ln209_224_fu_8905_p2.read()));
}

void sha256d::thread_add_ln209_226_fu_8292_p2() {
    add_ln209_226_fu_8292_p2 = (!xor_ln1357_301_fu_8286_p2.read().is_01() || !add_ln209_207_fu_7772_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_301_fu_8286_p2.read()) + sc_biguint<32>(add_ln209_207_fu_7772_p2.read()));
}

void sha256d::thread_add_ln209_227_fu_8985_p2() {
    add_ln209_227_fu_8985_p2 = (!add_ln209_180_reg_18188.read().is_01() || !xor_ln1357_299_fu_8979_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_180_reg_18188.read()) + sc_biguint<32>(xor_ln1357_299_fu_8979_p2.read()));
}

void sha256d::thread_add_ln209_228_fu_8990_p2() {
    add_ln209_228_fu_8990_p2 = (!add_ln209_226_reg_18312.read().is_01() || !add_ln209_227_fu_8985_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_226_reg_18312.read()) + sc_biguint<32>(add_ln209_227_fu_8985_p2.read()));
}

void sha256d::thread_add_ln209_229_fu_8368_p2() {
    add_ln209_229_fu_8368_p2 = (!xor_ln1357_305_fu_8362_p2.read().is_01() || !add_ln209_210_fu_7924_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_305_fu_8362_p2.read()) + sc_biguint<32>(add_ln209_210_fu_7924_p2.read()));
}

void sha256d::thread_add_ln209_22_fu_12136_p2() {
    add_ln209_22_fu_12136_p2 = (!xor_ln1357_40_fu_12130_p2.read().is_01() || !m_16_V_reg_17941.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_40_fu_12130_p2.read()) + sc_biguint<32>(m_16_V_reg_17941.read()));
}

void sha256d::thread_add_ln209_230_fu_9205_p2() {
    add_ln209_230_fu_9205_p2 = (!add_ln209_183_reg_18194.read().is_01() || !xor_ln1357_303_reg_18363.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_183_reg_18194.read()) + sc_biguint<32>(xor_ln1357_303_reg_18363.read()));
}

void sha256d::thread_add_ln209_231_fu_9209_p2() {
    add_ln209_231_fu_9209_p2 = (!add_ln209_229_reg_18317.read().is_01() || !add_ln209_230_fu_9205_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_229_reg_18317.read()) + sc_biguint<32>(add_ln209_230_fu_9205_p2.read()));
}

void sha256d::thread_add_ln209_232_fu_9349_p2() {
    add_ln209_232_fu_9349_p2 = (!xor_ln1357_309_fu_9343_p2.read().is_01() || !add_ln209_213_reg_18327.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_309_fu_9343_p2.read()) + sc_biguint<32>(add_ln209_213_reg_18327.read()));
}

void sha256d::thread_add_ln209_233_fu_9354_p2() {
    add_ln209_233_fu_9354_p2 = (!add_ln209_186_reg_18200.read().is_01() || !xor_ln1357_307_reg_18368.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_186_reg_18200.read()) + sc_biguint<32>(xor_ln1357_307_reg_18368.read()));
}

void sha256d::thread_add_ln209_234_fu_9358_p2() {
    add_ln209_234_fu_9358_p2 = (!add_ln209_232_fu_9349_p2.read().is_01() || !add_ln209_233_fu_9354_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_232_fu_9349_p2.read()) + sc_biguint<32>(add_ln209_233_fu_9354_p2.read()));
}

void sha256d::thread_add_ln209_235_fu_9429_p2() {
    add_ln209_235_fu_9429_p2 = (!xor_ln1357_313_fu_9423_p2.read().is_01() || !add_ln209_216_reg_18333.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_313_fu_9423_p2.read()) + sc_biguint<32>(add_ln209_216_reg_18333.read()));
}

void sha256d::thread_add_ln209_236_fu_9434_p2() {
    add_ln209_236_fu_9434_p2 = (!add_ln209_189_reg_18206.read().is_01() || !xor_ln1357_311_reg_18384.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_189_reg_18206.read()) + sc_biguint<32>(xor_ln1357_311_reg_18384.read()));
}

void sha256d::thread_add_ln209_237_fu_9438_p2() {
    add_ln209_237_fu_9438_p2 = (!add_ln209_235_fu_9429_p2.read().is_01() || !add_ln209_236_fu_9434_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_235_fu_9429_p2.read()) + sc_biguint<32>(add_ln209_236_fu_9434_p2.read()));
}

void sha256d::thread_add_ln209_238_fu_9579_p2() {
    add_ln209_238_fu_9579_p2 = (!xor_ln1357_317_fu_9573_p2.read().is_01() || !add_ln209_219_reg_18339.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_317_fu_9573_p2.read()) + sc_biguint<32>(add_ln209_219_reg_18339.read()));
}

void sha256d::thread_add_ln209_239_fu_9584_p2() {
    add_ln209_239_fu_9584_p2 = (!add_ln209_192_reg_18217.read().is_01() || !xor_ln1357_315_fu_9508_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_192_reg_18217.read()) + sc_biguint<32>(xor_ln1357_315_fu_9508_p2.read()));
}

void sha256d::thread_add_ln209_240_fu_9589_p2() {
    add_ln209_240_fu_9589_p2 = (!add_ln209_238_fu_9579_p2.read().is_01() || !add_ln209_239_fu_9584_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_238_fu_9579_p2.read()) + sc_biguint<32>(add_ln209_239_fu_9584_p2.read()));
}

void sha256d::thread_add_ln209_241_fu_9730_p2() {
    add_ln209_241_fu_9730_p2 = (!xor_ln1357_321_fu_9724_p2.read().is_01() || !add_ln209_222_reg_18345.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_321_fu_9724_p2.read()) + sc_biguint<32>(add_ln209_222_reg_18345.read()));
}

void sha256d::thread_add_ln209_242_fu_9735_p2() {
    add_ln209_242_fu_9735_p2 = (!add_ln209_195_reg_18229.read().is_01() || !xor_ln1357_319_fu_9659_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_195_reg_18229.read()) + sc_biguint<32>(xor_ln1357_319_fu_9659_p2.read()));
}

void sha256d::thread_add_ln209_243_fu_9740_p2() {
    add_ln209_243_fu_9740_p2 = (!add_ln209_241_fu_9730_p2.read().is_01() || !add_ln209_242_fu_9735_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_241_fu_9730_p2.read()) + sc_biguint<32>(add_ln209_242_fu_9735_p2.read()));
}

void sha256d::thread_add_ln209_244_fu_9881_p2() {
    add_ln209_244_fu_9881_p2 = (!xor_ln1357_325_fu_9875_p2.read().is_01() || !add_ln209_225_reg_18351.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_325_fu_9875_p2.read()) + sc_biguint<32>(add_ln209_225_reg_18351.read()));
}

void sha256d::thread_add_ln209_245_fu_9886_p2() {
    add_ln209_245_fu_9886_p2 = (!add_ln209_198_reg_18241.read().is_01() || !xor_ln1357_323_fu_9810_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_198_reg_18241.read()) + sc_biguint<32>(xor_ln1357_323_fu_9810_p2.read()));
}

void sha256d::thread_add_ln209_246_fu_9891_p2() {
    add_ln209_246_fu_9891_p2 = (!add_ln209_244_fu_9881_p2.read().is_01() || !add_ln209_245_fu_9886_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_244_fu_9881_p2.read()) + sc_biguint<32>(add_ln209_245_fu_9886_p2.read()));
}

void sha256d::thread_add_ln209_247_fu_10032_p2() {
    add_ln209_247_fu_10032_p2 = (!xor_ln1357_329_fu_10026_p2.read().is_01() || !add_ln209_228_reg_18357.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_329_fu_10026_p2.read()) + sc_biguint<32>(add_ln209_228_reg_18357.read()));
}

void sha256d::thread_add_ln209_248_fu_10037_p2() {
    add_ln209_248_fu_10037_p2 = (!add_ln209_201_reg_18253.read().is_01() || !xor_ln1357_327_fu_9961_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_201_reg_18253.read()) + sc_biguint<32>(xor_ln1357_327_fu_9961_p2.read()));
}

void sha256d::thread_add_ln209_249_fu_10042_p2() {
    add_ln209_249_fu_10042_p2 = (!add_ln209_247_fu_10032_p2.read().is_01() || !add_ln209_248_fu_10037_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_247_fu_10032_p2.read()) + sc_biguint<32>(add_ln209_248_fu_10037_p2.read()));
}

void sha256d::thread_add_ln209_24_fu_13069_p2() {
    add_ln209_24_fu_13069_p2 = (!m_26_V_reg_18612.read().is_01() || !xor_ln1357_46_reg_17982.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_V_reg_18612.read()) + sc_biguint<32>(xor_ln1357_46_reg_17982.read()));
}

void sha256d::thread_add_ln209_250_fu_10183_p2() {
    add_ln209_250_fu_10183_p2 = (!xor_ln1357_333_fu_10177_p2.read().is_01() || !add_ln209_231_reg_18378.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_333_fu_10177_p2.read()) + sc_biguint<32>(add_ln209_231_reg_18378.read()));
}

void sha256d::thread_add_ln209_251_fu_10188_p2() {
    add_ln209_251_fu_10188_p2 = (!add_ln209_204_reg_18264.read().is_01() || !xor_ln1357_331_fu_10112_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_204_reg_18264.read()) + sc_biguint<32>(xor_ln1357_331_fu_10112_p2.read()));
}

void sha256d::thread_add_ln209_252_fu_10193_p2() {
    add_ln209_252_fu_10193_p2 = (!add_ln209_250_fu_10183_p2.read().is_01() || !add_ln209_251_fu_10188_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_250_fu_10183_p2.read()) + sc_biguint<32>(add_ln209_251_fu_10188_p2.read()));
}

void sha256d::thread_add_ln209_253_fu_10269_p2() {
    add_ln209_253_fu_10269_p2 = (!add_ln209_234_fu_9358_p2.read().is_01() || !xor_ln1357_335_fu_10263_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_234_fu_9358_p2.read()) + sc_biguint<32>(xor_ln1357_335_fu_10263_p2.read()));
}

void sha256d::thread_add_ln209_254_fu_10275_p2() {
    add_ln209_254_fu_10275_p2 = (!add_ln209_207_reg_18275.read().is_01() || !xor_ln1357_337_reg_18322.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_207_reg_18275.read()) + sc_biguint<32>(xor_ln1357_337_reg_18322.read()));
}

void sha256d::thread_add_ln209_255_fu_10279_p2() {
    add_ln209_255_fu_10279_p2 = (!add_ln209_253_fu_10269_p2.read().is_01() || !add_ln209_254_fu_10275_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_253_fu_10269_p2.read()) + sc_biguint<32>(add_ln209_254_fu_10275_p2.read()));
}

void sha256d::thread_add_ln209_256_fu_10355_p2() {
    add_ln209_256_fu_10355_p2 = (!add_ln209_237_fu_9438_p2.read().is_01() || !xor_ln1357_339_fu_10349_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_237_fu_9438_p2.read()) + sc_biguint<32>(xor_ln1357_339_fu_10349_p2.read()));
}

void sha256d::thread_add_ln209_257_fu_10361_p2() {
    add_ln209_257_fu_10361_p2 = (!add_ln209_210_reg_18286.read().is_01() || !xor_ln1357_341_reg_18373.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_210_reg_18286.read()) + sc_biguint<32>(xor_ln1357_341_reg_18373.read()));
}

void sha256d::thread_add_ln209_258_fu_10365_p2() {
    add_ln209_258_fu_10365_p2 = (!add_ln209_256_fu_10355_p2.read().is_01() || !add_ln209_257_fu_10361_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_256_fu_10355_p2.read()) + sc_biguint<32>(add_ln209_257_fu_10361_p2.read()));
}

void sha256d::thread_add_ln209_259_fu_17096_p2() {
    add_ln209_259_fu_17096_p2 = (!K_V_q0.read().is_01() || !p_03526_0_reg_1626.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_V_q0.read()) + sc_biguint<32>(p_03526_0_reg_1626.read()));
}

void sha256d::thread_add_ln209_25_fu_13073_p2() {
    add_ln209_25_fu_13073_p2 = (!xor_ln1357_44_fu_13063_p2.read().is_01() || !m_17_V_reg_17948.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_44_fu_13063_p2.read()) + sc_biguint<32>(m_17_V_reg_17948.read()));
}

void sha256d::thread_add_ln209_260_fu_17102_p2() {
    add_ln209_260_fu_17102_p2 = (!ret_V_fu_17066_p2.read().is_01() || !tmp_72_reg_19052.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_fu_17066_p2.read()) + sc_biguint<32>(tmp_72_reg_19052.read()));
}

void sha256d::thread_add_ln209_261_fu_17107_p2() {
    add_ln209_261_fu_17107_p2 = (!add_ln209_260_fu_17102_p2.read().is_01() || !ret_V_6_fu_17090_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_260_fu_17102_p2.read()) + sc_biguint<32>(ret_V_6_fu_17090_p2.read()));
}

void sha256d::thread_add_ln209_264_fu_17227_p2() {
    add_ln209_264_fu_17227_p2 = (!ret_V_10_fu_17191_p2.read().is_01() || !t1_V_1_fu_17113_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_10_fu_17191_p2.read()) + sc_biguint<32>(t1_V_1_fu_17113_p2.read()));
}

void sha256d::thread_add_ln209_266_fu_10491_p2() {
    add_ln209_266_fu_10491_p2 = (!K_V_q0.read().is_01() || !m_V_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_V_q0.read()) + sc_biguint<32>(m_V_q0.read()));
}

void sha256d::thread_add_ln209_267_fu_10497_p2() {
    add_ln209_267_fu_10497_p2 = (!ret_V_20_fu_10485_p2.read().is_01() || !ret_V_17_fu_10461_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_20_fu_10485_p2.read()) + sc_biguint<32>(ret_V_17_fu_10461_p2.read()));
}

void sha256d::thread_add_ln209_268_fu_10503_p2() {
    add_ln209_268_fu_10503_p2 = (!add_ln209_267_fu_10497_p2.read().is_01() || !p_01894_0_reg_1514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_267_fu_10497_p2.read()) + sc_biguint<32>(p_01894_0_reg_1514.read()));
}

void sha256d::thread_add_ln209_271_fu_10623_p2() {
    add_ln209_271_fu_10623_p2 = (!ret_V_24_fu_10587_p2.read().is_01() || !t1_V_fu_10509_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_24_fu_10587_p2.read()) + sc_biguint<32>(t1_V_fu_10509_p2.read()));
}

void sha256d::thread_add_ln209_27_fu_13154_p2() {
    add_ln209_27_fu_13154_p2 = (!m_27_V_reg_18619.read().is_01() || !xor_ln1357_50_reg_18657.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_V_reg_18619.read()) + sc_biguint<32>(xor_ln1357_50_reg_18657.read()));
}

void sha256d::thread_add_ln209_28_fu_13158_p2() {
    add_ln209_28_fu_13158_p2 = (!xor_ln1357_48_fu_13148_p2.read().is_01() || !m_18_V_reg_17955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_48_fu_13148_p2.read()) + sc_biguint<32>(m_18_V_reg_17955.read()));
}

void sha256d::thread_add_ln209_2_fu_10911_p2() {
    add_ln209_2_fu_10911_p2 = (!xor_ln1357_6_reg_17962.read().is_01() || !m_3_V_fu_10795_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_6_reg_17962.read()) + sc_biguint<32>(m_3_V_fu_10795_p1.read()));
}

void sha256d::thread_add_ln209_30_fu_13239_p2() {
    add_ln209_30_fu_13239_p2 = (!m_28_V_reg_18626.read().is_01() || !xor_ln1357_54_reg_18662.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_V_reg_18626.read()) + sc_biguint<32>(xor_ln1357_54_reg_18662.read()));
}

void sha256d::thread_add_ln209_31_fu_13243_p2() {
    add_ln209_31_fu_13243_p2 = (!xor_ln1357_52_fu_13233_p2.read().is_01() || !m_19_V_reg_18568.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_52_fu_13233_p2.read()) + sc_biguint<32>(m_19_V_reg_18568.read()));
}

void sha256d::thread_add_ln209_33_fu_13324_p2() {
    add_ln209_33_fu_13324_p2 = (!m_29_V_reg_18633.read().is_01() || !xor_ln1357_58_reg_18667.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_V_reg_18633.read()) + sc_biguint<32>(xor_ln1357_58_reg_18667.read()));
}

void sha256d::thread_add_ln209_34_fu_13328_p2() {
    add_ln209_34_fu_13328_p2 = (!xor_ln1357_56_fu_13318_p2.read().is_01() || !m_20_V_reg_18574.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_56_fu_13318_p2.read()) + sc_biguint<32>(m_20_V_reg_18574.read()));
}

void sha256d::thread_add_ln209_36_fu_13409_p2() {
    add_ln209_36_fu_13409_p2 = (!m_30_V_reg_18640.read().is_01() || !xor_ln1357_62_reg_18672.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_V_reg_18640.read()) + sc_biguint<32>(xor_ln1357_62_reg_18672.read()));
}

void sha256d::thread_add_ln209_37_fu_13413_p2() {
    add_ln209_37_fu_13413_p2 = (!xor_ln1357_60_fu_13403_p2.read().is_01() || !m_21_V_reg_18580.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_60_fu_13403_p2.read()) + sc_biguint<32>(m_21_V_reg_18580.read()));
}

void sha256d::thread_add_ln209_39_fu_14064_p2() {
    add_ln209_39_fu_14064_p2 = (!m_31_V_reg_18717.read().is_01() || !xor_ln1357_66_reg_18677.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_V_reg_18717.read()) + sc_biguint<32>(xor_ln1357_66_reg_18677.read()));
}

void sha256d::thread_add_ln209_40_fu_13494_p2() {
    add_ln209_40_fu_13494_p2 = (!xor_ln1357_64_fu_13488_p2.read().is_01() || !m_22_V_reg_18586.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_64_fu_13488_p2.read()) + sc_biguint<32>(m_22_V_reg_18586.read()));
}

void sha256d::thread_add_ln209_42_fu_14073_p2() {
    add_ln209_42_fu_14073_p2 = (!m_32_V_reg_18724.read().is_01() || !xor_ln1357_70_reg_18682.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_V_reg_18724.read()) + sc_biguint<32>(xor_ln1357_70_reg_18682.read()));
}

void sha256d::thread_add_ln209_43_fu_13569_p2() {
    add_ln209_43_fu_13569_p2 = (!xor_ln1357_68_fu_13563_p2.read().is_01() || !m_23_V_reg_18592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_68_fu_13563_p2.read()) + sc_biguint<32>(m_23_V_reg_18592.read()));
}

void sha256d::thread_add_ln209_45_fu_14152_p2() {
    add_ln209_45_fu_14152_p2 = (!m_33_V_reg_18731.read().is_01() || !xor_ln1357_74_reg_18687.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_V_reg_18731.read()) + sc_biguint<32>(xor_ln1357_74_reg_18687.read()));
}

void sha256d::thread_add_ln209_46_fu_14156_p2() {
    add_ln209_46_fu_14156_p2 = (!xor_ln1357_72_fu_14146_p2.read().is_01() || !m_24_V_reg_18598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_72_fu_14146_p2.read()) + sc_biguint<32>(m_24_V_reg_18598.read()));
}

void sha256d::thread_add_ln209_48_fu_14237_p2() {
    add_ln209_48_fu_14237_p2 = (!m_34_V_reg_18738.read().is_01() || !xor_ln1357_78_reg_18692.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_V_reg_18738.read()) + sc_biguint<32>(xor_ln1357_78_reg_18692.read()));
}

void sha256d::thread_add_ln209_49_fu_14241_p2() {
    add_ln209_49_fu_14241_p2 = (!xor_ln1357_76_fu_14231_p2.read().is_01() || !m_25_V_reg_18605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_76_fu_14231_p2.read()) + sc_biguint<32>(m_25_V_reg_18605.read()));
}

void sha256d::thread_add_ln209_4_fu_11018_p2() {
    add_ln209_4_fu_11018_p2 = (!xor_ln1357_10_reg_17967.read().is_01() || !m_4_V_fu_10799_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_10_reg_17967.read()) + sc_biguint<32>(m_4_V_fu_10799_p1.read()));
}

void sha256d::thread_add_ln209_51_fu_14322_p2() {
    add_ln209_51_fu_14322_p2 = (!m_35_V_reg_18745.read().is_01() || !xor_ln1357_82_reg_18697.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_V_reg_18745.read()) + sc_biguint<32>(xor_ln1357_82_reg_18697.read()));
}

void sha256d::thread_add_ln209_52_fu_14326_p2() {
    add_ln209_52_fu_14326_p2 = (!xor_ln1357_80_fu_14316_p2.read().is_01() || !m_26_V_reg_18612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_80_fu_14316_p2.read()) + sc_biguint<32>(m_26_V_reg_18612.read()));
}

void sha256d::thread_add_ln209_54_fu_14407_p2() {
    add_ln209_54_fu_14407_p2 = (!m_36_V_reg_18752.read().is_01() || !xor_ln1357_86_reg_18702.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_V_reg_18752.read()) + sc_biguint<32>(xor_ln1357_86_reg_18702.read()));
}

void sha256d::thread_add_ln209_55_fu_14411_p2() {
    add_ln209_55_fu_14411_p2 = (!xor_ln1357_84_fu_14401_p2.read().is_01() || !m_27_V_reg_18619.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_84_fu_14401_p2.read()) + sc_biguint<32>(m_27_V_reg_18619.read()));
}

void sha256d::thread_add_ln209_57_fu_14492_p2() {
    add_ln209_57_fu_14492_p2 = (!m_37_V_reg_18759.read().is_01() || !xor_ln1357_90_reg_18707.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_V_reg_18759.read()) + sc_biguint<32>(xor_ln1357_90_reg_18707.read()));
}

void sha256d::thread_add_ln209_58_fu_14496_p2() {
    add_ln209_58_fu_14496_p2 = (!xor_ln1357_88_fu_14486_p2.read().is_01() || !m_28_V_reg_18626.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_88_fu_14486_p2.read()) + sc_biguint<32>(m_28_V_reg_18626.read()));
}

void sha256d::thread_add_ln209_60_fu_14577_p2() {
    add_ln209_60_fu_14577_p2 = (!m_38_V_fu_14068_p2.read().is_01() || !xor_ln1357_94_reg_18712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_V_fu_14068_p2.read()) + sc_biguint<32>(xor_ln1357_94_reg_18712.read()));
}

void sha256d::thread_add_ln209_61_fu_14582_p2() {
    add_ln209_61_fu_14582_p2 = (!xor_ln1357_92_fu_14571_p2.read().is_01() || !m_29_V_reg_18633.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_92_fu_14571_p2.read()) + sc_biguint<32>(m_29_V_reg_18633.read()));
}

void sha256d::thread_add_ln209_63_fu_15303_p2() {
    add_ln209_63_fu_15303_p2 = (!m_39_V_reg_18817.read().is_01() || !xor_ln1357_98_reg_18776.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_V_reg_18817.read()) + sc_biguint<32>(xor_ln1357_98_reg_18776.read()));
}

void sha256d::thread_add_ln209_64_fu_14663_p2() {
    add_ln209_64_fu_14663_p2 = (!xor_ln1357_96_fu_14657_p2.read().is_01() || !m_30_V_reg_18640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_96_fu_14657_p2.read()) + sc_biguint<32>(m_30_V_reg_18640.read()));
}

void sha256d::thread_add_ln209_66_fu_15312_p2() {
    add_ln209_66_fu_15312_p2 = (!m_40_V_reg_18824.read().is_01() || !xor_ln1357_102_reg_18781.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_V_reg_18824.read()) + sc_biguint<32>(xor_ln1357_102_reg_18781.read()));
}

void sha256d::thread_add_ln209_67_fu_14738_p2() {
    add_ln209_67_fu_14738_p2 = (!xor_ln1357_100_fu_14732_p2.read().is_01() || !m_31_V_reg_18717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_100_fu_14732_p2.read()) + sc_biguint<32>(m_31_V_reg_18717.read()));
}

void sha256d::thread_add_ln209_69_fu_15391_p2() {
    add_ln209_69_fu_15391_p2 = (!m_41_V_reg_18831.read().is_01() || !xor_ln1357_106_reg_18786.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_V_reg_18831.read()) + sc_biguint<32>(xor_ln1357_106_reg_18786.read()));
}

void sha256d::thread_add_ln209_6_fu_11195_p2() {
    add_ln209_6_fu_11195_p2 = (!xor_ln1357_13_fu_11093_p2.read().is_01() || !m_5_V_fu_10803_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_13_fu_11093_p2.read()) + sc_biguint<32>(m_5_V_fu_10803_p1.read()));
}

void sha256d::thread_add_ln209_70_fu_15395_p2() {
    add_ln209_70_fu_15395_p2 = (!xor_ln1357_104_fu_15385_p2.read().is_01() || !m_32_V_reg_18724.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_104_fu_15385_p2.read()) + sc_biguint<32>(m_32_V_reg_18724.read()));
}

void sha256d::thread_add_ln209_72_fu_15476_p2() {
    add_ln209_72_fu_15476_p2 = (!m_42_V_reg_18838.read().is_01() || !xor_ln1357_110_reg_18791.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_V_reg_18838.read()) + sc_biguint<32>(xor_ln1357_110_reg_18791.read()));
}

void sha256d::thread_add_ln209_73_fu_15480_p2() {
    add_ln209_73_fu_15480_p2 = (!xor_ln1357_108_fu_15470_p2.read().is_01() || !m_33_V_reg_18731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_108_fu_15470_p2.read()) + sc_biguint<32>(m_33_V_reg_18731.read()));
}

void sha256d::thread_add_ln209_75_fu_15561_p2() {
    add_ln209_75_fu_15561_p2 = (!m_43_V_reg_18845.read().is_01() || !xor_ln1357_114_reg_18796.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_V_reg_18845.read()) + sc_biguint<32>(xor_ln1357_114_reg_18796.read()));
}

void sha256d::thread_add_ln209_76_fu_15565_p2() {
    add_ln209_76_fu_15565_p2 = (!xor_ln1357_112_fu_15555_p2.read().is_01() || !m_34_V_reg_18738.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_112_fu_15555_p2.read()) + sc_biguint<32>(m_34_V_reg_18738.read()));
}

void sha256d::thread_add_ln209_78_fu_15646_p2() {
    add_ln209_78_fu_15646_p2 = (!m_44_V_reg_18852.read().is_01() || !xor_ln1357_118_reg_18801.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_V_reg_18852.read()) + sc_biguint<32>(xor_ln1357_118_reg_18801.read()));
}

void sha256d::thread_add_ln209_79_fu_15650_p2() {
    add_ln209_79_fu_15650_p2 = (!xor_ln1357_116_fu_15640_p2.read().is_01() || !m_35_V_reg_18745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_116_fu_15640_p2.read()) + sc_biguint<32>(m_35_V_reg_18745.read()));
}

void sha256d::thread_add_ln209_81_fu_15731_p2() {
    add_ln209_81_fu_15731_p2 = (!m_45_V_reg_18859.read().is_01() || !xor_ln1357_122_reg_18806.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_V_reg_18859.read()) + sc_biguint<32>(xor_ln1357_122_reg_18806.read()));
}

void sha256d::thread_add_ln209_82_fu_15735_p2() {
    add_ln209_82_fu_15735_p2 = (!xor_ln1357_120_fu_15725_p2.read().is_01() || !m_36_V_reg_18752.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_120_fu_15725_p2.read()) + sc_biguint<32>(m_36_V_reg_18752.read()));
}

void sha256d::thread_add_ln209_84_fu_15816_p2() {
    add_ln209_84_fu_15816_p2 = (!m_46_V_fu_15307_p2.read().is_01() || !xor_ln1357_126_reg_18876.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_V_fu_15307_p2.read()) + sc_biguint<32>(xor_ln1357_126_reg_18876.read()));
}

void sha256d::thread_add_ln209_85_fu_15821_p2() {
    add_ln209_85_fu_15821_p2 = (!xor_ln1357_124_fu_15810_p2.read().is_01() || !m_37_V_reg_18759.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_124_fu_15810_p2.read()) + sc_biguint<32>(m_37_V_reg_18759.read()));
}

void sha256d::thread_add_ln209_87_fu_16204_p2() {
    add_ln209_87_fu_16204_p2 = (!m_47_V_reg_18921.read().is_01() || !xor_ln1357_130_reg_18881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_V_reg_18921.read()) + sc_biguint<32>(xor_ln1357_130_reg_18881.read()));
}

void sha256d::thread_add_ln209_88_fu_15902_p2() {
    add_ln209_88_fu_15902_p2 = (!xor_ln1357_128_fu_15896_p2.read().is_01() || !m_38_V_reg_18811.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_128_fu_15896_p2.read()) + sc_biguint<32>(m_38_V_reg_18811.read()));
}

void sha256d::thread_add_ln209_8_fu_11373_p2() {
    add_ln209_8_fu_11373_p2 = (!xor_ln1357_16_fu_11271_p2.read().is_01() || !m_6_V_fu_10807_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_16_fu_11271_p2.read()) + sc_biguint<32>(m_6_V_fu_10807_p1.read()));
}

void sha256d::thread_add_ln209_90_fu_16213_p2() {
    add_ln209_90_fu_16213_p2 = (!m_48_V_reg_18927.read().is_01() || !xor_ln1357_134_reg_18886.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_V_reg_18927.read()) + sc_biguint<32>(xor_ln1357_134_reg_18886.read()));
}

void sha256d::thread_add_ln209_91_fu_15977_p2() {
    add_ln209_91_fu_15977_p2 = (!xor_ln1357_132_fu_15971_p2.read().is_01() || !m_39_V_reg_18817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_132_fu_15971_p2.read()) + sc_biguint<32>(m_39_V_reg_18817.read()));
}

void sha256d::thread_add_ln209_93_fu_16292_p2() {
    add_ln209_93_fu_16292_p2 = (!m_49_V_reg_18933.read().is_01() || !xor_ln1357_138_reg_18891.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_V_reg_18933.read()) + sc_biguint<32>(xor_ln1357_138_reg_18891.read()));
}

void sha256d::thread_add_ln209_94_fu_16296_p2() {
    add_ln209_94_fu_16296_p2 = (!xor_ln1357_136_fu_16286_p2.read().is_01() || !m_40_V_reg_18824.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_136_fu_16286_p2.read()) + sc_biguint<32>(m_40_V_reg_18824.read()));
}

void sha256d::thread_add_ln209_96_fu_16377_p2() {
    add_ln209_96_fu_16377_p2 = (!m_50_V_reg_18939.read().is_01() || !xor_ln1357_142_reg_18896.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_V_reg_18939.read()) + sc_biguint<32>(xor_ln1357_142_reg_18896.read()));
}

void sha256d::thread_add_ln209_97_fu_16381_p2() {
    add_ln209_97_fu_16381_p2 = (!xor_ln1357_140_fu_16371_p2.read().is_01() || !m_41_V_reg_18831.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_140_fu_16371_p2.read()) + sc_biguint<32>(m_41_V_reg_18831.read()));
}

void sha256d::thread_add_ln209_99_fu_16462_p2() {
    add_ln209_99_fu_16462_p2 = (!m_51_V_reg_18945.read().is_01() || !xor_ln1357_146_reg_18901.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_V_reg_18945.read()) + sc_biguint<32>(xor_ln1357_146_reg_18901.read()));
}

void sha256d::thread_add_ln209_fu_4505_p2() {
    add_ln209_fu_4505_p2 = (!xor_ln1357_3_fu_4403_p2.read().is_01() || !m_2_V_fu_4131_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_3_fu_4403_p2.read()) + sc_biguint<32>(m_2_V_fu_4131_p1.read()));
}

void sha256d::thread_add_ln72_1_fu_10753_p2() {
    add_ln72_1_fu_10753_p2 = (!trunc_ln700_3_fu_10653_p1.read().is_01() || !trunc_ln700_2_fu_10649_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_3_fu_10653_p1.read()) + sc_biguint<8>(trunc_ln700_2_fu_10649_p1.read()));
}

void sha256d::thread_add_ln72_2_fu_10759_p2() {
    add_ln72_2_fu_10759_p2 = (!trunc_ln700_5_fu_10667_p1.read().is_01() || !trunc_ln700_4_fu_10663_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_5_fu_10667_p1.read()) + sc_biguint<8>(trunc_ln700_4_fu_10663_p1.read()));
}

void sha256d::thread_add_ln72_3_fu_10765_p2() {
    add_ln72_3_fu_10765_p2 = (!trunc_ln700_7_fu_10681_p1.read().is_01() || !trunc_ln700_6_fu_10677_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_7_fu_10681_p1.read()) + sc_biguint<8>(trunc_ln700_6_fu_10677_p1.read()));
}

void sha256d::thread_add_ln72_4_fu_10771_p2() {
    add_ln72_4_fu_10771_p2 = (!trunc_ln700_9_fu_10695_p1.read().is_01() || !trunc_ln700_8_fu_10691_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_9_fu_10695_p1.read()) + sc_biguint<8>(trunc_ln700_8_fu_10691_p1.read()));
}

void sha256d::thread_add_ln72_5_fu_10777_p2() {
    add_ln72_5_fu_10777_p2 = (!trunc_ln700_11_fu_10709_p1.read().is_01() || !trunc_ln700_10_fu_10705_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_11_fu_10709_p1.read()) + sc_biguint<8>(trunc_ln700_10_fu_10705_p1.read()));
}

void sha256d::thread_add_ln72_6_fu_10783_p2() {
    add_ln72_6_fu_10783_p2 = (!trunc_ln700_13_fu_10723_p1.read().is_01() || !trunc_ln700_12_fu_10719_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_13_fu_10723_p1.read()) + sc_biguint<8>(trunc_ln700_12_fu_10719_p1.read()));
}

void sha256d::thread_add_ln72_7_fu_10789_p2() {
    add_ln72_7_fu_10789_p2 = (!trunc_ln700_15_fu_10737_p1.read().is_01() || !trunc_ln700_14_fu_10733_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_15_fu_10737_p1.read()) + sc_biguint<8>(trunc_ln700_14_fu_10733_p1.read()));
}

void sha256d::thread_add_ln72_fu_10747_p2() {
    add_ln72_fu_10747_p2 = (!trunc_ln700_1_fu_10639_p1.read().is_01() || !trunc_ln700_fu_10635_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_1_fu_10639_p1.read()) + sc_biguint<8>(trunc_ln700_fu_10635_p1.read()));
}

void sha256d::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[33];
}

void sha256d::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[40];
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

void sha256d::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[34];
}

void sha256d::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[35];
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

void sha256d::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[41];
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

void sha256d::thread_ap_block_state34_pp0_stage0_iter0() {
    ap_block_state34_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state35_pp0_stage0_iter1() {
    ap_block_state35_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state42_pp1_stage0_iter0() {
    ap_block_state42_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_block_state43_pp1_stage0_iter1() {
    ap_block_state43_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256d::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
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

void sha256d::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256d::thread_e_V_1_fu_17221_p2() {
    e_V_1_fu_17221_p2 = (!t1_V_1_fu_17113_p2.read().is_01() || !p_03491_0_reg_1575.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_V_1_fu_17113_p2.read()) + sc_biguint<32>(p_03491_0_reg_1575.read()));
}

void sha256d::thread_e_V_2_fu_10617_p2() {
    e_V_2_fu_10617_p2 = (!t1_V_fu_10509_p2.read().is_01() || !p_01859_0_reg_1467.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_V_fu_10509_p2.read()) + sc_biguint<32>(p_01859_0_reg_1467.read()));
}

void sha256d::thread_i_V_1_fu_10377_p2() {
    i_V_1_fu_10377_p2 = (!p_01375_2_reg_1421.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(p_01375_2_reg_1421.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_i_V_fu_16901_p2() {
    i_V_fu_16901_p2 = (!p_03004_2_reg_1526.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(p_03004_2_reg_1526.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_icmp_ln72_fu_1639_p2() {
    icmp_ln72_fu_1639_p2 = (!t_0_reg_1410.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(t_0_reg_1410.read() == ap_const_lv2_2);
}

void sha256d::thread_icmp_ln887_1_fu_10371_p2() {
    icmp_ln887_1_fu_10371_p2 = (!p_01375_2_reg_1421.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(p_01375_2_reg_1421.read() == ap_const_lv7_40);
}

void sha256d::thread_icmp_ln887_fu_16895_p2() {
    icmp_ln887_fu_16895_p2 = (!p_03004_2_reg_1526.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(p_03004_2_reg_1526.read() == ap_const_lv7_40);
}

void sha256d::thread_lshr_ln1503_100_fu_14082_p4() {
    lshr_ln1503_100_fu_14082_p4 = m_38_V_fu_14068_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_101_fu_14104_p4() {
    lshr_ln1503_101_fu_14104_p4 = m_38_V_fu_14068_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_102_fu_14126_p4() {
    lshr_ln1503_102_fu_14126_p4 = m_38_V_fu_14068_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_103_fu_12561_p4() {
    lshr_ln1503_103_fu_12561_p4 = m_25_V_fu_11611_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_104_fu_12583_p4() {
    lshr_ln1503_104_fu_12583_p4 = m_25_V_fu_11611_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_105_fu_12605_p4() {
    lshr_ln1503_105_fu_12605_p4 = m_25_V_fu_11611_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_106_fu_14167_p4() {
    lshr_ln1503_106_fu_14167_p4 = m_39_V_fu_14077_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_107_fu_14189_p4() {
    lshr_ln1503_107_fu_14189_p4 = m_39_V_fu_14077_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_108_fu_14211_p4() {
    lshr_ln1503_108_fu_14211_p4 = m_39_V_fu_14077_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_109_fu_12631_p4() {
    lshr_ln1503_109_fu_12631_p4 = m_26_V_fu_11686_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_10_fu_4587_p4() {
    lshr_ln1503_10_fu_4587_p4 = m_18_V_fu_4511_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_110_fu_12653_p4() {
    lshr_ln1503_110_fu_12653_p4 = m_26_V_fu_11686_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_111_fu_12675_p4() {
    lshr_ln1503_111_fu_12675_p4 = m_26_V_fu_11686_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_112_fu_14252_p4() {
    lshr_ln1503_112_fu_14252_p4 = m_40_V_fu_14161_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_113_fu_14274_p4() {
    lshr_ln1503_113_fu_14274_p4 = m_40_V_fu_14161_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_114_fu_14296_p4() {
    lshr_ln1503_114_fu_14296_p4 = m_40_V_fu_14161_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_115_fu_12701_p4() {
    lshr_ln1503_115_fu_12701_p4 = m_27_V_fu_11762_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_116_fu_12723_p4() {
    lshr_ln1503_116_fu_12723_p4 = m_27_V_fu_11762_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_117_fu_12745_p4() {
    lshr_ln1503_117_fu_12745_p4 = m_27_V_fu_11762_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_118_fu_14337_p4() {
    lshr_ln1503_118_fu_14337_p4 = m_41_V_fu_14246_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_119_fu_14359_p4() {
    lshr_ln1503_119_fu_14359_p4 = m_41_V_fu_14246_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_11_fu_4609_p4() {
    lshr_ln1503_11_fu_4609_p4 = m_18_V_fu_4511_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_120_fu_14381_p4() {
    lshr_ln1503_120_fu_14381_p4 = m_41_V_fu_14246_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_121_fu_12771_p4() {
    lshr_ln1503_121_fu_12771_p4 = m_28_V_fu_11838_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_122_fu_12793_p4() {
    lshr_ln1503_122_fu_12793_p4 = m_28_V_fu_11838_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_123_fu_12815_p4() {
    lshr_ln1503_123_fu_12815_p4 = m_28_V_fu_11838_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_124_fu_14422_p4() {
    lshr_ln1503_124_fu_14422_p4 = m_42_V_fu_14331_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_125_fu_14444_p4() {
    lshr_ln1503_125_fu_14444_p4 = m_42_V_fu_14331_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_126_fu_14466_p4() {
    lshr_ln1503_126_fu_14466_p4 = m_42_V_fu_14331_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_127_fu_12841_p4() {
    lshr_ln1503_127_fu_12841_p4 = m_29_V_fu_11914_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_128_fu_12863_p4() {
    lshr_ln1503_128_fu_12863_p4 = m_29_V_fu_11914_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_129_fu_12885_p4() {
    lshr_ln1503_129_fu_12885_p4 = m_29_V_fu_11914_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_12_fu_4631_p4() {
    lshr_ln1503_12_fu_4631_p4 = m_18_V_fu_4511_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_130_fu_14507_p4() {
    lshr_ln1503_130_fu_14507_p4 = m_43_V_fu_14416_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_131_fu_14529_p4() {
    lshr_ln1503_131_fu_14529_p4 = m_43_V_fu_14416_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_132_fu_14551_p4() {
    lshr_ln1503_132_fu_14551_p4 = m_43_V_fu_14416_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_133_fu_12911_p4() {
    lshr_ln1503_133_fu_12911_p4 = m_30_V_fu_11990_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_134_fu_12933_p4() {
    lshr_ln1503_134_fu_12933_p4 = m_30_V_fu_11990_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_135_fu_12955_p4() {
    lshr_ln1503_135_fu_12955_p4 = m_30_V_fu_11990_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_136_fu_14593_p4() {
    lshr_ln1503_136_fu_14593_p4 = m_44_V_fu_14501_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_137_fu_14615_p4() {
    lshr_ln1503_137_fu_14615_p4 = m_44_V_fu_14501_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_138_fu_14637_p4() {
    lshr_ln1503_138_fu_14637_p4 = m_44_V_fu_14501_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_139_fu_13574_p4() {
    lshr_ln1503_139_fu_13574_p4 = m_31_V_fu_12985_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_13_fu_10956_p4() {
    lshr_ln1503_13_fu_10956_p4 = phi_ln1503_2_reg_1341.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_140_fu_13596_p4() {
    lshr_ln1503_140_fu_13596_p4 = m_31_V_fu_12985_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_141_fu_13618_p4() {
    lshr_ln1503_141_fu_13618_p4 = m_31_V_fu_12985_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_142_fu_14668_p4() {
    lshr_ln1503_142_fu_14668_p4 = m_45_V_fu_14587_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_143_fu_14690_p4() {
    lshr_ln1503_143_fu_14690_p4 = m_45_V_fu_14587_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_144_fu_14712_p4() {
    lshr_ln1503_144_fu_14712_p4 = m_45_V_fu_14587_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_145_fu_13644_p4() {
    lshr_ln1503_145_fu_13644_p4 = m_32_V_fu_12994_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_146_fu_13666_p4() {
    lshr_ln1503_146_fu_13666_p4 = m_32_V_fu_12994_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_147_fu_13688_p4() {
    lshr_ln1503_147_fu_13688_p4 = m_32_V_fu_12994_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_148_fu_15321_p4() {
    lshr_ln1503_148_fu_15321_p4 = m_46_V_fu_15307_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_149_fu_15343_p4() {
    lshr_ln1503_149_fu_15343_p4 = m_46_V_fu_15307_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_14_fu_11029_p4() {
    lshr_ln1503_14_fu_11029_p4 = m_19_V_fu_10916_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_150_fu_15365_p4() {
    lshr_ln1503_150_fu_15365_p4 = m_46_V_fu_15307_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_151_fu_13714_p4() {
    lshr_ln1503_151_fu_13714_p4 = m_33_V_fu_13078_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_152_fu_13736_p4() {
    lshr_ln1503_152_fu_13736_p4 = m_33_V_fu_13078_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_153_fu_13758_p4() {
    lshr_ln1503_153_fu_13758_p4 = m_33_V_fu_13078_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_154_fu_15406_p4() {
    lshr_ln1503_154_fu_15406_p4 = m_47_V_fu_15316_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_155_fu_15428_p4() {
    lshr_ln1503_155_fu_15428_p4 = m_47_V_fu_15316_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_156_fu_15450_p4() {
    lshr_ln1503_156_fu_15450_p4 = m_47_V_fu_15316_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_157_fu_13784_p4() {
    lshr_ln1503_157_fu_13784_p4 = m_34_V_fu_13163_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_158_fu_13806_p4() {
    lshr_ln1503_158_fu_13806_p4 = m_34_V_fu_13163_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_159_fu_13828_p4() {
    lshr_ln1503_159_fu_13828_p4 = m_34_V_fu_13163_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_15_fu_11051_p4() {
    lshr_ln1503_15_fu_11051_p4 = m_19_V_fu_10916_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_160_fu_15491_p4() {
    lshr_ln1503_160_fu_15491_p4 = m_48_V_fu_15400_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_161_fu_15513_p4() {
    lshr_ln1503_161_fu_15513_p4 = m_48_V_fu_15400_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_162_fu_15535_p4() {
    lshr_ln1503_162_fu_15535_p4 = m_48_V_fu_15400_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_163_fu_13854_p4() {
    lshr_ln1503_163_fu_13854_p4 = m_35_V_fu_13248_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_164_fu_13876_p4() {
    lshr_ln1503_164_fu_13876_p4 = m_35_V_fu_13248_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_165_fu_13898_p4() {
    lshr_ln1503_165_fu_13898_p4 = m_35_V_fu_13248_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_166_fu_15576_p4() {
    lshr_ln1503_166_fu_15576_p4 = m_49_V_fu_15485_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_167_fu_15598_p4() {
    lshr_ln1503_167_fu_15598_p4 = m_49_V_fu_15485_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_168_fu_15620_p4() {
    lshr_ln1503_168_fu_15620_p4 = m_49_V_fu_15485_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_169_fu_13924_p4() {
    lshr_ln1503_169_fu_13924_p4 = m_36_V_fu_13333_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_16_fu_11073_p4() {
    lshr_ln1503_16_fu_11073_p4 = m_19_V_fu_10916_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_170_fu_13946_p4() {
    lshr_ln1503_170_fu_13946_p4 = m_36_V_fu_13333_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_171_fu_13968_p4() {
    lshr_ln1503_171_fu_13968_p4 = m_36_V_fu_13333_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_172_fu_15661_p4() {
    lshr_ln1503_172_fu_15661_p4 = m_50_V_fu_15570_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_173_fu_15683_p4() {
    lshr_ln1503_173_fu_15683_p4 = m_50_V_fu_15570_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_174_fu_15705_p4() {
    lshr_ln1503_174_fu_15705_p4 = m_50_V_fu_15570_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_175_fu_13994_p4() {
    lshr_ln1503_175_fu_13994_p4 = m_37_V_fu_13418_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_176_fu_14016_p4() {
    lshr_ln1503_176_fu_14016_p4 = m_37_V_fu_13418_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_177_fu_14038_p4() {
    lshr_ln1503_177_fu_14038_p4 = m_37_V_fu_13418_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_178_fu_15746_p4() {
    lshr_ln1503_178_fu_15746_p4 = m_51_V_fu_15655_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_179_fu_15768_p4() {
    lshr_ln1503_179_fu_15768_p4 = m_51_V_fu_15655_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_17_fu_11133_p4() {
    lshr_ln1503_17_fu_11133_p4 = phi_ln1503_1_reg_1329.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_180_fu_15790_p4() {
    lshr_ln1503_180_fu_15790_p4 = m_51_V_fu_15655_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_181_fu_14743_p4() {
    lshr_ln1503_181_fu_14743_p4 = m_38_V_fu_14068_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_182_fu_14765_p4() {
    lshr_ln1503_182_fu_14765_p4 = m_38_V_fu_14068_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_183_fu_14787_p4() {
    lshr_ln1503_183_fu_14787_p4 = m_38_V_fu_14068_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_184_fu_15832_p4() {
    lshr_ln1503_184_fu_15832_p4 = m_52_V_fu_15740_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_185_fu_15854_p4() {
    lshr_ln1503_185_fu_15854_p4 = m_52_V_fu_15740_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_186_fu_15876_p4() {
    lshr_ln1503_186_fu_15876_p4 = m_52_V_fu_15740_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_187_fu_14813_p4() {
    lshr_ln1503_187_fu_14813_p4 = m_39_V_fu_14077_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_188_fu_14835_p4() {
    lshr_ln1503_188_fu_14835_p4 = m_39_V_fu_14077_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_189_fu_14857_p4() {
    lshr_ln1503_189_fu_14857_p4 = m_39_V_fu_14077_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_18_fu_11207_p4() {
    lshr_ln1503_18_fu_11207_p4 = m_20_V_fu_11023_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_190_fu_15907_p4() {
    lshr_ln1503_190_fu_15907_p4 = m_53_V_fu_15826_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_191_fu_15929_p4() {
    lshr_ln1503_191_fu_15929_p4 = m_53_V_fu_15826_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_192_fu_15951_p4() {
    lshr_ln1503_192_fu_15951_p4 = m_53_V_fu_15826_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_193_fu_14883_p4() {
    lshr_ln1503_193_fu_14883_p4 = m_40_V_fu_14161_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_194_fu_14905_p4() {
    lshr_ln1503_194_fu_14905_p4 = m_40_V_fu_14161_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_195_fu_14927_p4() {
    lshr_ln1503_195_fu_14927_p4 = m_40_V_fu_14161_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_196_fu_16222_p4() {
    lshr_ln1503_196_fu_16222_p4 = m_54_V_fu_16208_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_197_fu_16244_p4() {
    lshr_ln1503_197_fu_16244_p4 = m_54_V_fu_16208_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_198_fu_16266_p4() {
    lshr_ln1503_198_fu_16266_p4 = m_54_V_fu_16208_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_199_fu_14953_p4() {
    lshr_ln1503_199_fu_14953_p4 = m_41_V_fu_14246_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_19_fu_11229_p4() {
    lshr_ln1503_19_fu_11229_p4 = m_20_V_fu_11023_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_1_fu_4169_p4() {
    lshr_ln1503_1_fu_4169_p4 = phi_ln1503_6_reg_1388.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_200_fu_14975_p4() {
    lshr_ln1503_200_fu_14975_p4 = m_41_V_fu_14246_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_201_fu_14997_p4() {
    lshr_ln1503_201_fu_14997_p4 = m_41_V_fu_14246_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_202_fu_16307_p4() {
    lshr_ln1503_202_fu_16307_p4 = m_55_V_fu_16217_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_203_fu_16329_p4() {
    lshr_ln1503_203_fu_16329_p4 = m_55_V_fu_16217_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_204_fu_16351_p4() {
    lshr_ln1503_204_fu_16351_p4 = m_55_V_fu_16217_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_205_fu_15023_p4() {
    lshr_ln1503_205_fu_15023_p4 = m_42_V_fu_14331_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_206_fu_15045_p4() {
    lshr_ln1503_206_fu_15045_p4 = m_42_V_fu_14331_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_207_fu_15067_p4() {
    lshr_ln1503_207_fu_15067_p4 = m_42_V_fu_14331_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_208_fu_16392_p4() {
    lshr_ln1503_208_fu_16392_p4 = m_56_V_fu_16301_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_209_fu_16414_p4() {
    lshr_ln1503_209_fu_16414_p4 = m_56_V_fu_16301_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_20_fu_11251_p4() {
    lshr_ln1503_20_fu_11251_p4 = m_20_V_fu_11023_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_210_fu_16436_p4() {
    lshr_ln1503_210_fu_16436_p4 = m_56_V_fu_16301_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_211_fu_15093_p4() {
    lshr_ln1503_211_fu_15093_p4 = m_43_V_fu_14416_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_212_fu_15115_p4() {
    lshr_ln1503_212_fu_15115_p4 = m_43_V_fu_14416_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_213_fu_15137_p4() {
    lshr_ln1503_213_fu_15137_p4 = m_43_V_fu_14416_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_214_fu_16477_p4() {
    lshr_ln1503_214_fu_16477_p4 = m_57_V_fu_16386_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_215_fu_16499_p4() {
    lshr_ln1503_215_fu_16499_p4 = m_57_V_fu_16386_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_216_fu_16521_p4() {
    lshr_ln1503_216_fu_16521_p4 = m_57_V_fu_16386_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_217_fu_15163_p4() {
    lshr_ln1503_217_fu_15163_p4 = m_44_V_fu_14501_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_218_fu_15185_p4() {
    lshr_ln1503_218_fu_15185_p4 = m_44_V_fu_14501_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_219_fu_15207_p4() {
    lshr_ln1503_219_fu_15207_p4 = m_44_V_fu_14501_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_21_fu_11311_p4() {
    lshr_ln1503_21_fu_11311_p4 = phi_ln1503_reg_1317.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_220_fu_16562_p4() {
    lshr_ln1503_220_fu_16562_p4 = m_58_V_fu_16471_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_221_fu_16584_p4() {
    lshr_ln1503_221_fu_16584_p4 = m_58_V_fu_16471_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_222_fu_16606_p4() {
    lshr_ln1503_222_fu_16606_p4 = m_58_V_fu_16471_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_223_fu_15233_p4() {
    lshr_ln1503_223_fu_15233_p4 = m_45_V_fu_14587_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_224_fu_15255_p4() {
    lshr_ln1503_224_fu_15255_p4 = m_45_V_fu_14587_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_225_fu_15277_p4() {
    lshr_ln1503_225_fu_15277_p4 = m_45_V_fu_14587_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_226_fu_16647_p4() {
    lshr_ln1503_226_fu_16647_p4 = m_59_V_fu_16556_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_227_fu_16669_p4() {
    lshr_ln1503_227_fu_16669_p4 = m_59_V_fu_16556_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_228_fu_16691_p4() {
    lshr_ln1503_228_fu_16691_p4 = m_59_V_fu_16556_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_229_fu_15982_p4() {
    lshr_ln1503_229_fu_15982_p4 = m_46_V_fu_15307_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_22_fu_11385_p4() {
    lshr_ln1503_22_fu_11385_p4 = m_21_V_fu_11201_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_230_fu_16004_p4() {
    lshr_ln1503_230_fu_16004_p4 = m_46_V_fu_15307_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_231_fu_16026_p4() {
    lshr_ln1503_231_fu_16026_p4 = m_46_V_fu_15307_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_232_fu_16733_p4() {
    lshr_ln1503_232_fu_16733_p4 = m_60_V_fu_16641_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_233_fu_16755_p4() {
    lshr_ln1503_233_fu_16755_p4 = m_60_V_fu_16641_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_234_fu_16777_p4() {
    lshr_ln1503_234_fu_16777_p4 = m_60_V_fu_16641_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_235_fu_16052_p4() {
    lshr_ln1503_235_fu_16052_p4 = m_47_V_fu_15316_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_236_fu_16074_p4() {
    lshr_ln1503_236_fu_16074_p4 = m_47_V_fu_15316_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_237_fu_16096_p4() {
    lshr_ln1503_237_fu_16096_p4 = m_47_V_fu_15316_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_238_fu_16814_p4() {
    lshr_ln1503_238_fu_16814_p4 = m_61_V_fu_16727_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_239_fu_16836_p4() {
    lshr_ln1503_239_fu_16836_p4 = m_61_V_fu_16727_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_23_fu_11407_p4() {
    lshr_ln1503_23_fu_11407_p4 = m_21_V_fu_11201_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_240_fu_16858_p4() {
    lshr_ln1503_240_fu_16858_p4 = m_61_V_fu_16727_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_241_fu_16128_p4() {
    lshr_ln1503_241_fu_16128_p4 = m_48_V_fu_15400_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_242_fu_16150_p4() {
    lshr_ln1503_242_fu_16150_p4 = m_48_V_fu_15400_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_243_fu_16172_p4() {
    lshr_ln1503_243_fu_16172_p4 = m_48_V_fu_15400_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_244_fu_1885_p4() {
    lshr_ln1503_244_fu_1885_p4 = select_ln1356_1_fu_1670_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_245_fu_2045_p4() {
    lshr_ln1503_245_fu_2045_p4 = select_ln1356_2_fu_1685_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_246_fu_2145_p4() {
    lshr_ln1503_246_fu_2145_p4 = add_ln209_118_fu_1979_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_247_fu_2167_p4() {
    lshr_ln1503_247_fu_2167_p4 = add_ln209_118_fu_1979_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_248_fu_2189_p4() {
    lshr_ln1503_248_fu_2189_p4 = add_ln209_118_fu_1979_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_249_fu_2249_p4() {
    lshr_ln1503_249_fu_2249_p4 = select_ln1356_3_fu_1695_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_24_fu_11429_p4() {
    lshr_ln1503_24_fu_11429_p4 = m_21_V_fu_11201_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_250_fu_2333_p4() {
    lshr_ln1503_250_fu_2333_p4 = add_ln209_120_fu_2139_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_251_fu_2355_p4() {
    lshr_ln1503_251_fu_2355_p4 = add_ln209_120_fu_2139_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_252_fu_2377_p4() {
    lshr_ln1503_252_fu_2377_p4 = add_ln209_120_fu_2139_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_253_fu_2437_p4() {
    lshr_ln1503_253_fu_2437_p4 = select_ln1356_4_fu_1705_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_254_fu_2521_p4() {
    lshr_ln1503_254_fu_2521_p4 = add_ln209_123_fu_2327_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_255_fu_2543_p4() {
    lshr_ln1503_255_fu_2543_p4 = add_ln209_123_fu_2327_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_256_fu_2565_p4() {
    lshr_ln1503_256_fu_2565_p4 = add_ln209_123_fu_2327_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_257_fu_2625_p4() {
    lshr_ln1503_257_fu_2625_p4 = select_ln1356_5_fu_1716_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_258_fu_2709_p4() {
    lshr_ln1503_258_fu_2709_p4 = add_ln209_126_fu_2515_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_259_fu_2731_p4() {
    lshr_ln1503_259_fu_2731_p4 = add_ln209_126_fu_2515_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_25_fu_11466_p4() {
    lshr_ln1503_25_fu_11466_p4 = m_22_V_fu_11379_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_260_fu_2753_p4() {
    lshr_ln1503_260_fu_2753_p4 = add_ln209_126_fu_2515_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_261_fu_2813_p4() {
    lshr_ln1503_261_fu_2813_p4 = select_ln1356_6_fu_1727_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_262_fu_2897_p4() {
    lshr_ln1503_262_fu_2897_p4 = add_ln209_129_fu_2703_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_263_fu_2919_p4() {
    lshr_ln1503_263_fu_2919_p4 = add_ln209_129_fu_2703_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_264_fu_2941_p4() {
    lshr_ln1503_264_fu_2941_p4 = add_ln209_129_fu_2703_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_265_fu_3001_p4() {
    lshr_ln1503_265_fu_3001_p4 = select_ln1356_7_fu_1738_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_266_fu_3085_p4() {
    lshr_ln1503_266_fu_3085_p4 = add_ln209_132_fu_2891_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_267_fu_3107_p4() {
    lshr_ln1503_267_fu_3107_p4 = add_ln209_132_fu_2891_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_268_fu_3129_p4() {
    lshr_ln1503_268_fu_3129_p4 = add_ln209_132_fu_2891_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_269_fu_3189_p4() {
    lshr_ln1503_269_fu_3189_p4 = select_ln1356_8_fu_1749_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_26_fu_11488_p4() {
    lshr_ln1503_26_fu_11488_p4 = m_22_V_fu_11379_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_270_fu_3269_p4() {
    lshr_ln1503_270_fu_3269_p4 = add_ln209_135_fu_3079_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_271_fu_3291_p4() {
    lshr_ln1503_271_fu_3291_p4 = add_ln209_135_fu_3079_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_272_fu_3313_p4() {
    lshr_ln1503_272_fu_3313_p4 = add_ln209_135_fu_3079_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_273_fu_3373_p4() {
    lshr_ln1503_273_fu_3373_p4 = select_ln1356_9_fu_1756_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_274_fu_3441_p4() {
    lshr_ln1503_274_fu_3441_p4 = add_ln209_138_fu_3263_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_275_fu_3463_p4() {
    lshr_ln1503_275_fu_3463_p4 = add_ln209_138_fu_3263_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_276_fu_3485_p4() {
    lshr_ln1503_276_fu_3485_p4 = add_ln209_138_fu_3263_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_277_fu_3545_p4() {
    lshr_ln1503_277_fu_3545_p4 = select_ln1356_10_fu_1763_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_278_fu_4937_p4() {
    lshr_ln1503_278_fu_4937_p4 = add_ln209_141_fu_4923_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_279_fu_4959_p4() {
    lshr_ln1503_279_fu_4959_p4 = add_ln209_141_fu_4923_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_27_fu_11510_p4() {
    lshr_ln1503_27_fu_11510_p4 = m_22_V_fu_11379_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_280_fu_4981_p4() {
    lshr_ln1503_280_fu_4981_p4 = add_ln209_141_fu_4923_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_281_fu_3647_p4() {
    lshr_ln1503_281_fu_3647_p4 = select_ln1356_11_fu_1770_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_282_fu_5017_p4() {
    lshr_ln1503_282_fu_5017_p4 = add_ln209_144_fu_4932_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_283_fu_5039_p4() {
    lshr_ln1503_283_fu_5039_p4 = add_ln209_144_fu_4932_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_284_fu_5061_p4() {
    lshr_ln1503_284_fu_5061_p4 = add_ln209_144_fu_4932_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_285_fu_3749_p4() {
    lshr_ln1503_285_fu_3749_p4 = select_ln1356_12_fu_1781_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_286_fu_5097_p4() {
    lshr_ln1503_286_fu_5097_p4 = add_ln209_147_fu_5012_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_287_fu_5119_p4() {
    lshr_ln1503_287_fu_5119_p4 = add_ln209_147_fu_5012_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_288_fu_5141_p4() {
    lshr_ln1503_288_fu_5141_p4 = add_ln209_147_fu_5012_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_289_fu_3851_p4() {
    lshr_ln1503_289_fu_3851_p4 = select_ln1356_13_fu_1792_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_28_fu_11541_p4() {
    lshr_ln1503_28_fu_11541_p4 = m_23_V_fu_11460_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_290_fu_5177_p4() {
    lshr_ln1503_290_fu_5177_p4 = add_ln209_150_fu_5092_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_291_fu_5199_p4() {
    lshr_ln1503_291_fu_5199_p4 = add_ln209_150_fu_5092_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_292_fu_5221_p4() {
    lshr_ln1503_292_fu_5221_p4 = add_ln209_150_fu_5092_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_293_fu_3953_p4() {
    lshr_ln1503_293_fu_3953_p4 = select_ln1356_14_fu_1803_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_294_fu_5257_p4() {
    lshr_ln1503_294_fu_5257_p4 = add_ln209_153_fu_5172_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_295_fu_5279_p4() {
    lshr_ln1503_295_fu_5279_p4 = add_ln209_153_fu_5172_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_296_fu_5301_p4() {
    lshr_ln1503_296_fu_5301_p4 = add_ln209_153_fu_5172_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_297_fu_4055_p4() {
    lshr_ln1503_297_fu_4055_p4 = select_ln1356_15_fu_1814_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_298_fu_5337_p4() {
    lshr_ln1503_298_fu_5337_p4 = add_ln209_156_fu_5252_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_299_fu_5359_p4() {
    lshr_ln1503_299_fu_5359_p4 = add_ln209_156_fu_5252_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_29_fu_11563_p4() {
    lshr_ln1503_29_fu_11563_p4 = m_23_V_fu_11460_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_2_fu_4561_p4() {
    lshr_ln1503_2_fu_4561_p4 = m_17_V_fu_4333_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_300_fu_5381_p4() {
    lshr_ln1503_300_fu_5381_p4 = add_ln209_156_fu_5252_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_301_fu_5407_p4() {
    lshr_ln1503_301_fu_5407_p4 = add_ln209_118_reg_17793.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_302_fu_5427_p4() {
    lshr_ln1503_302_fu_5427_p4 = add_ln209_118_reg_17793.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_303_fu_5447_p4() {
    lshr_ln1503_303_fu_5447_p4 = add_ln209_118_reg_17793.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_304_fu_5489_p4() {
    lshr_ln1503_304_fu_5489_p4 = add_ln209_159_fu_5332_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_305_fu_5511_p4() {
    lshr_ln1503_305_fu_5511_p4 = add_ln209_159_fu_5332_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_306_fu_5533_p4() {
    lshr_ln1503_306_fu_5533_p4 = add_ln209_159_fu_5332_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_307_fu_5559_p4() {
    lshr_ln1503_307_fu_5559_p4 = add_ln209_120_reg_17804.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_308_fu_5579_p4() {
    lshr_ln1503_308_fu_5579_p4 = add_ln209_120_reg_17804.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_309_fu_5599_p4() {
    lshr_ln1503_309_fu_5599_p4 = add_ln209_120_reg_17804.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_30_fu_11585_p4() {
    lshr_ln1503_30_fu_11585_p4 = m_23_V_fu_11460_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_310_fu_5641_p4() {
    lshr_ln1503_310_fu_5641_p4 = add_ln209_162_fu_5483_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_311_fu_5663_p4() {
    lshr_ln1503_311_fu_5663_p4 = add_ln209_162_fu_5483_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_312_fu_5685_p4() {
    lshr_ln1503_312_fu_5685_p4 = add_ln209_162_fu_5483_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_313_fu_5711_p4() {
    lshr_ln1503_313_fu_5711_p4 = add_ln209_123_reg_17815.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_314_fu_5731_p4() {
    lshr_ln1503_314_fu_5731_p4 = add_ln209_123_reg_17815.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_315_fu_5751_p4() {
    lshr_ln1503_315_fu_5751_p4 = add_ln209_123_reg_17815.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_316_fu_5793_p4() {
    lshr_ln1503_316_fu_5793_p4 = add_ln209_165_fu_5635_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_317_fu_5815_p4() {
    lshr_ln1503_317_fu_5815_p4 = add_ln209_165_fu_5635_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_318_fu_5837_p4() {
    lshr_ln1503_318_fu_5837_p4 = add_ln209_165_fu_5635_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_319_fu_5863_p4() {
    lshr_ln1503_319_fu_5863_p4 = add_ln209_126_reg_17826.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_31_fu_11616_p4() {
    lshr_ln1503_31_fu_11616_p4 = m_24_V_fu_11536_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_320_fu_5883_p4() {
    lshr_ln1503_320_fu_5883_p4 = add_ln209_126_reg_17826.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_321_fu_5903_p4() {
    lshr_ln1503_321_fu_5903_p4 = add_ln209_126_reg_17826.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_322_fu_5945_p4() {
    lshr_ln1503_322_fu_5945_p4 = add_ln209_168_fu_5787_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_323_fu_5967_p4() {
    lshr_ln1503_323_fu_5967_p4 = add_ln209_168_fu_5787_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_324_fu_5989_p4() {
    lshr_ln1503_324_fu_5989_p4 = add_ln209_168_fu_5787_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_325_fu_6015_p4() {
    lshr_ln1503_325_fu_6015_p4 = add_ln209_129_reg_17837.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_326_fu_6035_p4() {
    lshr_ln1503_326_fu_6035_p4 = add_ln209_129_reg_17837.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_327_fu_6055_p4() {
    lshr_ln1503_327_fu_6055_p4 = add_ln209_129_reg_17837.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_328_fu_6097_p4() {
    lshr_ln1503_328_fu_6097_p4 = add_ln209_171_fu_5939_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_329_fu_6119_p4() {
    lshr_ln1503_329_fu_6119_p4 = add_ln209_171_fu_5939_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_32_fu_11638_p4() {
    lshr_ln1503_32_fu_11638_p4 = m_24_V_fu_11536_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_330_fu_6141_p4() {
    lshr_ln1503_330_fu_6141_p4 = add_ln209_171_fu_5939_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_331_fu_6541_p4() {
    lshr_ln1503_331_fu_6541_p4 = add_ln209_132_reg_17848.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_332_fu_6561_p4() {
    lshr_ln1503_332_fu_6561_p4 = add_ln209_132_reg_17848.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_333_fu_6581_p4() {
    lshr_ln1503_333_fu_6581_p4 = add_ln209_132_reg_17848.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_334_fu_6167_p4() {
    lshr_ln1503_334_fu_6167_p4 = add_ln209_174_fu_6091_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_335_fu_6189_p4() {
    lshr_ln1503_335_fu_6189_p4 = add_ln209_174_fu_6091_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_336_fu_6211_p4() {
    lshr_ln1503_336_fu_6211_p4 = add_ln209_174_fu_6091_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_337_fu_6611_p4() {
    lshr_ln1503_337_fu_6611_p4 = add_ln209_135_reg_17859.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_338_fu_6631_p4() {
    lshr_ln1503_338_fu_6631_p4 = add_ln209_135_reg_17859.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_339_fu_6651_p4() {
    lshr_ln1503_339_fu_6651_p4 = add_ln209_135_reg_17859.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_33_fu_11660_p4() {
    lshr_ln1503_33_fu_11660_p4 = m_24_V_fu_11536_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_340_fu_6699_p4() {
    lshr_ln1503_340_fu_6699_p4 = add_ln209_177_fu_6685_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_341_fu_6721_p4() {
    lshr_ln1503_341_fu_6721_p4 = add_ln209_177_fu_6685_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_342_fu_6743_p4() {
    lshr_ln1503_342_fu_6743_p4 = add_ln209_177_fu_6685_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_343_fu_6769_p4() {
    lshr_ln1503_343_fu_6769_p4 = add_ln209_138_reg_17870.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_344_fu_6789_p4() {
    lshr_ln1503_344_fu_6789_p4 = add_ln209_138_reg_17870.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_345_fu_6809_p4() {
    lshr_ln1503_345_fu_6809_p4 = add_ln209_138_reg_17870.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_346_fu_6850_p4() {
    lshr_ln1503_346_fu_6850_p4 = add_ln209_180_fu_6694_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_347_fu_6872_p4() {
    lshr_ln1503_347_fu_6872_p4 = add_ln209_180_fu_6694_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_348_fu_6894_p4() {
    lshr_ln1503_348_fu_6894_p4 = add_ln209_180_fu_6694_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_349_fu_6237_p4() {
    lshr_ln1503_349_fu_6237_p4 = add_ln209_141_fu_4923_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_34_fu_11692_p4() {
    lshr_ln1503_34_fu_11692_p4 = m_25_V_fu_11611_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_350_fu_6259_p4() {
    lshr_ln1503_350_fu_6259_p4 = add_ln209_141_fu_4923_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_351_fu_6281_p4() {
    lshr_ln1503_351_fu_6281_p4 = add_ln209_141_fu_4923_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_352_fu_6930_p4() {
    lshr_ln1503_352_fu_6930_p4 = add_ln209_183_fu_6844_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_353_fu_6952_p4() {
    lshr_ln1503_353_fu_6952_p4 = add_ln209_183_fu_6844_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_354_fu_6974_p4() {
    lshr_ln1503_354_fu_6974_p4 = add_ln209_183_fu_6844_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_355_fu_6313_p4() {
    lshr_ln1503_355_fu_6313_p4 = add_ln209_144_fu_4932_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_356_fu_6335_p4() {
    lshr_ln1503_356_fu_6335_p4 = add_ln209_144_fu_4932_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_357_fu_6357_p4() {
    lshr_ln1503_357_fu_6357_p4 = add_ln209_144_fu_4932_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_358_fu_7010_p4() {
    lshr_ln1503_358_fu_7010_p4 = add_ln209_186_fu_6925_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_359_fu_7032_p4() {
    lshr_ln1503_359_fu_7032_p4 = add_ln209_186_fu_6925_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_35_fu_11714_p4() {
    lshr_ln1503_35_fu_11714_p4 = m_25_V_fu_11611_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_360_fu_7054_p4() {
    lshr_ln1503_360_fu_7054_p4 = add_ln209_186_fu_6925_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_361_fu_6389_p4() {
    lshr_ln1503_361_fu_6389_p4 = add_ln209_147_fu_5012_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_362_fu_6411_p4() {
    lshr_ln1503_362_fu_6411_p4 = add_ln209_147_fu_5012_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_363_fu_6433_p4() {
    lshr_ln1503_363_fu_6433_p4 = add_ln209_147_fu_5012_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_364_fu_7090_p4() {
    lshr_ln1503_364_fu_7090_p4 = add_ln209_189_fu_7005_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_365_fu_7112_p4() {
    lshr_ln1503_365_fu_7112_p4 = add_ln209_189_fu_7005_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_366_fu_7134_p4() {
    lshr_ln1503_366_fu_7134_p4 = add_ln209_189_fu_7005_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_367_fu_6465_p4() {
    lshr_ln1503_367_fu_6465_p4 = add_ln209_150_fu_5092_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_368_fu_6487_p4() {
    lshr_ln1503_368_fu_6487_p4 = add_ln209_150_fu_5092_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_369_fu_6509_p4() {
    lshr_ln1503_369_fu_6509_p4 = add_ln209_150_fu_5092_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_36_fu_11736_p4() {
    lshr_ln1503_36_fu_11736_p4 = m_25_V_fu_11611_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_370_fu_7170_p4() {
    lshr_ln1503_370_fu_7170_p4 = add_ln209_192_fu_7085_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_371_fu_7192_p4() {
    lshr_ln1503_371_fu_7192_p4 = add_ln209_192_fu_7085_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_372_fu_7214_p4() {
    lshr_ln1503_372_fu_7214_p4 = add_ln209_192_fu_7085_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_373_fu_7240_p4() {
    lshr_ln1503_373_fu_7240_p4 = add_ln209_153_reg_18051.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_374_fu_7260_p4() {
    lshr_ln1503_374_fu_7260_p4 = add_ln209_153_reg_18051.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_375_fu_7280_p4() {
    lshr_ln1503_375_fu_7280_p4 = add_ln209_153_reg_18051.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_376_fu_7322_p4() {
    lshr_ln1503_376_fu_7322_p4 = add_ln209_195_fu_7165_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_377_fu_7344_p4() {
    lshr_ln1503_377_fu_7344_p4 = add_ln209_195_fu_7165_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_378_fu_7366_p4() {
    lshr_ln1503_378_fu_7366_p4 = add_ln209_195_fu_7165_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_379_fu_7392_p4() {
    lshr_ln1503_379_fu_7392_p4 = add_ln209_156_reg_18062.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_37_fu_11768_p4() {
    lshr_ln1503_37_fu_11768_p4 = m_26_V_fu_11686_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_380_fu_7412_p4() {
    lshr_ln1503_380_fu_7412_p4 = add_ln209_156_reg_18062.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_381_fu_7432_p4() {
    lshr_ln1503_381_fu_7432_p4 = add_ln209_156_reg_18062.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_382_fu_7474_p4() {
    lshr_ln1503_382_fu_7474_p4 = add_ln209_198_fu_7316_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_383_fu_7496_p4() {
    lshr_ln1503_383_fu_7496_p4 = add_ln209_198_fu_7316_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_384_fu_7518_p4() {
    lshr_ln1503_384_fu_7518_p4 = add_ln209_198_fu_7316_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_385_fu_7544_p4() {
    lshr_ln1503_385_fu_7544_p4 = add_ln209_159_reg_18074.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_386_fu_7564_p4() {
    lshr_ln1503_386_fu_7564_p4 = add_ln209_159_reg_18074.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_387_fu_7584_p4() {
    lshr_ln1503_387_fu_7584_p4 = add_ln209_159_reg_18074.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_388_fu_7626_p4() {
    lshr_ln1503_388_fu_7626_p4 = add_ln209_201_fu_7468_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_389_fu_7648_p4() {
    lshr_ln1503_389_fu_7648_p4 = add_ln209_201_fu_7468_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_38_fu_11790_p4() {
    lshr_ln1503_38_fu_11790_p4 = m_26_V_fu_11686_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_390_fu_7670_p4() {
    lshr_ln1503_390_fu_7670_p4 = add_ln209_201_fu_7468_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_391_fu_7696_p4() {
    lshr_ln1503_391_fu_7696_p4 = add_ln209_162_reg_18086.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_392_fu_7716_p4() {
    lshr_ln1503_392_fu_7716_p4 = add_ln209_162_reg_18086.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_393_fu_7736_p4() {
    lshr_ln1503_393_fu_7736_p4 = add_ln209_162_reg_18086.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_394_fu_7778_p4() {
    lshr_ln1503_394_fu_7778_p4 = add_ln209_204_fu_7620_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_395_fu_7800_p4() {
    lshr_ln1503_395_fu_7800_p4 = add_ln209_204_fu_7620_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_396_fu_7822_p4() {
    lshr_ln1503_396_fu_7822_p4 = add_ln209_204_fu_7620_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_397_fu_7848_p4() {
    lshr_ln1503_397_fu_7848_p4 = add_ln209_165_reg_18098.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_398_fu_7868_p4() {
    lshr_ln1503_398_fu_7868_p4 = add_ln209_165_reg_18098.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_399_fu_7888_p4() {
    lshr_ln1503_399_fu_7888_p4 = add_ln209_165_reg_18098.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_39_fu_11812_p4() {
    lshr_ln1503_39_fu_11812_p4 = m_26_V_fu_11686_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_3_fu_4271_p4() {
    lshr_ln1503_3_fu_4271_p4 = phi_ln1503_5_reg_1377.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_400_fu_7930_p4() {
    lshr_ln1503_400_fu_7930_p4 = add_ln209_207_fu_7772_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_401_fu_7952_p4() {
    lshr_ln1503_401_fu_7952_p4 = add_ln209_207_fu_7772_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_402_fu_7974_p4() {
    lshr_ln1503_402_fu_7974_p4 = add_ln209_207_fu_7772_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_403_fu_8444_p4() {
    lshr_ln1503_403_fu_8444_p4 = add_ln209_168_reg_18109.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_404_fu_8464_p4() {
    lshr_ln1503_404_fu_8464_p4 = add_ln209_168_reg_18109.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_405_fu_8484_p4() {
    lshr_ln1503_405_fu_8484_p4 = add_ln209_168_reg_18109.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_406_fu_8000_p4() {
    lshr_ln1503_406_fu_8000_p4 = add_ln209_210_fu_7924_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_407_fu_8022_p4() {
    lshr_ln1503_407_fu_8022_p4 = add_ln209_210_fu_7924_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_408_fu_8044_p4() {
    lshr_ln1503_408_fu_8044_p4 = add_ln209_210_fu_7924_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_409_fu_8524_p4() {
    lshr_ln1503_409_fu_8524_p4 = add_ln209_171_reg_18120.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_40_fu_11844_p4() {
    lshr_ln1503_40_fu_11844_p4 = m_27_V_fu_11762_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_410_fu_8544_p4() {
    lshr_ln1503_410_fu_8544_p4 = add_ln209_171_reg_18120.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_411_fu_8564_p4() {
    lshr_ln1503_411_fu_8564_p4 = add_ln209_171_reg_18120.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_412_fu_8604_p4() {
    lshr_ln1503_412_fu_8604_p4 = add_ln209_213_fu_8518_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_413_fu_8626_p4() {
    lshr_ln1503_413_fu_8626_p4 = add_ln209_213_fu_8518_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_414_fu_8648_p4() {
    lshr_ln1503_414_fu_8648_p4 = add_ln209_213_fu_8518_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_415_fu_8674_p4() {
    lshr_ln1503_415_fu_8674_p4 = add_ln209_174_reg_18131.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_416_fu_8694_p4() {
    lshr_ln1503_416_fu_8694_p4 = add_ln209_174_reg_18131.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_417_fu_8714_p4() {
    lshr_ln1503_417_fu_8714_p4 = add_ln209_174_reg_18131.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_418_fu_8755_p4() {
    lshr_ln1503_418_fu_8755_p4 = add_ln209_216_fu_8598_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_419_fu_8777_p4() {
    lshr_ln1503_419_fu_8777_p4 = add_ln209_216_fu_8598_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_41_fu_11866_p4() {
    lshr_ln1503_41_fu_11866_p4 = m_27_V_fu_11762_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_420_fu_8799_p4() {
    lshr_ln1503_420_fu_8799_p4 = add_ln209_216_fu_8598_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_421_fu_8070_p4() {
    lshr_ln1503_421_fu_8070_p4 = add_ln209_177_fu_6685_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_422_fu_8092_p4() {
    lshr_ln1503_422_fu_8092_p4 = add_ln209_177_fu_6685_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_423_fu_8114_p4() {
    lshr_ln1503_423_fu_8114_p4 = add_ln209_177_fu_6685_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_424_fu_8835_p4() {
    lshr_ln1503_424_fu_8835_p4 = add_ln209_219_fu_8749_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_425_fu_8857_p4() {
    lshr_ln1503_425_fu_8857_p4 = add_ln209_219_fu_8749_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_426_fu_8879_p4() {
    lshr_ln1503_426_fu_8879_p4 = add_ln209_219_fu_8749_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_427_fu_8146_p4() {
    lshr_ln1503_427_fu_8146_p4 = add_ln209_180_fu_6694_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_428_fu_8168_p4() {
    lshr_ln1503_428_fu_8168_p4 = add_ln209_180_fu_6694_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_429_fu_8190_p4() {
    lshr_ln1503_429_fu_8190_p4 = add_ln209_180_fu_6694_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_42_fu_11888_p4() {
    lshr_ln1503_42_fu_11888_p4 = m_27_V_fu_11762_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_430_fu_8915_p4() {
    lshr_ln1503_430_fu_8915_p4 = add_ln209_222_fu_8830_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_431_fu_8937_p4() {
    lshr_ln1503_431_fu_8937_p4 = add_ln209_222_fu_8830_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_432_fu_8959_p4() {
    lshr_ln1503_432_fu_8959_p4 = add_ln209_222_fu_8830_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_433_fu_8222_p4() {
    lshr_ln1503_433_fu_8222_p4 = add_ln209_183_fu_6844_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_434_fu_8244_p4() {
    lshr_ln1503_434_fu_8244_p4 = add_ln209_183_fu_6844_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_435_fu_8266_p4() {
    lshr_ln1503_435_fu_8266_p4 = add_ln209_183_fu_6844_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_436_fu_8995_p4() {
    lshr_ln1503_436_fu_8995_p4 = add_ln209_225_fu_8910_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_437_fu_9017_p4() {
    lshr_ln1503_437_fu_9017_p4 = add_ln209_225_fu_8910_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_438_fu_9039_p4() {
    lshr_ln1503_438_fu_9039_p4 = add_ln209_225_fu_8910_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_439_fu_8298_p4() {
    lshr_ln1503_439_fu_8298_p4 = add_ln209_186_fu_6925_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_43_fu_11920_p4() {
    lshr_ln1503_43_fu_11920_p4 = m_28_V_fu_11838_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_440_fu_8320_p4() {
    lshr_ln1503_440_fu_8320_p4 = add_ln209_186_fu_6925_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_441_fu_8342_p4() {
    lshr_ln1503_441_fu_8342_p4 = add_ln209_186_fu_6925_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_442_fu_9065_p4() {
    lshr_ln1503_442_fu_9065_p4 = add_ln209_228_fu_8990_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_443_fu_9087_p4() {
    lshr_ln1503_443_fu_9087_p4 = add_ln209_228_fu_8990_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_444_fu_9109_p4() {
    lshr_ln1503_444_fu_9109_p4 = add_ln209_228_fu_8990_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_445_fu_9284_p4() {
    lshr_ln1503_445_fu_9284_p4 = add_ln209_189_reg_18206.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_446_fu_9304_p4() {
    lshr_ln1503_446_fu_9304_p4 = add_ln209_189_reg_18206.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_447_fu_9324_p4() {
    lshr_ln1503_447_fu_9324_p4 = add_ln209_189_reg_18206.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_448_fu_9214_p4() {
    lshr_ln1503_448_fu_9214_p4 = add_ln209_231_fu_9209_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_449_fu_9236_p4() {
    lshr_ln1503_449_fu_9236_p4 = add_ln209_231_fu_9209_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_44_fu_11942_p4() {
    lshr_ln1503_44_fu_11942_p4 = m_28_V_fu_11838_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_450_fu_9258_p4() {
    lshr_ln1503_450_fu_9258_p4 = add_ln209_231_fu_9209_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_451_fu_9364_p4() {
    lshr_ln1503_451_fu_9364_p4 = add_ln209_192_reg_18217.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_452_fu_9384_p4() {
    lshr_ln1503_452_fu_9384_p4 = add_ln209_192_reg_18217.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_453_fu_9404_p4() {
    lshr_ln1503_453_fu_9404_p4 = add_ln209_192_reg_18217.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_454_fu_9444_p4() {
    lshr_ln1503_454_fu_9444_p4 = add_ln209_234_fu_9358_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_455_fu_9466_p4() {
    lshr_ln1503_455_fu_9466_p4 = add_ln209_234_fu_9358_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_456_fu_9488_p4() {
    lshr_ln1503_456_fu_9488_p4 = add_ln209_234_fu_9358_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_457_fu_9514_p4() {
    lshr_ln1503_457_fu_9514_p4 = add_ln209_195_reg_18229.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_458_fu_9534_p4() {
    lshr_ln1503_458_fu_9534_p4 = add_ln209_195_reg_18229.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_459_fu_9554_p4() {
    lshr_ln1503_459_fu_9554_p4 = add_ln209_195_reg_18229.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_45_fu_11964_p4() {
    lshr_ln1503_45_fu_11964_p4 = m_28_V_fu_11838_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_460_fu_9595_p4() {
    lshr_ln1503_460_fu_9595_p4 = add_ln209_237_fu_9438_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_461_fu_9617_p4() {
    lshr_ln1503_461_fu_9617_p4 = add_ln209_237_fu_9438_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_462_fu_9639_p4() {
    lshr_ln1503_462_fu_9639_p4 = add_ln209_237_fu_9438_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_463_fu_9665_p4() {
    lshr_ln1503_463_fu_9665_p4 = add_ln209_198_reg_18241.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_464_fu_9685_p4() {
    lshr_ln1503_464_fu_9685_p4 = add_ln209_198_reg_18241.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_465_fu_9705_p4() {
    lshr_ln1503_465_fu_9705_p4 = add_ln209_198_reg_18241.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_466_fu_9746_p4() {
    lshr_ln1503_466_fu_9746_p4 = add_ln209_240_fu_9589_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_467_fu_9768_p4() {
    lshr_ln1503_467_fu_9768_p4 = add_ln209_240_fu_9589_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_468_fu_9790_p4() {
    lshr_ln1503_468_fu_9790_p4 = add_ln209_240_fu_9589_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_469_fu_9816_p4() {
    lshr_ln1503_469_fu_9816_p4 = add_ln209_201_reg_18253.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_46_fu_11996_p4() {
    lshr_ln1503_46_fu_11996_p4 = m_29_V_fu_11914_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_470_fu_9836_p4() {
    lshr_ln1503_470_fu_9836_p4 = add_ln209_201_reg_18253.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_471_fu_9856_p4() {
    lshr_ln1503_471_fu_9856_p4 = add_ln209_201_reg_18253.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_472_fu_9897_p4() {
    lshr_ln1503_472_fu_9897_p4 = add_ln209_243_fu_9740_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_473_fu_9919_p4() {
    lshr_ln1503_473_fu_9919_p4 = add_ln209_243_fu_9740_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_474_fu_9941_p4() {
    lshr_ln1503_474_fu_9941_p4 = add_ln209_243_fu_9740_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_475_fu_9967_p4() {
    lshr_ln1503_475_fu_9967_p4 = add_ln209_204_reg_18264.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_476_fu_9987_p4() {
    lshr_ln1503_476_fu_9987_p4 = add_ln209_204_reg_18264.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_477_fu_10007_p4() {
    lshr_ln1503_477_fu_10007_p4 = add_ln209_204_reg_18264.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_478_fu_10048_p4() {
    lshr_ln1503_478_fu_10048_p4 = add_ln209_246_fu_9891_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_479_fu_10070_p4() {
    lshr_ln1503_479_fu_10070_p4 = add_ln209_246_fu_9891_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_47_fu_12018_p4() {
    lshr_ln1503_47_fu_12018_p4 = m_29_V_fu_11914_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_480_fu_10092_p4() {
    lshr_ln1503_480_fu_10092_p4 = add_ln209_246_fu_9891_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_481_fu_10118_p4() {
    lshr_ln1503_481_fu_10118_p4 = add_ln209_207_reg_18275.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_482_fu_10138_p4() {
    lshr_ln1503_482_fu_10138_p4 = add_ln209_207_reg_18275.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_483_fu_10158_p4() {
    lshr_ln1503_483_fu_10158_p4 = add_ln209_207_reg_18275.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_484_fu_10199_p4() {
    lshr_ln1503_484_fu_10199_p4 = add_ln209_249_fu_10042_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_485_fu_10221_p4() {
    lshr_ln1503_485_fu_10221_p4 = add_ln209_249_fu_10042_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_486_fu_10243_p4() {
    lshr_ln1503_486_fu_10243_p4 = add_ln209_249_fu_10042_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_487_fu_8374_p4() {
    lshr_ln1503_487_fu_8374_p4 = add_ln209_210_fu_7924_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_488_fu_8396_p4() {
    lshr_ln1503_488_fu_8396_p4 = add_ln209_210_fu_7924_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_489_fu_8418_p4() {
    lshr_ln1503_489_fu_8418_p4 = add_ln209_210_fu_7924_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_48_fu_12040_p4() {
    lshr_ln1503_48_fu_12040_p4 = m_29_V_fu_11914_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_490_fu_10285_p4() {
    lshr_ln1503_490_fu_10285_p4 = add_ln209_252_fu_10193_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_491_fu_10307_p4() {
    lshr_ln1503_491_fu_10307_p4 = add_ln209_252_fu_10193_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_492_fu_10329_p4() {
    lshr_ln1503_492_fu_10329_p4 = add_ln209_252_fu_10193_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_493_fu_9135_p4() {
    lshr_ln1503_493_fu_9135_p4 = add_ln209_213_fu_8518_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_494_fu_9157_p4() {
    lshr_ln1503_494_fu_9157_p4 = add_ln209_213_fu_8518_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_495_fu_9179_p4() {
    lshr_ln1503_495_fu_9179_p4 = add_ln209_213_fu_8518_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_49_fu_4657_p4() {
    lshr_ln1503_49_fu_4657_p4 = m_16_V_fu_4231_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_4_fu_4339_p4() {
    lshr_ln1503_4_fu_4339_p4 = m_16_V_fu_4231_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_50_fu_4679_p4() {
    lshr_ln1503_50_fu_4679_p4 = m_16_V_fu_4231_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_51_fu_4701_p4() {
    lshr_ln1503_51_fu_4701_p4 = m_16_V_fu_4231_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_52_fu_12066_p4() {
    lshr_ln1503_52_fu_12066_p4 = m_30_V_fu_11990_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_53_fu_12088_p4() {
    lshr_ln1503_53_fu_12088_p4 = m_30_V_fu_11990_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_54_fu_12110_p4() {
    lshr_ln1503_54_fu_12110_p4 = m_30_V_fu_11990_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_55_fu_4727_p4() {
    lshr_ln1503_55_fu_4727_p4 = m_17_V_fu_4333_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_56_fu_4749_p4() {
    lshr_ln1503_56_fu_4749_p4 = m_17_V_fu_4333_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_57_fu_4771_p4() {
    lshr_ln1503_57_fu_4771_p4 = m_17_V_fu_4333_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_58_fu_12999_p4() {
    lshr_ln1503_58_fu_12999_p4 = m_31_V_fu_12985_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_59_fu_13021_p4() {
    lshr_ln1503_59_fu_13021_p4 = m_31_V_fu_12985_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_5_fu_4361_p4() {
    lshr_ln1503_5_fu_4361_p4 = m_16_V_fu_4231_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_60_fu_13043_p4() {
    lshr_ln1503_60_fu_13043_p4 = m_31_V_fu_12985_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_61_fu_4797_p4() {
    lshr_ln1503_61_fu_4797_p4 = m_18_V_fu_4511_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_62_fu_4819_p4() {
    lshr_ln1503_62_fu_4819_p4 = m_18_V_fu_4511_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_63_fu_4841_p4() {
    lshr_ln1503_63_fu_4841_p4 = m_18_V_fu_4511_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_64_fu_13084_p4() {
    lshr_ln1503_64_fu_13084_p4 = m_32_V_fu_12994_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_65_fu_13106_p4() {
    lshr_ln1503_65_fu_13106_p4 = m_32_V_fu_12994_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_66_fu_13128_p4() {
    lshr_ln1503_66_fu_13128_p4 = m_32_V_fu_12994_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_67_fu_12141_p4() {
    lshr_ln1503_67_fu_12141_p4 = m_19_V_fu_10916_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_68_fu_12163_p4() {
    lshr_ln1503_68_fu_12163_p4 = m_19_V_fu_10916_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_69_fu_12185_p4() {
    lshr_ln1503_69_fu_12185_p4 = m_19_V_fu_10916_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_6_fu_4383_p4() {
    lshr_ln1503_6_fu_4383_p4 = m_16_V_fu_4231_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_70_fu_13169_p4() {
    lshr_ln1503_70_fu_13169_p4 = m_33_V_fu_13078_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_71_fu_13191_p4() {
    lshr_ln1503_71_fu_13191_p4 = m_33_V_fu_13078_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_72_fu_13213_p4() {
    lshr_ln1503_72_fu_13213_p4 = m_33_V_fu_13078_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_73_fu_12211_p4() {
    lshr_ln1503_73_fu_12211_p4 = m_20_V_fu_11023_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_74_fu_12233_p4() {
    lshr_ln1503_74_fu_12233_p4 = m_20_V_fu_11023_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_75_fu_12255_p4() {
    lshr_ln1503_75_fu_12255_p4 = m_20_V_fu_11023_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_76_fu_13254_p4() {
    lshr_ln1503_76_fu_13254_p4 = m_34_V_fu_13163_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_77_fu_13276_p4() {
    lshr_ln1503_77_fu_13276_p4 = m_34_V_fu_13163_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_78_fu_13298_p4() {
    lshr_ln1503_78_fu_13298_p4 = m_34_V_fu_13163_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_79_fu_12281_p4() {
    lshr_ln1503_79_fu_12281_p4 = m_21_V_fu_11201_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_7_fu_10849_p4() {
    lshr_ln1503_7_fu_10849_p4 = phi_ln1503_3_reg_1353.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_80_fu_12303_p4() {
    lshr_ln1503_80_fu_12303_p4 = m_21_V_fu_11201_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_81_fu_12325_p4() {
    lshr_ln1503_81_fu_12325_p4 = m_21_V_fu_11201_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_82_fu_13339_p4() {
    lshr_ln1503_82_fu_13339_p4 = m_35_V_fu_13248_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_83_fu_13361_p4() {
    lshr_ln1503_83_fu_13361_p4 = m_35_V_fu_13248_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_84_fu_13383_p4() {
    lshr_ln1503_84_fu_13383_p4 = m_35_V_fu_13248_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_85_fu_12351_p4() {
    lshr_ln1503_85_fu_12351_p4 = m_22_V_fu_11379_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_86_fu_12373_p4() {
    lshr_ln1503_86_fu_12373_p4 = m_22_V_fu_11379_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_87_fu_12395_p4() {
    lshr_ln1503_87_fu_12395_p4 = m_22_V_fu_11379_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_88_fu_13424_p4() {
    lshr_ln1503_88_fu_13424_p4 = m_36_V_fu_13333_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_89_fu_13446_p4() {
    lshr_ln1503_89_fu_13446_p4 = m_36_V_fu_13333_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_8_fu_4443_p4() {
    lshr_ln1503_8_fu_4443_p4 = phi_ln1503_4_reg_1365.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_90_fu_13468_p4() {
    lshr_ln1503_90_fu_13468_p4 = m_36_V_fu_13333_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_91_fu_12421_p4() {
    lshr_ln1503_91_fu_12421_p4 = m_23_V_fu_11460_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_92_fu_12443_p4() {
    lshr_ln1503_92_fu_12443_p4 = m_23_V_fu_11460_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_93_fu_12465_p4() {
    lshr_ln1503_93_fu_12465_p4 = m_23_V_fu_11460_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_94_fu_13499_p4() {
    lshr_ln1503_94_fu_13499_p4 = m_37_V_fu_13418_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_95_fu_13521_p4() {
    lshr_ln1503_95_fu_13521_p4 = m_37_V_fu_13418_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_96_fu_13543_p4() {
    lshr_ln1503_96_fu_13543_p4 = m_37_V_fu_13418_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_97_fu_12491_p4() {
    lshr_ln1503_97_fu_12491_p4 = m_24_V_fu_11536_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_98_fu_12513_p4() {
    lshr_ln1503_98_fu_12513_p4 = m_24_V_fu_11536_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_99_fu_12535_p4() {
    lshr_ln1503_99_fu_12535_p4 = m_24_V_fu_11536_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_9_fu_4517_p4() {
    lshr_ln1503_9_fu_4517_p4 = m_17_V_fu_4333_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_s_fu_4539_p4() {
    lshr_ln1503_s_fu_4539_p4 = m_17_V_fu_4333_p2.read().range(31, 19);
}

void sha256d::thread_m_0_V_fu_4123_p1() {
    m_0_V_fu_4123_p1 = esl_zext<32,8>(phi_ln1503_7_reg_1399.read());
}

void sha256d::thread_m_16_V_fu_4231_p2() {
    m_16_V_fu_4231_p2 = (!or_ln2_fu_4223_p3.read().is_01() || !m_0_V_fu_4123_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln2_fu_4223_p3.read()) + sc_biguint<32>(m_0_V_fu_4123_p1.read()));
}

void sha256d::thread_m_17_V_fu_4333_p2() {
    m_17_V_fu_4333_p2 = (!or_ln1357_1_fu_4325_p3.read().is_01() || !m_1_V_fu_4127_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_1_fu_4325_p3.read()) + sc_biguint<32>(m_1_V_fu_4127_p1.read()));
}

void sha256d::thread_m_18_V_fu_4511_p2() {
    m_18_V_fu_4511_p2 = (!add_ln209_fu_4505_p2.read().is_01() || !or_ln1357_2_fu_4497_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_fu_4505_p2.read()) + sc_biguint<32>(or_ln1357_2_fu_4497_p3.read()));
}

void sha256d::thread_m_19_V_fu_10916_p2() {
    m_19_V_fu_10916_p2 = (!add_ln209_2_fu_10911_p2.read().is_01() || !or_ln1357_3_fu_10903_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_2_fu_10911_p2.read()) + sc_biguint<32>(or_ln1357_3_fu_10903_p3.read()));
}

void sha256d::thread_m_1_V_fu_4127_p1() {
    m_1_V_fu_4127_p1 = esl_zext<32,8>(phi_ln1503_6_reg_1388.read());
}

void sha256d::thread_m_20_V_fu_11023_p2() {
    m_20_V_fu_11023_p2 = (!add_ln209_4_fu_11018_p2.read().is_01() || !or_ln1357_4_fu_11010_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_4_fu_11018_p2.read()) + sc_biguint<32>(or_ln1357_4_fu_11010_p3.read()));
}

void sha256d::thread_m_21_V_fu_11201_p2() {
    m_21_V_fu_11201_p2 = (!add_ln209_6_fu_11195_p2.read().is_01() || !or_ln1357_5_fu_11187_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_6_fu_11195_p2.read()) + sc_biguint<32>(or_ln1357_5_fu_11187_p3.read()));
}

void sha256d::thread_m_22_V_fu_11379_p2() {
    m_22_V_fu_11379_p2 = (!add_ln209_8_fu_11373_p2.read().is_01() || !or_ln1357_6_fu_11365_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_8_fu_11373_p2.read()) + sc_biguint<32>(or_ln1357_6_fu_11365_p3.read()));
}

void sha256d::thread_m_23_V_fu_11460_p2() {
    m_23_V_fu_11460_p2 = (!add_ln209_10_fu_11455_p2.read().is_01() || !xor_ln1357_19_fu_11449_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_10_fu_11455_p2.read()) + sc_biguint<32>(xor_ln1357_19_fu_11449_p2.read()));
}

void sha256d::thread_m_24_V_fu_11536_p2() {
    m_24_V_fu_11536_p2 = (!xor_ln1357_22_fu_11530_p2.read().is_01() || !m_17_V_reg_17948.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_22_fu_11530_p2.read()) + sc_biguint<32>(m_17_V_reg_17948.read()));
}

void sha256d::thread_m_25_V_fu_11611_p2() {
    m_25_V_fu_11611_p2 = (!xor_ln1357_24_fu_11605_p2.read().is_01() || !m_18_V_reg_17955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_24_fu_11605_p2.read()) + sc_biguint<32>(m_18_V_reg_17955.read()));
}

void sha256d::thread_m_26_V_fu_11686_p2() {
    m_26_V_fu_11686_p2 = (!xor_ln1357_26_fu_11680_p2.read().is_01() || !m_19_V_fu_10916_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_26_fu_11680_p2.read()) + sc_biguint<32>(m_19_V_fu_10916_p2.read()));
}

void sha256d::thread_m_27_V_fu_11762_p2() {
    m_27_V_fu_11762_p2 = (!xor_ln1357_28_fu_11756_p2.read().is_01() || !m_20_V_fu_11023_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_28_fu_11756_p2.read()) + sc_biguint<32>(m_20_V_fu_11023_p2.read()));
}

void sha256d::thread_m_28_V_fu_11838_p2() {
    m_28_V_fu_11838_p2 = (!xor_ln1357_30_fu_11832_p2.read().is_01() || !m_21_V_fu_11201_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_30_fu_11832_p2.read()) + sc_biguint<32>(m_21_V_fu_11201_p2.read()));
}

void sha256d::thread_m_29_V_fu_11914_p2() {
    m_29_V_fu_11914_p2 = (!xor_ln1357_32_fu_11908_p2.read().is_01() || !m_22_V_fu_11379_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_32_fu_11908_p2.read()) + sc_biguint<32>(m_22_V_fu_11379_p2.read()));
}

void sha256d::thread_m_2_V_fu_4131_p1() {
    m_2_V_fu_4131_p1 = esl_zext<32,8>(phi_ln1503_5_reg_1377.read());
}

void sha256d::thread_m_30_V_fu_11990_p2() {
    m_30_V_fu_11990_p2 = (!xor_ln1357_34_fu_11984_p2.read().is_01() || !m_23_V_fu_11460_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_34_fu_11984_p2.read()) + sc_biguint<32>(m_23_V_fu_11460_p2.read()));
}

void sha256d::thread_m_31_V_fu_12985_p2() {
    m_31_V_fu_12985_p2 = (!add_ln209_19_fu_12981_p2.read().is_01() || !xor_ln1357_36_reg_18647.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_19_fu_12981_p2.read()) + sc_biguint<32>(xor_ln1357_36_reg_18647.read()));
}

void sha256d::thread_m_32_V_fu_12994_p2() {
    m_32_V_fu_12994_p2 = (!add_ln209_22_reg_18652.read().is_01() || !add_ln209_21_fu_12990_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_22_reg_18652.read()) + sc_biguint<32>(add_ln209_21_fu_12990_p2.read()));
}

void sha256d::thread_m_33_V_fu_13078_p2() {
    m_33_V_fu_13078_p2 = (!add_ln209_25_fu_13073_p2.read().is_01() || !add_ln209_24_fu_13069_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_25_fu_13073_p2.read()) + sc_biguint<32>(add_ln209_24_fu_13069_p2.read()));
}

void sha256d::thread_m_34_V_fu_13163_p2() {
    m_34_V_fu_13163_p2 = (!add_ln209_28_fu_13158_p2.read().is_01() || !add_ln209_27_fu_13154_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_28_fu_13158_p2.read()) + sc_biguint<32>(add_ln209_27_fu_13154_p2.read()));
}

void sha256d::thread_m_35_V_fu_13248_p2() {
    m_35_V_fu_13248_p2 = (!add_ln209_31_fu_13243_p2.read().is_01() || !add_ln209_30_fu_13239_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_31_fu_13243_p2.read()) + sc_biguint<32>(add_ln209_30_fu_13239_p2.read()));
}

void sha256d::thread_m_36_V_fu_13333_p2() {
    m_36_V_fu_13333_p2 = (!add_ln209_34_fu_13328_p2.read().is_01() || !add_ln209_33_fu_13324_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_34_fu_13328_p2.read()) + sc_biguint<32>(add_ln209_33_fu_13324_p2.read()));
}

void sha256d::thread_m_37_V_fu_13418_p2() {
    m_37_V_fu_13418_p2 = (!add_ln209_37_fu_13413_p2.read().is_01() || !add_ln209_36_fu_13409_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_37_fu_13413_p2.read()) + sc_biguint<32>(add_ln209_36_fu_13409_p2.read()));
}

void sha256d::thread_m_38_V_fu_14068_p2() {
    m_38_V_fu_14068_p2 = (!add_ln209_40_reg_18766.read().is_01() || !add_ln209_39_fu_14064_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_40_reg_18766.read()) + sc_biguint<32>(add_ln209_39_fu_14064_p2.read()));
}

void sha256d::thread_m_39_V_fu_14077_p2() {
    m_39_V_fu_14077_p2 = (!add_ln209_43_reg_18771.read().is_01() || !add_ln209_42_fu_14073_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_43_reg_18771.read()) + sc_biguint<32>(add_ln209_42_fu_14073_p2.read()));
}

void sha256d::thread_m_3_V_fu_10795_p1() {
    m_3_V_fu_10795_p1 = esl_zext<32,8>(phi_ln1503_4_reg_1365.read());
}

void sha256d::thread_m_40_V_fu_14161_p2() {
    m_40_V_fu_14161_p2 = (!add_ln209_46_fu_14156_p2.read().is_01() || !add_ln209_45_fu_14152_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_46_fu_14156_p2.read()) + sc_biguint<32>(add_ln209_45_fu_14152_p2.read()));
}

void sha256d::thread_m_41_V_fu_14246_p2() {
    m_41_V_fu_14246_p2 = (!add_ln209_49_fu_14241_p2.read().is_01() || !add_ln209_48_fu_14237_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_49_fu_14241_p2.read()) + sc_biguint<32>(add_ln209_48_fu_14237_p2.read()));
}

void sha256d::thread_m_42_V_fu_14331_p2() {
    m_42_V_fu_14331_p2 = (!add_ln209_52_fu_14326_p2.read().is_01() || !add_ln209_51_fu_14322_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_52_fu_14326_p2.read()) + sc_biguint<32>(add_ln209_51_fu_14322_p2.read()));
}

void sha256d::thread_m_43_V_fu_14416_p2() {
    m_43_V_fu_14416_p2 = (!add_ln209_55_fu_14411_p2.read().is_01() || !add_ln209_54_fu_14407_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_55_fu_14411_p2.read()) + sc_biguint<32>(add_ln209_54_fu_14407_p2.read()));
}

void sha256d::thread_m_44_V_fu_14501_p2() {
    m_44_V_fu_14501_p2 = (!add_ln209_58_fu_14496_p2.read().is_01() || !add_ln209_57_fu_14492_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_58_fu_14496_p2.read()) + sc_biguint<32>(add_ln209_57_fu_14492_p2.read()));
}

void sha256d::thread_m_45_V_fu_14587_p2() {
    m_45_V_fu_14587_p2 = (!add_ln209_61_fu_14582_p2.read().is_01() || !add_ln209_60_fu_14577_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_61_fu_14582_p2.read()) + sc_biguint<32>(add_ln209_60_fu_14577_p2.read()));
}

void sha256d::thread_m_46_V_fu_15307_p2() {
    m_46_V_fu_15307_p2 = (!add_ln209_64_reg_18866.read().is_01() || !add_ln209_63_fu_15303_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_64_reg_18866.read()) + sc_biguint<32>(add_ln209_63_fu_15303_p2.read()));
}

void sha256d::thread_m_47_V_fu_15316_p2() {
    m_47_V_fu_15316_p2 = (!add_ln209_67_reg_18871.read().is_01() || !add_ln209_66_fu_15312_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_67_reg_18871.read()) + sc_biguint<32>(add_ln209_66_fu_15312_p2.read()));
}

void sha256d::thread_m_48_V_fu_15400_p2() {
    m_48_V_fu_15400_p2 = (!add_ln209_70_fu_15395_p2.read().is_01() || !add_ln209_69_fu_15391_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_70_fu_15395_p2.read()) + sc_biguint<32>(add_ln209_69_fu_15391_p2.read()));
}

void sha256d::thread_m_49_V_fu_15485_p2() {
    m_49_V_fu_15485_p2 = (!add_ln209_73_fu_15480_p2.read().is_01() || !add_ln209_72_fu_15476_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_73_fu_15480_p2.read()) + sc_biguint<32>(add_ln209_72_fu_15476_p2.read()));
}

void sha256d::thread_m_4_V_fu_10799_p1() {
    m_4_V_fu_10799_p1 = esl_zext<32,8>(phi_ln1503_3_reg_1353.read());
}

void sha256d::thread_m_50_V_fu_15570_p2() {
    m_50_V_fu_15570_p2 = (!add_ln209_76_fu_15565_p2.read().is_01() || !add_ln209_75_fu_15561_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_76_fu_15565_p2.read()) + sc_biguint<32>(add_ln209_75_fu_15561_p2.read()));
}

void sha256d::thread_m_51_V_fu_15655_p2() {
    m_51_V_fu_15655_p2 = (!add_ln209_79_fu_15650_p2.read().is_01() || !add_ln209_78_fu_15646_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_79_fu_15650_p2.read()) + sc_biguint<32>(add_ln209_78_fu_15646_p2.read()));
}

void sha256d::thread_m_52_V_fu_15740_p2() {
    m_52_V_fu_15740_p2 = (!add_ln209_82_fu_15735_p2.read().is_01() || !add_ln209_81_fu_15731_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_82_fu_15735_p2.read()) + sc_biguint<32>(add_ln209_81_fu_15731_p2.read()));
}

void sha256d::thread_m_53_V_fu_15826_p2() {
    m_53_V_fu_15826_p2 = (!add_ln209_85_fu_15821_p2.read().is_01() || !add_ln209_84_fu_15816_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_85_fu_15821_p2.read()) + sc_biguint<32>(add_ln209_84_fu_15816_p2.read()));
}

void sha256d::thread_m_54_V_fu_16208_p2() {
    m_54_V_fu_16208_p2 = (!add_ln209_88_reg_18963.read().is_01() || !add_ln209_87_fu_16204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_88_reg_18963.read()) + sc_biguint<32>(add_ln209_87_fu_16204_p2.read()));
}

void sha256d::thread_m_55_V_fu_16217_p2() {
    m_55_V_fu_16217_p2 = (!add_ln209_91_reg_18968.read().is_01() || !add_ln209_90_fu_16213_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_91_reg_18968.read()) + sc_biguint<32>(add_ln209_90_fu_16213_p2.read()));
}

void sha256d::thread_m_56_V_fu_16301_p2() {
    m_56_V_fu_16301_p2 = (!add_ln209_94_fu_16296_p2.read().is_01() || !add_ln209_93_fu_16292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_94_fu_16296_p2.read()) + sc_biguint<32>(add_ln209_93_fu_16292_p2.read()));
}

void sha256d::thread_m_57_V_fu_16386_p2() {
    m_57_V_fu_16386_p2 = (!add_ln209_97_fu_16381_p2.read().is_01() || !add_ln209_96_fu_16377_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_97_fu_16381_p2.read()) + sc_biguint<32>(add_ln209_96_fu_16377_p2.read()));
}

void sha256d::thread_m_58_V_fu_16471_p2() {
    m_58_V_fu_16471_p2 = (!add_ln209_100_fu_16466_p2.read().is_01() || !add_ln209_99_fu_16462_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_100_fu_16466_p2.read()) + sc_biguint<32>(add_ln209_99_fu_16462_p2.read()));
}

void sha256d::thread_m_59_V_fu_16556_p2() {
    m_59_V_fu_16556_p2 = (!add_ln209_103_fu_16551_p2.read().is_01() || !add_ln209_102_fu_16547_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_103_fu_16551_p2.read()) + sc_biguint<32>(add_ln209_102_fu_16547_p2.read()));
}

void sha256d::thread_m_5_V_fu_10803_p1() {
    m_5_V_fu_10803_p1 = esl_zext<32,8>(phi_ln1503_2_reg_1341.read());
}

void sha256d::thread_m_60_V_fu_16641_p2() {
    m_60_V_fu_16641_p2 = (!add_ln209_106_fu_16636_p2.read().is_01() || !add_ln209_105_fu_16632_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_106_fu_16636_p2.read()) + sc_biguint<32>(add_ln209_105_fu_16632_p2.read()));
}

void sha256d::thread_m_61_V_fu_16727_p2() {
    m_61_V_fu_16727_p2 = (!add_ln209_109_fu_16722_p2.read().is_01() || !add_ln209_108_fu_16717_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_109_fu_16722_p2.read()) + sc_biguint<32>(add_ln209_108_fu_16717_p2.read()));
}

void sha256d::thread_m_62_V_fu_16809_p2() {
    m_62_V_fu_16809_p2 = (!add_ln209_112_reg_18978.read().is_01() || !add_ln209_111_fu_16803_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_112_reg_18978.read()) + sc_biguint<32>(add_ln209_111_fu_16803_p2.read()));
}

void sha256d::thread_m_63_V_fu_16890_p2() {
    m_63_V_fu_16890_p2 = (!add_ln209_115_reg_18983.read().is_01() || !add_ln209_114_fu_16884_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_115_reg_18983.read()) + sc_biguint<32>(add_ln209_114_fu_16884_p2.read()));
}

void sha256d::thread_m_6_V_fu_10807_p1() {
    m_6_V_fu_10807_p1 = esl_zext<32,8>(phi_ln1503_1_reg_1329.read());
}

void sha256d::thread_m_7_V_fu_10811_p1() {
    m_7_V_fu_10811_p1 = esl_zext<32,8>(phi_ln1503_reg_1317.read());
}

void sha256d::thread_m_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        m_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_10383_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_3E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_3C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_3A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_38);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_36);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_34);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_30);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_2E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_2C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_2A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_28);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_26);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_24);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_22);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_20);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_1E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_1C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_1A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_18);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_16);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_14);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_12);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_10);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else {
        m_V_address0 = "XXXXXX";
    }
}

void sha256d::thread_m_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_3F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_3D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_3B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_39);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_37);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_35);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_33);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_31);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_2F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_2D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_2B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_29);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_27);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_25);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_23);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_21);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_1F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_1D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_1B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_19);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_17);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_15);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_13);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_11);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_address1 =  (sc_lv<6>) (ap_const_lv64_1);
    } else {
        m_V_address1 = "XXXXXX";
    }
}

void sha256d::thread_m_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        m_V_ce0 = ap_const_logic_1;
    } else {
        m_V_ce0 = ap_const_logic_0;
    }
}

void sha256d::thread_m_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        m_V_ce1 = ap_const_logic_1;
    } else {
        m_V_ce1 = ap_const_logic_0;
    }
}

void sha256d::thread_m_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_V_d0 = add_ln209_255_reg_18424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_d0 = add_ln209_249_reg_18414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_d0 = add_ln209_243_reg_18404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_d0 = add_ln209_237_reg_18394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_d0 = add_ln209_231_reg_18378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_d0 = add_ln209_225_reg_18351.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_d0 = add_ln209_219_reg_18339.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_d0 = add_ln209_213_reg_18327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_d0 = add_ln209_207_reg_18275.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_d0 = add_ln209_201_reg_18253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_d0 = add_ln209_195_reg_18229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_d0 = add_ln209_189_reg_18206.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_d0 = add_ln209_183_reg_18194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_d0 = add_ln209_177_reg_18182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_d0 = add_ln209_171_reg_18120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_d0 = add_ln209_165_reg_18098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_d0 = add_ln209_159_reg_18074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_d0 = add_ln209_153_reg_18051.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_d0 = add_ln209_147_reg_18039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_d0 = add_ln209_141_reg_18027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_d0 = add_ln209_135_reg_17859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_d0 = add_ln209_129_reg_17837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_d0 = add_ln209_123_reg_17815.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_d0 = add_ln209_118_reg_17793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_d0 = zext_ln209_14_fu_4911_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_d0 = zext_ln209_12_fu_4903_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_d0 = zext_ln209_10_fu_4895_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_d0 = zext_ln209_8_fu_4887_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_d0 = zext_ln209_6_fu_4883_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_d0 = zext_ln209_4_fu_4875_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_d0 = zext_ln209_2_fu_4867_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_d0 = zext_ln209_fu_1661_p1.read();
    } else {
        m_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_V_d1 = add_ln209_258_reg_18429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_d1 = add_ln209_252_reg_18419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_d1 = add_ln209_246_reg_18409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_d1 = add_ln209_240_reg_18399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_d1 = add_ln209_234_reg_18389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_d1 = add_ln209_228_reg_18357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_d1 = add_ln209_222_reg_18345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_d1 = add_ln209_216_reg_18333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_d1 = add_ln209_210_reg_18286.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_d1 = add_ln209_204_reg_18264.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_d1 = add_ln209_198_reg_18241.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_d1 = add_ln209_192_reg_18217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_d1 = add_ln209_186_reg_18200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_d1 = add_ln209_180_reg_18188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_d1 = add_ln209_174_reg_18131.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_d1 = add_ln209_168_reg_18109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_d1 = add_ln209_162_reg_18086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_d1 = add_ln209_156_reg_18062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_d1 = add_ln209_150_reg_18045.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_d1 = add_ln209_144_reg_18033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_d1 = add_ln209_138_reg_17870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_d1 = add_ln209_132_reg_17848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_d1 = add_ln209_126_reg_17826.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_d1 = add_ln209_120_reg_17804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_d1 = zext_ln209_15_fu_4915_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_d1 = zext_ln209_13_fu_4907_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_d1 = zext_ln209_11_fu_4899_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_d1 = zext_ln209_9_fu_4891_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_d1 = zext_ln209_7_reg_17748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_d1 = zext_ln209_5_fu_4879_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_d1 = zext_ln209_3_fu_4871_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_d1 = zext_ln209_1_fu_1676_p1.read();
    } else {
        m_V_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln72_fu_1639_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        m_V_we0 = ap_const_logic_1;
    } else {
        m_V_we0 = ap_const_logic_0;
    }
}

void sha256d::thread_m_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln72_fu_1639_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        m_V_we1 = ap_const_logic_1;
    } else {
        m_V_we1 = ap_const_logic_0;
    }
}

void sha256d::thread_or_ln1356_100_fu_15357_p3() {
    or_ln1356_100_fu_15357_p3 = esl_concat<19,13>(trunc_ln1503_95_fu_15353_p1.read(), lshr_ln1503_149_fu_15343_p4.read());
}

void sha256d::thread_or_ln1356_101_fu_13728_p3() {
    or_ln1356_101_fu_13728_p3 = esl_concat<7,25>(trunc_ln1503_96_fu_13724_p1.read(), lshr_ln1503_151_fu_13714_p4.read());
}

void sha256d::thread_or_ln1356_102_fu_13750_p3() {
    or_ln1356_102_fu_13750_p3 = esl_concat<18,14>(trunc_ln1503_97_fu_13746_p1.read(), lshr_ln1503_152_fu_13736_p4.read());
}

void sha256d::thread_or_ln1356_103_fu_15420_p3() {
    or_ln1356_103_fu_15420_p3 = esl_concat<17,15>(trunc_ln1503_98_fu_15416_p1.read(), lshr_ln1503_154_fu_15406_p4.read());
}

void sha256d::thread_or_ln1356_104_fu_15442_p3() {
    or_ln1356_104_fu_15442_p3 = esl_concat<19,13>(trunc_ln1503_99_fu_15438_p1.read(), lshr_ln1503_155_fu_15428_p4.read());
}

void sha256d::thread_or_ln1356_105_fu_13798_p3() {
    or_ln1356_105_fu_13798_p3 = esl_concat<7,25>(trunc_ln1503_100_fu_13794_p1.read(), lshr_ln1503_157_fu_13784_p4.read());
}

void sha256d::thread_or_ln1356_106_fu_13820_p3() {
    or_ln1356_106_fu_13820_p3 = esl_concat<18,14>(trunc_ln1503_101_fu_13816_p1.read(), lshr_ln1503_158_fu_13806_p4.read());
}

void sha256d::thread_or_ln1356_107_fu_15505_p3() {
    or_ln1356_107_fu_15505_p3 = esl_concat<17,15>(trunc_ln1503_102_fu_15501_p1.read(), lshr_ln1503_160_fu_15491_p4.read());
}

void sha256d::thread_or_ln1356_108_fu_15527_p3() {
    or_ln1356_108_fu_15527_p3 = esl_concat<19,13>(trunc_ln1503_103_fu_15523_p1.read(), lshr_ln1503_161_fu_15513_p4.read());
}

void sha256d::thread_or_ln1356_109_fu_13868_p3() {
    or_ln1356_109_fu_13868_p3 = esl_concat<7,25>(trunc_ln1503_104_fu_13864_p1.read(), lshr_ln1503_163_fu_13854_p4.read());
}

void sha256d::thread_or_ln1356_10_fu_11065_p3() {
    or_ln1356_10_fu_11065_p3 = esl_concat<19,13>(trunc_ln1503_7_fu_11061_p1.read(), lshr_ln1503_15_fu_11051_p4.read());
}

void sha256d::thread_or_ln1356_110_fu_13890_p3() {
    or_ln1356_110_fu_13890_p3 = esl_concat<18,14>(trunc_ln1503_105_fu_13886_p1.read(), lshr_ln1503_164_fu_13876_p4.read());
}

void sha256d::thread_or_ln1356_111_fu_15590_p3() {
    or_ln1356_111_fu_15590_p3 = esl_concat<17,15>(trunc_ln1503_106_fu_15586_p1.read(), lshr_ln1503_166_fu_15576_p4.read());
}

void sha256d::thread_or_ln1356_112_fu_15612_p3() {
    or_ln1356_112_fu_15612_p3 = esl_concat<19,13>(trunc_ln1503_107_fu_15608_p1.read(), lshr_ln1503_167_fu_15598_p4.read());
}

void sha256d::thread_or_ln1356_113_fu_13938_p3() {
    or_ln1356_113_fu_13938_p3 = esl_concat<7,25>(trunc_ln1503_108_fu_13934_p1.read(), lshr_ln1503_169_fu_13924_p4.read());
}

void sha256d::thread_or_ln1356_114_fu_13960_p3() {
    or_ln1356_114_fu_13960_p3 = esl_concat<18,14>(trunc_ln1503_109_fu_13956_p1.read(), lshr_ln1503_170_fu_13946_p4.read());
}

void sha256d::thread_or_ln1356_115_fu_15675_p3() {
    or_ln1356_115_fu_15675_p3 = esl_concat<17,15>(trunc_ln1503_110_fu_15671_p1.read(), lshr_ln1503_172_fu_15661_p4.read());
}

void sha256d::thread_or_ln1356_116_fu_15697_p3() {
    or_ln1356_116_fu_15697_p3 = esl_concat<19,13>(trunc_ln1503_111_fu_15693_p1.read(), lshr_ln1503_173_fu_15683_p4.read());
}

void sha256d::thread_or_ln1356_117_fu_14008_p3() {
    or_ln1356_117_fu_14008_p3 = esl_concat<7,25>(trunc_ln1503_112_fu_14004_p1.read(), lshr_ln1503_175_fu_13994_p4.read());
}

void sha256d::thread_or_ln1356_118_fu_14030_p3() {
    or_ln1356_118_fu_14030_p3 = esl_concat<18,14>(trunc_ln1503_113_fu_14026_p1.read(), lshr_ln1503_176_fu_14016_p4.read());
}

void sha256d::thread_or_ln1356_119_fu_15760_p3() {
    or_ln1356_119_fu_15760_p3 = esl_concat<17,15>(trunc_ln1503_114_fu_15756_p1.read(), lshr_ln1503_178_fu_15746_p4.read());
}

void sha256d::thread_or_ln1356_11_fu_11115_p4() {
    or_ln1356_11_fu_11115_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_5_fu_11111_p1.read(), ap_const_lv17_0), zext_ln1503_33_fu_11107_p1.read());
}

void sha256d::thread_or_ln1356_120_fu_15782_p3() {
    or_ln1356_120_fu_15782_p3 = esl_concat<19,13>(trunc_ln1503_115_fu_15778_p1.read(), lshr_ln1503_179_fu_15768_p4.read());
}

void sha256d::thread_or_ln1356_121_fu_14757_p3() {
    or_ln1356_121_fu_14757_p3 = esl_concat<7,25>(trunc_ln1503_116_fu_14753_p1.read(), lshr_ln1503_181_fu_14743_p4.read());
}

void sha256d::thread_or_ln1356_122_fu_14779_p3() {
    or_ln1356_122_fu_14779_p3 = esl_concat<18,14>(trunc_ln1503_117_fu_14775_p1.read(), lshr_ln1503_182_fu_14765_p4.read());
}

void sha256d::thread_or_ln1356_123_fu_15846_p3() {
    or_ln1356_123_fu_15846_p3 = esl_concat<17,15>(trunc_ln1503_118_fu_15842_p1.read(), lshr_ln1503_184_fu_15832_p4.read());
}

void sha256d::thread_or_ln1356_124_fu_15868_p3() {
    or_ln1356_124_fu_15868_p3 = esl_concat<19,13>(trunc_ln1503_119_fu_15864_p1.read(), lshr_ln1503_185_fu_15854_p4.read());
}

void sha256d::thread_or_ln1356_125_fu_14827_p3() {
    or_ln1356_125_fu_14827_p3 = esl_concat<7,25>(trunc_ln1503_120_fu_14823_p1.read(), lshr_ln1503_187_fu_14813_p4.read());
}

void sha256d::thread_or_ln1356_126_fu_14849_p3() {
    or_ln1356_126_fu_14849_p3 = esl_concat<18,14>(trunc_ln1503_121_fu_14845_p1.read(), lshr_ln1503_188_fu_14835_p4.read());
}

void sha256d::thread_or_ln1356_127_fu_15921_p3() {
    or_ln1356_127_fu_15921_p3 = esl_concat<17,15>(trunc_ln1503_122_fu_15917_p1.read(), lshr_ln1503_190_fu_15907_p4.read());
}

void sha256d::thread_or_ln1356_128_fu_15943_p3() {
    or_ln1356_128_fu_15943_p3 = esl_concat<19,13>(trunc_ln1503_123_fu_15939_p1.read(), lshr_ln1503_191_fu_15929_p4.read());
}

void sha256d::thread_or_ln1356_129_fu_14897_p3() {
    or_ln1356_129_fu_14897_p3 = esl_concat<7,25>(trunc_ln1503_124_fu_14893_p1.read(), lshr_ln1503_193_fu_14883_p4.read());
}

void sha256d::thread_or_ln1356_12_fu_11221_p3() {
    or_ln1356_12_fu_11221_p3 = esl_concat<17,15>(trunc_ln1503_8_fu_11217_p1.read(), lshr_ln1503_18_fu_11207_p4.read());
}

void sha256d::thread_or_ln1356_130_fu_14919_p3() {
    or_ln1356_130_fu_14919_p3 = esl_concat<18,14>(trunc_ln1503_125_fu_14915_p1.read(), lshr_ln1503_194_fu_14905_p4.read());
}

void sha256d::thread_or_ln1356_131_fu_16236_p3() {
    or_ln1356_131_fu_16236_p3 = esl_concat<17,15>(trunc_ln1503_126_fu_16232_p1.read(), lshr_ln1503_196_fu_16222_p4.read());
}

void sha256d::thread_or_ln1356_132_fu_16258_p3() {
    or_ln1356_132_fu_16258_p3 = esl_concat<19,13>(trunc_ln1503_127_fu_16254_p1.read(), lshr_ln1503_197_fu_16244_p4.read());
}

void sha256d::thread_or_ln1356_133_fu_14967_p3() {
    or_ln1356_133_fu_14967_p3 = esl_concat<7,25>(trunc_ln1503_128_fu_14963_p1.read(), lshr_ln1503_199_fu_14953_p4.read());
}

void sha256d::thread_or_ln1356_134_fu_14989_p3() {
    or_ln1356_134_fu_14989_p3 = esl_concat<18,14>(trunc_ln1503_129_fu_14985_p1.read(), lshr_ln1503_200_fu_14975_p4.read());
}

void sha256d::thread_or_ln1356_135_fu_16321_p3() {
    or_ln1356_135_fu_16321_p3 = esl_concat<17,15>(trunc_ln1503_130_fu_16317_p1.read(), lshr_ln1503_202_fu_16307_p4.read());
}

void sha256d::thread_or_ln1356_136_fu_16343_p3() {
    or_ln1356_136_fu_16343_p3 = esl_concat<19,13>(trunc_ln1503_131_fu_16339_p1.read(), lshr_ln1503_203_fu_16329_p4.read());
}

void sha256d::thread_or_ln1356_137_fu_15037_p3() {
    or_ln1356_137_fu_15037_p3 = esl_concat<7,25>(trunc_ln1503_132_fu_15033_p1.read(), lshr_ln1503_205_fu_15023_p4.read());
}

void sha256d::thread_or_ln1356_138_fu_15059_p3() {
    or_ln1356_138_fu_15059_p3 = esl_concat<18,14>(trunc_ln1503_133_fu_15055_p1.read(), lshr_ln1503_206_fu_15045_p4.read());
}

void sha256d::thread_or_ln1356_139_fu_16406_p3() {
    or_ln1356_139_fu_16406_p3 = esl_concat<17,15>(trunc_ln1503_134_fu_16402_p1.read(), lshr_ln1503_208_fu_16392_p4.read());
}

void sha256d::thread_or_ln1356_13_fu_11243_p3() {
    or_ln1356_13_fu_11243_p3 = esl_concat<19,13>(trunc_ln1503_9_fu_11239_p1.read(), lshr_ln1503_19_fu_11229_p4.read());
}

void sha256d::thread_or_ln1356_140_fu_16428_p3() {
    or_ln1356_140_fu_16428_p3 = esl_concat<19,13>(trunc_ln1503_135_fu_16424_p1.read(), lshr_ln1503_209_fu_16414_p4.read());
}

void sha256d::thread_or_ln1356_141_fu_15107_p3() {
    or_ln1356_141_fu_15107_p3 = esl_concat<7,25>(trunc_ln1503_136_fu_15103_p1.read(), lshr_ln1503_211_fu_15093_p4.read());
}

void sha256d::thread_or_ln1356_142_fu_15129_p3() {
    or_ln1356_142_fu_15129_p3 = esl_concat<18,14>(trunc_ln1503_137_fu_15125_p1.read(), lshr_ln1503_212_fu_15115_p4.read());
}

void sha256d::thread_or_ln1356_143_fu_16491_p3() {
    or_ln1356_143_fu_16491_p3 = esl_concat<17,15>(trunc_ln1503_138_fu_16487_p1.read(), lshr_ln1503_214_fu_16477_p4.read());
}

void sha256d::thread_or_ln1356_144_fu_16513_p3() {
    or_ln1356_144_fu_16513_p3 = esl_concat<19,13>(trunc_ln1503_139_fu_16509_p1.read(), lshr_ln1503_215_fu_16499_p4.read());
}

void sha256d::thread_or_ln1356_145_fu_15177_p3() {
    or_ln1356_145_fu_15177_p3 = esl_concat<7,25>(trunc_ln1503_140_fu_15173_p1.read(), lshr_ln1503_217_fu_15163_p4.read());
}

void sha256d::thread_or_ln1356_146_fu_15199_p3() {
    or_ln1356_146_fu_15199_p3 = esl_concat<18,14>(trunc_ln1503_141_fu_15195_p1.read(), lshr_ln1503_218_fu_15185_p4.read());
}

void sha256d::thread_or_ln1356_147_fu_16576_p3() {
    or_ln1356_147_fu_16576_p3 = esl_concat<17,15>(trunc_ln1503_142_fu_16572_p1.read(), lshr_ln1503_220_fu_16562_p4.read());
}

void sha256d::thread_or_ln1356_148_fu_16598_p3() {
    or_ln1356_148_fu_16598_p3 = esl_concat<19,13>(trunc_ln1503_143_fu_16594_p1.read(), lshr_ln1503_221_fu_16584_p4.read());
}

void sha256d::thread_or_ln1356_149_fu_15247_p3() {
    or_ln1356_149_fu_15247_p3 = esl_concat<7,25>(trunc_ln1503_144_fu_15243_p1.read(), lshr_ln1503_223_fu_15233_p4.read());
}

void sha256d::thread_or_ln1356_14_fu_11293_p4() {
    or_ln1356_14_fu_11293_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_6_fu_11289_p1.read(), ap_const_lv17_0), zext_ln1503_35_fu_11285_p1.read());
}

void sha256d::thread_or_ln1356_150_fu_15269_p3() {
    or_ln1356_150_fu_15269_p3 = esl_concat<18,14>(trunc_ln1503_145_fu_15265_p1.read(), lshr_ln1503_224_fu_15255_p4.read());
}

void sha256d::thread_or_ln1356_151_fu_16661_p3() {
    or_ln1356_151_fu_16661_p3 = esl_concat<17,15>(trunc_ln1503_146_fu_16657_p1.read(), lshr_ln1503_226_fu_16647_p4.read());
}

void sha256d::thread_or_ln1356_152_fu_16683_p3() {
    or_ln1356_152_fu_16683_p3 = esl_concat<19,13>(trunc_ln1503_147_fu_16679_p1.read(), lshr_ln1503_227_fu_16669_p4.read());
}

void sha256d::thread_or_ln1356_153_fu_15996_p3() {
    or_ln1356_153_fu_15996_p3 = esl_concat<7,25>(trunc_ln1503_148_fu_15992_p1.read(), lshr_ln1503_229_fu_15982_p4.read());
}

void sha256d::thread_or_ln1356_154_fu_16018_p3() {
    or_ln1356_154_fu_16018_p3 = esl_concat<18,14>(trunc_ln1503_149_fu_16014_p1.read(), lshr_ln1503_230_fu_16004_p4.read());
}

void sha256d::thread_or_ln1356_155_fu_16747_p3() {
    or_ln1356_155_fu_16747_p3 = esl_concat<17,15>(trunc_ln1503_150_fu_16743_p1.read(), lshr_ln1503_232_fu_16733_p4.read());
}

void sha256d::thread_or_ln1356_156_fu_16769_p3() {
    or_ln1356_156_fu_16769_p3 = esl_concat<19,13>(trunc_ln1503_151_fu_16765_p1.read(), lshr_ln1503_233_fu_16755_p4.read());
}

void sha256d::thread_or_ln1356_157_fu_16066_p3() {
    or_ln1356_157_fu_16066_p3 = esl_concat<7,25>(trunc_ln1503_152_fu_16062_p1.read(), lshr_ln1503_235_fu_16052_p4.read());
}

void sha256d::thread_or_ln1356_158_fu_16088_p3() {
    or_ln1356_158_fu_16088_p3 = esl_concat<18,14>(trunc_ln1503_153_fu_16084_p1.read(), lshr_ln1503_236_fu_16074_p4.read());
}

void sha256d::thread_or_ln1356_159_fu_16828_p3() {
    or_ln1356_159_fu_16828_p3 = esl_concat<17,15>(trunc_ln1503_154_fu_16824_p1.read(), lshr_ln1503_238_fu_16814_p4.read());
}

void sha256d::thread_or_ln1356_15_fu_11399_p3() {
    or_ln1356_15_fu_11399_p3 = esl_concat<17,15>(trunc_ln1503_10_fu_11395_p1.read(), lshr_ln1503_22_fu_11385_p4.read());
}

void sha256d::thread_or_ln1356_160_fu_16850_p3() {
    or_ln1356_160_fu_16850_p3 = esl_concat<19,13>(trunc_ln1503_155_fu_16846_p1.read(), lshr_ln1503_239_fu_16836_p4.read());
}

void sha256d::thread_or_ln1356_161_fu_16142_p3() {
    or_ln1356_161_fu_16142_p3 = esl_concat<7,25>(trunc_ln1503_156_fu_16138_p1.read(), lshr_ln1503_241_fu_16128_p4.read());
}

void sha256d::thread_or_ln1356_162_fu_16164_p3() {
    or_ln1356_162_fu_16164_p3 = esl_concat<18,14>(trunc_ln1503_157_fu_16160_p1.read(), lshr_ln1503_242_fu_16150_p4.read());
}

void sha256d::thread_or_ln1356_163_fu_1867_p4() {
    or_ln1356_163_fu_1867_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_8_fu_1863_p1.read(), ap_const_lv17_0), zext_ln1503_110_fu_1859_p1.read());
}

void sha256d::thread_or_ln1356_164_fu_2027_p4() {
    or_ln1356_164_fu_2027_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_9_fu_2023_p1.read(), ap_const_lv17_0), zext_ln1503_111_fu_2019_p1.read());
}

void sha256d::thread_or_ln1356_165_fu_2159_p3() {
    or_ln1356_165_fu_2159_p3 = esl_concat<17,15>(trunc_ln1503_158_fu_2155_p1.read(), lshr_ln1503_246_fu_2145_p4.read());
}

void sha256d::thread_or_ln1356_166_fu_2181_p3() {
    or_ln1356_166_fu_2181_p3 = esl_concat<19,13>(trunc_ln1503_159_fu_2177_p1.read(), lshr_ln1503_247_fu_2167_p4.read());
}

void sha256d::thread_or_ln1356_167_fu_2231_p4() {
    or_ln1356_167_fu_2231_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_10_fu_2227_p1.read(), ap_const_lv17_0), zext_ln1503_113_fu_2223_p1.read());
}

void sha256d::thread_or_ln1356_168_fu_2347_p3() {
    or_ln1356_168_fu_2347_p3 = esl_concat<17,15>(trunc_ln1503_160_fu_2343_p1.read(), lshr_ln1503_250_fu_2333_p4.read());
}

void sha256d::thread_or_ln1356_169_fu_2369_p3() {
    or_ln1356_169_fu_2369_p3 = esl_concat<19,13>(trunc_ln1503_161_fu_2365_p1.read(), lshr_ln1503_251_fu_2355_p4.read());
}

void sha256d::thread_or_ln1356_16_fu_11421_p3() {
    or_ln1356_16_fu_11421_p3 = esl_concat<19,13>(trunc_ln1503_11_fu_11417_p1.read(), lshr_ln1503_23_fu_11407_p4.read());
}

void sha256d::thread_or_ln1356_170_fu_2419_p4() {
    or_ln1356_170_fu_2419_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_11_fu_2415_p1.read(), ap_const_lv17_0), zext_ln1503_115_fu_2411_p1.read());
}

void sha256d::thread_or_ln1356_171_fu_2535_p3() {
    or_ln1356_171_fu_2535_p3 = esl_concat<17,15>(trunc_ln1503_162_fu_2531_p1.read(), lshr_ln1503_254_fu_2521_p4.read());
}

void sha256d::thread_or_ln1356_172_fu_2557_p3() {
    or_ln1356_172_fu_2557_p3 = esl_concat<19,13>(trunc_ln1503_163_fu_2553_p1.read(), lshr_ln1503_255_fu_2543_p4.read());
}

void sha256d::thread_or_ln1356_173_fu_2607_p4() {
    or_ln1356_173_fu_2607_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_12_fu_2603_p1.read(), ap_const_lv17_0), zext_ln1503_117_fu_2599_p1.read());
}

void sha256d::thread_or_ln1356_174_fu_2723_p3() {
    or_ln1356_174_fu_2723_p3 = esl_concat<17,15>(trunc_ln1503_164_fu_2719_p1.read(), lshr_ln1503_258_fu_2709_p4.read());
}

void sha256d::thread_or_ln1356_175_fu_2745_p3() {
    or_ln1356_175_fu_2745_p3 = esl_concat<19,13>(trunc_ln1503_165_fu_2741_p1.read(), lshr_ln1503_259_fu_2731_p4.read());
}

void sha256d::thread_or_ln1356_176_fu_2795_p4() {
    or_ln1356_176_fu_2795_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_13_fu_2791_p1.read(), ap_const_lv17_0), zext_ln1503_119_fu_2787_p1.read());
}

void sha256d::thread_or_ln1356_177_fu_2911_p3() {
    or_ln1356_177_fu_2911_p3 = esl_concat<17,15>(trunc_ln1503_166_fu_2907_p1.read(), lshr_ln1503_262_fu_2897_p4.read());
}

void sha256d::thread_or_ln1356_178_fu_2933_p3() {
    or_ln1356_178_fu_2933_p3 = esl_concat<19,13>(trunc_ln1503_167_fu_2929_p1.read(), lshr_ln1503_263_fu_2919_p4.read());
}

void sha256d::thread_or_ln1356_179_fu_2983_p4() {
    or_ln1356_179_fu_2983_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_14_fu_2979_p1.read(), ap_const_lv17_0), zext_ln1503_121_fu_2975_p1.read());
}

void sha256d::thread_or_ln1356_17_fu_11480_p3() {
    or_ln1356_17_fu_11480_p3 = esl_concat<17,15>(trunc_ln1503_12_fu_11476_p1.read(), lshr_ln1503_25_fu_11466_p4.read());
}

void sha256d::thread_or_ln1356_180_fu_3099_p3() {
    or_ln1356_180_fu_3099_p3 = esl_concat<17,15>(trunc_ln1503_168_fu_3095_p1.read(), lshr_ln1503_266_fu_3085_p4.read());
}

void sha256d::thread_or_ln1356_181_fu_3121_p3() {
    or_ln1356_181_fu_3121_p3 = esl_concat<19,13>(trunc_ln1503_169_fu_3117_p1.read(), lshr_ln1503_267_fu_3107_p4.read());
}

void sha256d::thread_or_ln1356_182_fu_3171_p4() {
    or_ln1356_182_fu_3171_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_15_fu_3167_p1.read(), ap_const_lv17_0), zext_ln1503_123_fu_3163_p1.read());
}

void sha256d::thread_or_ln1356_183_fu_3283_p3() {
    or_ln1356_183_fu_3283_p3 = esl_concat<17,15>(trunc_ln1503_170_fu_3279_p1.read(), lshr_ln1503_270_fu_3269_p4.read());
}

void sha256d::thread_or_ln1356_184_fu_3305_p3() {
    or_ln1356_184_fu_3305_p3 = esl_concat<19,13>(trunc_ln1503_171_fu_3301_p1.read(), lshr_ln1503_271_fu_3291_p4.read());
}

void sha256d::thread_or_ln1356_185_fu_3355_p4() {
    or_ln1356_185_fu_3355_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_16_fu_3351_p1.read(), ap_const_lv17_0), zext_ln1503_125_fu_3347_p1.read());
}

void sha256d::thread_or_ln1356_186_fu_3455_p3() {
    or_ln1356_186_fu_3455_p3 = esl_concat<17,15>(trunc_ln1503_172_fu_3451_p1.read(), lshr_ln1503_274_fu_3441_p4.read());
}

void sha256d::thread_or_ln1356_187_fu_3477_p3() {
    or_ln1356_187_fu_3477_p3 = esl_concat<19,13>(trunc_ln1503_173_fu_3473_p1.read(), lshr_ln1503_275_fu_3463_p4.read());
}

void sha256d::thread_or_ln1356_188_fu_3527_p4() {
    or_ln1356_188_fu_3527_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_17_fu_3523_p1.read(), ap_const_lv17_0), zext_ln1503_127_fu_3519_p1.read());
}

void sha256d::thread_or_ln1356_189_fu_4951_p3() {
    or_ln1356_189_fu_4951_p3 = esl_concat<17,15>(trunc_ln1503_174_fu_4947_p1.read(), lshr_ln1503_278_fu_4937_p4.read());
}

void sha256d::thread_or_ln1356_18_fu_11502_p3() {
    or_ln1356_18_fu_11502_p3 = esl_concat<19,13>(trunc_ln1503_13_fu_11498_p1.read(), lshr_ln1503_26_fu_11488_p4.read());
}

void sha256d::thread_or_ln1356_190_fu_4973_p3() {
    or_ln1356_190_fu_4973_p3 = esl_concat<19,13>(trunc_ln1503_175_fu_4969_p1.read(), lshr_ln1503_279_fu_4959_p4.read());
}

void sha256d::thread_or_ln1356_191_fu_3629_p4() {
    or_ln1356_191_fu_3629_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_18_fu_3625_p1.read(), ap_const_lv17_0), zext_ln1503_129_fu_3621_p1.read());
}

void sha256d::thread_or_ln1356_192_fu_5031_p3() {
    or_ln1356_192_fu_5031_p3 = esl_concat<17,15>(trunc_ln1503_176_fu_5027_p1.read(), lshr_ln1503_282_fu_5017_p4.read());
}

void sha256d::thread_or_ln1356_193_fu_5053_p3() {
    or_ln1356_193_fu_5053_p3 = esl_concat<19,13>(trunc_ln1503_177_fu_5049_p1.read(), lshr_ln1503_283_fu_5039_p4.read());
}

void sha256d::thread_or_ln1356_194_fu_3731_p4() {
    or_ln1356_194_fu_3731_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_19_fu_3727_p1.read(), ap_const_lv17_0), zext_ln1503_131_fu_3723_p1.read());
}

void sha256d::thread_or_ln1356_195_fu_5111_p3() {
    or_ln1356_195_fu_5111_p3 = esl_concat<17,15>(trunc_ln1503_178_fu_5107_p1.read(), lshr_ln1503_286_fu_5097_p4.read());
}

void sha256d::thread_or_ln1356_196_fu_5133_p3() {
    or_ln1356_196_fu_5133_p3 = esl_concat<19,13>(trunc_ln1503_179_fu_5129_p1.read(), lshr_ln1503_287_fu_5119_p4.read());
}

void sha256d::thread_or_ln1356_197_fu_3833_p4() {
    or_ln1356_197_fu_3833_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_20_fu_3829_p1.read(), ap_const_lv17_0), zext_ln1503_133_fu_3825_p1.read());
}

void sha256d::thread_or_ln1356_198_fu_5191_p3() {
    or_ln1356_198_fu_5191_p3 = esl_concat<17,15>(trunc_ln1503_180_fu_5187_p1.read(), lshr_ln1503_290_fu_5177_p4.read());
}

void sha256d::thread_or_ln1356_199_fu_5213_p3() {
    or_ln1356_199_fu_5213_p3 = esl_concat<19,13>(trunc_ln1503_181_fu_5209_p1.read(), lshr_ln1503_291_fu_5199_p4.read());
}

void sha256d::thread_or_ln1356_19_fu_11555_p3() {
    or_ln1356_19_fu_11555_p3 = esl_concat<17,15>(trunc_ln1503_14_fu_11551_p1.read(), lshr_ln1503_28_fu_11541_p4.read());
}

void sha256d::thread_or_ln1356_1_fu_4253_p4() {
    or_ln1356_1_fu_4253_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_1_fu_4249_p1.read(), ap_const_lv17_0), zext_ln1503_25_fu_4245_p1.read());
}

void sha256d::thread_or_ln1356_200_fu_3935_p4() {
    or_ln1356_200_fu_3935_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_21_fu_3931_p1.read(), ap_const_lv17_0), zext_ln1503_135_fu_3927_p1.read());
}

void sha256d::thread_or_ln1356_201_fu_5271_p3() {
    or_ln1356_201_fu_5271_p3 = esl_concat<17,15>(trunc_ln1503_182_fu_5267_p1.read(), lshr_ln1503_294_fu_5257_p4.read());
}

void sha256d::thread_or_ln1356_202_fu_5293_p3() {
    or_ln1356_202_fu_5293_p3 = esl_concat<19,13>(trunc_ln1503_183_fu_5289_p1.read(), lshr_ln1503_295_fu_5279_p4.read());
}

void sha256d::thread_or_ln1356_203_fu_4037_p4() {
    or_ln1356_203_fu_4037_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_22_fu_4033_p1.read(), ap_const_lv17_0), zext_ln1503_137_fu_4029_p1.read());
}

void sha256d::thread_or_ln1356_204_fu_5351_p3() {
    or_ln1356_204_fu_5351_p3 = esl_concat<17,15>(trunc_ln1503_184_fu_5347_p1.read(), lshr_ln1503_298_fu_5337_p4.read());
}

void sha256d::thread_or_ln1356_205_fu_5373_p3() {
    or_ln1356_205_fu_5373_p3 = esl_concat<19,13>(trunc_ln1503_185_fu_5369_p1.read(), lshr_ln1503_299_fu_5359_p4.read());
}

void sha256d::thread_or_ln1356_206_fu_5419_p3() {
    or_ln1356_206_fu_5419_p3 = esl_concat<7,25>(trunc_ln1503_186_fu_5416_p1.read(), lshr_ln1503_301_fu_5407_p4.read());
}

void sha256d::thread_or_ln1356_207_fu_5439_p3() {
    or_ln1356_207_fu_5439_p3 = esl_concat<18,14>(trunc_ln1503_187_fu_5436_p1.read(), lshr_ln1503_302_fu_5427_p4.read());
}

void sha256d::thread_or_ln1356_208_fu_5503_p3() {
    or_ln1356_208_fu_5503_p3 = esl_concat<17,15>(trunc_ln1503_188_fu_5499_p1.read(), lshr_ln1503_304_fu_5489_p4.read());
}

void sha256d::thread_or_ln1356_209_fu_5525_p3() {
    or_ln1356_209_fu_5525_p3 = esl_concat<19,13>(trunc_ln1503_189_fu_5521_p1.read(), lshr_ln1503_305_fu_5511_p4.read());
}

void sha256d::thread_or_ln1356_20_fu_11577_p3() {
    or_ln1356_20_fu_11577_p3 = esl_concat<19,13>(trunc_ln1503_15_fu_11573_p1.read(), lshr_ln1503_29_fu_11563_p4.read());
}

void sha256d::thread_or_ln1356_210_fu_5571_p3() {
    or_ln1356_210_fu_5571_p3 = esl_concat<7,25>(trunc_ln1503_190_fu_5568_p1.read(), lshr_ln1503_307_fu_5559_p4.read());
}

void sha256d::thread_or_ln1356_211_fu_5591_p3() {
    or_ln1356_211_fu_5591_p3 = esl_concat<18,14>(trunc_ln1503_191_fu_5588_p1.read(), lshr_ln1503_308_fu_5579_p4.read());
}

void sha256d::thread_or_ln1356_212_fu_5655_p3() {
    or_ln1356_212_fu_5655_p3 = esl_concat<17,15>(trunc_ln1503_192_fu_5651_p1.read(), lshr_ln1503_310_fu_5641_p4.read());
}

void sha256d::thread_or_ln1356_213_fu_5677_p3() {
    or_ln1356_213_fu_5677_p3 = esl_concat<19,13>(trunc_ln1503_193_fu_5673_p1.read(), lshr_ln1503_311_fu_5663_p4.read());
}

void sha256d::thread_or_ln1356_214_fu_5723_p3() {
    or_ln1356_214_fu_5723_p3 = esl_concat<7,25>(trunc_ln1503_194_fu_5720_p1.read(), lshr_ln1503_313_fu_5711_p4.read());
}

void sha256d::thread_or_ln1356_215_fu_5743_p3() {
    or_ln1356_215_fu_5743_p3 = esl_concat<18,14>(trunc_ln1503_195_fu_5740_p1.read(), lshr_ln1503_314_fu_5731_p4.read());
}

void sha256d::thread_or_ln1356_216_fu_5807_p3() {
    or_ln1356_216_fu_5807_p3 = esl_concat<17,15>(trunc_ln1503_196_fu_5803_p1.read(), lshr_ln1503_316_fu_5793_p4.read());
}

void sha256d::thread_or_ln1356_217_fu_5829_p3() {
    or_ln1356_217_fu_5829_p3 = esl_concat<19,13>(trunc_ln1503_197_fu_5825_p1.read(), lshr_ln1503_317_fu_5815_p4.read());
}

void sha256d::thread_or_ln1356_218_fu_5875_p3() {
    or_ln1356_218_fu_5875_p3 = esl_concat<7,25>(trunc_ln1503_198_fu_5872_p1.read(), lshr_ln1503_319_fu_5863_p4.read());
}

void sha256d::thread_or_ln1356_219_fu_5895_p3() {
    or_ln1356_219_fu_5895_p3 = esl_concat<18,14>(trunc_ln1503_199_fu_5892_p1.read(), lshr_ln1503_320_fu_5883_p4.read());
}

void sha256d::thread_or_ln1356_21_fu_11630_p3() {
    or_ln1356_21_fu_11630_p3 = esl_concat<17,15>(trunc_ln1503_16_fu_11626_p1.read(), lshr_ln1503_31_fu_11616_p4.read());
}

void sha256d::thread_or_ln1356_220_fu_5959_p3() {
    or_ln1356_220_fu_5959_p3 = esl_concat<17,15>(trunc_ln1503_200_fu_5955_p1.read(), lshr_ln1503_322_fu_5945_p4.read());
}

void sha256d::thread_or_ln1356_221_fu_5981_p3() {
    or_ln1356_221_fu_5981_p3 = esl_concat<19,13>(trunc_ln1503_201_fu_5977_p1.read(), lshr_ln1503_323_fu_5967_p4.read());
}

void sha256d::thread_or_ln1356_222_fu_6027_p3() {
    or_ln1356_222_fu_6027_p3 = esl_concat<7,25>(trunc_ln1503_202_fu_6024_p1.read(), lshr_ln1503_325_fu_6015_p4.read());
}

void sha256d::thread_or_ln1356_223_fu_6047_p3() {
    or_ln1356_223_fu_6047_p3 = esl_concat<18,14>(trunc_ln1503_203_fu_6044_p1.read(), lshr_ln1503_326_fu_6035_p4.read());
}

void sha256d::thread_or_ln1356_224_fu_6111_p3() {
    or_ln1356_224_fu_6111_p3 = esl_concat<17,15>(trunc_ln1503_204_fu_6107_p1.read(), lshr_ln1503_328_fu_6097_p4.read());
}

void sha256d::thread_or_ln1356_225_fu_6133_p3() {
    or_ln1356_225_fu_6133_p3 = esl_concat<19,13>(trunc_ln1503_205_fu_6129_p1.read(), lshr_ln1503_329_fu_6119_p4.read());
}

void sha256d::thread_or_ln1356_226_fu_6553_p3() {
    or_ln1356_226_fu_6553_p3 = esl_concat<7,25>(trunc_ln1503_206_fu_6550_p1.read(), lshr_ln1503_331_fu_6541_p4.read());
}

void sha256d::thread_or_ln1356_227_fu_6573_p3() {
    or_ln1356_227_fu_6573_p3 = esl_concat<18,14>(trunc_ln1503_207_fu_6570_p1.read(), lshr_ln1503_332_fu_6561_p4.read());
}

}

