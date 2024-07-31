#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_K_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        K_V_address0 =  (sc_lv<6>) (zext_ln544_fu_17000_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        K_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_10478_p1.read());
    } else {
        K_V_address0 = "XXXXXX";
    }
}

void sha256d::thread_K_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        K_V_ce0 = ap_const_logic_1;
    } else {
        K_V_ce0 = ap_const_logic_0;
    }
}

void sha256d::thread_a_V_1_fu_17280_p2() {
    a_V_1_fu_17280_p2 = (!add_ln209_264_fu_17274_p2.read().is_01() || !ret_V_13_reg_19055.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_264_fu_17274_p2.read()) + sc_biguint<32>(ret_V_13_reg_19055.read()));
}

void sha256d::thread_a_V_2_fu_10781_p2() {
    a_V_2_fu_10781_p2 = (!add_ln209_271_fu_10775_p2.read().is_01() || !ret_V_27_reg_18447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_271_fu_10775_p2.read()) + sc_biguint<32>(ret_V_27_reg_18447.read()));
}

void sha256d::thread_add_ln209_100_fu_16457_p2() {
    add_ln209_100_fu_16457_p2 = (!xor_ln1357_144_fu_16447_p2.read().is_01() || !m_42_V_reg_18837.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_144_fu_16447_p2.read()) + sc_biguint<32>(m_42_V_reg_18837.read()));
}

void sha256d::thread_add_ln209_102_fu_16538_p2() {
    add_ln209_102_fu_16538_p2 = (!m_52_V_reg_18950.read().is_01() || !xor_ln1357_150_reg_18905.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_V_reg_18950.read()) + sc_biguint<32>(xor_ln1357_150_reg_18905.read()));
}

void sha256d::thread_add_ln209_103_fu_16542_p2() {
    add_ln209_103_fu_16542_p2 = (!xor_ln1357_148_fu_16532_p2.read().is_01() || !m_43_V_reg_18844.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_148_fu_16532_p2.read()) + sc_biguint<32>(m_43_V_reg_18844.read()));
}

void sha256d::thread_add_ln209_105_fu_16623_p2() {
    add_ln209_105_fu_16623_p2 = (!m_53_V_reg_18956.read().is_01() || !xor_ln1357_154_reg_18910.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_V_reg_18956.read()) + sc_biguint<32>(xor_ln1357_154_reg_18910.read()));
}

void sha256d::thread_add_ln209_106_fu_16627_p2() {
    add_ln209_106_fu_16627_p2 = (!xor_ln1357_152_fu_16617_p2.read().is_01() || !m_44_V_reg_18851.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_152_fu_16617_p2.read()) + sc_biguint<32>(m_44_V_reg_18851.read()));
}

void sha256d::thread_add_ln209_108_fu_16708_p2() {
    add_ln209_108_fu_16708_p2 = (!m_54_V_fu_16199_p2.read().is_01() || !xor_ln1357_158_reg_18972.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_V_fu_16199_p2.read()) + sc_biguint<32>(xor_ln1357_158_reg_18972.read()));
}

void sha256d::thread_add_ln209_109_fu_16713_p2() {
    add_ln209_109_fu_16713_p2 = (!xor_ln1357_156_fu_16702_p2.read().is_01() || !m_45_V_reg_18858.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_156_fu_16702_p2.read()) + sc_biguint<32>(m_45_V_reg_18858.read()));
}

void sha256d::thread_add_ln209_10_fu_11446_p2() {
    add_ln209_10_fu_11446_p2 = (!m_16_V_reg_17931.read().is_01() || !m_7_V_fu_10802_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_V_reg_17931.read()) + sc_biguint<32>(m_7_V_fu_10802_p1.read()));
}

void sha256d::thread_add_ln209_111_fu_16794_p2() {
    add_ln209_111_fu_16794_p2 = (!xor_ln1357_160_fu_16788_p2.read().is_01() || !m_55_V_fu_16208_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_160_fu_16788_p2.read()) + sc_biguint<32>(m_55_V_fu_16208_p2.read()));
}

void sha256d::thread_add_ln209_112_fu_16113_p2() {
    add_ln209_112_fu_16113_p2 = (!xor_ln1357_162_fu_16107_p2.read().is_01() || !m_46_V_fu_15298_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_162_fu_16107_p2.read()) + sc_biguint<32>(m_46_V_fu_15298_p2.read()));
}

void sha256d::thread_add_ln209_114_fu_16875_p2() {
    add_ln209_114_fu_16875_p2 = (!xor_ln1357_164_fu_16869_p2.read().is_01() || !m_56_V_fu_16292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_164_fu_16869_p2.read()) + sc_biguint<32>(m_56_V_fu_16292_p2.read()));
}

void sha256d::thread_add_ln209_115_fu_16189_p2() {
    add_ln209_115_fu_16189_p2 = (!xor_ln1357_166_fu_16183_p2.read().is_01() || !m_47_V_fu_15307_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_166_fu_16183_p2.read()) + sc_biguint<32>(m_47_V_fu_15307_p2.read()));
}

void sha256d::thread_add_ln209_117_fu_1962_p2() {
    add_ln209_117_fu_1962_p2 = (!zext_ln321_10_fu_1659_p1.read().is_01() || !zext_ln209_24_fu_1958_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(zext_ln321_10_fu_1659_p1.read()) + sc_biguint<24>(zext_ln209_24_fu_1958_p1.read()));
}

void sha256d::thread_add_ln209_118_fu_1972_p2() {
    add_ln209_118_fu_1972_p2 = (!or_ln1357_7_fu_1932_p3.read().is_01() || !zext_ln209_25_fu_1968_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_7_fu_1932_p3.read()) + sc_biguint<32>(zext_ln209_25_fu_1968_p1.read()));
}

void sha256d::thread_add_ln209_119_fu_2122_p2() {
    add_ln209_119_fu_2122_p2 = (!zext_ln321_11_fu_1674_p1.read().is_01() || !zext_ln209_31_fu_2118_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(zext_ln321_11_fu_1674_p1.read()) + sc_biguint<24>(zext_ln209_31_fu_2118_p1.read()));
}

void sha256d::thread_add_ln209_120_fu_2132_p2() {
    add_ln209_120_fu_2132_p2 = (!or_ln1357_8_fu_2092_p3.read().is_01() || !zext_ln209_32_fu_2128_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_8_fu_2092_p3.read()) + sc_biguint<32>(zext_ln209_32_fu_2128_p1.read()));
}

void sha256d::thread_add_ln209_121_fu_2304_p2() {
    add_ln209_121_fu_2304_p2 = (!xor_ln1357_172_fu_2202_p2.read().is_01() || !or_ln1357_9_fu_2296_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_172_fu_2202_p2.read()) + sc_biguint<32>(or_ln1357_9_fu_2296_p3.read()));
}

void sha256d::thread_add_ln209_122_fu_2310_p2() {
    add_ln209_122_fu_2310_p2 = (!zext_ln321_fu_1684_p1.read().is_01() || !zext_ln321_5_fu_1770_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_fu_1684_p1.read()) + sc_biguint<9>(zext_ln321_5_fu_1770_p1.read()));
}

void sha256d::thread_add_ln209_123_fu_2320_p2() {
    add_ln209_123_fu_2320_p2 = (!add_ln209_121_fu_2304_p2.read().is_01() || !zext_ln209_26_fu_2316_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_121_fu_2304_p2.read()) + sc_biguint<32>(zext_ln209_26_fu_2316_p1.read()));
}

void sha256d::thread_add_ln209_124_fu_2492_p2() {
    add_ln209_124_fu_2492_p2 = (!xor_ln1357_175_fu_2390_p2.read().is_01() || !or_ln1357_s_fu_2484_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_175_fu_2390_p2.read()) + sc_biguint<32>(or_ln1357_s_fu_2484_p3.read()));
}

void sha256d::thread_add_ln209_125_fu_2498_p2() {
    add_ln209_125_fu_2498_p2 = (!zext_ln321_1_fu_1694_p1.read().is_01() || !zext_ln321_6_fu_1781_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_1_fu_1694_p1.read()) + sc_biguint<9>(zext_ln321_6_fu_1781_p1.read()));
}

void sha256d::thread_add_ln209_126_fu_2508_p2() {
    add_ln209_126_fu_2508_p2 = (!add_ln209_124_fu_2492_p2.read().is_01() || !zext_ln209_27_fu_2504_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_124_fu_2492_p2.read()) + sc_biguint<32>(zext_ln209_27_fu_2504_p1.read()));
}

void sha256d::thread_add_ln209_127_fu_2680_p2() {
    add_ln209_127_fu_2680_p2 = (!xor_ln1357_178_fu_2578_p2.read().is_01() || !or_ln1357_10_fu_2672_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_178_fu_2578_p2.read()) + sc_biguint<32>(or_ln1357_10_fu_2672_p3.read()));
}

void sha256d::thread_add_ln209_128_fu_2686_p2() {
    add_ln209_128_fu_2686_p2 = (!zext_ln321_2_fu_1705_p1.read().is_01() || !zext_ln321_7_fu_1792_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_2_fu_1705_p1.read()) + sc_biguint<9>(zext_ln321_7_fu_1792_p1.read()));
}

void sha256d::thread_add_ln209_129_fu_2696_p2() {
    add_ln209_129_fu_2696_p2 = (!add_ln209_127_fu_2680_p2.read().is_01() || !zext_ln209_28_fu_2692_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_127_fu_2680_p2.read()) + sc_biguint<32>(zext_ln209_28_fu_2692_p1.read()));
}

void sha256d::thread_add_ln209_130_fu_2868_p2() {
    add_ln209_130_fu_2868_p2 = (!xor_ln1357_181_fu_2766_p2.read().is_01() || !or_ln1357_11_fu_2860_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_181_fu_2766_p2.read()) + sc_biguint<32>(or_ln1357_11_fu_2860_p3.read()));
}

void sha256d::thread_add_ln209_131_fu_2874_p2() {
    add_ln209_131_fu_2874_p2 = (!zext_ln321_3_fu_1716_p1.read().is_01() || !zext_ln321_8_fu_1803_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_3_fu_1716_p1.read()) + sc_biguint<9>(zext_ln321_8_fu_1803_p1.read()));
}

void sha256d::thread_add_ln209_132_fu_2884_p2() {
    add_ln209_132_fu_2884_p2 = (!add_ln209_130_fu_2868_p2.read().is_01() || !zext_ln209_29_fu_2880_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_130_fu_2868_p2.read()) + sc_biguint<32>(zext_ln209_29_fu_2880_p1.read()));
}

void sha256d::thread_add_ln209_133_fu_3056_p2() {
    add_ln209_133_fu_3056_p2 = (!xor_ln1357_184_fu_2954_p2.read().is_01() || !or_ln1357_12_fu_3048_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_184_fu_2954_p2.read()) + sc_biguint<32>(or_ln1357_12_fu_3048_p3.read()));
}

void sha256d::thread_add_ln209_134_fu_3062_p2() {
    add_ln209_134_fu_3062_p2 = (!zext_ln321_4_fu_1727_p1.read().is_01() || !zext_ln321_9_fu_1814_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln321_4_fu_1727_p1.read()) + sc_biguint<9>(zext_ln321_9_fu_1814_p1.read()));
}

void sha256d::thread_add_ln209_135_fu_3072_p2() {
    add_ln209_135_fu_3072_p2 = (!add_ln209_133_fu_3056_p2.read().is_01() || !zext_ln209_30_fu_3068_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_133_fu_3056_p2.read()) + sc_biguint<32>(zext_ln209_30_fu_3068_p1.read()));
}

void sha256d::thread_add_ln209_136_fu_3244_p2() {
    add_ln209_136_fu_3244_p2 = (!or_ln1357_13_fu_3236_p3.read().is_01() || !add_ln209_118_fu_1972_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_13_fu_3236_p3.read()) + sc_biguint<32>(add_ln209_118_fu_1972_p2.read()));
}

void sha256d::thread_add_ln209_137_fu_3250_p2() {
    add_ln209_137_fu_3250_p2 = (!zext_ln209_7_fu_1738_p1.read().is_01() || !xor_ln1357_187_fu_3142_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_7_fu_1738_p1.read()) + sc_biguint<32>(xor_ln1357_187_fu_3142_p2.read()));
}

void sha256d::thread_add_ln209_138_fu_3256_p2() {
    add_ln209_138_fu_3256_p2 = (!add_ln209_136_fu_3244_p2.read().is_01() || !add_ln209_137_fu_3250_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_136_fu_3244_p2.read()) + sc_biguint<32>(add_ln209_137_fu_3250_p2.read()));
}

void sha256d::thread_add_ln209_139_fu_3428_p2() {
    add_ln209_139_fu_3428_p2 = (!or_ln1357_14_fu_3420_p3.read().is_01() || !add_ln209_120_fu_2132_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_14_fu_3420_p3.read()) + sc_biguint<32>(add_ln209_120_fu_2132_p2.read()));
}

void sha256d::thread_add_ln209_140_fu_4912_p2() {
    add_ln209_140_fu_4912_p2 = (!zext_ln209_8_reg_17977.read().is_01() || !xor_ln1357_190_reg_17871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_8_reg_17977.read()) + sc_biguint<32>(xor_ln1357_190_reg_17871.read()));
}

void sha256d::thread_add_ln209_141_fu_4916_p2() {
    add_ln209_141_fu_4916_p2 = (!add_ln209_139_reg_17876.read().is_01() || !add_ln209_140_fu_4912_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_139_reg_17876.read()) + sc_biguint<32>(add_ln209_140_fu_4912_p2.read()));
}

void sha256d::thread_add_ln209_142_fu_3600_p2() {
    add_ln209_142_fu_3600_p2 = (!or_ln1357_15_fu_3592_p3.read().is_01() || !add_ln209_123_fu_2320_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_15_fu_3592_p3.read()) + sc_biguint<32>(add_ln209_123_fu_2320_p2.read()));
}

void sha256d::thread_add_ln209_143_fu_4921_p2() {
    add_ln209_143_fu_4921_p2 = (!zext_ln209_9_reg_17982.read().is_01() || !xor_ln1357_193_reg_17881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_9_reg_17982.read()) + sc_biguint<32>(xor_ln1357_193_reg_17881.read()));
}

void sha256d::thread_add_ln209_144_fu_4925_p2() {
    add_ln209_144_fu_4925_p2 = (!add_ln209_142_reg_17886.read().is_01() || !add_ln209_143_fu_4921_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_142_reg_17886.read()) + sc_biguint<32>(add_ln209_143_fu_4921_p2.read()));
}

void sha256d::thread_add_ln209_145_fu_3702_p2() {
    add_ln209_145_fu_3702_p2 = (!or_ln1357_16_fu_3694_p3.read().is_01() || !add_ln209_126_fu_2508_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_16_fu_3694_p3.read()) + sc_biguint<32>(add_ln209_126_fu_2508_p2.read()));
}

void sha256d::thread_add_ln209_146_fu_5000_p2() {
    add_ln209_146_fu_5000_p2 = (!zext_ln209_10_reg_17987.read().is_01() || !xor_ln1357_196_fu_4994_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_10_reg_17987.read()) + sc_biguint<32>(xor_ln1357_196_fu_4994_p2.read()));
}

void sha256d::thread_add_ln209_147_fu_5005_p2() {
    add_ln209_147_fu_5005_p2 = (!add_ln209_145_reg_17891.read().is_01() || !add_ln209_146_fu_5000_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_145_reg_17891.read()) + sc_biguint<32>(add_ln209_146_fu_5000_p2.read()));
}

void sha256d::thread_add_ln209_148_fu_3804_p2() {
    add_ln209_148_fu_3804_p2 = (!or_ln1357_17_fu_3796_p3.read().is_01() || !add_ln209_129_fu_2696_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_17_fu_3796_p3.read()) + sc_biguint<32>(add_ln209_129_fu_2696_p2.read()));
}

void sha256d::thread_add_ln209_149_fu_5080_p2() {
    add_ln209_149_fu_5080_p2 = (!zext_ln209_11_reg_17992.read().is_01() || !xor_ln1357_199_fu_5074_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_11_reg_17992.read()) + sc_biguint<32>(xor_ln1357_199_fu_5074_p2.read()));
}

void sha256d::thread_add_ln209_150_fu_5085_p2() {
    add_ln209_150_fu_5085_p2 = (!add_ln209_148_reg_17896.read().is_01() || !add_ln209_149_fu_5080_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_148_reg_17896.read()) + sc_biguint<32>(add_ln209_149_fu_5080_p2.read()));
}

void sha256d::thread_add_ln209_151_fu_3906_p2() {
    add_ln209_151_fu_3906_p2 = (!or_ln1357_18_fu_3898_p3.read().is_01() || !add_ln209_132_fu_2884_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_18_fu_3898_p3.read()) + sc_biguint<32>(add_ln209_132_fu_2884_p2.read()));
}

void sha256d::thread_add_ln209_152_fu_5160_p2() {
    add_ln209_152_fu_5160_p2 = (!zext_ln209_12_reg_17997.read().is_01() || !xor_ln1357_202_fu_5154_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_12_reg_17997.read()) + sc_biguint<32>(xor_ln1357_202_fu_5154_p2.read()));
}

void sha256d::thread_add_ln209_153_fu_5165_p2() {
    add_ln209_153_fu_5165_p2 = (!add_ln209_151_reg_17901.read().is_01() || !add_ln209_152_fu_5160_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_151_reg_17901.read()) + sc_biguint<32>(add_ln209_152_fu_5160_p2.read()));
}

void sha256d::thread_add_ln209_154_fu_4008_p2() {
    add_ln209_154_fu_4008_p2 = (!or_ln1357_19_fu_4000_p3.read().is_01() || !add_ln209_135_fu_3072_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_19_fu_4000_p3.read()) + sc_biguint<32>(add_ln209_135_fu_3072_p2.read()));
}

void sha256d::thread_add_ln209_155_fu_5240_p2() {
    add_ln209_155_fu_5240_p2 = (!zext_ln209_13_reg_18002.read().is_01() || !xor_ln1357_205_fu_5234_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_13_reg_18002.read()) + sc_biguint<32>(xor_ln1357_205_fu_5234_p2.read()));
}

void sha256d::thread_add_ln209_156_fu_5245_p2() {
    add_ln209_156_fu_5245_p2 = (!add_ln209_154_reg_17906.read().is_01() || !add_ln209_155_fu_5240_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_154_reg_17906.read()) + sc_biguint<32>(add_ln209_155_fu_5240_p2.read()));
}

void sha256d::thread_add_ln209_157_fu_4110_p2() {
    add_ln209_157_fu_4110_p2 = (!or_ln1357_20_fu_4102_p3.read().is_01() || !add_ln209_138_fu_3256_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_20_fu_4102_p3.read()) + sc_biguint<32>(add_ln209_138_fu_3256_p2.read()));
}

void sha256d::thread_add_ln209_158_fu_5320_p2() {
    add_ln209_158_fu_5320_p2 = (!zext_ln209_14_reg_18007.read().is_01() || !xor_ln1357_208_fu_5314_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_14_reg_18007.read()) + sc_biguint<32>(xor_ln1357_208_fu_5314_p2.read()));
}

void sha256d::thread_add_ln209_159_fu_5325_p2() {
    add_ln209_159_fu_5325_p2 = (!add_ln209_157_reg_17911.read().is_01() || !add_ln209_158_fu_5320_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_157_reg_17911.read()) + sc_biguint<32>(add_ln209_158_fu_5320_p2.read()));
}

void sha256d::thread_add_ln209_160_fu_5465_p2() {
    add_ln209_160_fu_5465_p2 = (!xor_ln1357_213_fu_5459_p2.read().is_01() || !add_ln209_141_fu_4916_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_213_fu_5459_p2.read()) + sc_biguint<32>(add_ln209_141_fu_4916_p2.read()));
}

void sha256d::thread_add_ln209_161_fu_5471_p2() {
    add_ln209_161_fu_5471_p2 = (!zext_ln209_15_reg_18012.read().is_01() || !xor_ln1357_211_fu_5394_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln209_15_reg_18012.read()) + sc_biguint<32>(xor_ln1357_211_fu_5394_p2.read()));
}

void sha256d::thread_add_ln209_162_fu_5476_p2() {
    add_ln209_162_fu_5476_p2 = (!add_ln209_160_fu_5465_p2.read().is_01() || !add_ln209_161_fu_5471_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_160_fu_5465_p2.read()) + sc_biguint<32>(add_ln209_161_fu_5471_p2.read()));
}

void sha256d::thread_add_ln209_163_fu_5617_p2() {
    add_ln209_163_fu_5617_p2 = (!xor_ln1357_217_fu_5611_p2.read().is_01() || !add_ln209_144_fu_4925_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_217_fu_5611_p2.read()) + sc_biguint<32>(add_ln209_144_fu_4925_p2.read()));
}

void sha256d::thread_add_ln209_164_fu_5623_p2() {
    add_ln209_164_fu_5623_p2 = (!add_ln209_118_reg_17783.read().is_01() || !xor_ln1357_215_fu_5546_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_118_reg_17783.read()) + sc_biguint<32>(xor_ln1357_215_fu_5546_p2.read()));
}

void sha256d::thread_add_ln209_165_fu_5628_p2() {
    add_ln209_165_fu_5628_p2 = (!add_ln209_163_fu_5617_p2.read().is_01() || !add_ln209_164_fu_5623_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_163_fu_5617_p2.read()) + sc_biguint<32>(add_ln209_164_fu_5623_p2.read()));
}

void sha256d::thread_add_ln209_166_fu_5769_p2() {
    add_ln209_166_fu_5769_p2 = (!xor_ln1357_221_fu_5763_p2.read().is_01() || !add_ln209_147_fu_5005_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_221_fu_5763_p2.read()) + sc_biguint<32>(add_ln209_147_fu_5005_p2.read()));
}

void sha256d::thread_add_ln209_167_fu_5775_p2() {
    add_ln209_167_fu_5775_p2 = (!add_ln209_120_reg_17794.read().is_01() || !xor_ln1357_219_fu_5698_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_120_reg_17794.read()) + sc_biguint<32>(xor_ln1357_219_fu_5698_p2.read()));
}

void sha256d::thread_add_ln209_168_fu_5780_p2() {
    add_ln209_168_fu_5780_p2 = (!add_ln209_166_fu_5769_p2.read().is_01() || !add_ln209_167_fu_5775_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_166_fu_5769_p2.read()) + sc_biguint<32>(add_ln209_167_fu_5775_p2.read()));
}

void sha256d::thread_add_ln209_169_fu_5921_p2() {
    add_ln209_169_fu_5921_p2 = (!xor_ln1357_225_fu_5915_p2.read().is_01() || !add_ln209_150_fu_5085_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_225_fu_5915_p2.read()) + sc_biguint<32>(add_ln209_150_fu_5085_p2.read()));
}

void sha256d::thread_add_ln209_170_fu_5927_p2() {
    add_ln209_170_fu_5927_p2 = (!add_ln209_123_reg_17805.read().is_01() || !xor_ln1357_223_fu_5850_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_123_reg_17805.read()) + sc_biguint<32>(xor_ln1357_223_fu_5850_p2.read()));
}

void sha256d::thread_add_ln209_171_fu_5932_p2() {
    add_ln209_171_fu_5932_p2 = (!add_ln209_169_fu_5921_p2.read().is_01() || !add_ln209_170_fu_5927_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_169_fu_5921_p2.read()) + sc_biguint<32>(add_ln209_170_fu_5927_p2.read()));
}

void sha256d::thread_add_ln209_172_fu_6073_p2() {
    add_ln209_172_fu_6073_p2 = (!xor_ln1357_229_fu_6067_p2.read().is_01() || !add_ln209_153_fu_5165_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_229_fu_6067_p2.read()) + sc_biguint<32>(add_ln209_153_fu_5165_p2.read()));
}

void sha256d::thread_add_ln209_173_fu_6079_p2() {
    add_ln209_173_fu_6079_p2 = (!add_ln209_126_reg_17816.read().is_01() || !xor_ln1357_227_fu_6002_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_126_reg_17816.read()) + sc_biguint<32>(xor_ln1357_227_fu_6002_p2.read()));
}

void sha256d::thread_add_ln209_174_fu_6084_p2() {
    add_ln209_174_fu_6084_p2 = (!add_ln209_172_fu_6073_p2.read().is_01() || !add_ln209_173_fu_6079_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_172_fu_6073_p2.read()) + sc_biguint<32>(add_ln209_173_fu_6079_p2.read()));
}

void sha256d::thread_add_ln209_175_fu_6599_p2() {
    add_ln209_175_fu_6599_p2 = (!xor_ln1357_233_fu_6593_p2.read().is_01() || !add_ln209_156_reg_18052.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_233_fu_6593_p2.read()) + sc_biguint<32>(add_ln209_156_reg_18052.read()));
}

void sha256d::thread_add_ln209_176_fu_6674_p2() {
    add_ln209_176_fu_6674_p2 = (!add_ln209_129_reg_17827.read().is_01() || !xor_ln1357_231_reg_18132.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_129_reg_17827.read()) + sc_biguint<32>(xor_ln1357_231_reg_18132.read()));
}

void sha256d::thread_add_ln209_177_fu_6678_p2() {
    add_ln209_177_fu_6678_p2 = (!add_ln209_175_reg_18162.read().is_01() || !add_ln209_176_fu_6674_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_175_reg_18162.read()) + sc_biguint<32>(add_ln209_176_fu_6674_p2.read()));
}

void sha256d::thread_add_ln209_178_fu_6669_p2() {
    add_ln209_178_fu_6669_p2 = (!xor_ln1357_237_fu_6663_p2.read().is_01() || !add_ln209_159_reg_18064.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_237_fu_6663_p2.read()) + sc_biguint<32>(add_ln209_159_reg_18064.read()));
}

void sha256d::thread_add_ln209_179_fu_6683_p2() {
    add_ln209_179_fu_6683_p2 = (!add_ln209_132_reg_17838.read().is_01() || !xor_ln1357_235_reg_18137.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_132_reg_17838.read()) + sc_biguint<32>(xor_ln1357_235_reg_18137.read()));
}

void sha256d::thread_add_ln209_180_fu_6687_p2() {
    add_ln209_180_fu_6687_p2 = (!add_ln209_178_reg_18167.read().is_01() || !add_ln209_179_fu_6683_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_178_reg_18167.read()) + sc_biguint<32>(add_ln209_179_fu_6683_p2.read()));
}

void sha256d::thread_add_ln209_181_fu_6827_p2() {
    add_ln209_181_fu_6827_p2 = (!xor_ln1357_241_fu_6821_p2.read().is_01() || !add_ln209_162_reg_18076.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_241_fu_6821_p2.read()) + sc_biguint<32>(add_ln209_162_reg_18076.read()));
}

void sha256d::thread_add_ln209_182_fu_6832_p2() {
    add_ln209_182_fu_6832_p2 = (!add_ln209_135_reg_17849.read().is_01() || !xor_ln1357_239_fu_6756_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_135_reg_17849.read()) + sc_biguint<32>(xor_ln1357_239_fu_6756_p2.read()));
}

void sha256d::thread_add_ln209_183_fu_6837_p2() {
    add_ln209_183_fu_6837_p2 = (!add_ln209_181_fu_6827_p2.read().is_01() || !add_ln209_182_fu_6832_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_181_fu_6827_p2.read()) + sc_biguint<32>(add_ln209_182_fu_6832_p2.read()));
}

void sha256d::thread_add_ln209_184_fu_6300_p2() {
    add_ln209_184_fu_6300_p2 = (!xor_ln1357_245_fu_6294_p2.read().is_01() || !add_ln209_165_fu_5628_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_245_fu_6294_p2.read()) + sc_biguint<32>(add_ln209_165_fu_5628_p2.read()));
}

void sha256d::thread_add_ln209_185_fu_6913_p2() {
    add_ln209_185_fu_6913_p2 = (!add_ln209_138_reg_17860.read().is_01() || !xor_ln1357_243_fu_6907_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_138_reg_17860.read()) + sc_biguint<32>(xor_ln1357_243_fu_6907_p2.read()));
}

void sha256d::thread_add_ln209_186_fu_6918_p2() {
    add_ln209_186_fu_6918_p2 = (!add_ln209_184_reg_18142.read().is_01() || !add_ln209_185_fu_6913_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_184_reg_18142.read()) + sc_biguint<32>(add_ln209_185_fu_6913_p2.read()));
}

void sha256d::thread_add_ln209_187_fu_6376_p2() {
    add_ln209_187_fu_6376_p2 = (!xor_ln1357_249_fu_6370_p2.read().is_01() || !add_ln209_168_fu_5780_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_249_fu_6370_p2.read()) + sc_biguint<32>(add_ln209_168_fu_5780_p2.read()));
}

void sha256d::thread_add_ln209_188_fu_6993_p2() {
    add_ln209_188_fu_6993_p2 = (!add_ln209_141_reg_18017.read().is_01() || !xor_ln1357_247_fu_6987_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_141_reg_18017.read()) + sc_biguint<32>(xor_ln1357_247_fu_6987_p2.read()));
}

void sha256d::thread_add_ln209_189_fu_6998_p2() {
    add_ln209_189_fu_6998_p2 = (!add_ln209_187_reg_18147.read().is_01() || !add_ln209_188_fu_6993_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_187_reg_18147.read()) + sc_biguint<32>(add_ln209_188_fu_6993_p2.read()));
}

void sha256d::thread_add_ln209_190_fu_6452_p2() {
    add_ln209_190_fu_6452_p2 = (!xor_ln1357_253_fu_6446_p2.read().is_01() || !add_ln209_171_fu_5932_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_253_fu_6446_p2.read()) + sc_biguint<32>(add_ln209_171_fu_5932_p2.read()));
}

void sha256d::thread_add_ln209_191_fu_7073_p2() {
    add_ln209_191_fu_7073_p2 = (!add_ln209_144_reg_18023.read().is_01() || !xor_ln1357_251_fu_7067_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_144_reg_18023.read()) + sc_biguint<32>(xor_ln1357_251_fu_7067_p2.read()));
}

void sha256d::thread_add_ln209_192_fu_7078_p2() {
    add_ln209_192_fu_7078_p2 = (!add_ln209_190_reg_18152.read().is_01() || !add_ln209_191_fu_7073_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_190_reg_18152.read()) + sc_biguint<32>(add_ln209_191_fu_7073_p2.read()));
}

void sha256d::thread_add_ln209_193_fu_6528_p2() {
    add_ln209_193_fu_6528_p2 = (!xor_ln1357_257_fu_6522_p2.read().is_01() || !add_ln209_174_fu_6084_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_257_fu_6522_p2.read()) + sc_biguint<32>(add_ln209_174_fu_6084_p2.read()));
}

void sha256d::thread_add_ln209_194_fu_7153_p2() {
    add_ln209_194_fu_7153_p2 = (!add_ln209_147_reg_18029.read().is_01() || !xor_ln1357_255_fu_7147_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_147_reg_18029.read()) + sc_biguint<32>(xor_ln1357_255_fu_7147_p2.read()));
}

void sha256d::thread_add_ln209_195_fu_7158_p2() {
    add_ln209_195_fu_7158_p2 = (!add_ln209_193_reg_18157.read().is_01() || !add_ln209_194_fu_7153_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_193_reg_18157.read()) + sc_biguint<32>(add_ln209_194_fu_7153_p2.read()));
}

void sha256d::thread_add_ln209_196_fu_7298_p2() {
    add_ln209_196_fu_7298_p2 = (!xor_ln1357_261_fu_7292_p2.read().is_01() || !add_ln209_177_fu_6678_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_261_fu_7292_p2.read()) + sc_biguint<32>(add_ln209_177_fu_6678_p2.read()));
}

void sha256d::thread_add_ln209_197_fu_7304_p2() {
    add_ln209_197_fu_7304_p2 = (!add_ln209_150_reg_18035.read().is_01() || !xor_ln1357_259_fu_7227_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_150_reg_18035.read()) + sc_biguint<32>(xor_ln1357_259_fu_7227_p2.read()));
}

void sha256d::thread_add_ln209_198_fu_7309_p2() {
    add_ln209_198_fu_7309_p2 = (!add_ln209_196_fu_7298_p2.read().is_01() || !add_ln209_197_fu_7304_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_196_fu_7298_p2.read()) + sc_biguint<32>(add_ln209_197_fu_7304_p2.read()));
}

void sha256d::thread_add_ln209_199_fu_7450_p2() {
    add_ln209_199_fu_7450_p2 = (!xor_ln1357_265_fu_7444_p2.read().is_01() || !add_ln209_180_fu_6687_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_265_fu_7444_p2.read()) + sc_biguint<32>(add_ln209_180_fu_6687_p2.read()));
}

void sha256d::thread_add_ln209_19_fu_12972_p2() {
    add_ln209_19_fu_12972_p2 = (!m_24_V_reg_18597.read().is_01() || !xor_ln1357_38_reg_17962.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_V_reg_18597.read()) + sc_biguint<32>(xor_ln1357_38_reg_17962.read()));
}

void sha256d::thread_add_ln209_200_fu_7456_p2() {
    add_ln209_200_fu_7456_p2 = (!add_ln209_153_reg_18041.read().is_01() || !xor_ln1357_263_fu_7379_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_153_reg_18041.read()) + sc_biguint<32>(xor_ln1357_263_fu_7379_p2.read()));
}

void sha256d::thread_add_ln209_201_fu_7461_p2() {
    add_ln209_201_fu_7461_p2 = (!add_ln209_199_fu_7450_p2.read().is_01() || !add_ln209_200_fu_7456_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_199_fu_7450_p2.read()) + sc_biguint<32>(add_ln209_200_fu_7456_p2.read()));
}

void sha256d::thread_add_ln209_202_fu_7602_p2() {
    add_ln209_202_fu_7602_p2 = (!xor_ln1357_269_fu_7596_p2.read().is_01() || !add_ln209_183_fu_6837_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_269_fu_7596_p2.read()) + sc_biguint<32>(add_ln209_183_fu_6837_p2.read()));
}

void sha256d::thread_add_ln209_203_fu_7608_p2() {
    add_ln209_203_fu_7608_p2 = (!add_ln209_156_reg_18052.read().is_01() || !xor_ln1357_267_fu_7531_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_156_reg_18052.read()) + sc_biguint<32>(xor_ln1357_267_fu_7531_p2.read()));
}

void sha256d::thread_add_ln209_204_fu_7613_p2() {
    add_ln209_204_fu_7613_p2 = (!add_ln209_202_fu_7602_p2.read().is_01() || !add_ln209_203_fu_7608_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_202_fu_7602_p2.read()) + sc_biguint<32>(add_ln209_203_fu_7608_p2.read()));
}

void sha256d::thread_add_ln209_205_fu_7754_p2() {
    add_ln209_205_fu_7754_p2 = (!xor_ln1357_273_fu_7748_p2.read().is_01() || !add_ln209_186_fu_6918_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_273_fu_7748_p2.read()) + sc_biguint<32>(add_ln209_186_fu_6918_p2.read()));
}

void sha256d::thread_add_ln209_206_fu_7760_p2() {
    add_ln209_206_fu_7760_p2 = (!add_ln209_159_reg_18064.read().is_01() || !xor_ln1357_271_fu_7683_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_159_reg_18064.read()) + sc_biguint<32>(xor_ln1357_271_fu_7683_p2.read()));
}

void sha256d::thread_add_ln209_207_fu_7765_p2() {
    add_ln209_207_fu_7765_p2 = (!add_ln209_205_fu_7754_p2.read().is_01() || !add_ln209_206_fu_7760_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_205_fu_7754_p2.read()) + sc_biguint<32>(add_ln209_206_fu_7760_p2.read()));
}

void sha256d::thread_add_ln209_208_fu_7906_p2() {
    add_ln209_208_fu_7906_p2 = (!xor_ln1357_277_fu_7900_p2.read().is_01() || !add_ln209_189_fu_6998_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_277_fu_7900_p2.read()) + sc_biguint<32>(add_ln209_189_fu_6998_p2.read()));
}

void sha256d::thread_add_ln209_209_fu_7912_p2() {
    add_ln209_209_fu_7912_p2 = (!add_ln209_162_reg_18076.read().is_01() || !xor_ln1357_275_fu_7835_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_162_reg_18076.read()) + sc_biguint<32>(xor_ln1357_275_fu_7835_p2.read()));
}

void sha256d::thread_add_ln209_210_fu_7917_p2() {
    add_ln209_210_fu_7917_p2 = (!add_ln209_208_fu_7906_p2.read().is_01() || !add_ln209_209_fu_7912_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_208_fu_7906_p2.read()) + sc_biguint<32>(add_ln209_209_fu_7912_p2.read()));
}

void sha256d::thread_add_ln209_211_fu_8502_p2() {
    add_ln209_211_fu_8502_p2 = (!xor_ln1357_281_fu_8496_p2.read().is_01() || !add_ln209_192_reg_18207.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_281_fu_8496_p2.read()) + sc_biguint<32>(add_ln209_192_reg_18207.read()));
}

void sha256d::thread_add_ln209_212_fu_8507_p2() {
    add_ln209_212_fu_8507_p2 = (!add_ln209_165_reg_18088.read().is_01() || !xor_ln1357_279_reg_18282.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_165_reg_18088.read()) + sc_biguint<32>(xor_ln1357_279_reg_18282.read()));
}

void sha256d::thread_add_ln209_213_fu_8511_p2() {
    add_ln209_213_fu_8511_p2 = (!add_ln209_211_fu_8502_p2.read().is_01() || !add_ln209_212_fu_8507_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_211_fu_8502_p2.read()) + sc_biguint<32>(add_ln209_212_fu_8507_p2.read()));
}

void sha256d::thread_add_ln209_214_fu_8582_p2() {
    add_ln209_214_fu_8582_p2 = (!xor_ln1357_285_fu_8576_p2.read().is_01() || !add_ln209_195_reg_18219.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_285_fu_8576_p2.read()) + sc_biguint<32>(add_ln209_195_reg_18219.read()));
}

void sha256d::thread_add_ln209_215_fu_8587_p2() {
    add_ln209_215_fu_8587_p2 = (!add_ln209_168_reg_18099.read().is_01() || !xor_ln1357_283_reg_18287.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_168_reg_18099.read()) + sc_biguint<32>(xor_ln1357_283_reg_18287.read()));
}

void sha256d::thread_add_ln209_216_fu_8591_p2() {
    add_ln209_216_fu_8591_p2 = (!add_ln209_214_fu_8582_p2.read().is_01() || !add_ln209_215_fu_8587_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_214_fu_8582_p2.read()) + sc_biguint<32>(add_ln209_215_fu_8587_p2.read()));
}

void sha256d::thread_add_ln209_217_fu_8732_p2() {
    add_ln209_217_fu_8732_p2 = (!xor_ln1357_289_fu_8726_p2.read().is_01() || !add_ln209_198_reg_18231.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_289_fu_8726_p2.read()) + sc_biguint<32>(add_ln209_198_reg_18231.read()));
}

void sha256d::thread_add_ln209_218_fu_8737_p2() {
    add_ln209_218_fu_8737_p2 = (!add_ln209_171_reg_18110.read().is_01() || !xor_ln1357_287_fu_8661_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_171_reg_18110.read()) + sc_biguint<32>(xor_ln1357_287_fu_8661_p2.read()));
}

void sha256d::thread_add_ln209_219_fu_8742_p2() {
    add_ln209_219_fu_8742_p2 = (!add_ln209_217_fu_8732_p2.read().is_01() || !add_ln209_218_fu_8737_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_217_fu_8732_p2.read()) + sc_biguint<32>(add_ln209_218_fu_8737_p2.read()));
}

void sha256d::thread_add_ln209_21_fu_12981_p2() {
    add_ln209_21_fu_12981_p2 = (!m_25_V_reg_18604.read().is_01() || !xor_ln1357_42_reg_17967.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_V_reg_18604.read()) + sc_biguint<32>(xor_ln1357_42_reg_17967.read()));
}

void sha256d::thread_add_ln209_220_fu_8133_p2() {
    add_ln209_220_fu_8133_p2 = (!xor_ln1357_293_fu_8127_p2.read().is_01() || !add_ln209_201_fu_7461_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_293_fu_8127_p2.read()) + sc_biguint<32>(add_ln209_201_fu_7461_p2.read()));
}

void sha256d::thread_add_ln209_221_fu_8818_p2() {
    add_ln209_221_fu_8818_p2 = (!add_ln209_174_reg_18121.read().is_01() || !xor_ln1357_291_fu_8812_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_174_reg_18121.read()) + sc_biguint<32>(xor_ln1357_291_fu_8812_p2.read()));
}

void sha256d::thread_add_ln209_222_fu_8823_p2() {
    add_ln209_222_fu_8823_p2 = (!add_ln209_220_reg_18292.read().is_01() || !add_ln209_221_fu_8818_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_220_reg_18292.read()) + sc_biguint<32>(add_ln209_221_fu_8818_p2.read()));
}

void sha256d::thread_add_ln209_223_fu_8209_p2() {
    add_ln209_223_fu_8209_p2 = (!xor_ln1357_297_fu_8203_p2.read().is_01() || !add_ln209_204_fu_7613_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_297_fu_8203_p2.read()) + sc_biguint<32>(add_ln209_204_fu_7613_p2.read()));
}

void sha256d::thread_add_ln209_224_fu_8898_p2() {
    add_ln209_224_fu_8898_p2 = (!add_ln209_177_reg_18172.read().is_01() || !xor_ln1357_295_fu_8892_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_177_reg_18172.read()) + sc_biguint<32>(xor_ln1357_295_fu_8892_p2.read()));
}

void sha256d::thread_add_ln209_225_fu_8903_p2() {
    add_ln209_225_fu_8903_p2 = (!add_ln209_223_reg_18297.read().is_01() || !add_ln209_224_fu_8898_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_223_reg_18297.read()) + sc_biguint<32>(add_ln209_224_fu_8898_p2.read()));
}

void sha256d::thread_add_ln209_226_fu_8285_p2() {
    add_ln209_226_fu_8285_p2 = (!xor_ln1357_301_fu_8279_p2.read().is_01() || !add_ln209_207_fu_7765_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_301_fu_8279_p2.read()) + sc_biguint<32>(add_ln209_207_fu_7765_p2.read()));
}

void sha256d::thread_add_ln209_227_fu_8978_p2() {
    add_ln209_227_fu_8978_p2 = (!add_ln209_180_reg_18178.read().is_01() || !xor_ln1357_299_fu_8972_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_180_reg_18178.read()) + sc_biguint<32>(xor_ln1357_299_fu_8972_p2.read()));
}

void sha256d::thread_add_ln209_228_fu_8983_p2() {
    add_ln209_228_fu_8983_p2 = (!add_ln209_226_reg_18302.read().is_01() || !add_ln209_227_fu_8978_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_226_reg_18302.read()) + sc_biguint<32>(add_ln209_227_fu_8978_p2.read()));
}

void sha256d::thread_add_ln209_229_fu_8361_p2() {
    add_ln209_229_fu_8361_p2 = (!xor_ln1357_305_fu_8355_p2.read().is_01() || !add_ln209_210_fu_7917_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_305_fu_8355_p2.read()) + sc_biguint<32>(add_ln209_210_fu_7917_p2.read()));
}

void sha256d::thread_add_ln209_22_fu_12127_p2() {
    add_ln209_22_fu_12127_p2 = (!xor_ln1357_40_fu_12121_p2.read().is_01() || !m_16_V_reg_17931.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_40_fu_12121_p2.read()) + sc_biguint<32>(m_16_V_reg_17931.read()));
}

void sha256d::thread_add_ln209_230_fu_9198_p2() {
    add_ln209_230_fu_9198_p2 = (!add_ln209_183_reg_18184.read().is_01() || !xor_ln1357_303_reg_18353.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_183_reg_18184.read()) + sc_biguint<32>(xor_ln1357_303_reg_18353.read()));
}

void sha256d::thread_add_ln209_231_fu_9202_p2() {
    add_ln209_231_fu_9202_p2 = (!add_ln209_229_reg_18307.read().is_01() || !add_ln209_230_fu_9198_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_229_reg_18307.read()) + sc_biguint<32>(add_ln209_230_fu_9198_p2.read()));
}

void sha256d::thread_add_ln209_232_fu_9342_p2() {
    add_ln209_232_fu_9342_p2 = (!xor_ln1357_309_fu_9336_p2.read().is_01() || !add_ln209_213_reg_18317.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_309_fu_9336_p2.read()) + sc_biguint<32>(add_ln209_213_reg_18317.read()));
}

void sha256d::thread_add_ln209_233_fu_9347_p2() {
    add_ln209_233_fu_9347_p2 = (!add_ln209_186_reg_18190.read().is_01() || !xor_ln1357_307_reg_18358.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_186_reg_18190.read()) + sc_biguint<32>(xor_ln1357_307_reg_18358.read()));
}

void sha256d::thread_add_ln209_234_fu_9351_p2() {
    add_ln209_234_fu_9351_p2 = (!add_ln209_232_fu_9342_p2.read().is_01() || !add_ln209_233_fu_9347_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_232_fu_9342_p2.read()) + sc_biguint<32>(add_ln209_233_fu_9347_p2.read()));
}

void sha256d::thread_add_ln209_235_fu_9422_p2() {
    add_ln209_235_fu_9422_p2 = (!xor_ln1357_313_fu_9416_p2.read().is_01() || !add_ln209_216_reg_18323.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_313_fu_9416_p2.read()) + sc_biguint<32>(add_ln209_216_reg_18323.read()));
}

void sha256d::thread_add_ln209_236_fu_9427_p2() {
    add_ln209_236_fu_9427_p2 = (!add_ln209_189_reg_18196.read().is_01() || !xor_ln1357_311_reg_18374.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_189_reg_18196.read()) + sc_biguint<32>(xor_ln1357_311_reg_18374.read()));
}

void sha256d::thread_add_ln209_237_fu_9431_p2() {
    add_ln209_237_fu_9431_p2 = (!add_ln209_235_fu_9422_p2.read().is_01() || !add_ln209_236_fu_9427_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_235_fu_9422_p2.read()) + sc_biguint<32>(add_ln209_236_fu_9427_p2.read()));
}

void sha256d::thread_add_ln209_238_fu_9572_p2() {
    add_ln209_238_fu_9572_p2 = (!xor_ln1357_317_fu_9566_p2.read().is_01() || !add_ln209_219_reg_18329.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_317_fu_9566_p2.read()) + sc_biguint<32>(add_ln209_219_reg_18329.read()));
}

void sha256d::thread_add_ln209_239_fu_9577_p2() {
    add_ln209_239_fu_9577_p2 = (!add_ln209_192_reg_18207.read().is_01() || !xor_ln1357_315_fu_9501_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_192_reg_18207.read()) + sc_biguint<32>(xor_ln1357_315_fu_9501_p2.read()));
}

void sha256d::thread_add_ln209_240_fu_9582_p2() {
    add_ln209_240_fu_9582_p2 = (!add_ln209_238_fu_9572_p2.read().is_01() || !add_ln209_239_fu_9577_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_238_fu_9572_p2.read()) + sc_biguint<32>(add_ln209_239_fu_9577_p2.read()));
}

void sha256d::thread_add_ln209_241_fu_9723_p2() {
    add_ln209_241_fu_9723_p2 = (!xor_ln1357_321_fu_9717_p2.read().is_01() || !add_ln209_222_reg_18335.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_321_fu_9717_p2.read()) + sc_biguint<32>(add_ln209_222_reg_18335.read()));
}

void sha256d::thread_add_ln209_242_fu_9728_p2() {
    add_ln209_242_fu_9728_p2 = (!add_ln209_195_reg_18219.read().is_01() || !xor_ln1357_319_fu_9652_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_195_reg_18219.read()) + sc_biguint<32>(xor_ln1357_319_fu_9652_p2.read()));
}

void sha256d::thread_add_ln209_243_fu_9733_p2() {
    add_ln209_243_fu_9733_p2 = (!add_ln209_241_fu_9723_p2.read().is_01() || !add_ln209_242_fu_9728_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_241_fu_9723_p2.read()) + sc_biguint<32>(add_ln209_242_fu_9728_p2.read()));
}

void sha256d::thread_add_ln209_244_fu_9874_p2() {
    add_ln209_244_fu_9874_p2 = (!xor_ln1357_325_fu_9868_p2.read().is_01() || !add_ln209_225_reg_18341.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_325_fu_9868_p2.read()) + sc_biguint<32>(add_ln209_225_reg_18341.read()));
}

void sha256d::thread_add_ln209_245_fu_9879_p2() {
    add_ln209_245_fu_9879_p2 = (!add_ln209_198_reg_18231.read().is_01() || !xor_ln1357_323_fu_9803_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_198_reg_18231.read()) + sc_biguint<32>(xor_ln1357_323_fu_9803_p2.read()));
}

void sha256d::thread_add_ln209_246_fu_9884_p2() {
    add_ln209_246_fu_9884_p2 = (!add_ln209_244_fu_9874_p2.read().is_01() || !add_ln209_245_fu_9879_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_244_fu_9874_p2.read()) + sc_biguint<32>(add_ln209_245_fu_9879_p2.read()));
}

void sha256d::thread_add_ln209_247_fu_10025_p2() {
    add_ln209_247_fu_10025_p2 = (!xor_ln1357_329_fu_10019_p2.read().is_01() || !add_ln209_228_reg_18347.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_329_fu_10019_p2.read()) + sc_biguint<32>(add_ln209_228_reg_18347.read()));
}

void sha256d::thread_add_ln209_248_fu_10030_p2() {
    add_ln209_248_fu_10030_p2 = (!add_ln209_201_reg_18243.read().is_01() || !xor_ln1357_327_fu_9954_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_201_reg_18243.read()) + sc_biguint<32>(xor_ln1357_327_fu_9954_p2.read()));
}

void sha256d::thread_add_ln209_249_fu_10035_p2() {
    add_ln209_249_fu_10035_p2 = (!add_ln209_247_fu_10025_p2.read().is_01() || !add_ln209_248_fu_10030_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_247_fu_10025_p2.read()) + sc_biguint<32>(add_ln209_248_fu_10030_p2.read()));
}

void sha256d::thread_add_ln209_24_fu_13060_p2() {
    add_ln209_24_fu_13060_p2 = (!m_26_V_reg_18611.read().is_01() || !xor_ln1357_46_reg_17972.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_V_reg_18611.read()) + sc_biguint<32>(xor_ln1357_46_reg_17972.read()));
}

void sha256d::thread_add_ln209_250_fu_10176_p2() {
    add_ln209_250_fu_10176_p2 = (!xor_ln1357_333_fu_10170_p2.read().is_01() || !add_ln209_231_reg_18368.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_333_fu_10170_p2.read()) + sc_biguint<32>(add_ln209_231_reg_18368.read()));
}

void sha256d::thread_add_ln209_251_fu_10181_p2() {
    add_ln209_251_fu_10181_p2 = (!add_ln209_204_reg_18254.read().is_01() || !xor_ln1357_331_fu_10105_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_204_reg_18254.read()) + sc_biguint<32>(xor_ln1357_331_fu_10105_p2.read()));
}

void sha256d::thread_add_ln209_252_fu_10186_p2() {
    add_ln209_252_fu_10186_p2 = (!add_ln209_250_fu_10176_p2.read().is_01() || !add_ln209_251_fu_10181_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_250_fu_10176_p2.read()) + sc_biguint<32>(add_ln209_251_fu_10181_p2.read()));
}

void sha256d::thread_add_ln209_253_fu_10262_p2() {
    add_ln209_253_fu_10262_p2 = (!add_ln209_234_fu_9351_p2.read().is_01() || !xor_ln1357_335_fu_10256_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_234_fu_9351_p2.read()) + sc_biguint<32>(xor_ln1357_335_fu_10256_p2.read()));
}

void sha256d::thread_add_ln209_254_fu_10268_p2() {
    add_ln209_254_fu_10268_p2 = (!add_ln209_207_reg_18265.read().is_01() || !xor_ln1357_337_reg_18312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_207_reg_18265.read()) + sc_biguint<32>(xor_ln1357_337_reg_18312.read()));
}

void sha256d::thread_add_ln209_255_fu_10272_p2() {
    add_ln209_255_fu_10272_p2 = (!add_ln209_253_fu_10262_p2.read().is_01() || !add_ln209_254_fu_10268_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_253_fu_10262_p2.read()) + sc_biguint<32>(add_ln209_254_fu_10268_p2.read()));
}

void sha256d::thread_add_ln209_256_fu_10348_p2() {
    add_ln209_256_fu_10348_p2 = (!add_ln209_237_fu_9431_p2.read().is_01() || !xor_ln1357_339_fu_10342_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_237_fu_9431_p2.read()) + sc_biguint<32>(xor_ln1357_339_fu_10342_p2.read()));
}

void sha256d::thread_add_ln209_257_fu_10354_p2() {
    add_ln209_257_fu_10354_p2 = (!add_ln209_210_reg_18276.read().is_01() || !xor_ln1357_341_reg_18363.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_210_reg_18276.read()) + sc_biguint<32>(xor_ln1357_341_reg_18363.read()));
}

void sha256d::thread_add_ln209_258_fu_10358_p2() {
    add_ln209_258_fu_10358_p2 = (!add_ln209_256_fu_10348_p2.read().is_01() || !add_ln209_257_fu_10354_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_256_fu_10348_p2.read()) + sc_biguint<32>(add_ln209_257_fu_10354_p2.read()));
}

void sha256d::thread_add_ln209_259_fu_17179_p2() {
    add_ln209_259_fu_17179_p2 = (!K_V_q0.read().is_01() || !p_03526_0_reg_1619.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_V_q0.read()) + sc_biguint<32>(p_03526_0_reg_1619.read()));
}

void sha256d::thread_add_ln209_25_fu_13064_p2() {
    add_ln209_25_fu_13064_p2 = (!xor_ln1357_44_fu_13054_p2.read().is_01() || !m_17_V_reg_17938.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_44_fu_13054_p2.read()) + sc_biguint<32>(m_17_V_reg_17938.read()));
}

void sha256d::thread_add_ln209_260_fu_17087_p2() {
    add_ln209_260_fu_17087_p2 = (!ret_V_fu_16970_p2.read().is_01() || !tmp_69_fu_17009_p66.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_fu_16970_p2.read()) + sc_biguint<32>(tmp_69_fu_17009_p66.read()));
}

void sha256d::thread_add_ln209_261_fu_17093_p2() {
    add_ln209_261_fu_17093_p2 = (!add_ln209_260_fu_17087_p2.read().is_01() || !ret_V_6_fu_16994_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_260_fu_17087_p2.read()) + sc_biguint<32>(ret_V_6_fu_16994_p2.read()));
}

void sha256d::thread_add_ln209_264_fu_17274_p2() {
    add_ln209_264_fu_17274_p2 = (!ret_V_10_fu_17262_p2.read().is_01() || !t1_V_1_fu_17185_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_10_fu_17262_p2.read()) + sc_biguint<32>(t1_V_1_fu_17185_p2.read()));
}

void sha256d::thread_add_ln209_266_fu_10680_p2() {
    add_ln209_266_fu_10680_p2 = (!K_V_q0.read().is_01() || !m_V_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(K_V_q0.read()) + sc_biguint<32>(m_V_q0.read()));
}

void sha256d::thread_add_ln209_267_fu_10484_p2() {
    add_ln209_267_fu_10484_p2 = (!ret_V_20_fu_10472_p2.read().is_01() || !ret_V_17_fu_10448_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_20_fu_10472_p2.read()) + sc_biguint<32>(ret_V_17_fu_10448_p2.read()));
}

void sha256d::thread_add_ln209_268_fu_10490_p2() {
    add_ln209_268_fu_10490_p2 = (!add_ln209_267_fu_10484_p2.read().is_01() || !p_01894_0_reg_1508.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_267_fu_10484_p2.read()) + sc_biguint<32>(p_01894_0_reg_1508.read()));
}

void sha256d::thread_add_ln209_271_fu_10775_p2() {
    add_ln209_271_fu_10775_p2 = (!ret_V_24_fu_10763_p2.read().is_01() || !t1_V_fu_10686_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ret_V_24_fu_10763_p2.read()) + sc_biguint<32>(t1_V_fu_10686_p2.read()));
}

void sha256d::thread_add_ln209_27_fu_13145_p2() {
    add_ln209_27_fu_13145_p2 = (!m_27_V_reg_18618.read().is_01() || !xor_ln1357_50_reg_18656.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_V_reg_18618.read()) + sc_biguint<32>(xor_ln1357_50_reg_18656.read()));
}

void sha256d::thread_add_ln209_28_fu_13149_p2() {
    add_ln209_28_fu_13149_p2 = (!xor_ln1357_48_fu_13139_p2.read().is_01() || !m_18_V_reg_17945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_48_fu_13139_p2.read()) + sc_biguint<32>(m_18_V_reg_17945.read()));
}

void sha256d::thread_add_ln209_2_fu_10902_p2() {
    add_ln209_2_fu_10902_p2 = (!xor_ln1357_6_reg_17952.read().is_01() || !m_3_V_fu_10786_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_6_reg_17952.read()) + sc_biguint<32>(m_3_V_fu_10786_p1.read()));
}

void sha256d::thread_add_ln209_30_fu_13230_p2() {
    add_ln209_30_fu_13230_p2 = (!m_28_V_reg_18625.read().is_01() || !xor_ln1357_54_reg_18661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_V_reg_18625.read()) + sc_biguint<32>(xor_ln1357_54_reg_18661.read()));
}

void sha256d::thread_add_ln209_31_fu_13234_p2() {
    add_ln209_31_fu_13234_p2 = (!xor_ln1357_52_fu_13224_p2.read().is_01() || !m_19_V_reg_18567.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_52_fu_13224_p2.read()) + sc_biguint<32>(m_19_V_reg_18567.read()));
}

void sha256d::thread_add_ln209_33_fu_13315_p2() {
    add_ln209_33_fu_13315_p2 = (!m_29_V_reg_18632.read().is_01() || !xor_ln1357_58_reg_18666.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_V_reg_18632.read()) + sc_biguint<32>(xor_ln1357_58_reg_18666.read()));
}

void sha256d::thread_add_ln209_34_fu_13319_p2() {
    add_ln209_34_fu_13319_p2 = (!xor_ln1357_56_fu_13309_p2.read().is_01() || !m_20_V_reg_18573.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_56_fu_13309_p2.read()) + sc_biguint<32>(m_20_V_reg_18573.read()));
}

void sha256d::thread_add_ln209_36_fu_13400_p2() {
    add_ln209_36_fu_13400_p2 = (!m_30_V_reg_18639.read().is_01() || !xor_ln1357_62_reg_18671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_V_reg_18639.read()) + sc_biguint<32>(xor_ln1357_62_reg_18671.read()));
}

void sha256d::thread_add_ln209_37_fu_13404_p2() {
    add_ln209_37_fu_13404_p2 = (!xor_ln1357_60_fu_13394_p2.read().is_01() || !m_21_V_reg_18579.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_60_fu_13394_p2.read()) + sc_biguint<32>(m_21_V_reg_18579.read()));
}

void sha256d::thread_add_ln209_39_fu_14055_p2() {
    add_ln209_39_fu_14055_p2 = (!m_31_V_reg_18716.read().is_01() || !xor_ln1357_66_reg_18676.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_V_reg_18716.read()) + sc_biguint<32>(xor_ln1357_66_reg_18676.read()));
}

void sha256d::thread_add_ln209_40_fu_13485_p2() {
    add_ln209_40_fu_13485_p2 = (!xor_ln1357_64_fu_13479_p2.read().is_01() || !m_22_V_reg_18585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_64_fu_13479_p2.read()) + sc_biguint<32>(m_22_V_reg_18585.read()));
}

void sha256d::thread_add_ln209_42_fu_14064_p2() {
    add_ln209_42_fu_14064_p2 = (!m_32_V_reg_18723.read().is_01() || !xor_ln1357_70_reg_18681.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_V_reg_18723.read()) + sc_biguint<32>(xor_ln1357_70_reg_18681.read()));
}

void sha256d::thread_add_ln209_43_fu_13560_p2() {
    add_ln209_43_fu_13560_p2 = (!xor_ln1357_68_fu_13554_p2.read().is_01() || !m_23_V_reg_18591.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_68_fu_13554_p2.read()) + sc_biguint<32>(m_23_V_reg_18591.read()));
}

void sha256d::thread_add_ln209_45_fu_14143_p2() {
    add_ln209_45_fu_14143_p2 = (!m_33_V_reg_18730.read().is_01() || !xor_ln1357_74_reg_18686.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_V_reg_18730.read()) + sc_biguint<32>(xor_ln1357_74_reg_18686.read()));
}

void sha256d::thread_add_ln209_46_fu_14147_p2() {
    add_ln209_46_fu_14147_p2 = (!xor_ln1357_72_fu_14137_p2.read().is_01() || !m_24_V_reg_18597.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_72_fu_14137_p2.read()) + sc_biguint<32>(m_24_V_reg_18597.read()));
}

void sha256d::thread_add_ln209_48_fu_14228_p2() {
    add_ln209_48_fu_14228_p2 = (!m_34_V_reg_18737.read().is_01() || !xor_ln1357_78_reg_18691.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_V_reg_18737.read()) + sc_biguint<32>(xor_ln1357_78_reg_18691.read()));
}

void sha256d::thread_add_ln209_49_fu_14232_p2() {
    add_ln209_49_fu_14232_p2 = (!xor_ln1357_76_fu_14222_p2.read().is_01() || !m_25_V_reg_18604.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_76_fu_14222_p2.read()) + sc_biguint<32>(m_25_V_reg_18604.read()));
}

void sha256d::thread_add_ln209_4_fu_11009_p2() {
    add_ln209_4_fu_11009_p2 = (!xor_ln1357_10_reg_17957.read().is_01() || !m_4_V_fu_10790_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_10_reg_17957.read()) + sc_biguint<32>(m_4_V_fu_10790_p1.read()));
}

void sha256d::thread_add_ln209_51_fu_14313_p2() {
    add_ln209_51_fu_14313_p2 = (!m_35_V_reg_18744.read().is_01() || !xor_ln1357_82_reg_18696.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_V_reg_18744.read()) + sc_biguint<32>(xor_ln1357_82_reg_18696.read()));
}

void sha256d::thread_add_ln209_52_fu_14317_p2() {
    add_ln209_52_fu_14317_p2 = (!xor_ln1357_80_fu_14307_p2.read().is_01() || !m_26_V_reg_18611.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_80_fu_14307_p2.read()) + sc_biguint<32>(m_26_V_reg_18611.read()));
}

void sha256d::thread_add_ln209_54_fu_14398_p2() {
    add_ln209_54_fu_14398_p2 = (!m_36_V_reg_18751.read().is_01() || !xor_ln1357_86_reg_18701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_V_reg_18751.read()) + sc_biguint<32>(xor_ln1357_86_reg_18701.read()));
}

void sha256d::thread_add_ln209_55_fu_14402_p2() {
    add_ln209_55_fu_14402_p2 = (!xor_ln1357_84_fu_14392_p2.read().is_01() || !m_27_V_reg_18618.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_84_fu_14392_p2.read()) + sc_biguint<32>(m_27_V_reg_18618.read()));
}

void sha256d::thread_add_ln209_57_fu_14483_p2() {
    add_ln209_57_fu_14483_p2 = (!m_37_V_reg_18758.read().is_01() || !xor_ln1357_90_reg_18706.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_V_reg_18758.read()) + sc_biguint<32>(xor_ln1357_90_reg_18706.read()));
}

void sha256d::thread_add_ln209_58_fu_14487_p2() {
    add_ln209_58_fu_14487_p2 = (!xor_ln1357_88_fu_14477_p2.read().is_01() || !m_28_V_reg_18625.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_88_fu_14477_p2.read()) + sc_biguint<32>(m_28_V_reg_18625.read()));
}

void sha256d::thread_add_ln209_60_fu_14568_p2() {
    add_ln209_60_fu_14568_p2 = (!m_38_V_fu_14059_p2.read().is_01() || !xor_ln1357_94_reg_18711.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_V_fu_14059_p2.read()) + sc_biguint<32>(xor_ln1357_94_reg_18711.read()));
}

void sha256d::thread_add_ln209_61_fu_14573_p2() {
    add_ln209_61_fu_14573_p2 = (!xor_ln1357_92_fu_14562_p2.read().is_01() || !m_29_V_reg_18632.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_92_fu_14562_p2.read()) + sc_biguint<32>(m_29_V_reg_18632.read()));
}

void sha256d::thread_add_ln209_63_fu_15294_p2() {
    add_ln209_63_fu_15294_p2 = (!m_39_V_reg_18816.read().is_01() || !xor_ln1357_98_reg_18775.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_V_reg_18816.read()) + sc_biguint<32>(xor_ln1357_98_reg_18775.read()));
}

void sha256d::thread_add_ln209_64_fu_14654_p2() {
    add_ln209_64_fu_14654_p2 = (!xor_ln1357_96_fu_14648_p2.read().is_01() || !m_30_V_reg_18639.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_96_fu_14648_p2.read()) + sc_biguint<32>(m_30_V_reg_18639.read()));
}

void sha256d::thread_add_ln209_66_fu_15303_p2() {
    add_ln209_66_fu_15303_p2 = (!m_40_V_reg_18823.read().is_01() || !xor_ln1357_102_reg_18780.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_V_reg_18823.read()) + sc_biguint<32>(xor_ln1357_102_reg_18780.read()));
}

void sha256d::thread_add_ln209_67_fu_14729_p2() {
    add_ln209_67_fu_14729_p2 = (!xor_ln1357_100_fu_14723_p2.read().is_01() || !m_31_V_reg_18716.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_100_fu_14723_p2.read()) + sc_biguint<32>(m_31_V_reg_18716.read()));
}

void sha256d::thread_add_ln209_69_fu_15382_p2() {
    add_ln209_69_fu_15382_p2 = (!m_41_V_reg_18830.read().is_01() || !xor_ln1357_106_reg_18785.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_V_reg_18830.read()) + sc_biguint<32>(xor_ln1357_106_reg_18785.read()));
}

void sha256d::thread_add_ln209_6_fu_11186_p2() {
    add_ln209_6_fu_11186_p2 = (!xor_ln1357_13_fu_11084_p2.read().is_01() || !m_5_V_fu_10794_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_13_fu_11084_p2.read()) + sc_biguint<32>(m_5_V_fu_10794_p1.read()));
}

void sha256d::thread_add_ln209_70_fu_15386_p2() {
    add_ln209_70_fu_15386_p2 = (!xor_ln1357_104_fu_15376_p2.read().is_01() || !m_32_V_reg_18723.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_104_fu_15376_p2.read()) + sc_biguint<32>(m_32_V_reg_18723.read()));
}

void sha256d::thread_add_ln209_72_fu_15467_p2() {
    add_ln209_72_fu_15467_p2 = (!m_42_V_reg_18837.read().is_01() || !xor_ln1357_110_reg_18790.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_V_reg_18837.read()) + sc_biguint<32>(xor_ln1357_110_reg_18790.read()));
}

void sha256d::thread_add_ln209_73_fu_15471_p2() {
    add_ln209_73_fu_15471_p2 = (!xor_ln1357_108_fu_15461_p2.read().is_01() || !m_33_V_reg_18730.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_108_fu_15461_p2.read()) + sc_biguint<32>(m_33_V_reg_18730.read()));
}

void sha256d::thread_add_ln209_75_fu_15552_p2() {
    add_ln209_75_fu_15552_p2 = (!m_43_V_reg_18844.read().is_01() || !xor_ln1357_114_reg_18795.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_V_reg_18844.read()) + sc_biguint<32>(xor_ln1357_114_reg_18795.read()));
}

void sha256d::thread_add_ln209_76_fu_15556_p2() {
    add_ln209_76_fu_15556_p2 = (!xor_ln1357_112_fu_15546_p2.read().is_01() || !m_34_V_reg_18737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_112_fu_15546_p2.read()) + sc_biguint<32>(m_34_V_reg_18737.read()));
}

void sha256d::thread_add_ln209_78_fu_15637_p2() {
    add_ln209_78_fu_15637_p2 = (!m_44_V_reg_18851.read().is_01() || !xor_ln1357_118_reg_18800.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_V_reg_18851.read()) + sc_biguint<32>(xor_ln1357_118_reg_18800.read()));
}

void sha256d::thread_add_ln209_79_fu_15641_p2() {
    add_ln209_79_fu_15641_p2 = (!xor_ln1357_116_fu_15631_p2.read().is_01() || !m_35_V_reg_18744.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_116_fu_15631_p2.read()) + sc_biguint<32>(m_35_V_reg_18744.read()));
}

void sha256d::thread_add_ln209_81_fu_15722_p2() {
    add_ln209_81_fu_15722_p2 = (!m_45_V_reg_18858.read().is_01() || !xor_ln1357_122_reg_18805.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_V_reg_18858.read()) + sc_biguint<32>(xor_ln1357_122_reg_18805.read()));
}

void sha256d::thread_add_ln209_82_fu_15726_p2() {
    add_ln209_82_fu_15726_p2 = (!xor_ln1357_120_fu_15716_p2.read().is_01() || !m_36_V_reg_18751.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_120_fu_15716_p2.read()) + sc_biguint<32>(m_36_V_reg_18751.read()));
}

void sha256d::thread_add_ln209_84_fu_15807_p2() {
    add_ln209_84_fu_15807_p2 = (!m_46_V_fu_15298_p2.read().is_01() || !xor_ln1357_126_reg_18875.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_V_fu_15298_p2.read()) + sc_biguint<32>(xor_ln1357_126_reg_18875.read()));
}

void sha256d::thread_add_ln209_85_fu_15812_p2() {
    add_ln209_85_fu_15812_p2 = (!xor_ln1357_124_fu_15801_p2.read().is_01() || !m_37_V_reg_18758.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_124_fu_15801_p2.read()) + sc_biguint<32>(m_37_V_reg_18758.read()));
}

void sha256d::thread_add_ln209_87_fu_16195_p2() {
    add_ln209_87_fu_16195_p2 = (!m_47_V_reg_18920.read().is_01() || !xor_ln1357_130_reg_18880.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_V_reg_18920.read()) + sc_biguint<32>(xor_ln1357_130_reg_18880.read()));
}

void sha256d::thread_add_ln209_88_fu_15893_p2() {
    add_ln209_88_fu_15893_p2 = (!xor_ln1357_128_fu_15887_p2.read().is_01() || !m_38_V_reg_18810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_128_fu_15887_p2.read()) + sc_biguint<32>(m_38_V_reg_18810.read()));
}

void sha256d::thread_add_ln209_8_fu_11364_p2() {
    add_ln209_8_fu_11364_p2 = (!xor_ln1357_16_fu_11262_p2.read().is_01() || !m_6_V_fu_10798_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_16_fu_11262_p2.read()) + sc_biguint<32>(m_6_V_fu_10798_p1.read()));
}

void sha256d::thread_add_ln209_90_fu_16204_p2() {
    add_ln209_90_fu_16204_p2 = (!m_48_V_reg_18926.read().is_01() || !xor_ln1357_134_reg_18885.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_V_reg_18926.read()) + sc_biguint<32>(xor_ln1357_134_reg_18885.read()));
}

void sha256d::thread_add_ln209_91_fu_15968_p2() {
    add_ln209_91_fu_15968_p2 = (!xor_ln1357_132_fu_15962_p2.read().is_01() || !m_39_V_reg_18816.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_132_fu_15962_p2.read()) + sc_biguint<32>(m_39_V_reg_18816.read()));
}

void sha256d::thread_add_ln209_93_fu_16283_p2() {
    add_ln209_93_fu_16283_p2 = (!m_49_V_reg_18932.read().is_01() || !xor_ln1357_138_reg_18890.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_V_reg_18932.read()) + sc_biguint<32>(xor_ln1357_138_reg_18890.read()));
}

void sha256d::thread_add_ln209_94_fu_16287_p2() {
    add_ln209_94_fu_16287_p2 = (!xor_ln1357_136_fu_16277_p2.read().is_01() || !m_40_V_reg_18823.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_136_fu_16277_p2.read()) + sc_biguint<32>(m_40_V_reg_18823.read()));
}

void sha256d::thread_add_ln209_96_fu_16368_p2() {
    add_ln209_96_fu_16368_p2 = (!m_50_V_reg_18938.read().is_01() || !xor_ln1357_142_reg_18895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_V_reg_18938.read()) + sc_biguint<32>(xor_ln1357_142_reg_18895.read()));
}

void sha256d::thread_add_ln209_97_fu_16372_p2() {
    add_ln209_97_fu_16372_p2 = (!xor_ln1357_140_fu_16362_p2.read().is_01() || !m_41_V_reg_18830.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_140_fu_16362_p2.read()) + sc_biguint<32>(m_41_V_reg_18830.read()));
}

void sha256d::thread_add_ln209_99_fu_16453_p2() {
    add_ln209_99_fu_16453_p2 = (!m_51_V_reg_18944.read().is_01() || !xor_ln1357_146_reg_18900.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_V_reg_18944.read()) + sc_biguint<32>(xor_ln1357_146_reg_18900.read()));
}

void sha256d::thread_add_ln209_fu_4498_p2() {
    add_ln209_fu_4498_p2 = (!xor_ln1357_3_fu_4396_p2.read().is_01() || !m_2_V_fu_4124_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_3_fu_4396_p2.read()) + sc_biguint<32>(m_2_V_fu_4124_p1.read()));
}

void sha256d::thread_add_ln72_1_fu_10638_p2() {
    add_ln72_1_fu_10638_p2 = (!trunc_ln700_3_fu_10538_p1.read().is_01() || !trunc_ln700_2_fu_10534_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_3_fu_10538_p1.read()) + sc_biguint<8>(trunc_ln700_2_fu_10534_p1.read()));
}

void sha256d::thread_add_ln72_2_fu_10644_p2() {
    add_ln72_2_fu_10644_p2 = (!trunc_ln700_5_fu_10552_p1.read().is_01() || !trunc_ln700_4_fu_10548_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_5_fu_10552_p1.read()) + sc_biguint<8>(trunc_ln700_4_fu_10548_p1.read()));
}

void sha256d::thread_add_ln72_3_fu_10650_p2() {
    add_ln72_3_fu_10650_p2 = (!trunc_ln700_7_fu_10566_p1.read().is_01() || !trunc_ln700_6_fu_10562_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_7_fu_10566_p1.read()) + sc_biguint<8>(trunc_ln700_6_fu_10562_p1.read()));
}

void sha256d::thread_add_ln72_4_fu_10656_p2() {
    add_ln72_4_fu_10656_p2 = (!trunc_ln700_9_fu_10580_p1.read().is_01() || !trunc_ln700_8_fu_10576_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_9_fu_10580_p1.read()) + sc_biguint<8>(trunc_ln700_8_fu_10576_p1.read()));
}

void sha256d::thread_add_ln72_5_fu_10662_p2() {
    add_ln72_5_fu_10662_p2 = (!trunc_ln700_11_fu_10594_p1.read().is_01() || !trunc_ln700_10_fu_10590_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_11_fu_10594_p1.read()) + sc_biguint<8>(trunc_ln700_10_fu_10590_p1.read()));
}

void sha256d::thread_add_ln72_6_fu_10668_p2() {
    add_ln72_6_fu_10668_p2 = (!trunc_ln700_13_fu_10608_p1.read().is_01() || !trunc_ln700_12_fu_10604_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_13_fu_10608_p1.read()) + sc_biguint<8>(trunc_ln700_12_fu_10604_p1.read()));
}

void sha256d::thread_add_ln72_7_fu_10674_p2() {
    add_ln72_7_fu_10674_p2 = (!trunc_ln700_15_fu_10622_p1.read().is_01() || !trunc_ln700_14_fu_10618_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_15_fu_10622_p1.read()) + sc_biguint<8>(trunc_ln700_14_fu_10618_p1.read()));
}

void sha256d::thread_add_ln72_fu_10632_p2() {
    add_ln72_fu_10632_p2 = (!trunc_ln700_1_fu_10524_p1.read().is_01() || !trunc_ln700_fu_10520_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln700_1_fu_10524_p1.read()) + sc_biguint<8>(trunc_ln700_fu_10520_p1.read()));
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

void sha256d::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void sha256d::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void sha256d::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void sha256d::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void sha256d::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void sha256d::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void sha256d::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void sha256d::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
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

void sha256d::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_fu_16886_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha256d::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha256d::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_fu_16886_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256d::thread_e_V_1_fu_17268_p2() {
    e_V_1_fu_17268_p2 = (!t1_V_1_fu_17185_p2.read().is_01() || !p_03491_0_reg_1568.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_V_1_fu_17185_p2.read()) + sc_biguint<32>(p_03491_0_reg_1568.read()));
}

void sha256d::thread_e_V_2_fu_10769_p2() {
    e_V_2_fu_10769_p2 = (!t1_V_fu_10686_p2.read().is_01() || !p_01859_0_reg_1461.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t1_V_fu_10686_p2.read()) + sc_biguint<32>(p_01859_0_reg_1461.read()));
}

void sha256d::thread_i_V_1_fu_10370_p2() {
    i_V_1_fu_10370_p2 = (!p_01375_2_reg_1415.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(p_01375_2_reg_1415.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_i_V_fu_16892_p2() {
    i_V_fu_16892_p2 = (!p_03004_2_reg_1519.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(p_03004_2_reg_1519.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void sha256d::thread_icmp_ln72_fu_1632_p2() {
    icmp_ln72_fu_1632_p2 = (!t_0_reg_1404.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(t_0_reg_1404.read() == ap_const_lv2_2);
}

void sha256d::thread_icmp_ln887_1_fu_10364_p2() {
    icmp_ln887_1_fu_10364_p2 = (!p_01375_2_reg_1415.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(p_01375_2_reg_1415.read() == ap_const_lv7_40);
}

void sha256d::thread_icmp_ln887_fu_16886_p2() {
    icmp_ln887_fu_16886_p2 = (!p_03004_2_reg_1519.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(p_03004_2_reg_1519.read() == ap_const_lv7_40);
}

void sha256d::thread_lshr_ln1503_100_fu_14073_p4() {
    lshr_ln1503_100_fu_14073_p4 = m_38_V_fu_14059_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_101_fu_14095_p4() {
    lshr_ln1503_101_fu_14095_p4 = m_38_V_fu_14059_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_102_fu_14117_p4() {
    lshr_ln1503_102_fu_14117_p4 = m_38_V_fu_14059_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_103_fu_12552_p4() {
    lshr_ln1503_103_fu_12552_p4 = m_25_V_fu_11602_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_104_fu_12574_p4() {
    lshr_ln1503_104_fu_12574_p4 = m_25_V_fu_11602_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_105_fu_12596_p4() {
    lshr_ln1503_105_fu_12596_p4 = m_25_V_fu_11602_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_106_fu_14158_p4() {
    lshr_ln1503_106_fu_14158_p4 = m_39_V_fu_14068_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_107_fu_14180_p4() {
    lshr_ln1503_107_fu_14180_p4 = m_39_V_fu_14068_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_108_fu_14202_p4() {
    lshr_ln1503_108_fu_14202_p4 = m_39_V_fu_14068_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_109_fu_12622_p4() {
    lshr_ln1503_109_fu_12622_p4 = m_26_V_fu_11677_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_10_fu_4580_p4() {
    lshr_ln1503_10_fu_4580_p4 = m_18_V_fu_4504_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_110_fu_12644_p4() {
    lshr_ln1503_110_fu_12644_p4 = m_26_V_fu_11677_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_111_fu_12666_p4() {
    lshr_ln1503_111_fu_12666_p4 = m_26_V_fu_11677_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_112_fu_14243_p4() {
    lshr_ln1503_112_fu_14243_p4 = m_40_V_fu_14152_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_113_fu_14265_p4() {
    lshr_ln1503_113_fu_14265_p4 = m_40_V_fu_14152_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_114_fu_14287_p4() {
    lshr_ln1503_114_fu_14287_p4 = m_40_V_fu_14152_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_115_fu_12692_p4() {
    lshr_ln1503_115_fu_12692_p4 = m_27_V_fu_11753_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_116_fu_12714_p4() {
    lshr_ln1503_116_fu_12714_p4 = m_27_V_fu_11753_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_117_fu_12736_p4() {
    lshr_ln1503_117_fu_12736_p4 = m_27_V_fu_11753_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_118_fu_14328_p4() {
    lshr_ln1503_118_fu_14328_p4 = m_41_V_fu_14237_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_119_fu_14350_p4() {
    lshr_ln1503_119_fu_14350_p4 = m_41_V_fu_14237_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_11_fu_4602_p4() {
    lshr_ln1503_11_fu_4602_p4 = m_18_V_fu_4504_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_120_fu_14372_p4() {
    lshr_ln1503_120_fu_14372_p4 = m_41_V_fu_14237_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_121_fu_12762_p4() {
    lshr_ln1503_121_fu_12762_p4 = m_28_V_fu_11829_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_122_fu_12784_p4() {
    lshr_ln1503_122_fu_12784_p4 = m_28_V_fu_11829_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_123_fu_12806_p4() {
    lshr_ln1503_123_fu_12806_p4 = m_28_V_fu_11829_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_124_fu_14413_p4() {
    lshr_ln1503_124_fu_14413_p4 = m_42_V_fu_14322_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_125_fu_14435_p4() {
    lshr_ln1503_125_fu_14435_p4 = m_42_V_fu_14322_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_126_fu_14457_p4() {
    lshr_ln1503_126_fu_14457_p4 = m_42_V_fu_14322_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_127_fu_12832_p4() {
    lshr_ln1503_127_fu_12832_p4 = m_29_V_fu_11905_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_128_fu_12854_p4() {
    lshr_ln1503_128_fu_12854_p4 = m_29_V_fu_11905_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_129_fu_12876_p4() {
    lshr_ln1503_129_fu_12876_p4 = m_29_V_fu_11905_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_12_fu_4624_p4() {
    lshr_ln1503_12_fu_4624_p4 = m_18_V_fu_4504_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_130_fu_14498_p4() {
    lshr_ln1503_130_fu_14498_p4 = m_43_V_fu_14407_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_131_fu_14520_p4() {
    lshr_ln1503_131_fu_14520_p4 = m_43_V_fu_14407_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_132_fu_14542_p4() {
    lshr_ln1503_132_fu_14542_p4 = m_43_V_fu_14407_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_133_fu_12902_p4() {
    lshr_ln1503_133_fu_12902_p4 = m_30_V_fu_11981_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_134_fu_12924_p4() {
    lshr_ln1503_134_fu_12924_p4 = m_30_V_fu_11981_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_135_fu_12946_p4() {
    lshr_ln1503_135_fu_12946_p4 = m_30_V_fu_11981_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_136_fu_14584_p4() {
    lshr_ln1503_136_fu_14584_p4 = m_44_V_fu_14492_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_137_fu_14606_p4() {
    lshr_ln1503_137_fu_14606_p4 = m_44_V_fu_14492_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_138_fu_14628_p4() {
    lshr_ln1503_138_fu_14628_p4 = m_44_V_fu_14492_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_139_fu_13565_p4() {
    lshr_ln1503_139_fu_13565_p4 = m_31_V_fu_12976_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_13_fu_10947_p4() {
    lshr_ln1503_13_fu_10947_p4 = phi_ln1503_2_reg_1335.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_140_fu_13587_p4() {
    lshr_ln1503_140_fu_13587_p4 = m_31_V_fu_12976_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_141_fu_13609_p4() {
    lshr_ln1503_141_fu_13609_p4 = m_31_V_fu_12976_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_142_fu_14659_p4() {
    lshr_ln1503_142_fu_14659_p4 = m_45_V_fu_14578_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_143_fu_14681_p4() {
    lshr_ln1503_143_fu_14681_p4 = m_45_V_fu_14578_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_144_fu_14703_p4() {
    lshr_ln1503_144_fu_14703_p4 = m_45_V_fu_14578_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_145_fu_13635_p4() {
    lshr_ln1503_145_fu_13635_p4 = m_32_V_fu_12985_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_146_fu_13657_p4() {
    lshr_ln1503_146_fu_13657_p4 = m_32_V_fu_12985_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_147_fu_13679_p4() {
    lshr_ln1503_147_fu_13679_p4 = m_32_V_fu_12985_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_148_fu_15312_p4() {
    lshr_ln1503_148_fu_15312_p4 = m_46_V_fu_15298_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_149_fu_15334_p4() {
    lshr_ln1503_149_fu_15334_p4 = m_46_V_fu_15298_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_14_fu_11020_p4() {
    lshr_ln1503_14_fu_11020_p4 = m_19_V_fu_10907_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_150_fu_15356_p4() {
    lshr_ln1503_150_fu_15356_p4 = m_46_V_fu_15298_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_151_fu_13705_p4() {
    lshr_ln1503_151_fu_13705_p4 = m_33_V_fu_13069_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_152_fu_13727_p4() {
    lshr_ln1503_152_fu_13727_p4 = m_33_V_fu_13069_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_153_fu_13749_p4() {
    lshr_ln1503_153_fu_13749_p4 = m_33_V_fu_13069_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_154_fu_15397_p4() {
    lshr_ln1503_154_fu_15397_p4 = m_47_V_fu_15307_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_155_fu_15419_p4() {
    lshr_ln1503_155_fu_15419_p4 = m_47_V_fu_15307_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_156_fu_15441_p4() {
    lshr_ln1503_156_fu_15441_p4 = m_47_V_fu_15307_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_157_fu_13775_p4() {
    lshr_ln1503_157_fu_13775_p4 = m_34_V_fu_13154_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_158_fu_13797_p4() {
    lshr_ln1503_158_fu_13797_p4 = m_34_V_fu_13154_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_159_fu_13819_p4() {
    lshr_ln1503_159_fu_13819_p4 = m_34_V_fu_13154_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_15_fu_11042_p4() {
    lshr_ln1503_15_fu_11042_p4 = m_19_V_fu_10907_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_160_fu_15482_p4() {
    lshr_ln1503_160_fu_15482_p4 = m_48_V_fu_15391_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_161_fu_15504_p4() {
    lshr_ln1503_161_fu_15504_p4 = m_48_V_fu_15391_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_162_fu_15526_p4() {
    lshr_ln1503_162_fu_15526_p4 = m_48_V_fu_15391_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_163_fu_13845_p4() {
    lshr_ln1503_163_fu_13845_p4 = m_35_V_fu_13239_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_164_fu_13867_p4() {
    lshr_ln1503_164_fu_13867_p4 = m_35_V_fu_13239_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_165_fu_13889_p4() {
    lshr_ln1503_165_fu_13889_p4 = m_35_V_fu_13239_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_166_fu_15567_p4() {
    lshr_ln1503_166_fu_15567_p4 = m_49_V_fu_15476_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_167_fu_15589_p4() {
    lshr_ln1503_167_fu_15589_p4 = m_49_V_fu_15476_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_168_fu_15611_p4() {
    lshr_ln1503_168_fu_15611_p4 = m_49_V_fu_15476_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_169_fu_13915_p4() {
    lshr_ln1503_169_fu_13915_p4 = m_36_V_fu_13324_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_16_fu_11064_p4() {
    lshr_ln1503_16_fu_11064_p4 = m_19_V_fu_10907_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_170_fu_13937_p4() {
    lshr_ln1503_170_fu_13937_p4 = m_36_V_fu_13324_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_171_fu_13959_p4() {
    lshr_ln1503_171_fu_13959_p4 = m_36_V_fu_13324_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_172_fu_15652_p4() {
    lshr_ln1503_172_fu_15652_p4 = m_50_V_fu_15561_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_173_fu_15674_p4() {
    lshr_ln1503_173_fu_15674_p4 = m_50_V_fu_15561_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_174_fu_15696_p4() {
    lshr_ln1503_174_fu_15696_p4 = m_50_V_fu_15561_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_175_fu_13985_p4() {
    lshr_ln1503_175_fu_13985_p4 = m_37_V_fu_13409_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_176_fu_14007_p4() {
    lshr_ln1503_176_fu_14007_p4 = m_37_V_fu_13409_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_177_fu_14029_p4() {
    lshr_ln1503_177_fu_14029_p4 = m_37_V_fu_13409_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_178_fu_15737_p4() {
    lshr_ln1503_178_fu_15737_p4 = m_51_V_fu_15646_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_179_fu_15759_p4() {
    lshr_ln1503_179_fu_15759_p4 = m_51_V_fu_15646_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_17_fu_11124_p4() {
    lshr_ln1503_17_fu_11124_p4 = phi_ln1503_1_reg_1323.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_180_fu_15781_p4() {
    lshr_ln1503_180_fu_15781_p4 = m_51_V_fu_15646_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_181_fu_14734_p4() {
    lshr_ln1503_181_fu_14734_p4 = m_38_V_fu_14059_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_182_fu_14756_p4() {
    lshr_ln1503_182_fu_14756_p4 = m_38_V_fu_14059_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_183_fu_14778_p4() {
    lshr_ln1503_183_fu_14778_p4 = m_38_V_fu_14059_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_184_fu_15823_p4() {
    lshr_ln1503_184_fu_15823_p4 = m_52_V_fu_15731_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_185_fu_15845_p4() {
    lshr_ln1503_185_fu_15845_p4 = m_52_V_fu_15731_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_186_fu_15867_p4() {
    lshr_ln1503_186_fu_15867_p4 = m_52_V_fu_15731_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_187_fu_14804_p4() {
    lshr_ln1503_187_fu_14804_p4 = m_39_V_fu_14068_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_188_fu_14826_p4() {
    lshr_ln1503_188_fu_14826_p4 = m_39_V_fu_14068_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_189_fu_14848_p4() {
    lshr_ln1503_189_fu_14848_p4 = m_39_V_fu_14068_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_18_fu_11198_p4() {
    lshr_ln1503_18_fu_11198_p4 = m_20_V_fu_11014_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_190_fu_15898_p4() {
    lshr_ln1503_190_fu_15898_p4 = m_53_V_fu_15817_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_191_fu_15920_p4() {
    lshr_ln1503_191_fu_15920_p4 = m_53_V_fu_15817_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_192_fu_15942_p4() {
    lshr_ln1503_192_fu_15942_p4 = m_53_V_fu_15817_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_193_fu_14874_p4() {
    lshr_ln1503_193_fu_14874_p4 = m_40_V_fu_14152_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_194_fu_14896_p4() {
    lshr_ln1503_194_fu_14896_p4 = m_40_V_fu_14152_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_195_fu_14918_p4() {
    lshr_ln1503_195_fu_14918_p4 = m_40_V_fu_14152_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_196_fu_16213_p4() {
    lshr_ln1503_196_fu_16213_p4 = m_54_V_fu_16199_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_197_fu_16235_p4() {
    lshr_ln1503_197_fu_16235_p4 = m_54_V_fu_16199_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_198_fu_16257_p4() {
    lshr_ln1503_198_fu_16257_p4 = m_54_V_fu_16199_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_199_fu_14944_p4() {
    lshr_ln1503_199_fu_14944_p4 = m_41_V_fu_14237_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_19_fu_11220_p4() {
    lshr_ln1503_19_fu_11220_p4 = m_20_V_fu_11014_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_1_fu_4162_p4() {
    lshr_ln1503_1_fu_4162_p4 = phi_ln1503_6_reg_1382.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_200_fu_14966_p4() {
    lshr_ln1503_200_fu_14966_p4 = m_41_V_fu_14237_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_201_fu_14988_p4() {
    lshr_ln1503_201_fu_14988_p4 = m_41_V_fu_14237_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_202_fu_16298_p4() {
    lshr_ln1503_202_fu_16298_p4 = m_55_V_fu_16208_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_203_fu_16320_p4() {
    lshr_ln1503_203_fu_16320_p4 = m_55_V_fu_16208_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_204_fu_16342_p4() {
    lshr_ln1503_204_fu_16342_p4 = m_55_V_fu_16208_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_205_fu_15014_p4() {
    lshr_ln1503_205_fu_15014_p4 = m_42_V_fu_14322_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_206_fu_15036_p4() {
    lshr_ln1503_206_fu_15036_p4 = m_42_V_fu_14322_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_207_fu_15058_p4() {
    lshr_ln1503_207_fu_15058_p4 = m_42_V_fu_14322_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_208_fu_16383_p4() {
    lshr_ln1503_208_fu_16383_p4 = m_56_V_fu_16292_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_209_fu_16405_p4() {
    lshr_ln1503_209_fu_16405_p4 = m_56_V_fu_16292_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_20_fu_11242_p4() {
    lshr_ln1503_20_fu_11242_p4 = m_20_V_fu_11014_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_210_fu_16427_p4() {
    lshr_ln1503_210_fu_16427_p4 = m_56_V_fu_16292_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_211_fu_15084_p4() {
    lshr_ln1503_211_fu_15084_p4 = m_43_V_fu_14407_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_212_fu_15106_p4() {
    lshr_ln1503_212_fu_15106_p4 = m_43_V_fu_14407_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_213_fu_15128_p4() {
    lshr_ln1503_213_fu_15128_p4 = m_43_V_fu_14407_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_214_fu_16468_p4() {
    lshr_ln1503_214_fu_16468_p4 = m_57_V_fu_16377_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_215_fu_16490_p4() {
    lshr_ln1503_215_fu_16490_p4 = m_57_V_fu_16377_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_216_fu_16512_p4() {
    lshr_ln1503_216_fu_16512_p4 = m_57_V_fu_16377_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_217_fu_15154_p4() {
    lshr_ln1503_217_fu_15154_p4 = m_44_V_fu_14492_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_218_fu_15176_p4() {
    lshr_ln1503_218_fu_15176_p4 = m_44_V_fu_14492_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_219_fu_15198_p4() {
    lshr_ln1503_219_fu_15198_p4 = m_44_V_fu_14492_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_21_fu_11302_p4() {
    lshr_ln1503_21_fu_11302_p4 = phi_ln1503_reg_1311.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_220_fu_16553_p4() {
    lshr_ln1503_220_fu_16553_p4 = m_58_V_fu_16462_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_221_fu_16575_p4() {
    lshr_ln1503_221_fu_16575_p4 = m_58_V_fu_16462_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_222_fu_16597_p4() {
    lshr_ln1503_222_fu_16597_p4 = m_58_V_fu_16462_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_223_fu_15224_p4() {
    lshr_ln1503_223_fu_15224_p4 = m_45_V_fu_14578_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_224_fu_15246_p4() {
    lshr_ln1503_224_fu_15246_p4 = m_45_V_fu_14578_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_225_fu_15268_p4() {
    lshr_ln1503_225_fu_15268_p4 = m_45_V_fu_14578_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_226_fu_16638_p4() {
    lshr_ln1503_226_fu_16638_p4 = m_59_V_fu_16547_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_227_fu_16660_p4() {
    lshr_ln1503_227_fu_16660_p4 = m_59_V_fu_16547_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_228_fu_16682_p4() {
    lshr_ln1503_228_fu_16682_p4 = m_59_V_fu_16547_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_229_fu_15973_p4() {
    lshr_ln1503_229_fu_15973_p4 = m_46_V_fu_15298_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_22_fu_11376_p4() {
    lshr_ln1503_22_fu_11376_p4 = m_21_V_fu_11192_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_230_fu_15995_p4() {
    lshr_ln1503_230_fu_15995_p4 = m_46_V_fu_15298_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_231_fu_16017_p4() {
    lshr_ln1503_231_fu_16017_p4 = m_46_V_fu_15298_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_232_fu_16724_p4() {
    lshr_ln1503_232_fu_16724_p4 = m_60_V_fu_16632_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_233_fu_16746_p4() {
    lshr_ln1503_233_fu_16746_p4 = m_60_V_fu_16632_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_234_fu_16768_p4() {
    lshr_ln1503_234_fu_16768_p4 = m_60_V_fu_16632_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_235_fu_16043_p4() {
    lshr_ln1503_235_fu_16043_p4 = m_47_V_fu_15307_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_236_fu_16065_p4() {
    lshr_ln1503_236_fu_16065_p4 = m_47_V_fu_15307_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_237_fu_16087_p4() {
    lshr_ln1503_237_fu_16087_p4 = m_47_V_fu_15307_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_238_fu_16805_p4() {
    lshr_ln1503_238_fu_16805_p4 = m_61_V_fu_16718_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_239_fu_16827_p4() {
    lshr_ln1503_239_fu_16827_p4 = m_61_V_fu_16718_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_23_fu_11398_p4() {
    lshr_ln1503_23_fu_11398_p4 = m_21_V_fu_11192_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_240_fu_16849_p4() {
    lshr_ln1503_240_fu_16849_p4 = m_61_V_fu_16718_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_241_fu_16119_p4() {
    lshr_ln1503_241_fu_16119_p4 = m_48_V_fu_15391_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_242_fu_16141_p4() {
    lshr_ln1503_242_fu_16141_p4 = m_48_V_fu_15391_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_243_fu_16163_p4() {
    lshr_ln1503_243_fu_16163_p4 = m_48_V_fu_15391_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_244_fu_1878_p4() {
    lshr_ln1503_244_fu_1878_p4 = select_ln1356_1_fu_1663_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_245_fu_2038_p4() {
    lshr_ln1503_245_fu_2038_p4 = select_ln1356_2_fu_1678_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_246_fu_2138_p4() {
    lshr_ln1503_246_fu_2138_p4 = add_ln209_118_fu_1972_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_247_fu_2160_p4() {
    lshr_ln1503_247_fu_2160_p4 = add_ln209_118_fu_1972_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_248_fu_2182_p4() {
    lshr_ln1503_248_fu_2182_p4 = add_ln209_118_fu_1972_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_249_fu_2242_p4() {
    lshr_ln1503_249_fu_2242_p4 = select_ln1356_3_fu_1688_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_24_fu_11420_p4() {
    lshr_ln1503_24_fu_11420_p4 = m_21_V_fu_11192_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_250_fu_2326_p4() {
    lshr_ln1503_250_fu_2326_p4 = add_ln209_120_fu_2132_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_251_fu_2348_p4() {
    lshr_ln1503_251_fu_2348_p4 = add_ln209_120_fu_2132_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_252_fu_2370_p4() {
    lshr_ln1503_252_fu_2370_p4 = add_ln209_120_fu_2132_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_253_fu_2430_p4() {
    lshr_ln1503_253_fu_2430_p4 = select_ln1356_4_fu_1698_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_254_fu_2514_p4() {
    lshr_ln1503_254_fu_2514_p4 = add_ln209_123_fu_2320_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_255_fu_2536_p4() {
    lshr_ln1503_255_fu_2536_p4 = add_ln209_123_fu_2320_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_256_fu_2558_p4() {
    lshr_ln1503_256_fu_2558_p4 = add_ln209_123_fu_2320_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_257_fu_2618_p4() {
    lshr_ln1503_257_fu_2618_p4 = select_ln1356_5_fu_1709_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_258_fu_2702_p4() {
    lshr_ln1503_258_fu_2702_p4 = add_ln209_126_fu_2508_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_259_fu_2724_p4() {
    lshr_ln1503_259_fu_2724_p4 = add_ln209_126_fu_2508_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_25_fu_11457_p4() {
    lshr_ln1503_25_fu_11457_p4 = m_22_V_fu_11370_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_260_fu_2746_p4() {
    lshr_ln1503_260_fu_2746_p4 = add_ln209_126_fu_2508_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_261_fu_2806_p4() {
    lshr_ln1503_261_fu_2806_p4 = select_ln1356_6_fu_1720_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_262_fu_2890_p4() {
    lshr_ln1503_262_fu_2890_p4 = add_ln209_129_fu_2696_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_263_fu_2912_p4() {
    lshr_ln1503_263_fu_2912_p4 = add_ln209_129_fu_2696_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_264_fu_2934_p4() {
    lshr_ln1503_264_fu_2934_p4 = add_ln209_129_fu_2696_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_265_fu_2994_p4() {
    lshr_ln1503_265_fu_2994_p4 = select_ln1356_7_fu_1731_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_266_fu_3078_p4() {
    lshr_ln1503_266_fu_3078_p4 = add_ln209_132_fu_2884_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_267_fu_3100_p4() {
    lshr_ln1503_267_fu_3100_p4 = add_ln209_132_fu_2884_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_268_fu_3122_p4() {
    lshr_ln1503_268_fu_3122_p4 = add_ln209_132_fu_2884_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_269_fu_3182_p4() {
    lshr_ln1503_269_fu_3182_p4 = select_ln1356_8_fu_1742_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_26_fu_11479_p4() {
    lshr_ln1503_26_fu_11479_p4 = m_22_V_fu_11370_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_270_fu_3262_p4() {
    lshr_ln1503_270_fu_3262_p4 = add_ln209_135_fu_3072_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_271_fu_3284_p4() {
    lshr_ln1503_271_fu_3284_p4 = add_ln209_135_fu_3072_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_272_fu_3306_p4() {
    lshr_ln1503_272_fu_3306_p4 = add_ln209_135_fu_3072_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_273_fu_3366_p4() {
    lshr_ln1503_273_fu_3366_p4 = select_ln1356_9_fu_1749_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_274_fu_3434_p4() {
    lshr_ln1503_274_fu_3434_p4 = add_ln209_138_fu_3256_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_275_fu_3456_p4() {
    lshr_ln1503_275_fu_3456_p4 = add_ln209_138_fu_3256_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_276_fu_3478_p4() {
    lshr_ln1503_276_fu_3478_p4 = add_ln209_138_fu_3256_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_277_fu_3538_p4() {
    lshr_ln1503_277_fu_3538_p4 = select_ln1356_10_fu_1756_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_278_fu_4930_p4() {
    lshr_ln1503_278_fu_4930_p4 = add_ln209_141_fu_4916_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_279_fu_4952_p4() {
    lshr_ln1503_279_fu_4952_p4 = add_ln209_141_fu_4916_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_27_fu_11501_p4() {
    lshr_ln1503_27_fu_11501_p4 = m_22_V_fu_11370_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_280_fu_4974_p4() {
    lshr_ln1503_280_fu_4974_p4 = add_ln209_141_fu_4916_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_281_fu_3640_p4() {
    lshr_ln1503_281_fu_3640_p4 = select_ln1356_11_fu_1763_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_282_fu_5010_p4() {
    lshr_ln1503_282_fu_5010_p4 = add_ln209_144_fu_4925_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_283_fu_5032_p4() {
    lshr_ln1503_283_fu_5032_p4 = add_ln209_144_fu_4925_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_284_fu_5054_p4() {
    lshr_ln1503_284_fu_5054_p4 = add_ln209_144_fu_4925_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_285_fu_3742_p4() {
    lshr_ln1503_285_fu_3742_p4 = select_ln1356_12_fu_1774_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_286_fu_5090_p4() {
    lshr_ln1503_286_fu_5090_p4 = add_ln209_147_fu_5005_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_287_fu_5112_p4() {
    lshr_ln1503_287_fu_5112_p4 = add_ln209_147_fu_5005_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_288_fu_5134_p4() {
    lshr_ln1503_288_fu_5134_p4 = add_ln209_147_fu_5005_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_289_fu_3844_p4() {
    lshr_ln1503_289_fu_3844_p4 = select_ln1356_13_fu_1785_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_28_fu_11532_p4() {
    lshr_ln1503_28_fu_11532_p4 = m_23_V_fu_11451_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_290_fu_5170_p4() {
    lshr_ln1503_290_fu_5170_p4 = add_ln209_150_fu_5085_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_291_fu_5192_p4() {
    lshr_ln1503_291_fu_5192_p4 = add_ln209_150_fu_5085_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_292_fu_5214_p4() {
    lshr_ln1503_292_fu_5214_p4 = add_ln209_150_fu_5085_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_293_fu_3946_p4() {
    lshr_ln1503_293_fu_3946_p4 = select_ln1356_14_fu_1796_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_294_fu_5250_p4() {
    lshr_ln1503_294_fu_5250_p4 = add_ln209_153_fu_5165_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_295_fu_5272_p4() {
    lshr_ln1503_295_fu_5272_p4 = add_ln209_153_fu_5165_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_296_fu_5294_p4() {
    lshr_ln1503_296_fu_5294_p4 = add_ln209_153_fu_5165_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_297_fu_4048_p4() {
    lshr_ln1503_297_fu_4048_p4 = select_ln1356_15_fu_1807_p3.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_298_fu_5330_p4() {
    lshr_ln1503_298_fu_5330_p4 = add_ln209_156_fu_5245_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_299_fu_5352_p4() {
    lshr_ln1503_299_fu_5352_p4 = add_ln209_156_fu_5245_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_29_fu_11554_p4() {
    lshr_ln1503_29_fu_11554_p4 = m_23_V_fu_11451_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_2_fu_4554_p4() {
    lshr_ln1503_2_fu_4554_p4 = m_17_V_fu_4326_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_300_fu_5374_p4() {
    lshr_ln1503_300_fu_5374_p4 = add_ln209_156_fu_5245_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_301_fu_5400_p4() {
    lshr_ln1503_301_fu_5400_p4 = add_ln209_118_reg_17783.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_302_fu_5420_p4() {
    lshr_ln1503_302_fu_5420_p4 = add_ln209_118_reg_17783.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_303_fu_5440_p4() {
    lshr_ln1503_303_fu_5440_p4 = add_ln209_118_reg_17783.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_304_fu_5482_p4() {
    lshr_ln1503_304_fu_5482_p4 = add_ln209_159_fu_5325_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_305_fu_5504_p4() {
    lshr_ln1503_305_fu_5504_p4 = add_ln209_159_fu_5325_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_306_fu_5526_p4() {
    lshr_ln1503_306_fu_5526_p4 = add_ln209_159_fu_5325_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_307_fu_5552_p4() {
    lshr_ln1503_307_fu_5552_p4 = add_ln209_120_reg_17794.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_308_fu_5572_p4() {
    lshr_ln1503_308_fu_5572_p4 = add_ln209_120_reg_17794.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_309_fu_5592_p4() {
    lshr_ln1503_309_fu_5592_p4 = add_ln209_120_reg_17794.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_30_fu_11576_p4() {
    lshr_ln1503_30_fu_11576_p4 = m_23_V_fu_11451_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_310_fu_5634_p4() {
    lshr_ln1503_310_fu_5634_p4 = add_ln209_162_fu_5476_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_311_fu_5656_p4() {
    lshr_ln1503_311_fu_5656_p4 = add_ln209_162_fu_5476_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_312_fu_5678_p4() {
    lshr_ln1503_312_fu_5678_p4 = add_ln209_162_fu_5476_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_313_fu_5704_p4() {
    lshr_ln1503_313_fu_5704_p4 = add_ln209_123_reg_17805.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_314_fu_5724_p4() {
    lshr_ln1503_314_fu_5724_p4 = add_ln209_123_reg_17805.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_315_fu_5744_p4() {
    lshr_ln1503_315_fu_5744_p4 = add_ln209_123_reg_17805.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_316_fu_5786_p4() {
    lshr_ln1503_316_fu_5786_p4 = add_ln209_165_fu_5628_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_317_fu_5808_p4() {
    lshr_ln1503_317_fu_5808_p4 = add_ln209_165_fu_5628_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_318_fu_5830_p4() {
    lshr_ln1503_318_fu_5830_p4 = add_ln209_165_fu_5628_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_319_fu_5856_p4() {
    lshr_ln1503_319_fu_5856_p4 = add_ln209_126_reg_17816.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_31_fu_11607_p4() {
    lshr_ln1503_31_fu_11607_p4 = m_24_V_fu_11527_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_320_fu_5876_p4() {
    lshr_ln1503_320_fu_5876_p4 = add_ln209_126_reg_17816.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_321_fu_5896_p4() {
    lshr_ln1503_321_fu_5896_p4 = add_ln209_126_reg_17816.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_322_fu_5938_p4() {
    lshr_ln1503_322_fu_5938_p4 = add_ln209_168_fu_5780_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_323_fu_5960_p4() {
    lshr_ln1503_323_fu_5960_p4 = add_ln209_168_fu_5780_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_324_fu_5982_p4() {
    lshr_ln1503_324_fu_5982_p4 = add_ln209_168_fu_5780_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_325_fu_6008_p4() {
    lshr_ln1503_325_fu_6008_p4 = add_ln209_129_reg_17827.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_326_fu_6028_p4() {
    lshr_ln1503_326_fu_6028_p4 = add_ln209_129_reg_17827.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_327_fu_6048_p4() {
    lshr_ln1503_327_fu_6048_p4 = add_ln209_129_reg_17827.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_328_fu_6090_p4() {
    lshr_ln1503_328_fu_6090_p4 = add_ln209_171_fu_5932_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_329_fu_6112_p4() {
    lshr_ln1503_329_fu_6112_p4 = add_ln209_171_fu_5932_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_32_fu_11629_p4() {
    lshr_ln1503_32_fu_11629_p4 = m_24_V_fu_11527_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_330_fu_6134_p4() {
    lshr_ln1503_330_fu_6134_p4 = add_ln209_171_fu_5932_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_331_fu_6534_p4() {
    lshr_ln1503_331_fu_6534_p4 = add_ln209_132_reg_17838.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_332_fu_6554_p4() {
    lshr_ln1503_332_fu_6554_p4 = add_ln209_132_reg_17838.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_333_fu_6574_p4() {
    lshr_ln1503_333_fu_6574_p4 = add_ln209_132_reg_17838.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_334_fu_6160_p4() {
    lshr_ln1503_334_fu_6160_p4 = add_ln209_174_fu_6084_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_335_fu_6182_p4() {
    lshr_ln1503_335_fu_6182_p4 = add_ln209_174_fu_6084_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_336_fu_6204_p4() {
    lshr_ln1503_336_fu_6204_p4 = add_ln209_174_fu_6084_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_337_fu_6604_p4() {
    lshr_ln1503_337_fu_6604_p4 = add_ln209_135_reg_17849.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_338_fu_6624_p4() {
    lshr_ln1503_338_fu_6624_p4 = add_ln209_135_reg_17849.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_339_fu_6644_p4() {
    lshr_ln1503_339_fu_6644_p4 = add_ln209_135_reg_17849.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_33_fu_11651_p4() {
    lshr_ln1503_33_fu_11651_p4 = m_24_V_fu_11527_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_340_fu_6692_p4() {
    lshr_ln1503_340_fu_6692_p4 = add_ln209_177_fu_6678_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_341_fu_6714_p4() {
    lshr_ln1503_341_fu_6714_p4 = add_ln209_177_fu_6678_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_342_fu_6736_p4() {
    lshr_ln1503_342_fu_6736_p4 = add_ln209_177_fu_6678_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_343_fu_6762_p4() {
    lshr_ln1503_343_fu_6762_p4 = add_ln209_138_reg_17860.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_344_fu_6782_p4() {
    lshr_ln1503_344_fu_6782_p4 = add_ln209_138_reg_17860.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_345_fu_6802_p4() {
    lshr_ln1503_345_fu_6802_p4 = add_ln209_138_reg_17860.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_346_fu_6843_p4() {
    lshr_ln1503_346_fu_6843_p4 = add_ln209_180_fu_6687_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_347_fu_6865_p4() {
    lshr_ln1503_347_fu_6865_p4 = add_ln209_180_fu_6687_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_348_fu_6887_p4() {
    lshr_ln1503_348_fu_6887_p4 = add_ln209_180_fu_6687_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_349_fu_6230_p4() {
    lshr_ln1503_349_fu_6230_p4 = add_ln209_141_fu_4916_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_34_fu_11683_p4() {
    lshr_ln1503_34_fu_11683_p4 = m_25_V_fu_11602_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_350_fu_6252_p4() {
    lshr_ln1503_350_fu_6252_p4 = add_ln209_141_fu_4916_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_351_fu_6274_p4() {
    lshr_ln1503_351_fu_6274_p4 = add_ln209_141_fu_4916_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_352_fu_6923_p4() {
    lshr_ln1503_352_fu_6923_p4 = add_ln209_183_fu_6837_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_353_fu_6945_p4() {
    lshr_ln1503_353_fu_6945_p4 = add_ln209_183_fu_6837_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_354_fu_6967_p4() {
    lshr_ln1503_354_fu_6967_p4 = add_ln209_183_fu_6837_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_355_fu_6306_p4() {
    lshr_ln1503_355_fu_6306_p4 = add_ln209_144_fu_4925_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_356_fu_6328_p4() {
    lshr_ln1503_356_fu_6328_p4 = add_ln209_144_fu_4925_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_357_fu_6350_p4() {
    lshr_ln1503_357_fu_6350_p4 = add_ln209_144_fu_4925_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_358_fu_7003_p4() {
    lshr_ln1503_358_fu_7003_p4 = add_ln209_186_fu_6918_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_359_fu_7025_p4() {
    lshr_ln1503_359_fu_7025_p4 = add_ln209_186_fu_6918_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_35_fu_11705_p4() {
    lshr_ln1503_35_fu_11705_p4 = m_25_V_fu_11602_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_360_fu_7047_p4() {
    lshr_ln1503_360_fu_7047_p4 = add_ln209_186_fu_6918_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_361_fu_6382_p4() {
    lshr_ln1503_361_fu_6382_p4 = add_ln209_147_fu_5005_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_362_fu_6404_p4() {
    lshr_ln1503_362_fu_6404_p4 = add_ln209_147_fu_5005_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_363_fu_6426_p4() {
    lshr_ln1503_363_fu_6426_p4 = add_ln209_147_fu_5005_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_364_fu_7083_p4() {
    lshr_ln1503_364_fu_7083_p4 = add_ln209_189_fu_6998_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_365_fu_7105_p4() {
    lshr_ln1503_365_fu_7105_p4 = add_ln209_189_fu_6998_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_366_fu_7127_p4() {
    lshr_ln1503_366_fu_7127_p4 = add_ln209_189_fu_6998_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_367_fu_6458_p4() {
    lshr_ln1503_367_fu_6458_p4 = add_ln209_150_fu_5085_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_368_fu_6480_p4() {
    lshr_ln1503_368_fu_6480_p4 = add_ln209_150_fu_5085_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_369_fu_6502_p4() {
    lshr_ln1503_369_fu_6502_p4 = add_ln209_150_fu_5085_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_36_fu_11727_p4() {
    lshr_ln1503_36_fu_11727_p4 = m_25_V_fu_11602_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_370_fu_7163_p4() {
    lshr_ln1503_370_fu_7163_p4 = add_ln209_192_fu_7078_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_371_fu_7185_p4() {
    lshr_ln1503_371_fu_7185_p4 = add_ln209_192_fu_7078_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_372_fu_7207_p4() {
    lshr_ln1503_372_fu_7207_p4 = add_ln209_192_fu_7078_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_373_fu_7233_p4() {
    lshr_ln1503_373_fu_7233_p4 = add_ln209_153_reg_18041.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_374_fu_7253_p4() {
    lshr_ln1503_374_fu_7253_p4 = add_ln209_153_reg_18041.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_375_fu_7273_p4() {
    lshr_ln1503_375_fu_7273_p4 = add_ln209_153_reg_18041.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_376_fu_7315_p4() {
    lshr_ln1503_376_fu_7315_p4 = add_ln209_195_fu_7158_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_377_fu_7337_p4() {
    lshr_ln1503_377_fu_7337_p4 = add_ln209_195_fu_7158_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_378_fu_7359_p4() {
    lshr_ln1503_378_fu_7359_p4 = add_ln209_195_fu_7158_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_379_fu_7385_p4() {
    lshr_ln1503_379_fu_7385_p4 = add_ln209_156_reg_18052.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_37_fu_11759_p4() {
    lshr_ln1503_37_fu_11759_p4 = m_26_V_fu_11677_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_380_fu_7405_p4() {
    lshr_ln1503_380_fu_7405_p4 = add_ln209_156_reg_18052.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_381_fu_7425_p4() {
    lshr_ln1503_381_fu_7425_p4 = add_ln209_156_reg_18052.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_382_fu_7467_p4() {
    lshr_ln1503_382_fu_7467_p4 = add_ln209_198_fu_7309_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_383_fu_7489_p4() {
    lshr_ln1503_383_fu_7489_p4 = add_ln209_198_fu_7309_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_384_fu_7511_p4() {
    lshr_ln1503_384_fu_7511_p4 = add_ln209_198_fu_7309_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_385_fu_7537_p4() {
    lshr_ln1503_385_fu_7537_p4 = add_ln209_159_reg_18064.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_386_fu_7557_p4() {
    lshr_ln1503_386_fu_7557_p4 = add_ln209_159_reg_18064.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_387_fu_7577_p4() {
    lshr_ln1503_387_fu_7577_p4 = add_ln209_159_reg_18064.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_388_fu_7619_p4() {
    lshr_ln1503_388_fu_7619_p4 = add_ln209_201_fu_7461_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_389_fu_7641_p4() {
    lshr_ln1503_389_fu_7641_p4 = add_ln209_201_fu_7461_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_38_fu_11781_p4() {
    lshr_ln1503_38_fu_11781_p4 = m_26_V_fu_11677_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_390_fu_7663_p4() {
    lshr_ln1503_390_fu_7663_p4 = add_ln209_201_fu_7461_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_391_fu_7689_p4() {
    lshr_ln1503_391_fu_7689_p4 = add_ln209_162_reg_18076.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_392_fu_7709_p4() {
    lshr_ln1503_392_fu_7709_p4 = add_ln209_162_reg_18076.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_393_fu_7729_p4() {
    lshr_ln1503_393_fu_7729_p4 = add_ln209_162_reg_18076.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_394_fu_7771_p4() {
    lshr_ln1503_394_fu_7771_p4 = add_ln209_204_fu_7613_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_395_fu_7793_p4() {
    lshr_ln1503_395_fu_7793_p4 = add_ln209_204_fu_7613_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_396_fu_7815_p4() {
    lshr_ln1503_396_fu_7815_p4 = add_ln209_204_fu_7613_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_397_fu_7841_p4() {
    lshr_ln1503_397_fu_7841_p4 = add_ln209_165_reg_18088.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_398_fu_7861_p4() {
    lshr_ln1503_398_fu_7861_p4 = add_ln209_165_reg_18088.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_399_fu_7881_p4() {
    lshr_ln1503_399_fu_7881_p4 = add_ln209_165_reg_18088.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_39_fu_11803_p4() {
    lshr_ln1503_39_fu_11803_p4 = m_26_V_fu_11677_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_3_fu_4264_p4() {
    lshr_ln1503_3_fu_4264_p4 = phi_ln1503_5_reg_1371.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_400_fu_7923_p4() {
    lshr_ln1503_400_fu_7923_p4 = add_ln209_207_fu_7765_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_401_fu_7945_p4() {
    lshr_ln1503_401_fu_7945_p4 = add_ln209_207_fu_7765_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_402_fu_7967_p4() {
    lshr_ln1503_402_fu_7967_p4 = add_ln209_207_fu_7765_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_403_fu_8437_p4() {
    lshr_ln1503_403_fu_8437_p4 = add_ln209_168_reg_18099.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_404_fu_8457_p4() {
    lshr_ln1503_404_fu_8457_p4 = add_ln209_168_reg_18099.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_405_fu_8477_p4() {
    lshr_ln1503_405_fu_8477_p4 = add_ln209_168_reg_18099.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_406_fu_7993_p4() {
    lshr_ln1503_406_fu_7993_p4 = add_ln209_210_fu_7917_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_407_fu_8015_p4() {
    lshr_ln1503_407_fu_8015_p4 = add_ln209_210_fu_7917_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_408_fu_8037_p4() {
    lshr_ln1503_408_fu_8037_p4 = add_ln209_210_fu_7917_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_409_fu_8517_p4() {
    lshr_ln1503_409_fu_8517_p4 = add_ln209_171_reg_18110.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_40_fu_11835_p4() {
    lshr_ln1503_40_fu_11835_p4 = m_27_V_fu_11753_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_410_fu_8537_p4() {
    lshr_ln1503_410_fu_8537_p4 = add_ln209_171_reg_18110.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_411_fu_8557_p4() {
    lshr_ln1503_411_fu_8557_p4 = add_ln209_171_reg_18110.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_412_fu_8597_p4() {
    lshr_ln1503_412_fu_8597_p4 = add_ln209_213_fu_8511_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_413_fu_8619_p4() {
    lshr_ln1503_413_fu_8619_p4 = add_ln209_213_fu_8511_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_414_fu_8641_p4() {
    lshr_ln1503_414_fu_8641_p4 = add_ln209_213_fu_8511_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_415_fu_8667_p4() {
    lshr_ln1503_415_fu_8667_p4 = add_ln209_174_reg_18121.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_416_fu_8687_p4() {
    lshr_ln1503_416_fu_8687_p4 = add_ln209_174_reg_18121.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_417_fu_8707_p4() {
    lshr_ln1503_417_fu_8707_p4 = add_ln209_174_reg_18121.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_418_fu_8748_p4() {
    lshr_ln1503_418_fu_8748_p4 = add_ln209_216_fu_8591_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_419_fu_8770_p4() {
    lshr_ln1503_419_fu_8770_p4 = add_ln209_216_fu_8591_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_41_fu_11857_p4() {
    lshr_ln1503_41_fu_11857_p4 = m_27_V_fu_11753_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_420_fu_8792_p4() {
    lshr_ln1503_420_fu_8792_p4 = add_ln209_216_fu_8591_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_421_fu_8063_p4() {
    lshr_ln1503_421_fu_8063_p4 = add_ln209_177_fu_6678_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_422_fu_8085_p4() {
    lshr_ln1503_422_fu_8085_p4 = add_ln209_177_fu_6678_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_423_fu_8107_p4() {
    lshr_ln1503_423_fu_8107_p4 = add_ln209_177_fu_6678_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_424_fu_8828_p4() {
    lshr_ln1503_424_fu_8828_p4 = add_ln209_219_fu_8742_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_425_fu_8850_p4() {
    lshr_ln1503_425_fu_8850_p4 = add_ln209_219_fu_8742_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_426_fu_8872_p4() {
    lshr_ln1503_426_fu_8872_p4 = add_ln209_219_fu_8742_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_427_fu_8139_p4() {
    lshr_ln1503_427_fu_8139_p4 = add_ln209_180_fu_6687_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_428_fu_8161_p4() {
    lshr_ln1503_428_fu_8161_p4 = add_ln209_180_fu_6687_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_429_fu_8183_p4() {
    lshr_ln1503_429_fu_8183_p4 = add_ln209_180_fu_6687_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_42_fu_11879_p4() {
    lshr_ln1503_42_fu_11879_p4 = m_27_V_fu_11753_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_430_fu_8908_p4() {
    lshr_ln1503_430_fu_8908_p4 = add_ln209_222_fu_8823_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_431_fu_8930_p4() {
    lshr_ln1503_431_fu_8930_p4 = add_ln209_222_fu_8823_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_432_fu_8952_p4() {
    lshr_ln1503_432_fu_8952_p4 = add_ln209_222_fu_8823_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_433_fu_8215_p4() {
    lshr_ln1503_433_fu_8215_p4 = add_ln209_183_fu_6837_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_434_fu_8237_p4() {
    lshr_ln1503_434_fu_8237_p4 = add_ln209_183_fu_6837_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_435_fu_8259_p4() {
    lshr_ln1503_435_fu_8259_p4 = add_ln209_183_fu_6837_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_436_fu_8988_p4() {
    lshr_ln1503_436_fu_8988_p4 = add_ln209_225_fu_8903_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_437_fu_9010_p4() {
    lshr_ln1503_437_fu_9010_p4 = add_ln209_225_fu_8903_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_438_fu_9032_p4() {
    lshr_ln1503_438_fu_9032_p4 = add_ln209_225_fu_8903_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_439_fu_8291_p4() {
    lshr_ln1503_439_fu_8291_p4 = add_ln209_186_fu_6918_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_43_fu_11911_p4() {
    lshr_ln1503_43_fu_11911_p4 = m_28_V_fu_11829_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_440_fu_8313_p4() {
    lshr_ln1503_440_fu_8313_p4 = add_ln209_186_fu_6918_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_441_fu_8335_p4() {
    lshr_ln1503_441_fu_8335_p4 = add_ln209_186_fu_6918_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_442_fu_9058_p4() {
    lshr_ln1503_442_fu_9058_p4 = add_ln209_228_fu_8983_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_443_fu_9080_p4() {
    lshr_ln1503_443_fu_9080_p4 = add_ln209_228_fu_8983_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_444_fu_9102_p4() {
    lshr_ln1503_444_fu_9102_p4 = add_ln209_228_fu_8983_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_445_fu_9277_p4() {
    lshr_ln1503_445_fu_9277_p4 = add_ln209_189_reg_18196.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_446_fu_9297_p4() {
    lshr_ln1503_446_fu_9297_p4 = add_ln209_189_reg_18196.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_447_fu_9317_p4() {
    lshr_ln1503_447_fu_9317_p4 = add_ln209_189_reg_18196.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_448_fu_9207_p4() {
    lshr_ln1503_448_fu_9207_p4 = add_ln209_231_fu_9202_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_449_fu_9229_p4() {
    lshr_ln1503_449_fu_9229_p4 = add_ln209_231_fu_9202_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_44_fu_11933_p4() {
    lshr_ln1503_44_fu_11933_p4 = m_28_V_fu_11829_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_450_fu_9251_p4() {
    lshr_ln1503_450_fu_9251_p4 = add_ln209_231_fu_9202_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_451_fu_9357_p4() {
    lshr_ln1503_451_fu_9357_p4 = add_ln209_192_reg_18207.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_452_fu_9377_p4() {
    lshr_ln1503_452_fu_9377_p4 = add_ln209_192_reg_18207.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_453_fu_9397_p4() {
    lshr_ln1503_453_fu_9397_p4 = add_ln209_192_reg_18207.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_454_fu_9437_p4() {
    lshr_ln1503_454_fu_9437_p4 = add_ln209_234_fu_9351_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_455_fu_9459_p4() {
    lshr_ln1503_455_fu_9459_p4 = add_ln209_234_fu_9351_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_456_fu_9481_p4() {
    lshr_ln1503_456_fu_9481_p4 = add_ln209_234_fu_9351_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_457_fu_9507_p4() {
    lshr_ln1503_457_fu_9507_p4 = add_ln209_195_reg_18219.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_458_fu_9527_p4() {
    lshr_ln1503_458_fu_9527_p4 = add_ln209_195_reg_18219.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_459_fu_9547_p4() {
    lshr_ln1503_459_fu_9547_p4 = add_ln209_195_reg_18219.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_45_fu_11955_p4() {
    lshr_ln1503_45_fu_11955_p4 = m_28_V_fu_11829_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_460_fu_9588_p4() {
    lshr_ln1503_460_fu_9588_p4 = add_ln209_237_fu_9431_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_461_fu_9610_p4() {
    lshr_ln1503_461_fu_9610_p4 = add_ln209_237_fu_9431_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_462_fu_9632_p4() {
    lshr_ln1503_462_fu_9632_p4 = add_ln209_237_fu_9431_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_463_fu_9658_p4() {
    lshr_ln1503_463_fu_9658_p4 = add_ln209_198_reg_18231.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_464_fu_9678_p4() {
    lshr_ln1503_464_fu_9678_p4 = add_ln209_198_reg_18231.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_465_fu_9698_p4() {
    lshr_ln1503_465_fu_9698_p4 = add_ln209_198_reg_18231.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_466_fu_9739_p4() {
    lshr_ln1503_466_fu_9739_p4 = add_ln209_240_fu_9582_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_467_fu_9761_p4() {
    lshr_ln1503_467_fu_9761_p4 = add_ln209_240_fu_9582_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_468_fu_9783_p4() {
    lshr_ln1503_468_fu_9783_p4 = add_ln209_240_fu_9582_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_469_fu_9809_p4() {
    lshr_ln1503_469_fu_9809_p4 = add_ln209_201_reg_18243.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_46_fu_11987_p4() {
    lshr_ln1503_46_fu_11987_p4 = m_29_V_fu_11905_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_470_fu_9829_p4() {
    lshr_ln1503_470_fu_9829_p4 = add_ln209_201_reg_18243.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_471_fu_9849_p4() {
    lshr_ln1503_471_fu_9849_p4 = add_ln209_201_reg_18243.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_472_fu_9890_p4() {
    lshr_ln1503_472_fu_9890_p4 = add_ln209_243_fu_9733_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_473_fu_9912_p4() {
    lshr_ln1503_473_fu_9912_p4 = add_ln209_243_fu_9733_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_474_fu_9934_p4() {
    lshr_ln1503_474_fu_9934_p4 = add_ln209_243_fu_9733_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_475_fu_9960_p4() {
    lshr_ln1503_475_fu_9960_p4 = add_ln209_204_reg_18254.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_476_fu_9980_p4() {
    lshr_ln1503_476_fu_9980_p4 = add_ln209_204_reg_18254.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_477_fu_10000_p4() {
    lshr_ln1503_477_fu_10000_p4 = add_ln209_204_reg_18254.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_478_fu_10041_p4() {
    lshr_ln1503_478_fu_10041_p4 = add_ln209_246_fu_9884_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_479_fu_10063_p4() {
    lshr_ln1503_479_fu_10063_p4 = add_ln209_246_fu_9884_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_47_fu_12009_p4() {
    lshr_ln1503_47_fu_12009_p4 = m_29_V_fu_11905_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_480_fu_10085_p4() {
    lshr_ln1503_480_fu_10085_p4 = add_ln209_246_fu_9884_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_481_fu_10111_p4() {
    lshr_ln1503_481_fu_10111_p4 = add_ln209_207_reg_18265.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_482_fu_10131_p4() {
    lshr_ln1503_482_fu_10131_p4 = add_ln209_207_reg_18265.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_483_fu_10151_p4() {
    lshr_ln1503_483_fu_10151_p4 = add_ln209_207_reg_18265.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_484_fu_10192_p4() {
    lshr_ln1503_484_fu_10192_p4 = add_ln209_249_fu_10035_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_485_fu_10214_p4() {
    lshr_ln1503_485_fu_10214_p4 = add_ln209_249_fu_10035_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_486_fu_10236_p4() {
    lshr_ln1503_486_fu_10236_p4 = add_ln209_249_fu_10035_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_487_fu_8367_p4() {
    lshr_ln1503_487_fu_8367_p4 = add_ln209_210_fu_7917_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_488_fu_8389_p4() {
    lshr_ln1503_488_fu_8389_p4 = add_ln209_210_fu_7917_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_489_fu_8411_p4() {
    lshr_ln1503_489_fu_8411_p4 = add_ln209_210_fu_7917_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_48_fu_12031_p4() {
    lshr_ln1503_48_fu_12031_p4 = m_29_V_fu_11905_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_490_fu_10278_p4() {
    lshr_ln1503_490_fu_10278_p4 = add_ln209_252_fu_10186_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_491_fu_10300_p4() {
    lshr_ln1503_491_fu_10300_p4 = add_ln209_252_fu_10186_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_492_fu_10322_p4() {
    lshr_ln1503_492_fu_10322_p4 = add_ln209_252_fu_10186_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_493_fu_9128_p4() {
    lshr_ln1503_493_fu_9128_p4 = add_ln209_213_fu_8511_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_494_fu_9150_p4() {
    lshr_ln1503_494_fu_9150_p4 = add_ln209_213_fu_8511_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_495_fu_9172_p4() {
    lshr_ln1503_495_fu_9172_p4 = add_ln209_213_fu_8511_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_49_fu_4650_p4() {
    lshr_ln1503_49_fu_4650_p4 = m_16_V_fu_4224_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_4_fu_4332_p4() {
    lshr_ln1503_4_fu_4332_p4 = m_16_V_fu_4224_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_50_fu_4672_p4() {
    lshr_ln1503_50_fu_4672_p4 = m_16_V_fu_4224_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_51_fu_4694_p4() {
    lshr_ln1503_51_fu_4694_p4 = m_16_V_fu_4224_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_52_fu_12057_p4() {
    lshr_ln1503_52_fu_12057_p4 = m_30_V_fu_11981_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_53_fu_12079_p4() {
    lshr_ln1503_53_fu_12079_p4 = m_30_V_fu_11981_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_54_fu_12101_p4() {
    lshr_ln1503_54_fu_12101_p4 = m_30_V_fu_11981_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_55_fu_4720_p4() {
    lshr_ln1503_55_fu_4720_p4 = m_17_V_fu_4326_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_56_fu_4742_p4() {
    lshr_ln1503_56_fu_4742_p4 = m_17_V_fu_4326_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_57_fu_4764_p4() {
    lshr_ln1503_57_fu_4764_p4 = m_17_V_fu_4326_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_58_fu_12990_p4() {
    lshr_ln1503_58_fu_12990_p4 = m_31_V_fu_12976_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_59_fu_13012_p4() {
    lshr_ln1503_59_fu_13012_p4 = m_31_V_fu_12976_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_5_fu_4354_p4() {
    lshr_ln1503_5_fu_4354_p4 = m_16_V_fu_4224_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_60_fu_13034_p4() {
    lshr_ln1503_60_fu_13034_p4 = m_31_V_fu_12976_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_61_fu_4790_p4() {
    lshr_ln1503_61_fu_4790_p4 = m_18_V_fu_4504_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_62_fu_4812_p4() {
    lshr_ln1503_62_fu_4812_p4 = m_18_V_fu_4504_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_63_fu_4834_p4() {
    lshr_ln1503_63_fu_4834_p4 = m_18_V_fu_4504_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_64_fu_13075_p4() {
    lshr_ln1503_64_fu_13075_p4 = m_32_V_fu_12985_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_65_fu_13097_p4() {
    lshr_ln1503_65_fu_13097_p4 = m_32_V_fu_12985_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_66_fu_13119_p4() {
    lshr_ln1503_66_fu_13119_p4 = m_32_V_fu_12985_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_67_fu_12132_p4() {
    lshr_ln1503_67_fu_12132_p4 = m_19_V_fu_10907_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_68_fu_12154_p4() {
    lshr_ln1503_68_fu_12154_p4 = m_19_V_fu_10907_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_69_fu_12176_p4() {
    lshr_ln1503_69_fu_12176_p4 = m_19_V_fu_10907_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_6_fu_4376_p4() {
    lshr_ln1503_6_fu_4376_p4 = m_16_V_fu_4224_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_70_fu_13160_p4() {
    lshr_ln1503_70_fu_13160_p4 = m_33_V_fu_13069_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_71_fu_13182_p4() {
    lshr_ln1503_71_fu_13182_p4 = m_33_V_fu_13069_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_72_fu_13204_p4() {
    lshr_ln1503_72_fu_13204_p4 = m_33_V_fu_13069_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_73_fu_12202_p4() {
    lshr_ln1503_73_fu_12202_p4 = m_20_V_fu_11014_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_74_fu_12224_p4() {
    lshr_ln1503_74_fu_12224_p4 = m_20_V_fu_11014_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_75_fu_12246_p4() {
    lshr_ln1503_75_fu_12246_p4 = m_20_V_fu_11014_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_76_fu_13245_p4() {
    lshr_ln1503_76_fu_13245_p4 = m_34_V_fu_13154_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_77_fu_13267_p4() {
    lshr_ln1503_77_fu_13267_p4 = m_34_V_fu_13154_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_78_fu_13289_p4() {
    lshr_ln1503_78_fu_13289_p4 = m_34_V_fu_13154_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_79_fu_12272_p4() {
    lshr_ln1503_79_fu_12272_p4 = m_21_V_fu_11192_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_7_fu_10840_p4() {
    lshr_ln1503_7_fu_10840_p4 = phi_ln1503_3_reg_1347.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_80_fu_12294_p4() {
    lshr_ln1503_80_fu_12294_p4 = m_21_V_fu_11192_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_81_fu_12316_p4() {
    lshr_ln1503_81_fu_12316_p4 = m_21_V_fu_11192_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_82_fu_13330_p4() {
    lshr_ln1503_82_fu_13330_p4 = m_35_V_fu_13239_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_83_fu_13352_p4() {
    lshr_ln1503_83_fu_13352_p4 = m_35_V_fu_13239_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_84_fu_13374_p4() {
    lshr_ln1503_84_fu_13374_p4 = m_35_V_fu_13239_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_85_fu_12342_p4() {
    lshr_ln1503_85_fu_12342_p4 = m_22_V_fu_11370_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_86_fu_12364_p4() {
    lshr_ln1503_86_fu_12364_p4 = m_22_V_fu_11370_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_87_fu_12386_p4() {
    lshr_ln1503_87_fu_12386_p4 = m_22_V_fu_11370_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_88_fu_13415_p4() {
    lshr_ln1503_88_fu_13415_p4 = m_36_V_fu_13324_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_89_fu_13437_p4() {
    lshr_ln1503_89_fu_13437_p4 = m_36_V_fu_13324_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_8_fu_4436_p4() {
    lshr_ln1503_8_fu_4436_p4 = phi_ln1503_4_reg_1359.read().range(7, 3);
}

void sha256d::thread_lshr_ln1503_90_fu_13459_p4() {
    lshr_ln1503_90_fu_13459_p4 = m_36_V_fu_13324_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_91_fu_12412_p4() {
    lshr_ln1503_91_fu_12412_p4 = m_23_V_fu_11451_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_92_fu_12434_p4() {
    lshr_ln1503_92_fu_12434_p4 = m_23_V_fu_11451_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_93_fu_12456_p4() {
    lshr_ln1503_93_fu_12456_p4 = m_23_V_fu_11451_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_94_fu_13490_p4() {
    lshr_ln1503_94_fu_13490_p4 = m_37_V_fu_13409_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_95_fu_13512_p4() {
    lshr_ln1503_95_fu_13512_p4 = m_37_V_fu_13409_p2.read().range(31, 19);
}

void sha256d::thread_lshr_ln1503_96_fu_13534_p4() {
    lshr_ln1503_96_fu_13534_p4 = m_37_V_fu_13409_p2.read().range(31, 10);
}

void sha256d::thread_lshr_ln1503_97_fu_12482_p4() {
    lshr_ln1503_97_fu_12482_p4 = m_24_V_fu_11527_p2.read().range(31, 7);
}

void sha256d::thread_lshr_ln1503_98_fu_12504_p4() {
    lshr_ln1503_98_fu_12504_p4 = m_24_V_fu_11527_p2.read().range(31, 18);
}

void sha256d::thread_lshr_ln1503_99_fu_12526_p4() {
    lshr_ln1503_99_fu_12526_p4 = m_24_V_fu_11527_p2.read().range(31, 3);
}

void sha256d::thread_lshr_ln1503_9_fu_4510_p4() {
    lshr_ln1503_9_fu_4510_p4 = m_17_V_fu_4326_p2.read().range(31, 17);
}

void sha256d::thread_lshr_ln1503_s_fu_4532_p4() {
    lshr_ln1503_s_fu_4532_p4 = m_17_V_fu_4326_p2.read().range(31, 19);
}

void sha256d::thread_m_0_V_fu_4116_p1() {
    m_0_V_fu_4116_p1 = esl_zext<32,8>(phi_ln1503_7_reg_1393.read());
}

void sha256d::thread_m_16_V_fu_4224_p2() {
    m_16_V_fu_4224_p2 = (!or_ln2_fu_4216_p3.read().is_01() || !m_0_V_fu_4116_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln2_fu_4216_p3.read()) + sc_biguint<32>(m_0_V_fu_4116_p1.read()));
}

void sha256d::thread_m_17_V_fu_4326_p2() {
    m_17_V_fu_4326_p2 = (!or_ln1357_1_fu_4318_p3.read().is_01() || !m_1_V_fu_4120_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(or_ln1357_1_fu_4318_p3.read()) + sc_biguint<32>(m_1_V_fu_4120_p1.read()));
}

void sha256d::thread_m_18_V_fu_4504_p2() {
    m_18_V_fu_4504_p2 = (!add_ln209_fu_4498_p2.read().is_01() || !or_ln1357_2_fu_4490_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_fu_4498_p2.read()) + sc_biguint<32>(or_ln1357_2_fu_4490_p3.read()));
}

void sha256d::thread_m_19_V_fu_10907_p2() {
    m_19_V_fu_10907_p2 = (!add_ln209_2_fu_10902_p2.read().is_01() || !or_ln1357_3_fu_10894_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_2_fu_10902_p2.read()) + sc_biguint<32>(or_ln1357_3_fu_10894_p3.read()));
}

void sha256d::thread_m_1_V_fu_4120_p1() {
    m_1_V_fu_4120_p1 = esl_zext<32,8>(phi_ln1503_6_reg_1382.read());
}

void sha256d::thread_m_20_V_fu_11014_p2() {
    m_20_V_fu_11014_p2 = (!add_ln209_4_fu_11009_p2.read().is_01() || !or_ln1357_4_fu_11001_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_4_fu_11009_p2.read()) + sc_biguint<32>(or_ln1357_4_fu_11001_p3.read()));
}

void sha256d::thread_m_21_V_fu_11192_p2() {
    m_21_V_fu_11192_p2 = (!add_ln209_6_fu_11186_p2.read().is_01() || !or_ln1357_5_fu_11178_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_6_fu_11186_p2.read()) + sc_biguint<32>(or_ln1357_5_fu_11178_p3.read()));
}

void sha256d::thread_m_22_V_fu_11370_p2() {
    m_22_V_fu_11370_p2 = (!add_ln209_8_fu_11364_p2.read().is_01() || !or_ln1357_6_fu_11356_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_8_fu_11364_p2.read()) + sc_biguint<32>(or_ln1357_6_fu_11356_p3.read()));
}

void sha256d::thread_m_23_V_fu_11451_p2() {
    m_23_V_fu_11451_p2 = (!add_ln209_10_fu_11446_p2.read().is_01() || !xor_ln1357_19_fu_11440_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_10_fu_11446_p2.read()) + sc_biguint<32>(xor_ln1357_19_fu_11440_p2.read()));
}

void sha256d::thread_m_24_V_fu_11527_p2() {
    m_24_V_fu_11527_p2 = (!xor_ln1357_22_fu_11521_p2.read().is_01() || !m_17_V_reg_17938.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_22_fu_11521_p2.read()) + sc_biguint<32>(m_17_V_reg_17938.read()));
}

void sha256d::thread_m_25_V_fu_11602_p2() {
    m_25_V_fu_11602_p2 = (!xor_ln1357_24_fu_11596_p2.read().is_01() || !m_18_V_reg_17945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_24_fu_11596_p2.read()) + sc_biguint<32>(m_18_V_reg_17945.read()));
}

void sha256d::thread_m_26_V_fu_11677_p2() {
    m_26_V_fu_11677_p2 = (!xor_ln1357_26_fu_11671_p2.read().is_01() || !m_19_V_fu_10907_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_26_fu_11671_p2.read()) + sc_biguint<32>(m_19_V_fu_10907_p2.read()));
}

void sha256d::thread_m_27_V_fu_11753_p2() {
    m_27_V_fu_11753_p2 = (!xor_ln1357_28_fu_11747_p2.read().is_01() || !m_20_V_fu_11014_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_28_fu_11747_p2.read()) + sc_biguint<32>(m_20_V_fu_11014_p2.read()));
}

void sha256d::thread_m_28_V_fu_11829_p2() {
    m_28_V_fu_11829_p2 = (!xor_ln1357_30_fu_11823_p2.read().is_01() || !m_21_V_fu_11192_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_30_fu_11823_p2.read()) + sc_biguint<32>(m_21_V_fu_11192_p2.read()));
}

void sha256d::thread_m_29_V_fu_11905_p2() {
    m_29_V_fu_11905_p2 = (!xor_ln1357_32_fu_11899_p2.read().is_01() || !m_22_V_fu_11370_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_32_fu_11899_p2.read()) + sc_biguint<32>(m_22_V_fu_11370_p2.read()));
}

void sha256d::thread_m_2_V_fu_4124_p1() {
    m_2_V_fu_4124_p1 = esl_zext<32,8>(phi_ln1503_5_reg_1371.read());
}

void sha256d::thread_m_30_V_fu_11981_p2() {
    m_30_V_fu_11981_p2 = (!xor_ln1357_34_fu_11975_p2.read().is_01() || !m_23_V_fu_11451_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln1357_34_fu_11975_p2.read()) + sc_biguint<32>(m_23_V_fu_11451_p2.read()));
}

void sha256d::thread_m_31_V_fu_12976_p2() {
    m_31_V_fu_12976_p2 = (!add_ln209_19_fu_12972_p2.read().is_01() || !xor_ln1357_36_reg_18646.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_19_fu_12972_p2.read()) + sc_biguint<32>(xor_ln1357_36_reg_18646.read()));
}

void sha256d::thread_m_32_V_fu_12985_p2() {
    m_32_V_fu_12985_p2 = (!add_ln209_22_reg_18651.read().is_01() || !add_ln209_21_fu_12981_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_22_reg_18651.read()) + sc_biguint<32>(add_ln209_21_fu_12981_p2.read()));
}

void sha256d::thread_m_33_V_fu_13069_p2() {
    m_33_V_fu_13069_p2 = (!add_ln209_25_fu_13064_p2.read().is_01() || !add_ln209_24_fu_13060_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_25_fu_13064_p2.read()) + sc_biguint<32>(add_ln209_24_fu_13060_p2.read()));
}

void sha256d::thread_m_34_V_fu_13154_p2() {
    m_34_V_fu_13154_p2 = (!add_ln209_28_fu_13149_p2.read().is_01() || !add_ln209_27_fu_13145_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_28_fu_13149_p2.read()) + sc_biguint<32>(add_ln209_27_fu_13145_p2.read()));
}

void sha256d::thread_m_35_V_fu_13239_p2() {
    m_35_V_fu_13239_p2 = (!add_ln209_31_fu_13234_p2.read().is_01() || !add_ln209_30_fu_13230_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_31_fu_13234_p2.read()) + sc_biguint<32>(add_ln209_30_fu_13230_p2.read()));
}

void sha256d::thread_m_36_V_fu_13324_p2() {
    m_36_V_fu_13324_p2 = (!add_ln209_34_fu_13319_p2.read().is_01() || !add_ln209_33_fu_13315_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_34_fu_13319_p2.read()) + sc_biguint<32>(add_ln209_33_fu_13315_p2.read()));
}

void sha256d::thread_m_37_V_fu_13409_p2() {
    m_37_V_fu_13409_p2 = (!add_ln209_37_fu_13404_p2.read().is_01() || !add_ln209_36_fu_13400_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_37_fu_13404_p2.read()) + sc_biguint<32>(add_ln209_36_fu_13400_p2.read()));
}

void sha256d::thread_m_38_V_fu_14059_p2() {
    m_38_V_fu_14059_p2 = (!add_ln209_40_reg_18765.read().is_01() || !add_ln209_39_fu_14055_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_40_reg_18765.read()) + sc_biguint<32>(add_ln209_39_fu_14055_p2.read()));
}

void sha256d::thread_m_39_V_fu_14068_p2() {
    m_39_V_fu_14068_p2 = (!add_ln209_43_reg_18770.read().is_01() || !add_ln209_42_fu_14064_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_43_reg_18770.read()) + sc_biguint<32>(add_ln209_42_fu_14064_p2.read()));
}

void sha256d::thread_m_3_V_fu_10786_p1() {
    m_3_V_fu_10786_p1 = esl_zext<32,8>(phi_ln1503_4_reg_1359.read());
}

void sha256d::thread_m_40_V_fu_14152_p2() {
    m_40_V_fu_14152_p2 = (!add_ln209_46_fu_14147_p2.read().is_01() || !add_ln209_45_fu_14143_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_46_fu_14147_p2.read()) + sc_biguint<32>(add_ln209_45_fu_14143_p2.read()));
}

void sha256d::thread_m_41_V_fu_14237_p2() {
    m_41_V_fu_14237_p2 = (!add_ln209_49_fu_14232_p2.read().is_01() || !add_ln209_48_fu_14228_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_49_fu_14232_p2.read()) + sc_biguint<32>(add_ln209_48_fu_14228_p2.read()));
}

void sha256d::thread_m_42_V_fu_14322_p2() {
    m_42_V_fu_14322_p2 = (!add_ln209_52_fu_14317_p2.read().is_01() || !add_ln209_51_fu_14313_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_52_fu_14317_p2.read()) + sc_biguint<32>(add_ln209_51_fu_14313_p2.read()));
}

void sha256d::thread_m_43_V_fu_14407_p2() {
    m_43_V_fu_14407_p2 = (!add_ln209_55_fu_14402_p2.read().is_01() || !add_ln209_54_fu_14398_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_55_fu_14402_p2.read()) + sc_biguint<32>(add_ln209_54_fu_14398_p2.read()));
}

void sha256d::thread_m_44_V_fu_14492_p2() {
    m_44_V_fu_14492_p2 = (!add_ln209_58_fu_14487_p2.read().is_01() || !add_ln209_57_fu_14483_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_58_fu_14487_p2.read()) + sc_biguint<32>(add_ln209_57_fu_14483_p2.read()));
}

void sha256d::thread_m_45_V_fu_14578_p2() {
    m_45_V_fu_14578_p2 = (!add_ln209_61_fu_14573_p2.read().is_01() || !add_ln209_60_fu_14568_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_61_fu_14573_p2.read()) + sc_biguint<32>(add_ln209_60_fu_14568_p2.read()));
}

void sha256d::thread_m_46_V_fu_15298_p2() {
    m_46_V_fu_15298_p2 = (!add_ln209_64_reg_18865.read().is_01() || !add_ln209_63_fu_15294_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_64_reg_18865.read()) + sc_biguint<32>(add_ln209_63_fu_15294_p2.read()));
}

void sha256d::thread_m_47_V_fu_15307_p2() {
    m_47_V_fu_15307_p2 = (!add_ln209_67_reg_18870.read().is_01() || !add_ln209_66_fu_15303_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_67_reg_18870.read()) + sc_biguint<32>(add_ln209_66_fu_15303_p2.read()));
}

void sha256d::thread_m_48_V_fu_15391_p2() {
    m_48_V_fu_15391_p2 = (!add_ln209_70_fu_15386_p2.read().is_01() || !add_ln209_69_fu_15382_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_70_fu_15386_p2.read()) + sc_biguint<32>(add_ln209_69_fu_15382_p2.read()));
}

void sha256d::thread_m_49_V_fu_15476_p2() {
    m_49_V_fu_15476_p2 = (!add_ln209_73_fu_15471_p2.read().is_01() || !add_ln209_72_fu_15467_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_73_fu_15471_p2.read()) + sc_biguint<32>(add_ln209_72_fu_15467_p2.read()));
}

void sha256d::thread_m_4_V_fu_10790_p1() {
    m_4_V_fu_10790_p1 = esl_zext<32,8>(phi_ln1503_3_reg_1347.read());
}

void sha256d::thread_m_50_V_fu_15561_p2() {
    m_50_V_fu_15561_p2 = (!add_ln209_76_fu_15556_p2.read().is_01() || !add_ln209_75_fu_15552_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_76_fu_15556_p2.read()) + sc_biguint<32>(add_ln209_75_fu_15552_p2.read()));
}

void sha256d::thread_m_51_V_fu_15646_p2() {
    m_51_V_fu_15646_p2 = (!add_ln209_79_fu_15641_p2.read().is_01() || !add_ln209_78_fu_15637_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_79_fu_15641_p2.read()) + sc_biguint<32>(add_ln209_78_fu_15637_p2.read()));
}

void sha256d::thread_m_52_V_fu_15731_p2() {
    m_52_V_fu_15731_p2 = (!add_ln209_82_fu_15726_p2.read().is_01() || !add_ln209_81_fu_15722_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_82_fu_15726_p2.read()) + sc_biguint<32>(add_ln209_81_fu_15722_p2.read()));
}

void sha256d::thread_m_53_V_fu_15817_p2() {
    m_53_V_fu_15817_p2 = (!add_ln209_85_fu_15812_p2.read().is_01() || !add_ln209_84_fu_15807_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_85_fu_15812_p2.read()) + sc_biguint<32>(add_ln209_84_fu_15807_p2.read()));
}

void sha256d::thread_m_54_V_fu_16199_p2() {
    m_54_V_fu_16199_p2 = (!add_ln209_88_reg_18962.read().is_01() || !add_ln209_87_fu_16195_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_88_reg_18962.read()) + sc_biguint<32>(add_ln209_87_fu_16195_p2.read()));
}

void sha256d::thread_m_55_V_fu_16208_p2() {
    m_55_V_fu_16208_p2 = (!add_ln209_91_reg_18967.read().is_01() || !add_ln209_90_fu_16204_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_91_reg_18967.read()) + sc_biguint<32>(add_ln209_90_fu_16204_p2.read()));
}

void sha256d::thread_m_56_V_fu_16292_p2() {
    m_56_V_fu_16292_p2 = (!add_ln209_94_fu_16287_p2.read().is_01() || !add_ln209_93_fu_16283_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_94_fu_16287_p2.read()) + sc_biguint<32>(add_ln209_93_fu_16283_p2.read()));
}

void sha256d::thread_m_57_V_fu_16377_p2() {
    m_57_V_fu_16377_p2 = (!add_ln209_97_fu_16372_p2.read().is_01() || !add_ln209_96_fu_16368_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_97_fu_16372_p2.read()) + sc_biguint<32>(add_ln209_96_fu_16368_p2.read()));
}

void sha256d::thread_m_58_V_fu_16462_p2() {
    m_58_V_fu_16462_p2 = (!add_ln209_100_fu_16457_p2.read().is_01() || !add_ln209_99_fu_16453_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_100_fu_16457_p2.read()) + sc_biguint<32>(add_ln209_99_fu_16453_p2.read()));
}

void sha256d::thread_m_59_V_fu_16547_p2() {
    m_59_V_fu_16547_p2 = (!add_ln209_103_fu_16542_p2.read().is_01() || !add_ln209_102_fu_16538_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_103_fu_16542_p2.read()) + sc_biguint<32>(add_ln209_102_fu_16538_p2.read()));
}

void sha256d::thread_m_5_V_fu_10794_p1() {
    m_5_V_fu_10794_p1 = esl_zext<32,8>(phi_ln1503_2_reg_1335.read());
}

void sha256d::thread_m_60_V_fu_16632_p2() {
    m_60_V_fu_16632_p2 = (!add_ln209_106_fu_16627_p2.read().is_01() || !add_ln209_105_fu_16623_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_106_fu_16627_p2.read()) + sc_biguint<32>(add_ln209_105_fu_16623_p2.read()));
}

void sha256d::thread_m_61_V_fu_16718_p2() {
    m_61_V_fu_16718_p2 = (!add_ln209_109_fu_16713_p2.read().is_01() || !add_ln209_108_fu_16708_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_109_fu_16713_p2.read()) + sc_biguint<32>(add_ln209_108_fu_16708_p2.read()));
}

void sha256d::thread_m_62_V_fu_16800_p2() {
    m_62_V_fu_16800_p2 = (!add_ln209_112_reg_18977.read().is_01() || !add_ln209_111_fu_16794_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_112_reg_18977.read()) + sc_biguint<32>(add_ln209_111_fu_16794_p2.read()));
}

void sha256d::thread_m_63_V_fu_16881_p2() {
    m_63_V_fu_16881_p2 = (!add_ln209_115_reg_18982.read().is_01() || !add_ln209_114_fu_16875_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln209_115_reg_18982.read()) + sc_biguint<32>(add_ln209_114_fu_16875_p2.read()));
}

void sha256d::thread_m_6_V_fu_10798_p1() {
    m_6_V_fu_10798_p1 = esl_zext<32,8>(phi_ln1503_1_reg_1323.read());
}

void sha256d::thread_m_7_V_fu_10802_p1() {
    m_7_V_fu_10802_p1 = esl_zext<32,8>(phi_ln1503_reg_1311.read());
}

void sha256d::thread_m_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        m_V_address0 =  (sc_lv<6>) (zext_ln544_1_fu_10478_p1.read());
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
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
        m_V_d0 = add_ln209_255_reg_18414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_d0 = add_ln209_249_reg_18404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_d0 = add_ln209_243_reg_18394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_d0 = add_ln209_237_reg_18384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_d0 = add_ln209_231_reg_18368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_d0 = add_ln209_225_reg_18341.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_d0 = add_ln209_219_reg_18329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_d0 = add_ln209_213_reg_18317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_d0 = add_ln209_207_reg_18265.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_d0 = add_ln209_201_reg_18243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_d0 = add_ln209_195_reg_18219.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_d0 = add_ln209_189_reg_18196.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_d0 = add_ln209_183_reg_18184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_d0 = add_ln209_177_reg_18172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_d0 = add_ln209_171_reg_18110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_d0 = add_ln209_165_reg_18088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_d0 = add_ln209_159_reg_18064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_d0 = add_ln209_153_reg_18041.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_d0 = add_ln209_147_reg_18029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_d0 = add_ln209_141_reg_18017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_d0 = add_ln209_135_reg_17849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_d0 = add_ln209_129_reg_17827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_d0 = add_ln209_123_reg_17805.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_d0 = add_ln209_118_reg_17783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_d0 = zext_ln209_14_fu_4904_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_d0 = zext_ln209_12_fu_4896_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_d0 = zext_ln209_10_fu_4888_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_d0 = zext_ln209_8_fu_4880_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_d0 = zext_ln209_6_fu_4876_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_d0 = zext_ln209_4_fu_4868_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_d0 = zext_ln209_2_fu_4860_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_d0 = zext_ln209_fu_1654_p1.read();
    } else {
        m_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        m_V_d1 = add_ln209_258_reg_18419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        m_V_d1 = add_ln209_252_reg_18409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        m_V_d1 = add_ln209_246_reg_18399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        m_V_d1 = add_ln209_240_reg_18389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        m_V_d1 = add_ln209_234_reg_18379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        m_V_d1 = add_ln209_228_reg_18347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        m_V_d1 = add_ln209_222_reg_18335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        m_V_d1 = add_ln209_216_reg_18323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        m_V_d1 = add_ln209_210_reg_18276.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        m_V_d1 = add_ln209_204_reg_18254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        m_V_d1 = add_ln209_198_reg_18231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        m_V_d1 = add_ln209_192_reg_18207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        m_V_d1 = add_ln209_186_reg_18190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        m_V_d1 = add_ln209_180_reg_18178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        m_V_d1 = add_ln209_174_reg_18121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        m_V_d1 = add_ln209_168_reg_18099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        m_V_d1 = add_ln209_162_reg_18076.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        m_V_d1 = add_ln209_156_reg_18052.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        m_V_d1 = add_ln209_150_reg_18035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        m_V_d1 = add_ln209_144_reg_18023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        m_V_d1 = add_ln209_138_reg_17860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        m_V_d1 = add_ln209_132_reg_17838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        m_V_d1 = add_ln209_126_reg_17816.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        m_V_d1 = add_ln209_120_reg_17794.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        m_V_d1 = zext_ln209_15_fu_4908_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        m_V_d1 = zext_ln209_13_fu_4900_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_V_d1 = zext_ln209_11_fu_4892_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        m_V_d1 = zext_ln209_9_fu_4884_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        m_V_d1 = zext_ln209_7_reg_17738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        m_V_d1 = zext_ln209_5_fu_4872_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        m_V_d1 = zext_ln209_3_fu_4864_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        m_V_d1 = zext_ln209_1_fu_1669_p1.read();
    } else {
        m_V_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256d::thread_m_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln72_fu_1632_p2.read(), ap_const_lv1_0)) || 
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
          esl_seteq<1,1,1>(icmp_ln72_fu_1632_p2.read(), ap_const_lv1_0)) || 
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

void sha256d::thread_or_ln1356_100_fu_15348_p3() {
    or_ln1356_100_fu_15348_p3 = esl_concat<19,13>(trunc_ln1503_95_fu_15344_p1.read(), lshr_ln1503_149_fu_15334_p4.read());
}

void sha256d::thread_or_ln1356_101_fu_13719_p3() {
    or_ln1356_101_fu_13719_p3 = esl_concat<7,25>(trunc_ln1503_96_fu_13715_p1.read(), lshr_ln1503_151_fu_13705_p4.read());
}

void sha256d::thread_or_ln1356_102_fu_13741_p3() {
    or_ln1356_102_fu_13741_p3 = esl_concat<18,14>(trunc_ln1503_97_fu_13737_p1.read(), lshr_ln1503_152_fu_13727_p4.read());
}

void sha256d::thread_or_ln1356_103_fu_15411_p3() {
    or_ln1356_103_fu_15411_p3 = esl_concat<17,15>(trunc_ln1503_98_fu_15407_p1.read(), lshr_ln1503_154_fu_15397_p4.read());
}

void sha256d::thread_or_ln1356_104_fu_15433_p3() {
    or_ln1356_104_fu_15433_p3 = esl_concat<19,13>(trunc_ln1503_99_fu_15429_p1.read(), lshr_ln1503_155_fu_15419_p4.read());
}

void sha256d::thread_or_ln1356_105_fu_13789_p3() {
    or_ln1356_105_fu_13789_p3 = esl_concat<7,25>(trunc_ln1503_100_fu_13785_p1.read(), lshr_ln1503_157_fu_13775_p4.read());
}

void sha256d::thread_or_ln1356_106_fu_13811_p3() {
    or_ln1356_106_fu_13811_p3 = esl_concat<18,14>(trunc_ln1503_101_fu_13807_p1.read(), lshr_ln1503_158_fu_13797_p4.read());
}

void sha256d::thread_or_ln1356_107_fu_15496_p3() {
    or_ln1356_107_fu_15496_p3 = esl_concat<17,15>(trunc_ln1503_102_fu_15492_p1.read(), lshr_ln1503_160_fu_15482_p4.read());
}

void sha256d::thread_or_ln1356_108_fu_15518_p3() {
    or_ln1356_108_fu_15518_p3 = esl_concat<19,13>(trunc_ln1503_103_fu_15514_p1.read(), lshr_ln1503_161_fu_15504_p4.read());
}

void sha256d::thread_or_ln1356_109_fu_13859_p3() {
    or_ln1356_109_fu_13859_p3 = esl_concat<7,25>(trunc_ln1503_104_fu_13855_p1.read(), lshr_ln1503_163_fu_13845_p4.read());
}

void sha256d::thread_or_ln1356_10_fu_11056_p3() {
    or_ln1356_10_fu_11056_p3 = esl_concat<19,13>(trunc_ln1503_7_fu_11052_p1.read(), lshr_ln1503_15_fu_11042_p4.read());
}

void sha256d::thread_or_ln1356_110_fu_13881_p3() {
    or_ln1356_110_fu_13881_p3 = esl_concat<18,14>(trunc_ln1503_105_fu_13877_p1.read(), lshr_ln1503_164_fu_13867_p4.read());
}

void sha256d::thread_or_ln1356_111_fu_15581_p3() {
    or_ln1356_111_fu_15581_p3 = esl_concat<17,15>(trunc_ln1503_106_fu_15577_p1.read(), lshr_ln1503_166_fu_15567_p4.read());
}

void sha256d::thread_or_ln1356_112_fu_15603_p3() {
    or_ln1356_112_fu_15603_p3 = esl_concat<19,13>(trunc_ln1503_107_fu_15599_p1.read(), lshr_ln1503_167_fu_15589_p4.read());
}

void sha256d::thread_or_ln1356_113_fu_13929_p3() {
    or_ln1356_113_fu_13929_p3 = esl_concat<7,25>(trunc_ln1503_108_fu_13925_p1.read(), lshr_ln1503_169_fu_13915_p4.read());
}

void sha256d::thread_or_ln1356_114_fu_13951_p3() {
    or_ln1356_114_fu_13951_p3 = esl_concat<18,14>(trunc_ln1503_109_fu_13947_p1.read(), lshr_ln1503_170_fu_13937_p4.read());
}

void sha256d::thread_or_ln1356_115_fu_15666_p3() {
    or_ln1356_115_fu_15666_p3 = esl_concat<17,15>(trunc_ln1503_110_fu_15662_p1.read(), lshr_ln1503_172_fu_15652_p4.read());
}

void sha256d::thread_or_ln1356_116_fu_15688_p3() {
    or_ln1356_116_fu_15688_p3 = esl_concat<19,13>(trunc_ln1503_111_fu_15684_p1.read(), lshr_ln1503_173_fu_15674_p4.read());
}

void sha256d::thread_or_ln1356_117_fu_13999_p3() {
    or_ln1356_117_fu_13999_p3 = esl_concat<7,25>(trunc_ln1503_112_fu_13995_p1.read(), lshr_ln1503_175_fu_13985_p4.read());
}

void sha256d::thread_or_ln1356_118_fu_14021_p3() {
    or_ln1356_118_fu_14021_p3 = esl_concat<18,14>(trunc_ln1503_113_fu_14017_p1.read(), lshr_ln1503_176_fu_14007_p4.read());
}

void sha256d::thread_or_ln1356_119_fu_15751_p3() {
    or_ln1356_119_fu_15751_p3 = esl_concat<17,15>(trunc_ln1503_114_fu_15747_p1.read(), lshr_ln1503_178_fu_15737_p4.read());
}

void sha256d::thread_or_ln1356_11_fu_11106_p4() {
    or_ln1356_11_fu_11106_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_5_fu_11102_p1.read(), ap_const_lv17_0), zext_ln1503_33_fu_11098_p1.read());
}

void sha256d::thread_or_ln1356_120_fu_15773_p3() {
    or_ln1356_120_fu_15773_p3 = esl_concat<19,13>(trunc_ln1503_115_fu_15769_p1.read(), lshr_ln1503_179_fu_15759_p4.read());
}

void sha256d::thread_or_ln1356_121_fu_14748_p3() {
    or_ln1356_121_fu_14748_p3 = esl_concat<7,25>(trunc_ln1503_116_fu_14744_p1.read(), lshr_ln1503_181_fu_14734_p4.read());
}

void sha256d::thread_or_ln1356_122_fu_14770_p3() {
    or_ln1356_122_fu_14770_p3 = esl_concat<18,14>(trunc_ln1503_117_fu_14766_p1.read(), lshr_ln1503_182_fu_14756_p4.read());
}

void sha256d::thread_or_ln1356_123_fu_15837_p3() {
    or_ln1356_123_fu_15837_p3 = esl_concat<17,15>(trunc_ln1503_118_fu_15833_p1.read(), lshr_ln1503_184_fu_15823_p4.read());
}

void sha256d::thread_or_ln1356_124_fu_15859_p3() {
    or_ln1356_124_fu_15859_p3 = esl_concat<19,13>(trunc_ln1503_119_fu_15855_p1.read(), lshr_ln1503_185_fu_15845_p4.read());
}

void sha256d::thread_or_ln1356_125_fu_14818_p3() {
    or_ln1356_125_fu_14818_p3 = esl_concat<7,25>(trunc_ln1503_120_fu_14814_p1.read(), lshr_ln1503_187_fu_14804_p4.read());
}

void sha256d::thread_or_ln1356_126_fu_14840_p3() {
    or_ln1356_126_fu_14840_p3 = esl_concat<18,14>(trunc_ln1503_121_fu_14836_p1.read(), lshr_ln1503_188_fu_14826_p4.read());
}

void sha256d::thread_or_ln1356_127_fu_15912_p3() {
    or_ln1356_127_fu_15912_p3 = esl_concat<17,15>(trunc_ln1503_122_fu_15908_p1.read(), lshr_ln1503_190_fu_15898_p4.read());
}

void sha256d::thread_or_ln1356_128_fu_15934_p3() {
    or_ln1356_128_fu_15934_p3 = esl_concat<19,13>(trunc_ln1503_123_fu_15930_p1.read(), lshr_ln1503_191_fu_15920_p4.read());
}

void sha256d::thread_or_ln1356_129_fu_14888_p3() {
    or_ln1356_129_fu_14888_p3 = esl_concat<7,25>(trunc_ln1503_124_fu_14884_p1.read(), lshr_ln1503_193_fu_14874_p4.read());
}

void sha256d::thread_or_ln1356_12_fu_11212_p3() {
    or_ln1356_12_fu_11212_p3 = esl_concat<17,15>(trunc_ln1503_8_fu_11208_p1.read(), lshr_ln1503_18_fu_11198_p4.read());
}

void sha256d::thread_or_ln1356_130_fu_14910_p3() {
    or_ln1356_130_fu_14910_p3 = esl_concat<18,14>(trunc_ln1503_125_fu_14906_p1.read(), lshr_ln1503_194_fu_14896_p4.read());
}

void sha256d::thread_or_ln1356_131_fu_16227_p3() {
    or_ln1356_131_fu_16227_p3 = esl_concat<17,15>(trunc_ln1503_126_fu_16223_p1.read(), lshr_ln1503_196_fu_16213_p4.read());
}

void sha256d::thread_or_ln1356_132_fu_16249_p3() {
    or_ln1356_132_fu_16249_p3 = esl_concat<19,13>(trunc_ln1503_127_fu_16245_p1.read(), lshr_ln1503_197_fu_16235_p4.read());
}

void sha256d::thread_or_ln1356_133_fu_14958_p3() {
    or_ln1356_133_fu_14958_p3 = esl_concat<7,25>(trunc_ln1503_128_fu_14954_p1.read(), lshr_ln1503_199_fu_14944_p4.read());
}

void sha256d::thread_or_ln1356_134_fu_14980_p3() {
    or_ln1356_134_fu_14980_p3 = esl_concat<18,14>(trunc_ln1503_129_fu_14976_p1.read(), lshr_ln1503_200_fu_14966_p4.read());
}

void sha256d::thread_or_ln1356_135_fu_16312_p3() {
    or_ln1356_135_fu_16312_p3 = esl_concat<17,15>(trunc_ln1503_130_fu_16308_p1.read(), lshr_ln1503_202_fu_16298_p4.read());
}

void sha256d::thread_or_ln1356_136_fu_16334_p3() {
    or_ln1356_136_fu_16334_p3 = esl_concat<19,13>(trunc_ln1503_131_fu_16330_p1.read(), lshr_ln1503_203_fu_16320_p4.read());
}

void sha256d::thread_or_ln1356_137_fu_15028_p3() {
    or_ln1356_137_fu_15028_p3 = esl_concat<7,25>(trunc_ln1503_132_fu_15024_p1.read(), lshr_ln1503_205_fu_15014_p4.read());
}

void sha256d::thread_or_ln1356_138_fu_15050_p3() {
    or_ln1356_138_fu_15050_p3 = esl_concat<18,14>(trunc_ln1503_133_fu_15046_p1.read(), lshr_ln1503_206_fu_15036_p4.read());
}

void sha256d::thread_or_ln1356_139_fu_16397_p3() {
    or_ln1356_139_fu_16397_p3 = esl_concat<17,15>(trunc_ln1503_134_fu_16393_p1.read(), lshr_ln1503_208_fu_16383_p4.read());
}

void sha256d::thread_or_ln1356_13_fu_11234_p3() {
    or_ln1356_13_fu_11234_p3 = esl_concat<19,13>(trunc_ln1503_9_fu_11230_p1.read(), lshr_ln1503_19_fu_11220_p4.read());
}

void sha256d::thread_or_ln1356_140_fu_16419_p3() {
    or_ln1356_140_fu_16419_p3 = esl_concat<19,13>(trunc_ln1503_135_fu_16415_p1.read(), lshr_ln1503_209_fu_16405_p4.read());
}

void sha256d::thread_or_ln1356_141_fu_15098_p3() {
    or_ln1356_141_fu_15098_p3 = esl_concat<7,25>(trunc_ln1503_136_fu_15094_p1.read(), lshr_ln1503_211_fu_15084_p4.read());
}

void sha256d::thread_or_ln1356_142_fu_15120_p3() {
    or_ln1356_142_fu_15120_p3 = esl_concat<18,14>(trunc_ln1503_137_fu_15116_p1.read(), lshr_ln1503_212_fu_15106_p4.read());
}

void sha256d::thread_or_ln1356_143_fu_16482_p3() {
    or_ln1356_143_fu_16482_p3 = esl_concat<17,15>(trunc_ln1503_138_fu_16478_p1.read(), lshr_ln1503_214_fu_16468_p4.read());
}

void sha256d::thread_or_ln1356_144_fu_16504_p3() {
    or_ln1356_144_fu_16504_p3 = esl_concat<19,13>(trunc_ln1503_139_fu_16500_p1.read(), lshr_ln1503_215_fu_16490_p4.read());
}

void sha256d::thread_or_ln1356_145_fu_15168_p3() {
    or_ln1356_145_fu_15168_p3 = esl_concat<7,25>(trunc_ln1503_140_fu_15164_p1.read(), lshr_ln1503_217_fu_15154_p4.read());
}

void sha256d::thread_or_ln1356_146_fu_15190_p3() {
    or_ln1356_146_fu_15190_p3 = esl_concat<18,14>(trunc_ln1503_141_fu_15186_p1.read(), lshr_ln1503_218_fu_15176_p4.read());
}

void sha256d::thread_or_ln1356_147_fu_16567_p3() {
    or_ln1356_147_fu_16567_p3 = esl_concat<17,15>(trunc_ln1503_142_fu_16563_p1.read(), lshr_ln1503_220_fu_16553_p4.read());
}

void sha256d::thread_or_ln1356_148_fu_16589_p3() {
    or_ln1356_148_fu_16589_p3 = esl_concat<19,13>(trunc_ln1503_143_fu_16585_p1.read(), lshr_ln1503_221_fu_16575_p4.read());
}

void sha256d::thread_or_ln1356_149_fu_15238_p3() {
    or_ln1356_149_fu_15238_p3 = esl_concat<7,25>(trunc_ln1503_144_fu_15234_p1.read(), lshr_ln1503_223_fu_15224_p4.read());
}

void sha256d::thread_or_ln1356_14_fu_11284_p4() {
    or_ln1356_14_fu_11284_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_6_fu_11280_p1.read(), ap_const_lv17_0), zext_ln1503_35_fu_11276_p1.read());
}

void sha256d::thread_or_ln1356_150_fu_15260_p3() {
    or_ln1356_150_fu_15260_p3 = esl_concat<18,14>(trunc_ln1503_145_fu_15256_p1.read(), lshr_ln1503_224_fu_15246_p4.read());
}

void sha256d::thread_or_ln1356_151_fu_16652_p3() {
    or_ln1356_151_fu_16652_p3 = esl_concat<17,15>(trunc_ln1503_146_fu_16648_p1.read(), lshr_ln1503_226_fu_16638_p4.read());
}

void sha256d::thread_or_ln1356_152_fu_16674_p3() {
    or_ln1356_152_fu_16674_p3 = esl_concat<19,13>(trunc_ln1503_147_fu_16670_p1.read(), lshr_ln1503_227_fu_16660_p4.read());
}

void sha256d::thread_or_ln1356_153_fu_15987_p3() {
    or_ln1356_153_fu_15987_p3 = esl_concat<7,25>(trunc_ln1503_148_fu_15983_p1.read(), lshr_ln1503_229_fu_15973_p4.read());
}

void sha256d::thread_or_ln1356_154_fu_16009_p3() {
    or_ln1356_154_fu_16009_p3 = esl_concat<18,14>(trunc_ln1503_149_fu_16005_p1.read(), lshr_ln1503_230_fu_15995_p4.read());
}

void sha256d::thread_or_ln1356_155_fu_16738_p3() {
    or_ln1356_155_fu_16738_p3 = esl_concat<17,15>(trunc_ln1503_150_fu_16734_p1.read(), lshr_ln1503_232_fu_16724_p4.read());
}

void sha256d::thread_or_ln1356_156_fu_16760_p3() {
    or_ln1356_156_fu_16760_p3 = esl_concat<19,13>(trunc_ln1503_151_fu_16756_p1.read(), lshr_ln1503_233_fu_16746_p4.read());
}

void sha256d::thread_or_ln1356_157_fu_16057_p3() {
    or_ln1356_157_fu_16057_p3 = esl_concat<7,25>(trunc_ln1503_152_fu_16053_p1.read(), lshr_ln1503_235_fu_16043_p4.read());
}

void sha256d::thread_or_ln1356_158_fu_16079_p3() {
    or_ln1356_158_fu_16079_p3 = esl_concat<18,14>(trunc_ln1503_153_fu_16075_p1.read(), lshr_ln1503_236_fu_16065_p4.read());
}

void sha256d::thread_or_ln1356_159_fu_16819_p3() {
    or_ln1356_159_fu_16819_p3 = esl_concat<17,15>(trunc_ln1503_154_fu_16815_p1.read(), lshr_ln1503_238_fu_16805_p4.read());
}

void sha256d::thread_or_ln1356_15_fu_11390_p3() {
    or_ln1356_15_fu_11390_p3 = esl_concat<17,15>(trunc_ln1503_10_fu_11386_p1.read(), lshr_ln1503_22_fu_11376_p4.read());
}

void sha256d::thread_or_ln1356_160_fu_16841_p3() {
    or_ln1356_160_fu_16841_p3 = esl_concat<19,13>(trunc_ln1503_155_fu_16837_p1.read(), lshr_ln1503_239_fu_16827_p4.read());
}

void sha256d::thread_or_ln1356_161_fu_16133_p3() {
    or_ln1356_161_fu_16133_p3 = esl_concat<7,25>(trunc_ln1503_156_fu_16129_p1.read(), lshr_ln1503_241_fu_16119_p4.read());
}

void sha256d::thread_or_ln1356_162_fu_16155_p3() {
    or_ln1356_162_fu_16155_p3 = esl_concat<18,14>(trunc_ln1503_157_fu_16151_p1.read(), lshr_ln1503_242_fu_16141_p4.read());
}

void sha256d::thread_or_ln1356_163_fu_1860_p4() {
    or_ln1356_163_fu_1860_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_8_fu_1856_p1.read(), ap_const_lv17_0), zext_ln1503_110_fu_1852_p1.read());
}

void sha256d::thread_or_ln1356_164_fu_2020_p4() {
    or_ln1356_164_fu_2020_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_9_fu_2016_p1.read(), ap_const_lv17_0), zext_ln1503_111_fu_2012_p1.read());
}

void sha256d::thread_or_ln1356_165_fu_2152_p3() {
    or_ln1356_165_fu_2152_p3 = esl_concat<17,15>(trunc_ln1503_158_fu_2148_p1.read(), lshr_ln1503_246_fu_2138_p4.read());
}

void sha256d::thread_or_ln1356_166_fu_2174_p3() {
    or_ln1356_166_fu_2174_p3 = esl_concat<19,13>(trunc_ln1503_159_fu_2170_p1.read(), lshr_ln1503_247_fu_2160_p4.read());
}

void sha256d::thread_or_ln1356_167_fu_2224_p4() {
    or_ln1356_167_fu_2224_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_10_fu_2220_p1.read(), ap_const_lv17_0), zext_ln1503_113_fu_2216_p1.read());
}

void sha256d::thread_or_ln1356_168_fu_2340_p3() {
    or_ln1356_168_fu_2340_p3 = esl_concat<17,15>(trunc_ln1503_160_fu_2336_p1.read(), lshr_ln1503_250_fu_2326_p4.read());
}

void sha256d::thread_or_ln1356_169_fu_2362_p3() {
    or_ln1356_169_fu_2362_p3 = esl_concat<19,13>(trunc_ln1503_161_fu_2358_p1.read(), lshr_ln1503_251_fu_2348_p4.read());
}

void sha256d::thread_or_ln1356_16_fu_11412_p3() {
    or_ln1356_16_fu_11412_p3 = esl_concat<19,13>(trunc_ln1503_11_fu_11408_p1.read(), lshr_ln1503_23_fu_11398_p4.read());
}

void sha256d::thread_or_ln1356_170_fu_2412_p4() {
    or_ln1356_170_fu_2412_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_11_fu_2408_p1.read(), ap_const_lv17_0), zext_ln1503_115_fu_2404_p1.read());
}

void sha256d::thread_or_ln1356_171_fu_2528_p3() {
    or_ln1356_171_fu_2528_p3 = esl_concat<17,15>(trunc_ln1503_162_fu_2524_p1.read(), lshr_ln1503_254_fu_2514_p4.read());
}

void sha256d::thread_or_ln1356_172_fu_2550_p3() {
    or_ln1356_172_fu_2550_p3 = esl_concat<19,13>(trunc_ln1503_163_fu_2546_p1.read(), lshr_ln1503_255_fu_2536_p4.read());
}

void sha256d::thread_or_ln1356_173_fu_2600_p4() {
    or_ln1356_173_fu_2600_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_12_fu_2596_p1.read(), ap_const_lv17_0), zext_ln1503_117_fu_2592_p1.read());
}

void sha256d::thread_or_ln1356_174_fu_2716_p3() {
    or_ln1356_174_fu_2716_p3 = esl_concat<17,15>(trunc_ln1503_164_fu_2712_p1.read(), lshr_ln1503_258_fu_2702_p4.read());
}

void sha256d::thread_or_ln1356_175_fu_2738_p3() {
    or_ln1356_175_fu_2738_p3 = esl_concat<19,13>(trunc_ln1503_165_fu_2734_p1.read(), lshr_ln1503_259_fu_2724_p4.read());
}

void sha256d::thread_or_ln1356_176_fu_2788_p4() {
    or_ln1356_176_fu_2788_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_13_fu_2784_p1.read(), ap_const_lv17_0), zext_ln1503_119_fu_2780_p1.read());
}

void sha256d::thread_or_ln1356_177_fu_2904_p3() {
    or_ln1356_177_fu_2904_p3 = esl_concat<17,15>(trunc_ln1503_166_fu_2900_p1.read(), lshr_ln1503_262_fu_2890_p4.read());
}

void sha256d::thread_or_ln1356_178_fu_2926_p3() {
    or_ln1356_178_fu_2926_p3 = esl_concat<19,13>(trunc_ln1503_167_fu_2922_p1.read(), lshr_ln1503_263_fu_2912_p4.read());
}

void sha256d::thread_or_ln1356_179_fu_2976_p4() {
    or_ln1356_179_fu_2976_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_14_fu_2972_p1.read(), ap_const_lv17_0), zext_ln1503_121_fu_2968_p1.read());
}

void sha256d::thread_or_ln1356_17_fu_11471_p3() {
    or_ln1356_17_fu_11471_p3 = esl_concat<17,15>(trunc_ln1503_12_fu_11467_p1.read(), lshr_ln1503_25_fu_11457_p4.read());
}

void sha256d::thread_or_ln1356_180_fu_3092_p3() {
    or_ln1356_180_fu_3092_p3 = esl_concat<17,15>(trunc_ln1503_168_fu_3088_p1.read(), lshr_ln1503_266_fu_3078_p4.read());
}

void sha256d::thread_or_ln1356_181_fu_3114_p3() {
    or_ln1356_181_fu_3114_p3 = esl_concat<19,13>(trunc_ln1503_169_fu_3110_p1.read(), lshr_ln1503_267_fu_3100_p4.read());
}

void sha256d::thread_or_ln1356_182_fu_3164_p4() {
    or_ln1356_182_fu_3164_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_15_fu_3160_p1.read(), ap_const_lv17_0), zext_ln1503_123_fu_3156_p1.read());
}

void sha256d::thread_or_ln1356_183_fu_3276_p3() {
    or_ln1356_183_fu_3276_p3 = esl_concat<17,15>(trunc_ln1503_170_fu_3272_p1.read(), lshr_ln1503_270_fu_3262_p4.read());
}

void sha256d::thread_or_ln1356_184_fu_3298_p3() {
    or_ln1356_184_fu_3298_p3 = esl_concat<19,13>(trunc_ln1503_171_fu_3294_p1.read(), lshr_ln1503_271_fu_3284_p4.read());
}

void sha256d::thread_or_ln1356_185_fu_3348_p4() {
    or_ln1356_185_fu_3348_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_16_fu_3344_p1.read(), ap_const_lv17_0), zext_ln1503_125_fu_3340_p1.read());
}

void sha256d::thread_or_ln1356_186_fu_3448_p3() {
    or_ln1356_186_fu_3448_p3 = esl_concat<17,15>(trunc_ln1503_172_fu_3444_p1.read(), lshr_ln1503_274_fu_3434_p4.read());
}

void sha256d::thread_or_ln1356_187_fu_3470_p3() {
    or_ln1356_187_fu_3470_p3 = esl_concat<19,13>(trunc_ln1503_173_fu_3466_p1.read(), lshr_ln1503_275_fu_3456_p4.read());
}

void sha256d::thread_or_ln1356_188_fu_3520_p4() {
    or_ln1356_188_fu_3520_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_17_fu_3516_p1.read(), ap_const_lv17_0), zext_ln1503_127_fu_3512_p1.read());
}

void sha256d::thread_or_ln1356_189_fu_4944_p3() {
    or_ln1356_189_fu_4944_p3 = esl_concat<17,15>(trunc_ln1503_174_fu_4940_p1.read(), lshr_ln1503_278_fu_4930_p4.read());
}

void sha256d::thread_or_ln1356_18_fu_11493_p3() {
    or_ln1356_18_fu_11493_p3 = esl_concat<19,13>(trunc_ln1503_13_fu_11489_p1.read(), lshr_ln1503_26_fu_11479_p4.read());
}

void sha256d::thread_or_ln1356_190_fu_4966_p3() {
    or_ln1356_190_fu_4966_p3 = esl_concat<19,13>(trunc_ln1503_175_fu_4962_p1.read(), lshr_ln1503_279_fu_4952_p4.read());
}

void sha256d::thread_or_ln1356_191_fu_3622_p4() {
    or_ln1356_191_fu_3622_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_18_fu_3618_p1.read(), ap_const_lv17_0), zext_ln1503_129_fu_3614_p1.read());
}

void sha256d::thread_or_ln1356_192_fu_5024_p3() {
    or_ln1356_192_fu_5024_p3 = esl_concat<17,15>(trunc_ln1503_176_fu_5020_p1.read(), lshr_ln1503_282_fu_5010_p4.read());
}

void sha256d::thread_or_ln1356_193_fu_5046_p3() {
    or_ln1356_193_fu_5046_p3 = esl_concat<19,13>(trunc_ln1503_177_fu_5042_p1.read(), lshr_ln1503_283_fu_5032_p4.read());
}

void sha256d::thread_or_ln1356_194_fu_3724_p4() {
    or_ln1356_194_fu_3724_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_19_fu_3720_p1.read(), ap_const_lv17_0), zext_ln1503_131_fu_3716_p1.read());
}

void sha256d::thread_or_ln1356_195_fu_5104_p3() {
    or_ln1356_195_fu_5104_p3 = esl_concat<17,15>(trunc_ln1503_178_fu_5100_p1.read(), lshr_ln1503_286_fu_5090_p4.read());
}

void sha256d::thread_or_ln1356_196_fu_5126_p3() {
    or_ln1356_196_fu_5126_p3 = esl_concat<19,13>(trunc_ln1503_179_fu_5122_p1.read(), lshr_ln1503_287_fu_5112_p4.read());
}

void sha256d::thread_or_ln1356_197_fu_3826_p4() {
    or_ln1356_197_fu_3826_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_20_fu_3822_p1.read(), ap_const_lv17_0), zext_ln1503_133_fu_3818_p1.read());
}

void sha256d::thread_or_ln1356_198_fu_5184_p3() {
    or_ln1356_198_fu_5184_p3 = esl_concat<17,15>(trunc_ln1503_180_fu_5180_p1.read(), lshr_ln1503_290_fu_5170_p4.read());
}

void sha256d::thread_or_ln1356_199_fu_5206_p3() {
    or_ln1356_199_fu_5206_p3 = esl_concat<19,13>(trunc_ln1503_181_fu_5202_p1.read(), lshr_ln1503_291_fu_5192_p4.read());
}

void sha256d::thread_or_ln1356_19_fu_11546_p3() {
    or_ln1356_19_fu_11546_p3 = esl_concat<17,15>(trunc_ln1503_14_fu_11542_p1.read(), lshr_ln1503_28_fu_11532_p4.read());
}

void sha256d::thread_or_ln1356_1_fu_4246_p4() {
    or_ln1356_1_fu_4246_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_1_fu_4242_p1.read(), ap_const_lv17_0), zext_ln1503_25_fu_4238_p1.read());
}

void sha256d::thread_or_ln1356_200_fu_3928_p4() {
    or_ln1356_200_fu_3928_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_21_fu_3924_p1.read(), ap_const_lv17_0), zext_ln1503_135_fu_3920_p1.read());
}

void sha256d::thread_or_ln1356_201_fu_5264_p3() {
    or_ln1356_201_fu_5264_p3 = esl_concat<17,15>(trunc_ln1503_182_fu_5260_p1.read(), lshr_ln1503_294_fu_5250_p4.read());
}

void sha256d::thread_or_ln1356_202_fu_5286_p3() {
    or_ln1356_202_fu_5286_p3 = esl_concat<19,13>(trunc_ln1503_183_fu_5282_p1.read(), lshr_ln1503_295_fu_5272_p4.read());
}

void sha256d::thread_or_ln1356_203_fu_4030_p4() {
    or_ln1356_203_fu_4030_p4 = esl_concat<24,8>(esl_concat<7,17>(trunc_ln1356_22_fu_4026_p1.read(), ap_const_lv17_0), zext_ln1503_137_fu_4022_p1.read());
}

void sha256d::thread_or_ln1356_204_fu_5344_p3() {
    or_ln1356_204_fu_5344_p3 = esl_concat<17,15>(trunc_ln1503_184_fu_5340_p1.read(), lshr_ln1503_298_fu_5330_p4.read());
}

void sha256d::thread_or_ln1356_205_fu_5366_p3() {
    or_ln1356_205_fu_5366_p3 = esl_concat<19,13>(trunc_ln1503_185_fu_5362_p1.read(), lshr_ln1503_299_fu_5352_p4.read());
}

void sha256d::thread_or_ln1356_206_fu_5412_p3() {
    or_ln1356_206_fu_5412_p3 = esl_concat<7,25>(trunc_ln1503_186_fu_5409_p1.read(), lshr_ln1503_301_fu_5400_p4.read());
}

void sha256d::thread_or_ln1356_207_fu_5432_p3() {
    or_ln1356_207_fu_5432_p3 = esl_concat<18,14>(trunc_ln1503_187_fu_5429_p1.read(), lshr_ln1503_302_fu_5420_p4.read());
}

void sha256d::thread_or_ln1356_208_fu_5496_p3() {
    or_ln1356_208_fu_5496_p3 = esl_concat<17,15>(trunc_ln1503_188_fu_5492_p1.read(), lshr_ln1503_304_fu_5482_p4.read());
}

void sha256d::thread_or_ln1356_209_fu_5518_p3() {
    or_ln1356_209_fu_5518_p3 = esl_concat<19,13>(trunc_ln1503_189_fu_5514_p1.read(), lshr_ln1503_305_fu_5504_p4.read());
}

void sha256d::thread_or_ln1356_20_fu_11568_p3() {
    or_ln1356_20_fu_11568_p3 = esl_concat<19,13>(trunc_ln1503_15_fu_11564_p1.read(), lshr_ln1503_29_fu_11554_p4.read());
}

void sha256d::thread_or_ln1356_210_fu_5564_p3() {
    or_ln1356_210_fu_5564_p3 = esl_concat<7,25>(trunc_ln1503_190_fu_5561_p1.read(), lshr_ln1503_307_fu_5552_p4.read());
}

void sha256d::thread_or_ln1356_211_fu_5584_p3() {
    or_ln1356_211_fu_5584_p3 = esl_concat<18,14>(trunc_ln1503_191_fu_5581_p1.read(), lshr_ln1503_308_fu_5572_p4.read());
}

void sha256d::thread_or_ln1356_212_fu_5648_p3() {
    or_ln1356_212_fu_5648_p3 = esl_concat<17,15>(trunc_ln1503_192_fu_5644_p1.read(), lshr_ln1503_310_fu_5634_p4.read());
}

void sha256d::thread_or_ln1356_213_fu_5670_p3() {
    or_ln1356_213_fu_5670_p3 = esl_concat<19,13>(trunc_ln1503_193_fu_5666_p1.read(), lshr_ln1503_311_fu_5656_p4.read());
}

void sha256d::thread_or_ln1356_214_fu_5716_p3() {
    or_ln1356_214_fu_5716_p3 = esl_concat<7,25>(trunc_ln1503_194_fu_5713_p1.read(), lshr_ln1503_313_fu_5704_p4.read());
}

void sha256d::thread_or_ln1356_215_fu_5736_p3() {
    or_ln1356_215_fu_5736_p3 = esl_concat<18,14>(trunc_ln1503_195_fu_5733_p1.read(), lshr_ln1503_314_fu_5724_p4.read());
}

void sha256d::thread_or_ln1356_216_fu_5800_p3() {
    or_ln1356_216_fu_5800_p3 = esl_concat<17,15>(trunc_ln1503_196_fu_5796_p1.read(), lshr_ln1503_316_fu_5786_p4.read());
}

void sha256d::thread_or_ln1356_217_fu_5822_p3() {
    or_ln1356_217_fu_5822_p3 = esl_concat<19,13>(trunc_ln1503_197_fu_5818_p1.read(), lshr_ln1503_317_fu_5808_p4.read());
}

void sha256d::thread_or_ln1356_218_fu_5868_p3() {
    or_ln1356_218_fu_5868_p3 = esl_concat<7,25>(trunc_ln1503_198_fu_5865_p1.read(), lshr_ln1503_319_fu_5856_p4.read());
}

void sha256d::thread_or_ln1356_219_fu_5888_p3() {
    or_ln1356_219_fu_5888_p3 = esl_concat<18,14>(trunc_ln1503_199_fu_5885_p1.read(), lshr_ln1503_320_fu_5876_p4.read());
}

void sha256d::thread_or_ln1356_21_fu_11621_p3() {
    or_ln1356_21_fu_11621_p3 = esl_concat<17,15>(trunc_ln1503_16_fu_11617_p1.read(), lshr_ln1503_31_fu_11607_p4.read());
}

void sha256d::thread_or_ln1356_220_fu_5952_p3() {
    or_ln1356_220_fu_5952_p3 = esl_concat<17,15>(trunc_ln1503_200_fu_5948_p1.read(), lshr_ln1503_322_fu_5938_p4.read());
}

void sha256d::thread_or_ln1356_221_fu_5974_p3() {
    or_ln1356_221_fu_5974_p3 = esl_concat<19,13>(trunc_ln1503_201_fu_5970_p1.read(), lshr_ln1503_323_fu_5960_p4.read());
}

void sha256d::thread_or_ln1356_222_fu_6020_p3() {
    or_ln1356_222_fu_6020_p3 = esl_concat<7,25>(trunc_ln1503_202_fu_6017_p1.read(), lshr_ln1503_325_fu_6008_p4.read());
}

void sha256d::thread_or_ln1356_223_fu_6040_p3() {
    or_ln1356_223_fu_6040_p3 = esl_concat<18,14>(trunc_ln1503_203_fu_6037_p1.read(), lshr_ln1503_326_fu_6028_p4.read());
}

void sha256d::thread_or_ln1356_224_fu_6104_p3() {
    or_ln1356_224_fu_6104_p3 = esl_concat<17,15>(trunc_ln1503_204_fu_6100_p1.read(), lshr_ln1503_328_fu_6090_p4.read());
}

void sha256d::thread_or_ln1356_225_fu_6126_p3() {
    or_ln1356_225_fu_6126_p3 = esl_concat<19,13>(trunc_ln1503_205_fu_6122_p1.read(), lshr_ln1503_329_fu_6112_p4.read());
}

void sha256d::thread_or_ln1356_226_fu_6546_p3() {
    or_ln1356_226_fu_6546_p3 = esl_concat<7,25>(trunc_ln1503_206_fu_6543_p1.read(), lshr_ln1503_331_fu_6534_p4.read());
}

void sha256d::thread_or_ln1356_227_fu_6566_p3() {
    or_ln1356_227_fu_6566_p3 = esl_concat<18,14>(trunc_ln1503_207_fu_6563_p1.read(), lshr_ln1503_332_fu_6554_p4.read());
}

void sha256d::thread_or_ln1356_228_fu_6174_p3() {
    or_ln1356_228_fu_6174_p3 = esl_concat<17,15>(trunc_ln1503_208_fu_6170_p1.read(), lshr_ln1503_334_fu_6160_p4.read());
}

void sha256d::thread_or_ln1356_229_fu_6196_p3() {
    or_ln1356_229_fu_6196_p3 = esl_concat<19,13>(trunc_ln1503_209_fu_6192_p1.read(), lshr_ln1503_335_fu_6182_p4.read());
}

void sha256d::thread_or_ln1356_22_fu_11643_p3() {
    or_ln1356_22_fu_11643_p3 = esl_concat<19,13>(trunc_ln1503_17_fu_11639_p1.read(), lshr_ln1503_32_fu_11629_p4.read());
}

void sha256d::thread_or_ln1356_230_fu_6616_p3() {
    or_ln1356_230_fu_6616_p3 = esl_concat<7,25>(trunc_ln1503_210_fu_6613_p1.read(), lshr_ln1503_337_fu_6604_p4.read());
}

void sha256d::thread_or_ln1356_231_fu_6636_p3() {
    or_ln1356_231_fu_6636_p3 = esl_concat<18,14>(trunc_ln1503_211_fu_6633_p1.read(), lshr_ln1503_338_fu_6624_p4.read());
}

void sha256d::thread_or_ln1356_232_fu_6706_p3() {
    or_ln1356_232_fu_6706_p3 = esl_concat<17,15>(trunc_ln1503_212_fu_6702_p1.read(), lshr_ln1503_340_fu_6692_p4.read());
}

void sha256d::thread_or_ln1356_233_fu_6728_p3() {
    or_ln1356_233_fu_6728_p3 = esl_concat<19,13>(trunc_ln1503_213_fu_6724_p1.read(), lshr_ln1503_341_fu_6714_p4.read());
}

void sha256d::thread_or_ln1356_234_fu_6774_p3() {
    or_ln1356_234_fu_6774_p3 = esl_concat<7,25>(trunc_ln1503_214_fu_6771_p1.read(), lshr_ln1503_343_fu_6762_p4.read());
}

void sha256d::thread_or_ln1356_235_fu_6794_p3() {
    or_ln1356_235_fu_6794_p3 = esl_concat<18,14>(trunc_ln1503_215_fu_6791_p1.read(), lshr_ln1503_344_fu_6782_p4.read());
}

void sha256d::thread_or_ln1356_236_fu_6857_p3() {
    or_ln1356_236_fu_6857_p3 = esl_concat<17,15>(trunc_ln1503_216_fu_6853_p1.read(), lshr_ln1503_346_fu_6843_p4.read());
}

void sha256d::thread_or_ln1356_237_fu_6879_p3() {
    or_ln1356_237_fu_6879_p3 = esl_concat<19,13>(trunc_ln1503_217_fu_6875_p1.read(), lshr_ln1503_347_fu_6865_p4.read());
}

void sha256d::thread_or_ln1356_238_fu_6244_p3() {
    or_ln1356_238_fu_6244_p3 = esl_concat<7,25>(trunc_ln1503_218_fu_6240_p1.read(), lshr_ln1503_349_fu_6230_p4.read());
}

void sha256d::thread_or_ln1356_239_fu_6266_p3() {
    or_ln1356_239_fu_6266_p3 = esl_concat<18,14>(trunc_ln1503_219_fu_6262_p1.read(), lshr_ln1503_350_fu_6252_p4.read());
}

void sha256d::thread_or_ln1356_23_fu_11697_p3() {
    or_ln1356_23_fu_11697_p3 = esl_concat<17,15>(trunc_ln1503_18_fu_11693_p1.read(), lshr_ln1503_34_fu_11683_p4.read());
}

}

