#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        a_V_reg_1299 = state_0_V_fu_10528_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        a_V_reg_1299 = ap_const_lv32_6A09E667;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        b_V_reg_1287 = state_1_V_fu_10542_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        b_V_reg_1287 = ap_const_lv32_BB67AE85;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        c_V_reg_1275 = state_2_V_fu_10556_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        c_V_reg_1275 = ap_const_lv32_3C6EF372;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        d_V_reg_1263 = state_3_V_fu_10570_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        d_V_reg_1263 = ap_const_lv32_A54FF53A;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        e_V_reg_1251 = state_4_V_fu_10584_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        e_V_reg_1251 = ap_const_lv32_510E527F;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        f_V_reg_1239 = state_5_V_fu_10598_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        f_V_reg_1239 = ap_const_lv32_9B05688C;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        g_V_reg_1227 = state_6_V_fu_10612_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        g_V_reg_1227 = ap_const_lv32_1F83D9AB;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        h_V_reg_1215 = state_7_V_fu_10626_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h_V_reg_1215 = ap_const_lv32_5BE0CD19;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        lhs_V_16_reg_1426 = a_V_2_fu_10781_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        lhs_V_16_reg_1426 = a_V_reg_1299.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        lhs_V_17_reg_1581 = e_V_1_fu_17268_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        lhs_V_17_reg_1581 = ap_const_lv32_510E527F;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        lhs_V_18_reg_1530 = a_V_1_fu_17280_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        lhs_V_18_reg_1530 = ap_const_lv32_6A09E667;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        lhs_V_reg_1473 = e_V_2_fu_10769_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        lhs_V_reg_1473 = e_V_reg_1251.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        p_01375_2_reg_1415 = i_V_1_reg_18427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        p_01375_2_reg_1415 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        p_01859_0_reg_1461 = rhs_V_22_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        p_01859_0_reg_1461 = d_V_reg_1263.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        p_01894_0_reg_1508 = rhs_V_20_reg_1496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        p_01894_0_reg_1508 = h_V_reg_1215.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        p_03004_2_reg_1519 = i_V_reg_19040.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        p_03004_2_reg_1519 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        p_03491_0_reg_1568 = rhs_V_26_reg_1555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        p_03491_0_reg_1568 = ap_const_lv32_A54FF53A;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        p_03526_0_reg_1619 = rhs_V_24_reg_1606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        p_03526_0_reg_1619 = ap_const_lv32_5BE0CD19;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_1_reg_1323 = add_ln72_6_fu_10668_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_1_reg_1323 = ap_const_lv8_AB;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_2_reg_1335 = add_ln72_5_fu_10662_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_2_reg_1335 = ap_const_lv8_8C;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_3_reg_1347 = add_ln72_4_fu_10656_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_3_reg_1347 = ap_const_lv8_7F;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_4_reg_1359 = add_ln72_3_fu_10650_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_4_reg_1359 = ap_const_lv8_3A;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_5_reg_1371 = add_ln72_2_fu_10644_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_5_reg_1371 = ap_const_lv8_72;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_6_reg_1382 = add_ln72_1_fu_10638_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_6_reg_1382 = ap_const_lv8_85;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_7_reg_1393 = add_ln72_fu_10632_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_7_reg_1393 = ap_const_lv8_67;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        phi_ln1503_reg_1311 = add_ln72_7_fu_10674_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln1503_reg_1311 = ap_const_lv8_19;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        rhs_V_20_reg_1496 = rhs_V_reg_1484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        rhs_V_20_reg_1496 = g_V_reg_1227.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        rhs_V_21_reg_1437 = lhs_V_16_reg_1426.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        rhs_V_21_reg_1437 = b_V_reg_1287.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        rhs_V_22_reg_1449 = rhs_V_21_reg_1437.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        rhs_V_22_reg_1449 = c_V_reg_1275.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        rhs_V_23_reg_1593 = lhs_V_17_reg_1581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        rhs_V_23_reg_1593 = ap_const_lv32_9B05688C;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        rhs_V_24_reg_1606 = rhs_V_23_reg_1593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        rhs_V_24_reg_1606 = ap_const_lv32_1F83D9AB;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        rhs_V_25_reg_1542 = lhs_V_18_reg_1530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        rhs_V_25_reg_1542 = ap_const_lv32_BB67AE85;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        rhs_V_26_reg_1555 = rhs_V_25_reg_1542.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        rhs_V_26_reg_1555 = ap_const_lv32_3C6EF372;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        rhs_V_reg_1484 = lhs_V_reg_1473.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        rhs_V_reg_1484 = f_V_reg_1239.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
        t_0_reg_1404 = t_reg_17708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        t_0_reg_1404 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        add_ln209_112_reg_18977 = add_ln209_112_fu_16113_p2.read();
        add_ln209_115_reg_18982 = add_ln209_115_fu_16189_p2.read();
        add_ln209_88_reg_18962 = add_ln209_88_fu_15893_p2.read();
        add_ln209_91_reg_18967 = add_ln209_91_fu_15968_p2.read();
        m_46_V_reg_18915 = m_46_V_fu_15298_p2.read();
        m_47_V_reg_18920 = m_47_V_fu_15307_p2.read();
        m_48_V_reg_18926 = m_48_V_fu_15391_p2.read();
        m_49_V_reg_18932 = m_49_V_fu_15476_p2.read();
        m_50_V_reg_18938 = m_50_V_fu_15561_p2.read();
        m_51_V_reg_18944 = m_51_V_fu_15646_p2.read();
        m_52_V_reg_18950 = m_52_V_fu_15731_p2.read();
        m_53_V_reg_18956 = m_53_V_fu_15817_p2.read();
        xor_ln1357_158_reg_18972 = xor_ln1357_158_fu_16037_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln72_fu_1632_p2.read(), ap_const_lv1_0))) {
        add_ln209_118_reg_17783 = add_ln209_118_fu_1972_p2.read();
        add_ln209_120_reg_17794 = add_ln209_120_fu_2132_p2.read();
        add_ln209_123_reg_17805 = add_ln209_123_fu_2320_p2.read();
        add_ln209_126_reg_17816 = add_ln209_126_fu_2508_p2.read();
        add_ln209_129_reg_17827 = add_ln209_129_fu_2696_p2.read();
        add_ln209_132_reg_17838 = add_ln209_132_fu_2884_p2.read();
        add_ln209_135_reg_17849 = add_ln209_135_fu_3072_p2.read();
        add_ln209_138_reg_17860 = add_ln209_138_fu_3256_p2.read();
        add_ln209_139_reg_17876 = add_ln209_139_fu_3428_p2.read();
        add_ln209_142_reg_17886 = add_ln209_142_fu_3600_p2.read();
        add_ln209_145_reg_17891 = add_ln209_145_fu_3702_p2.read();
        add_ln209_148_reg_17896 = add_ln209_148_fu_3804_p2.read();
        add_ln209_151_reg_17901 = add_ln209_151_fu_3906_p2.read();
        add_ln209_154_reg_17906 = add_ln209_154_fu_4008_p2.read();
        add_ln209_157_reg_17911 = add_ln209_157_fu_4110_p2.read();
        select_ln1356_10_reg_17753 = select_ln1356_10_fu_1756_p3.read();
        select_ln1356_11_reg_17758 = select_ln1356_11_fu_1763_p3.read();
        select_ln1356_12_reg_17763 = select_ln1356_12_fu_1774_p3.read();
        select_ln1356_13_reg_17768 = select_ln1356_13_fu_1785_p3.read();
        select_ln1356_14_reg_17773 = select_ln1356_14_fu_1796_p3.read();
        select_ln1356_15_reg_17778 = select_ln1356_15_fu_1807_p3.read();
        select_ln1356_2_reg_17713 = select_ln1356_2_fu_1678_p3.read();
        select_ln1356_3_reg_17718 = select_ln1356_3_fu_1688_p3.read();
        select_ln1356_4_reg_17723 = select_ln1356_4_fu_1698_p3.read();
        select_ln1356_5_reg_17728 = select_ln1356_5_fu_1709_p3.read();
        select_ln1356_6_reg_17733 = select_ln1356_6_fu_1720_p3.read();
        select_ln1356_8_reg_17743 = select_ln1356_8_fu_1742_p3.read();
        select_ln1356_9_reg_17748 = select_ln1356_9_fu_1749_p3.read();
        xor_ln1357_190_reg_17871 = xor_ln1357_190_fu_3326_p2.read();
        xor_ln1357_193_reg_17881 = xor_ln1357_193_fu_3498_p2.read();
        zext_ln209_7_reg_17738 = zext_ln209_7_fu_1738_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        add_ln209_141_reg_18017 = add_ln209_141_fu_4916_p2.read();
        add_ln209_144_reg_18023 = add_ln209_144_fu_4925_p2.read();
        add_ln209_147_reg_18029 = add_ln209_147_fu_5005_p2.read();
        add_ln209_150_reg_18035 = add_ln209_150_fu_5085_p2.read();
        add_ln209_153_reg_18041 = add_ln209_153_fu_5165_p2.read();
        add_ln209_156_reg_18052 = add_ln209_156_fu_5245_p2.read();
        add_ln209_159_reg_18064 = add_ln209_159_fu_5325_p2.read();
        add_ln209_162_reg_18076 = add_ln209_162_fu_5476_p2.read();
        add_ln209_165_reg_18088 = add_ln209_165_fu_5628_p2.read();
        add_ln209_168_reg_18099 = add_ln209_168_fu_5780_p2.read();
        add_ln209_171_reg_18110 = add_ln209_171_fu_5932_p2.read();
        add_ln209_174_reg_18121 = add_ln209_174_fu_6084_p2.read();
        add_ln209_184_reg_18142 = add_ln209_184_fu_6300_p2.read();
        add_ln209_187_reg_18147 = add_ln209_187_fu_6376_p2.read();
        add_ln209_190_reg_18152 = add_ln209_190_fu_6452_p2.read();
        add_ln209_193_reg_18157 = add_ln209_193_fu_6528_p2.read();
        xor_ln1357_231_reg_18132 = xor_ln1357_231_fu_6154_p2.read();
        xor_ln1357_235_reg_18137 = xor_ln1357_235_fu_6224_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        add_ln209_175_reg_18162 = add_ln209_175_fu_6599_p2.read();
        add_ln209_178_reg_18167 = add_ln209_178_fu_6669_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        add_ln209_177_reg_18172 = add_ln209_177_fu_6678_p2.read();
        add_ln209_180_reg_18178 = add_ln209_180_fu_6687_p2.read();
        add_ln209_183_reg_18184 = add_ln209_183_fu_6837_p2.read();
        add_ln209_186_reg_18190 = add_ln209_186_fu_6918_p2.read();
        add_ln209_189_reg_18196 = add_ln209_189_fu_6998_p2.read();
        add_ln209_192_reg_18207 = add_ln209_192_fu_7078_p2.read();
        add_ln209_195_reg_18219 = add_ln209_195_fu_7158_p2.read();
        add_ln209_198_reg_18231 = add_ln209_198_fu_7309_p2.read();
        add_ln209_201_reg_18243 = add_ln209_201_fu_7461_p2.read();
        add_ln209_204_reg_18254 = add_ln209_204_fu_7613_p2.read();
        add_ln209_207_reg_18265 = add_ln209_207_fu_7765_p2.read();
        add_ln209_210_reg_18276 = add_ln209_210_fu_7917_p2.read();
        add_ln209_220_reg_18292 = add_ln209_220_fu_8133_p2.read();
        add_ln209_223_reg_18297 = add_ln209_223_fu_8209_p2.read();
        add_ln209_226_reg_18302 = add_ln209_226_fu_8285_p2.read();
        add_ln209_229_reg_18307 = add_ln209_229_fu_8361_p2.read();
        xor_ln1357_279_reg_18282 = xor_ln1357_279_fu_7987_p2.read();
        xor_ln1357_283_reg_18287 = xor_ln1357_283_fu_8057_p2.read();
        xor_ln1357_337_reg_18312 = xor_ln1357_337_fu_8431_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        add_ln209_213_reg_18317 = add_ln209_213_fu_8511_p2.read();
        add_ln209_216_reg_18323 = add_ln209_216_fu_8591_p2.read();
        add_ln209_219_reg_18329 = add_ln209_219_fu_8742_p2.read();
        add_ln209_222_reg_18335 = add_ln209_222_fu_8823_p2.read();
        add_ln209_225_reg_18341 = add_ln209_225_fu_8903_p2.read();
        add_ln209_228_reg_18347 = add_ln209_228_fu_8983_p2.read();
        xor_ln1357_303_reg_18353 = xor_ln1357_303_fu_9052_p2.read();
        xor_ln1357_307_reg_18358 = xor_ln1357_307_fu_9122_p2.read();
        xor_ln1357_341_reg_18363 = xor_ln1357_341_fu_9192_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        add_ln209_22_reg_18651 = add_ln209_22_fu_12127_p2.read();
        m_19_V_reg_18567 = m_19_V_fu_10907_p2.read();
        m_20_V_reg_18573 = m_20_V_fu_11014_p2.read();
        m_21_V_reg_18579 = m_21_V_fu_11192_p2.read();
        m_22_V_reg_18585 = m_22_V_fu_11370_p2.read();
        m_23_V_reg_18591 = m_23_V_fu_11451_p2.read();
        m_24_V_reg_18597 = m_24_V_fu_11527_p2.read();
        m_25_V_reg_18604 = m_25_V_fu_11602_p2.read();
        m_26_V_reg_18611 = m_26_V_fu_11677_p2.read();
        m_27_V_reg_18618 = m_27_V_fu_11753_p2.read();
        m_28_V_reg_18625 = m_28_V_fu_11829_p2.read();
        m_29_V_reg_18632 = m_29_V_fu_11905_p2.read();
        m_30_V_reg_18639 = m_30_V_fu_11981_p2.read();
        m_3_V_reg_18542 = m_3_V_fu_10786_p1.read();
        m_4_V_reg_18547 = m_4_V_fu_10790_p1.read();
        m_5_V_reg_18552 = m_5_V_fu_10794_p1.read();
        m_6_V_reg_18557 = m_6_V_fu_10798_p1.read();
        m_7_V_reg_18562 = m_7_V_fu_10802_p1.read();
        xor_ln1357_36_reg_18646 = xor_ln1357_36_fu_12051_p2.read();
        xor_ln1357_50_reg_18656 = xor_ln1357_50_fu_12196_p2.read();
        xor_ln1357_54_reg_18661 = xor_ln1357_54_fu_12266_p2.read();
        xor_ln1357_58_reg_18666 = xor_ln1357_58_fu_12336_p2.read();
        xor_ln1357_62_reg_18671 = xor_ln1357_62_fu_12406_p2.read();
        xor_ln1357_66_reg_18676 = xor_ln1357_66_fu_12476_p2.read();
        xor_ln1357_70_reg_18681 = xor_ln1357_70_fu_12546_p2.read();
        xor_ln1357_74_reg_18686 = xor_ln1357_74_fu_12616_p2.read();
        xor_ln1357_78_reg_18691 = xor_ln1357_78_fu_12686_p2.read();
        xor_ln1357_82_reg_18696 = xor_ln1357_82_fu_12756_p2.read();
        xor_ln1357_86_reg_18701 = xor_ln1357_86_fu_12826_p2.read();
        xor_ln1357_90_reg_18706 = xor_ln1357_90_fu_12896_p2.read();
        xor_ln1357_94_reg_18711 = xor_ln1357_94_fu_12966_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        add_ln209_231_reg_18368 = add_ln209_231_fu_9202_p2.read();
        xor_ln1357_311_reg_18374 = xor_ln1357_311_fu_9271_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        add_ln209_234_reg_18379 = add_ln209_234_fu_9351_p2.read();
        add_ln209_237_reg_18384 = add_ln209_237_fu_9431_p2.read();
        add_ln209_240_reg_18389 = add_ln209_240_fu_9582_p2.read();
        add_ln209_243_reg_18394 = add_ln209_243_fu_9733_p2.read();
        add_ln209_246_reg_18399 = add_ln209_246_fu_9884_p2.read();
        add_ln209_249_reg_18404 = add_ln209_249_fu_10035_p2.read();
        add_ln209_252_reg_18409 = add_ln209_252_fu_10186_p2.read();
        add_ln209_255_reg_18414 = add_ln209_255_fu_10272_p2.read();
        add_ln209_258_reg_18419 = add_ln209_258_fu_10358_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln887_fu_16886_p2.read()))) {
        add_ln209_261_reg_19050 = add_ln209_261_fu_17093_p2.read();
        ret_V_13_reg_19055 = ret_V_13_fu_17117_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln887_1_fu_10364_p2.read()))) {
        add_ln209_268_reg_18442 = add_ln209_268_fu_10490_p2.read();
        ret_V_27_reg_18447 = ret_V_27_fu_10514_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        add_ln209_40_reg_18765 = add_ln209_40_fu_13485_p2.read();
        add_ln209_43_reg_18770 = add_ln209_43_fu_13560_p2.read();
        m_31_V_reg_18716 = m_31_V_fu_12976_p2.read();
        m_32_V_reg_18723 = m_32_V_fu_12985_p2.read();
        m_33_V_reg_18730 = m_33_V_fu_13069_p2.read();
        m_34_V_reg_18737 = m_34_V_fu_13154_p2.read();
        m_35_V_reg_18744 = m_35_V_fu_13239_p2.read();
        m_36_V_reg_18751 = m_36_V_fu_13324_p2.read();
        m_37_V_reg_18758 = m_37_V_fu_13409_p2.read();
        xor_ln1357_102_reg_18780 = xor_ln1357_102_fu_13699_p2.read();
        xor_ln1357_106_reg_18785 = xor_ln1357_106_fu_13769_p2.read();
        xor_ln1357_110_reg_18790 = xor_ln1357_110_fu_13839_p2.read();
        xor_ln1357_114_reg_18795 = xor_ln1357_114_fu_13909_p2.read();
        xor_ln1357_118_reg_18800 = xor_ln1357_118_fu_13979_p2.read();
        xor_ln1357_122_reg_18805 = xor_ln1357_122_fu_14049_p2.read();
        xor_ln1357_98_reg_18775 = xor_ln1357_98_fu_13629_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        add_ln209_64_reg_18865 = add_ln209_64_fu_14654_p2.read();
        add_ln209_67_reg_18870 = add_ln209_67_fu_14729_p2.read();
        m_38_V_reg_18810 = m_38_V_fu_14059_p2.read();
        m_39_V_reg_18816 = m_39_V_fu_14068_p2.read();
        m_40_V_reg_18823 = m_40_V_fu_14152_p2.read();
        m_41_V_reg_18830 = m_41_V_fu_14237_p2.read();
        m_42_V_reg_18837 = m_42_V_fu_14322_p2.read();
        m_43_V_reg_18844 = m_43_V_fu_14407_p2.read();
        m_44_V_reg_18851 = m_44_V_fu_14492_p2.read();
        m_45_V_reg_18858 = m_45_V_fu_14578_p2.read();
        xor_ln1357_126_reg_18875 = xor_ln1357_126_fu_14798_p2.read();
        xor_ln1357_130_reg_18880 = xor_ln1357_130_fu_14868_p2.read();
        xor_ln1357_134_reg_18885 = xor_ln1357_134_fu_14938_p2.read();
        xor_ln1357_138_reg_18890 = xor_ln1357_138_fu_15008_p2.read();
        xor_ln1357_142_reg_18895 = xor_ln1357_142_fu_15078_p2.read();
        xor_ln1357_146_reg_18900 = xor_ln1357_146_fu_15148_p2.read();
        xor_ln1357_150_reg_18905 = xor_ln1357_150_fu_15218_p2.read();
        xor_ln1357_154_reg_18910 = xor_ln1357_154_fu_15288_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        i_V_1_reg_18427 = i_V_1_fu_10370_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        i_V_reg_19040 = i_V_fu_16892_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln72_fu_1632_p2.read(), ap_const_lv1_1))) {
        m_0_V_reg_17916 = m_0_V_fu_4116_p1.read();
        m_16_V_reg_17931 = m_16_V_fu_4224_p2.read();
        m_17_V_reg_17938 = m_17_V_fu_4326_p2.read();
        m_18_V_reg_17945 = m_18_V_fu_4504_p2.read();
        m_1_V_reg_17921 = m_1_V_fu_4120_p1.read();
        m_2_V_reg_17926 = m_2_V_fu_4124_p1.read();
        xor_ln1357_10_reg_17957 = xor_ln1357_10_fu_4644_p2.read();
        xor_ln1357_38_reg_17962 = xor_ln1357_38_fu_4714_p2.read();
        xor_ln1357_42_reg_17967 = xor_ln1357_42_fu_4784_p2.read();
        xor_ln1357_46_reg_17972 = xor_ln1357_46_fu_4854_p2.read();
        xor_ln1357_6_reg_17952 = xor_ln1357_6_fu_4574_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        m_54_V_reg_18987 = m_54_V_fu_16199_p2.read();
        m_55_V_reg_18992 = m_55_V_fu_16208_p2.read();
        m_56_V_reg_18997 = m_56_V_fu_16292_p2.read();
        m_57_V_reg_19002 = m_57_V_fu_16377_p2.read();
        m_58_V_reg_19007 = m_58_V_fu_16462_p2.read();
        m_59_V_reg_19012 = m_59_V_fu_16547_p2.read();
        m_60_V_reg_19017 = m_60_V_fu_16632_p2.read();
        m_61_V_reg_19022 = m_61_V_fu_16718_p2.read();
        m_62_V_reg_19027 = m_62_V_fu_16800_p2.read();
        m_63_V_reg_19032 = m_63_V_fu_16881_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        t_reg_17708 = t_fu_1638_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        zext_ln209_10_reg_17987 = zext_ln209_10_fu_4888_p1.read();
        zext_ln209_11_reg_17992 = zext_ln209_11_fu_4892_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        zext_ln209_12_reg_17997 = zext_ln209_12_fu_4896_p1.read();
        zext_ln209_13_reg_18002 = zext_ln209_13_fu_4900_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        zext_ln209_14_reg_18007 = zext_ln209_14_fu_4904_p1.read();
        zext_ln209_15_reg_18012 = zext_ln209_15_fu_4908_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        zext_ln209_8_reg_17977 = zext_ln209_8_fu_4880_p1.read();
        zext_ln209_9_reg_17982 = zext_ln209_9_fu_4884_p1.read();
    }
}

void sha256d::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln72_fu_1632_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_1_fu_10364_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 549755813888 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 1099511627776 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln887_fu_16886_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state42;
            }
            break;
        case 2199023255552 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<42>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

