#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_xor_ln150_90_fu_15481_p2() {
    xor_ln150_90_fu_15481_p2 = (xor_ln150_89_fu_15475_p2.read() ^ or_ln150_27_fu_15431_p3.read());
}

void sha256d::thread_xor_ln150_91_fu_14572_p2() {
    xor_ln150_91_fu_14572_p2 = (zext_ln150_45_fu_14568_p1.read() ^ or_ln150_110_fu_14550_p3.read());
}

void sha256d::thread_xor_ln150_92_fu_14578_p2() {
    xor_ln150_92_fu_14578_p2 = (xor_ln150_91_fu_14572_p2.read() ^ or_ln150_109_fu_14528_p3.read());
}

void sha256d::thread_xor_ln150_93_fu_15560_p2() {
    xor_ln150_93_fu_15560_p2 = (zext_ln150_46_fu_15556_p1.read() ^ or_ln150_111_fu_15538_p3.read());
}

void sha256d::thread_xor_ln150_94_fu_15566_p2() {
    xor_ln150_94_fu_15566_p2 = (xor_ln150_93_fu_15560_p2.read() ^ or_ln150_28_fu_15516_p3.read());
}

void sha256d::thread_xor_ln150_95_fu_13447_p2() {
    xor_ln150_95_fu_13447_p2 = (zext_ln150_47_fu_13443_p1.read() ^ or_ln150_113_fu_13425_p3.read());
}

void sha256d::thread_xor_ln150_96_fu_13453_p2() {
    xor_ln150_96_fu_13453_p2 = (xor_ln150_95_fu_13447_p2.read() ^ or_ln150_112_fu_13403_p3.read());
}

void sha256d::thread_xor_ln150_97_fu_15645_p2() {
    xor_ln150_97_fu_15645_p2 = (zext_ln150_48_fu_15641_p1.read() ^ or_ln150_114_fu_15623_p3.read());
}

void sha256d::thread_xor_ln150_98_fu_15651_p2() {
    xor_ln150_98_fu_15651_p2 = (xor_ln150_97_fu_15645_p2.read() ^ or_ln150_29_fu_15601_p3.read());
}

void sha256d::thread_xor_ln150_99_fu_14642_p2() {
    xor_ln150_99_fu_14642_p2 = (zext_ln150_49_fu_14638_p1.read() ^ or_ln150_116_fu_14620_p3.read());
}

void sha256d::thread_xor_ln150_9_fu_2640_p2() {
    xor_ln150_9_fu_2640_p2 = (xor_ln150_8_fu_2634_p2.read() ^ or_ln150_51_fu_2590_p3.read());
}

void sha256d::thread_xor_ln150_fu_11585_p2() {
    xor_ln150_fu_11585_p2 = (zext_ln150_fu_11581_p1.read() ^ or_ln150_1_fu_11563_p3.read());
}

void sha256d::thread_xor_ln162_1_fu_18163_p2() {
    xor_ln162_1_fu_18163_p2 = (xor_ln162_fu_18157_p2.read() ^ or_ln162_2_fu_18149_p3.read());
}

void sha256d::thread_xor_ln162_2_fu_18175_p2() {
    xor_ln162_2_fu_18175_p2 = (f_2_reg_1646.read() ^ ap_const_lv32_FFFFFFFF);
}

void sha256d::thread_xor_ln162_3_fu_18187_p2() {
    xor_ln162_3_fu_18187_p2 = (and_ln162_1_fu_18181_p2.read() ^ and_ln162_fu_18169_p2.read());
}

void sha256d::thread_xor_ln162_fu_18157_p2() {
    xor_ln162_fu_18157_p2 = (or_ln2_fu_18105_p3.read() ^ or_ln162_1_fu_18127_p3.read());
}

void sha256d::thread_xor_ln163_1_fu_18288_p2() {
    xor_ln163_1_fu_18288_p2 = (xor_ln163_fu_18282_p2.read() ^ or_ln163_2_fu_18274_p3.read());
}

void sha256d::thread_xor_ln163_2_fu_18294_p2() {
    xor_ln163_2_fu_18294_p2 = (d_2_reg_1620.read() ^ c_2_reg_1607.read());
}

void sha256d::thread_xor_ln163_3_fu_18312_p2() {
    xor_ln163_3_fu_18312_p2 = (and_ln163_fu_18300_p2.read() ^ and_ln163_1_fu_18306_p2.read());
}

void sha256d::thread_xor_ln163_fu_18282_p2() {
    xor_ln163_fu_18282_p2 = (or_ln3_fu_18230_p3.read() ^ or_ln163_1_fu_18252_p3.read());
}

void sha256d::thread_xor_ln392_1_fu_18476_p2() {
    xor_ln392_1_fu_18476_p2 = (select_ln392_fu_18452_p3.read() ^ ap_const_lv9_FF);
}

void sha256d::thread_xor_ln392_2_fu_18536_p2() {
    xor_ln392_2_fu_18536_p2 = (and_ln392_fu_18530_p2.read() ^ ap_const_lv256_lc_2);
}

void sha256d::thread_xor_ln392_fu_18446_p2() {
    xor_ln392_fu_18446_p2 = (zext_ln392_fu_18438_p1.read() ^ ap_const_lv9_FF);
}

void sha256d::thread_xor_ln84_100_fu_7830_p2() {
    xor_ln84_100_fu_7830_p2 = (zext_ln84_50_fu_7826_p1.read() ^ or_ln84_122_fu_7808_p3.read());
}

void sha256d::thread_xor_ln84_101_fu_7836_p2() {
    xor_ln84_101_fu_7836_p2 = (xor_ln84_100_fu_7830_p2.read() ^ or_ln84_25_fu_7786_p3.read());
}

void sha256d::thread_xor_ln84_102_fu_6740_p2() {
    xor_ln84_102_fu_6740_p2 = (zext_ln84_51_fu_6736_p1.read() ^ or_ln84_124_fu_6718_p3.read());
}

void sha256d::thread_xor_ln84_103_fu_6746_p2() {
    xor_ln84_103_fu_6746_p2 = (xor_ln84_102_fu_6740_p2.read() ^ or_ln84_123_fu_6696_p3.read());
}

void sha256d::thread_xor_ln84_104_fu_8763_p2() {
    xor_ln84_104_fu_8763_p2 = (zext_ln84_52_fu_8759_p1.read() ^ or_ln84_125_fu_8741_p3.read());
}

void sha256d::thread_xor_ln84_105_fu_8769_p2() {
    xor_ln84_105_fu_8769_p2 = (xor_ln84_104_fu_8763_p2.read() ^ or_ln84_26_fu_8719_p3.read());
}

void sha256d::thread_xor_ln84_106_fu_6810_p2() {
    xor_ln84_106_fu_6810_p2 = (zext_ln84_53_fu_6806_p1.read() ^ or_ln84_127_fu_6788_p3.read());
}

void sha256d::thread_xor_ln84_107_fu_6816_p2() {
    xor_ln84_107_fu_6816_p2 = (xor_ln84_106_fu_6810_p2.read() ^ or_ln84_126_fu_6766_p3.read());
}

void sha256d::thread_xor_ln84_108_fu_8848_p2() {
    xor_ln84_108_fu_8848_p2 = (zext_ln84_54_fu_8844_p1.read() ^ or_ln84_128_fu_8826_p3.read());
}

void sha256d::thread_xor_ln84_109_fu_8854_p2() {
    xor_ln84_109_fu_8854_p2 = (xor_ln84_108_fu_8848_p2.read() ^ or_ln84_27_fu_8804_p3.read());
}

void sha256d::thread_xor_ln84_10_fu_3018_p2() {
    xor_ln84_10_fu_3018_p2 = (zext_ln84_5_fu_3014_p1.read() ^ or_ln84_54_fu_2978_p6.read());
}

void sha256d::thread_xor_ln84_110_fu_7905_p2() {
    xor_ln84_110_fu_7905_p2 = (zext_ln84_55_fu_7901_p1.read() ^ or_ln84_130_fu_7883_p3.read());
}

void sha256d::thread_xor_ln84_111_fu_7911_p2() {
    xor_ln84_111_fu_7911_p2 = (xor_ln84_110_fu_7905_p2.read() ^ or_ln84_129_fu_7861_p3.read());
}

void sha256d::thread_xor_ln84_112_fu_8933_p2() {
    xor_ln84_112_fu_8933_p2 = (zext_ln84_56_fu_8929_p1.read() ^ or_ln84_131_fu_8911_p3.read());
}

void sha256d::thread_xor_ln84_113_fu_8939_p2() {
    xor_ln84_113_fu_8939_p2 = (xor_ln84_112_fu_8933_p2.read() ^ or_ln84_28_fu_8889_p3.read());
}

void sha256d::thread_xor_ln84_114_fu_7975_p2() {
    xor_ln84_114_fu_7975_p2 = (zext_ln84_57_fu_7971_p1.read() ^ or_ln84_133_fu_7953_p3.read());
}

void sha256d::thread_xor_ln84_115_fu_7981_p2() {
    xor_ln84_115_fu_7981_p2 = (xor_ln84_114_fu_7975_p2.read() ^ or_ln84_132_fu_7931_p3.read());
}

void sha256d::thread_xor_ln84_116_fu_9018_p2() {
    xor_ln84_116_fu_9018_p2 = (zext_ln84_58_fu_9014_p1.read() ^ or_ln84_134_fu_8996_p3.read());
}

void sha256d::thread_xor_ln84_117_fu_9024_p2() {
    xor_ln84_117_fu_9024_p2 = (xor_ln84_116_fu_9018_p2.read() ^ or_ln84_29_fu_8974_p3.read());
}

void sha256d::thread_xor_ln84_118_fu_8045_p2() {
    xor_ln84_118_fu_8045_p2 = (zext_ln84_59_fu_8041_p1.read() ^ or_ln84_136_fu_8023_p3.read());
}

void sha256d::thread_xor_ln84_119_fu_8051_p2() {
    xor_ln84_119_fu_8051_p2 = (xor_ln84_118_fu_8045_p2.read() ^ or_ln84_135_fu_8001_p3.read());
}

void sha256d::thread_xor_ln84_11_fu_3024_p2() {
    xor_ln84_11_fu_3024_p2 = (xor_ln84_10_fu_3018_p2.read() ^ or_ln84_53_fu_2950_p6.read());
}

void sha256d::thread_xor_ln84_120_fu_9103_p2() {
    xor_ln84_120_fu_9103_p2 = (zext_ln84_60_fu_9099_p1.read() ^ or_ln84_137_fu_9081_p3.read());
}

void sha256d::thread_xor_ln84_121_fu_9109_p2() {
    xor_ln84_121_fu_9109_p2 = (xor_ln84_120_fu_9103_p2.read() ^ or_ln84_30_fu_9059_p3.read());
}

void sha256d::thread_xor_ln84_122_fu_8115_p2() {
    xor_ln84_122_fu_8115_p2 = (zext_ln84_61_fu_8111_p1.read() ^ or_ln84_139_fu_8093_p3.read());
}

void sha256d::thread_xor_ln84_123_fu_8121_p2() {
    xor_ln84_123_fu_8121_p2 = (xor_ln84_122_fu_8115_p2.read() ^ or_ln84_138_fu_8071_p3.read());
}

void sha256d::thread_xor_ln84_124_fu_9188_p2() {
    xor_ln84_124_fu_9188_p2 = (zext_ln84_62_fu_9184_p1.read() ^ or_ln84_140_fu_9166_p3.read());
}

void sha256d::thread_xor_ln84_125_fu_9194_p2() {
    xor_ln84_125_fu_9194_p2 = (xor_ln84_124_fu_9188_p2.read() ^ or_ln84_31_fu_9144_p3.read());
}

void sha256d::thread_xor_ln84_126_fu_8185_p2() {
    xor_ln84_126_fu_8185_p2 = (zext_ln84_63_fu_8181_p1.read() ^ or_ln84_142_fu_8163_p3.read());
}

void sha256d::thread_xor_ln84_127_fu_8191_p2() {
    xor_ln84_127_fu_8191_p2 = (xor_ln84_126_fu_8185_p2.read() ^ or_ln84_141_fu_8141_p3.read());
}

void sha256d::thread_xor_ln84_128_fu_9274_p2() {
    xor_ln84_128_fu_9274_p2 = (zext_ln84_64_fu_9270_p1.read() ^ or_ln84_143_fu_9252_p3.read());
}

void sha256d::thread_xor_ln84_129_fu_9280_p2() {
    xor_ln84_129_fu_9280_p2 = (xor_ln84_128_fu_9274_p2.read() ^ or_ln84_32_fu_9230_p3.read());
}

void sha256d::thread_xor_ln84_12_fu_5117_p2() {
    xor_ln84_12_fu_5117_p2 = (zext_ln84_6_fu_5113_p1.read() ^ or_ln84_56_fu_5095_p3.read());
}

void sha256d::thread_xor_ln84_130_fu_8255_p2() {
    xor_ln84_130_fu_8255_p2 = (zext_ln84_65_fu_8251_p1.read() ^ or_ln84_145_fu_8233_p3.read());
}

void sha256d::thread_xor_ln84_131_fu_8261_p2() {
    xor_ln84_131_fu_8261_p2 = (xor_ln84_130_fu_8255_p2.read() ^ or_ln84_144_fu_8211_p3.read());
}

void sha256d::thread_xor_ln84_132_fu_9360_p2() {
    xor_ln84_132_fu_9360_p2 = (zext_ln84_66_fu_9356_p1.read() ^ or_ln84_146_fu_9338_p3.read());
}

void sha256d::thread_xor_ln84_133_fu_9366_p2() {
    xor_ln84_133_fu_9366_p2 = (xor_ln84_132_fu_9360_p2.read() ^ or_ln84_33_fu_9316_p3.read());
}

void sha256d::thread_xor_ln84_134_fu_8325_p2() {
    xor_ln84_134_fu_8325_p2 = (zext_ln84_67_fu_8321_p1.read() ^ or_ln84_148_fu_8303_p3.read());
}

void sha256d::thread_xor_ln84_135_fu_8331_p2() {
    xor_ln84_135_fu_8331_p2 = (xor_ln84_134_fu_8325_p2.read() ^ or_ln84_147_fu_8281_p3.read());
}

void sha256d::thread_xor_ln84_136_fu_9446_p2() {
    xor_ln84_136_fu_9446_p2 = (zext_ln84_68_fu_9442_p1.read() ^ or_ln84_149_fu_9424_p3.read());
}

void sha256d::thread_xor_ln84_137_fu_9452_p2() {
    xor_ln84_137_fu_9452_p2 = (xor_ln84_136_fu_9446_p2.read() ^ or_ln84_34_fu_9402_p3.read());
}

void sha256d::thread_xor_ln84_138_fu_8395_p2() {
    xor_ln84_138_fu_8395_p2 = (zext_ln84_69_fu_8391_p1.read() ^ or_ln84_151_fu_8373_p3.read());
}

void sha256d::thread_xor_ln84_139_fu_8401_p2() {
    xor_ln84_139_fu_8401_p2 = (xor_ln84_138_fu_8395_p2.read() ^ or_ln84_150_fu_8351_p3.read());
}

void sha256d::thread_xor_ln84_13_fu_5123_p2() {
    xor_ln84_13_fu_5123_p2 = (xor_ln84_12_fu_5117_p2.read() ^ or_ln84_55_fu_5073_p3.read());
}

void sha256d::thread_xor_ln84_140_fu_9532_p2() {
    xor_ln84_140_fu_9532_p2 = (zext_ln84_70_fu_9528_p1.read() ^ or_ln84_152_fu_9510_p3.read());
}

void sha256d::thread_xor_ln84_141_fu_9538_p2() {
    xor_ln84_141_fu_9538_p2 = (xor_ln84_140_fu_9532_p2.read() ^ or_ln84_35_fu_9488_p3.read());
}

void sha256d::thread_xor_ln84_142_fu_8465_p2() {
    xor_ln84_142_fu_8465_p2 = (zext_ln84_71_fu_8461_p1.read() ^ or_ln84_154_fu_8443_p3.read());
}

void sha256d::thread_xor_ln84_143_fu_8471_p2() {
    xor_ln84_143_fu_8471_p2 = (xor_ln84_142_fu_8465_p2.read() ^ or_ln84_153_fu_8421_p3.read());
}

void sha256d::thread_xor_ln84_144_fu_9618_p2() {
    xor_ln84_144_fu_9618_p2 = (zext_ln84_72_fu_9614_p1.read() ^ or_ln84_155_fu_9596_p3.read());
}

void sha256d::thread_xor_ln84_145_fu_9624_p2() {
    xor_ln84_145_fu_9624_p2 = (xor_ln84_144_fu_9618_p2.read() ^ or_ln84_36_fu_9574_p3.read());
}

void sha256d::thread_xor_ln84_146_fu_8535_p2() {
    xor_ln84_146_fu_8535_p2 = (zext_ln84_73_fu_8531_p1.read() ^ or_ln84_157_fu_8513_p3.read());
}

void sha256d::thread_xor_ln84_147_fu_8541_p2() {
    xor_ln84_147_fu_8541_p2 = (xor_ln84_146_fu_8535_p2.read() ^ or_ln84_156_fu_8491_p3.read());
}

void sha256d::thread_xor_ln84_148_fu_9688_p2() {
    xor_ln84_148_fu_9688_p2 = (zext_ln84_74_fu_9684_p1.read() ^ or_ln84_158_fu_9666_p3.read());
}

void sha256d::thread_xor_ln84_149_fu_9694_p2() {
    xor_ln84_149_fu_9694_p2 = (xor_ln84_148_fu_9688_p2.read() ^ or_ln84_37_fu_9644_p3.read());
}

void sha256d::thread_xor_ln84_14_fu_3216_p2() {
    xor_ln84_14_fu_3216_p2 = (zext_ln84_7_fu_3212_p1.read() ^ or_ln84_58_fu_3176_p6.read());
}

void sha256d::thread_xor_ln84_150_fu_8605_p2() {
    xor_ln84_150_fu_8605_p2 = (zext_ln84_75_fu_8601_p1.read() ^ or_ln84_160_fu_8583_p3.read());
}

void sha256d::thread_xor_ln84_151_fu_8611_p2() {
    xor_ln84_151_fu_8611_p2 = (xor_ln84_150_fu_8605_p2.read() ^ or_ln84_159_fu_8561_p3.read());
}

void sha256d::thread_xor_ln84_152_fu_10428_p2() {
    xor_ln84_152_fu_10428_p2 = (zext_ln84_76_fu_10424_p1.read() ^ or_ln84_161_fu_10406_p3.read());
}

void sha256d::thread_xor_ln84_153_fu_10434_p2() {
    xor_ln84_153_fu_10434_p2 = (xor_ln84_152_fu_10428_p2.read() ^ or_ln84_38_fu_10384_p3.read());
}

void sha256d::thread_xor_ln84_154_fu_8675_p2() {
    xor_ln84_154_fu_8675_p2 = (zext_ln84_77_fu_8671_p1.read() ^ or_ln84_163_fu_8653_p3.read());
}

void sha256d::thread_xor_ln84_155_fu_8681_p2() {
    xor_ln84_155_fu_8681_p2 = (xor_ln84_154_fu_8675_p2.read() ^ or_ln84_162_fu_8631_p3.read());
}

void sha256d::thread_xor_ln84_156_fu_10513_p2() {
    xor_ln84_156_fu_10513_p2 = (zext_ln84_78_fu_10509_p1.read() ^ or_ln84_164_fu_10491_p3.read());
}

void sha256d::thread_xor_ln84_157_fu_10519_p2() {
    xor_ln84_157_fu_10519_p2 = (xor_ln84_156_fu_10513_p2.read() ^ or_ln84_39_fu_10469_p3.read());
}

void sha256d::thread_xor_ln84_158_fu_9758_p2() {
    xor_ln84_158_fu_9758_p2 = (zext_ln84_79_fu_9754_p1.read() ^ or_ln84_166_fu_9736_p3.read());
}

void sha256d::thread_xor_ln84_159_fu_9764_p2() {
    xor_ln84_159_fu_9764_p2 = (xor_ln84_158_fu_9758_p2.read() ^ or_ln84_165_fu_9714_p3.read());
}

void sha256d::thread_xor_ln84_15_fu_3222_p2() {
    xor_ln84_15_fu_3222_p2 = (xor_ln84_14_fu_3216_p2.read() ^ or_ln84_57_fu_3148_p6.read());
}

void sha256d::thread_xor_ln84_160_fu_10598_p2() {
    xor_ln84_160_fu_10598_p2 = (zext_ln84_80_fu_10594_p1.read() ^ or_ln84_167_fu_10576_p3.read());
}

void sha256d::thread_xor_ln84_161_fu_10604_p2() {
    xor_ln84_161_fu_10604_p2 = (xor_ln84_160_fu_10598_p2.read() ^ or_ln84_40_fu_10554_p3.read());
}

void sha256d::thread_xor_ln84_162_fu_9828_p2() {
    xor_ln84_162_fu_9828_p2 = (zext_ln84_81_fu_9824_p1.read() ^ or_ln84_169_fu_9806_p3.read());
}

void sha256d::thread_xor_ln84_163_fu_9834_p2() {
    xor_ln84_163_fu_9834_p2 = (xor_ln84_162_fu_9828_p2.read() ^ or_ln84_168_fu_9784_p3.read());
}

void sha256d::thread_xor_ln84_164_fu_10683_p2() {
    xor_ln84_164_fu_10683_p2 = (zext_ln84_82_fu_10679_p1.read() ^ or_ln84_170_fu_10661_p3.read());
}

void sha256d::thread_xor_ln84_165_fu_10689_p2() {
    xor_ln84_165_fu_10689_p2 = (xor_ln84_164_fu_10683_p2.read() ^ or_ln84_41_fu_10639_p3.read());
}

void sha256d::thread_xor_ln84_166_fu_9898_p2() {
    xor_ln84_166_fu_9898_p2 = (zext_ln84_83_fu_9894_p1.read() ^ or_ln84_172_fu_9876_p3.read());
}

void sha256d::thread_xor_ln84_167_fu_9904_p2() {
    xor_ln84_167_fu_9904_p2 = (xor_ln84_166_fu_9898_p2.read() ^ or_ln84_171_fu_9854_p3.read());
}

void sha256d::thread_xor_ln84_168_fu_10768_p2() {
    xor_ln84_168_fu_10768_p2 = (zext_ln84_84_fu_10764_p1.read() ^ or_ln84_173_fu_10746_p3.read());
}

void sha256d::thread_xor_ln84_169_fu_10774_p2() {
    xor_ln84_169_fu_10774_p2 = (xor_ln84_168_fu_10768_p2.read() ^ or_ln84_42_fu_10724_p3.read());
}

void sha256d::thread_xor_ln84_16_fu_5352_p2() {
    xor_ln84_16_fu_5352_p2 = (zext_ln84_8_fu_5348_p1.read() ^ or_ln84_59_fu_5330_p3.read());
}

void sha256d::thread_xor_ln84_170_fu_9968_p2() {
    xor_ln84_170_fu_9968_p2 = (zext_ln84_85_fu_9964_p1.read() ^ or_ln84_175_fu_9946_p3.read());
}

void sha256d::thread_xor_ln84_171_fu_9974_p2() {
    xor_ln84_171_fu_9974_p2 = (xor_ln84_170_fu_9968_p2.read() ^ or_ln84_174_fu_9924_p3.read());
}

void sha256d::thread_xor_ln84_172_fu_10853_p2() {
    xor_ln84_172_fu_10853_p2 = (zext_ln84_86_fu_10849_p1.read() ^ or_ln84_176_fu_10831_p3.read());
}

void sha256d::thread_xor_ln84_173_fu_10859_p2() {
    xor_ln84_173_fu_10859_p2 = (xor_ln84_172_fu_10853_p2.read() ^ or_ln84_43_fu_10809_p3.read());
}

void sha256d::thread_xor_ln84_174_fu_10038_p2() {
    xor_ln84_174_fu_10038_p2 = (zext_ln84_87_fu_10034_p1.read() ^ or_ln84_178_fu_10016_p3.read());
}

void sha256d::thread_xor_ln84_175_fu_10044_p2() {
    xor_ln84_175_fu_10044_p2 = (xor_ln84_174_fu_10038_p2.read() ^ or_ln84_177_fu_9994_p3.read());
}

void sha256d::thread_xor_ln84_176_fu_10939_p2() {
    xor_ln84_176_fu_10939_p2 = (zext_ln84_88_fu_10935_p1.read() ^ or_ln84_179_fu_10917_p3.read());
}

void sha256d::thread_xor_ln84_177_fu_10945_p2() {
    xor_ln84_177_fu_10945_p2 = (xor_ln84_176_fu_10939_p2.read() ^ or_ln84_44_fu_10895_p3.read());
}

void sha256d::thread_xor_ln84_178_fu_10108_p2() {
    xor_ln84_178_fu_10108_p2 = (zext_ln84_89_fu_10104_p1.read() ^ or_ln84_181_fu_10086_p3.read());
}

void sha256d::thread_xor_ln84_179_fu_10114_p2() {
    xor_ln84_179_fu_10114_p2 = (xor_ln84_178_fu_10108_p2.read() ^ or_ln84_180_fu_10064_p3.read());
}

void sha256d::thread_xor_ln84_17_fu_5358_p2() {
    xor_ln84_17_fu_5358_p2 = (xor_ln84_16_fu_5352_p2.read() ^ or_ln84_4_fu_5308_p3.read());
}

void sha256d::thread_xor_ln84_180_fu_11025_p2() {
    xor_ln84_180_fu_11025_p2 = (zext_ln84_90_fu_11021_p1.read() ^ or_ln84_182_fu_11003_p3.read());
}

void sha256d::thread_xor_ln84_181_fu_11031_p2() {
    xor_ln84_181_fu_11031_p2 = (xor_ln84_180_fu_11025_p2.read() ^ or_ln84_45_fu_10981_p3.read());
}

void sha256d::thread_xor_ln84_182_fu_10178_p2() {
    xor_ln84_182_fu_10178_p2 = (zext_ln84_91_fu_10174_p1.read() ^ or_ln84_184_fu_10156_p3.read());
}

void sha256d::thread_xor_ln84_183_fu_10184_p2() {
    xor_ln84_183_fu_10184_p2 = (xor_ln84_182_fu_10178_p2.read() ^ or_ln84_183_fu_10134_p3.read());
}

void sha256d::thread_xor_ln84_184_fu_11111_p2() {
    xor_ln84_184_fu_11111_p2 = (zext_ln84_92_fu_11107_p1.read() ^ or_ln84_185_fu_11089_p3.read());
}

void sha256d::thread_xor_ln84_185_fu_11117_p2() {
    xor_ln84_185_fu_11117_p2 = (xor_ln84_184_fu_11111_p2.read() ^ or_ln84_46_fu_11067_p3.read());
}

void sha256d::thread_xor_ln84_186_fu_10248_p2() {
    xor_ln84_186_fu_10248_p2 = (zext_ln84_93_fu_10244_p1.read() ^ or_ln84_187_fu_10226_p3.read());
}

void sha256d::thread_xor_ln84_187_fu_10254_p2() {
    xor_ln84_187_fu_10254_p2 = (xor_ln84_186_fu_10248_p2.read() ^ or_ln84_186_fu_10204_p3.read());
}

void sha256d::thread_xor_ln84_188_fu_11192_p2() {
    xor_ln84_188_fu_11192_p2 = (zext_ln84_94_fu_11188_p1.read() ^ or_ln84_188_fu_11170_p3.read());
}

void sha256d::thread_xor_ln84_189_fu_11198_p2() {
    xor_ln84_189_fu_11198_p2 = (xor_ln84_188_fu_11192_p2.read() ^ or_ln84_47_fu_11148_p3.read());
}

void sha256d::thread_xor_ln84_18_fu_3308_p2() {
    xor_ln84_18_fu_3308_p2 = (zext_ln84_9_fu_3304_p1.read() ^ or_ln84_61_fu_3268_p6.read());
}

void sha256d::thread_xor_ln84_190_fu_10324_p2() {
    xor_ln84_190_fu_10324_p2 = (zext_ln84_95_fu_10320_p1.read() ^ or_ln84_190_fu_10302_p3.read());
}

void sha256d::thread_xor_ln84_191_fu_10330_p2() {
    xor_ln84_191_fu_10330_p2 = (xor_ln84_190_fu_10324_p2.read() ^ or_ln84_189_fu_10280_p3.read());
}

void sha256d::thread_xor_ln84_19_fu_3314_p2() {
    xor_ln84_19_fu_3314_p2 = (xor_ln84_18_fu_3308_p2.read() ^ or_ln84_60_fu_3240_p6.read());
}

void sha256d::thread_xor_ln84_1_fu_4677_p2() {
    xor_ln84_1_fu_4677_p2 = (xor_ln84_fu_4671_p2.read() ^ or_ln1_fu_4605_p6.read());
}

void sha256d::thread_xor_ln84_20_fu_5422_p2() {
    xor_ln84_20_fu_5422_p2 = (zext_ln84_10_fu_5418_p1.read() ^ or_ln84_62_fu_5400_p3.read());
}

void sha256d::thread_xor_ln84_21_fu_5428_p2() {
    xor_ln84_21_fu_5428_p2 = (xor_ln84_20_fu_5422_p2.read() ^ or_ln84_5_fu_5378_p3.read());
}

void sha256d::thread_xor_ln84_22_fu_3506_p2() {
    xor_ln84_22_fu_3506_p2 = (zext_ln84_11_fu_3502_p1.read() ^ or_ln84_64_fu_3466_p6.read());
}

void sha256d::thread_xor_ln84_23_fu_3512_p2() {
    xor_ln84_23_fu_3512_p2 = (xor_ln84_22_fu_3506_p2.read() ^ or_ln84_63_fu_3438_p6.read());
}

void sha256d::thread_xor_ln84_24_fu_5667_p2() {
    xor_ln84_24_fu_5667_p2 = (zext_ln84_12_fu_5663_p1.read() ^ or_ln84_65_fu_5645_p3.read());
}

void sha256d::thread_xor_ln84_25_fu_5673_p2() {
    xor_ln84_25_fu_5673_p2 = (xor_ln84_24_fu_5667_p2.read() ^ or_ln84_6_fu_5623_p3.read());
}

void sha256d::thread_xor_ln84_26_fu_3598_p2() {
    xor_ln84_26_fu_3598_p2 = (zext_ln84_13_fu_3594_p1.read() ^ or_ln84_67_fu_3558_p6.read());
}

void sha256d::thread_xor_ln84_27_fu_3604_p2() {
    xor_ln84_27_fu_3604_p2 = (xor_ln84_26_fu_3598_p2.read() ^ or_ln84_66_fu_3530_p6.read());
}

void sha256d::thread_xor_ln84_28_fu_5737_p2() {
    xor_ln84_28_fu_5737_p2 = (zext_ln84_14_fu_5733_p1.read() ^ or_ln84_68_fu_5715_p3.read());
}

void sha256d::thread_xor_ln84_29_fu_5743_p2() {
    xor_ln84_29_fu_5743_p2 = (xor_ln84_28_fu_5737_p2.read() ^ or_ln84_7_fu_5693_p3.read());
}

void sha256d::thread_xor_ln84_2_fu_2482_p2() {
    xor_ln84_2_fu_2482_p2 = (zext_ln84_1_fu_2478_p1.read() ^ or_ln84_3_fu_2442_p6.read());
}

void sha256d::thread_xor_ln84_30_fu_3796_p2() {
    xor_ln84_30_fu_3796_p2 = (zext_ln84_15_fu_3792_p1.read() ^ or_ln84_70_fu_3756_p6.read());
}

void sha256d::thread_xor_ln84_31_fu_3802_p2() {
    xor_ln84_31_fu_3802_p2 = (xor_ln84_30_fu_3796_p2.read() ^ or_ln84_69_fu_3728_p6.read());
}

void sha256d::thread_xor_ln84_32_fu_5982_p2() {
    xor_ln84_32_fu_5982_p2 = (zext_ln84_16_fu_5978_p1.read() ^ or_ln84_71_fu_5960_p3.read());
}

void sha256d::thread_xor_ln84_33_fu_5988_p2() {
    xor_ln84_33_fu_5988_p2 = (xor_ln84_32_fu_5982_p2.read() ^ or_ln84_8_fu_5938_p3.read());
}

void sha256d::thread_xor_ln84_34_fu_3888_p2() {
    xor_ln84_34_fu_3888_p2 = (zext_ln84_17_fu_3884_p1.read() ^ or_ln84_73_fu_3848_p6.read());
}

void sha256d::thread_xor_ln84_35_fu_3894_p2() {
    xor_ln84_35_fu_3894_p2 = (xor_ln84_34_fu_3888_p2.read() ^ or_ln84_72_fu_3820_p6.read());
}

void sha256d::thread_xor_ln84_36_fu_6052_p2() {
    xor_ln84_36_fu_6052_p2 = (zext_ln84_18_fu_6048_p1.read() ^ or_ln84_74_fu_6030_p3.read());
}

void sha256d::thread_xor_ln84_37_fu_6058_p2() {
    xor_ln84_37_fu_6058_p2 = (xor_ln84_36_fu_6052_p2.read() ^ or_ln84_9_fu_6008_p3.read());
}

void sha256d::thread_xor_ln84_38_fu_4086_p2() {
    xor_ln84_38_fu_4086_p2 = (zext_ln84_19_fu_4082_p1.read() ^ or_ln84_76_fu_4046_p6.read());
}

void sha256d::thread_xor_ln84_39_fu_4092_p2() {
    xor_ln84_39_fu_4092_p2 = (xor_ln84_38_fu_4086_p2.read() ^ or_ln84_75_fu_4018_p6.read());
}

void sha256d::thread_xor_ln84_3_fu_2488_p2() {
    xor_ln84_3_fu_2488_p2 = (xor_ln84_2_fu_2482_p2.read() ^ or_ln84_2_fu_2414_p6.read());
}

void sha256d::thread_xor_ln84_40_fu_6292_p2() {
    xor_ln84_40_fu_6292_p2 = (zext_ln84_20_fu_6288_p1.read() ^ or_ln84_77_fu_6270_p3.read());
}

void sha256d::thread_xor_ln84_41_fu_6298_p2() {
    xor_ln84_41_fu_6298_p2 = (xor_ln84_40_fu_6292_p2.read() ^ or_ln84_10_fu_6248_p3.read());
}

void sha256d::thread_xor_ln84_42_fu_4178_p2() {
    xor_ln84_42_fu_4178_p2 = (zext_ln84_21_fu_4174_p1.read() ^ or_ln84_79_fu_4138_p6.read());
}

void sha256d::thread_xor_ln84_43_fu_4184_p2() {
    xor_ln84_43_fu_4184_p2 = (xor_ln84_42_fu_4178_p2.read() ^ or_ln84_78_fu_4110_p6.read());
}

void sha256d::thread_xor_ln84_44_fu_6362_p2() {
    xor_ln84_44_fu_6362_p2 = (zext_ln84_22_fu_6358_p1.read() ^ or_ln84_80_fu_6340_p3.read());
}

void sha256d::thread_xor_ln84_45_fu_6368_p2() {
    xor_ln84_45_fu_6368_p2 = (xor_ln84_44_fu_6362_p2.read() ^ or_ln84_11_fu_6318_p3.read());
}

void sha256d::thread_xor_ln84_46_fu_4381_p2() {
    xor_ln84_46_fu_4381_p2 = (zext_ln84_23_fu_4377_p1.read() ^ or_ln84_82_fu_4341_p6.read());
}

void sha256d::thread_xor_ln84_47_fu_4387_p2() {
    xor_ln84_47_fu_4387_p2 = (xor_ln84_46_fu_4381_p2.read() ^ or_ln84_81_fu_4313_p6.read());
}

void sha256d::thread_xor_ln84_48_fu_6592_p2() {
    xor_ln84_48_fu_6592_p2 = (zext_ln84_24_fu_6588_p1.read() ^ or_ln84_83_fu_6570_p3.read());
}

void sha256d::thread_xor_ln84_49_fu_6598_p2() {
    xor_ln84_49_fu_6598_p2 = (xor_ln84_48_fu_6592_p2.read() ^ or_ln84_12_fu_6548_p3.read());
}

void sha256d::thread_xor_ln84_4_fu_4763_p2() {
    xor_ln84_4_fu_4763_p2 = (zext_ln84_2_fu_4759_p1.read() ^ or_ln84_48_fu_4725_p6.read());
}

void sha256d::thread_xor_ln84_50_fu_4473_p2() {
    xor_ln84_50_fu_4473_p2 = (zext_ln84_25_fu_4469_p1.read() ^ or_ln84_85_fu_4433_p6.read());
}

void sha256d::thread_xor_ln84_51_fu_4479_p2() {
    xor_ln84_51_fu_4479_p2 = (xor_ln84_50_fu_4473_p2.read() ^ or_ln84_84_fu_4405_p6.read());
}

void sha256d::thread_xor_ln84_52_fu_6666_p2() {
    xor_ln84_52_fu_6666_p2 = (zext_ln84_26_fu_6662_p1.read() ^ or_ln84_86_fu_6644_p3.read());
}

void sha256d::thread_xor_ln84_53_fu_6672_p2() {
    xor_ln84_53_fu_6672_p2 = (xor_ln84_52_fu_6666_p2.read() ^ or_ln84_13_fu_6622_p3.read());
}

void sha256d::thread_xor_ln84_54_fu_4855_p2() {
    xor_ln84_54_fu_4855_p2 = (zext_ln84_27_fu_4851_p1.read() ^ or_ln84_88_fu_4815_p6.read());
}

void sha256d::thread_xor_ln84_55_fu_4861_p2() {
    xor_ln84_55_fu_4861_p2 = (xor_ln84_54_fu_4855_p2.read() ^ or_ln84_87_fu_4787_p6.read());
}

void sha256d::thread_xor_ln84_56_fu_6900_p2() {
    xor_ln84_56_fu_6900_p2 = (zext_ln84_28_fu_6896_p1.read() ^ or_ln84_89_fu_6878_p3.read());
}

void sha256d::thread_xor_ln84_57_fu_6906_p2() {
    xor_ln84_57_fu_6906_p2 = (xor_ln84_56_fu_6900_p2.read() ^ or_ln84_14_fu_6856_p3.read());
}

void sha256d::thread_xor_ln84_58_fu_4947_p2() {
    xor_ln84_58_fu_4947_p2 = (zext_ln84_29_fu_4943_p1.read() ^ or_ln84_91_fu_4907_p6.read());
}

void sha256d::thread_xor_ln84_59_fu_4953_p2() {
    xor_ln84_59_fu_4953_p2 = (xor_ln84_58_fu_4947_p2.read() ^ or_ln84_90_fu_4879_p6.read());
}

void sha256d::thread_xor_ln84_5_fu_4769_p2() {
    xor_ln84_5_fu_4769_p2 = (xor_ln84_4_fu_4763_p2.read() ^ or_ln84_s_fu_4697_p6.read());
}

void sha256d::thread_xor_ln84_60_fu_6985_p2() {
    xor_ln84_60_fu_6985_p2 = (zext_ln84_30_fu_6981_p1.read() ^ or_ln84_92_fu_6963_p3.read());
}

void sha256d::thread_xor_ln84_61_fu_6991_p2() {
    xor_ln84_61_fu_6991_p2 = (xor_ln84_60_fu_6985_p2.read() ^ or_ln84_15_fu_6941_p3.read());
}

void sha256d::thread_xor_ln84_62_fu_5187_p2() {
    xor_ln84_62_fu_5187_p2 = (zext_ln84_31_fu_5183_p1.read() ^ or_ln84_94_fu_5165_p3.read());
}

void sha256d::thread_xor_ln84_63_fu_5193_p2() {
    xor_ln84_63_fu_5193_p2 = (xor_ln84_62_fu_5187_p2.read() ^ or_ln84_93_fu_5143_p3.read());
}

void sha256d::thread_xor_ln84_64_fu_7070_p2() {
    xor_ln84_64_fu_7070_p2 = (zext_ln84_32_fu_7066_p1.read() ^ or_ln84_95_fu_7048_p3.read());
}

void sha256d::thread_xor_ln84_65_fu_7076_p2() {
    xor_ln84_65_fu_7076_p2 = (xor_ln84_64_fu_7070_p2.read() ^ or_ln84_16_fu_7026_p3.read());
}

void sha256d::thread_xor_ln84_66_fu_5257_p2() {
    xor_ln84_66_fu_5257_p2 = (zext_ln84_33_fu_5253_p1.read() ^ or_ln84_97_fu_5235_p3.read());
}

void sha256d::thread_xor_ln84_67_fu_5263_p2() {
    xor_ln84_67_fu_5263_p2 = (xor_ln84_66_fu_5257_p2.read() ^ or_ln84_96_fu_5213_p3.read());
}

void sha256d::thread_xor_ln84_68_fu_7155_p2() {
    xor_ln84_68_fu_7155_p2 = (zext_ln84_34_fu_7151_p1.read() ^ or_ln84_98_fu_7133_p3.read());
}

void sha256d::thread_xor_ln84_69_fu_7161_p2() {
    xor_ln84_69_fu_7161_p2 = (xor_ln84_68_fu_7155_p2.read() ^ or_ln84_17_fu_7111_p3.read());
}

void sha256d::thread_xor_ln84_6_fu_2926_p2() {
    xor_ln84_6_fu_2926_p2 = (zext_ln84_3_fu_2922_p1.read() ^ or_ln84_50_fu_2886_p6.read());
}

void sha256d::thread_xor_ln84_70_fu_5497_p2() {
    xor_ln84_70_fu_5497_p2 = (zext_ln84_35_fu_5493_p1.read() ^ or_ln84_100_fu_5475_p3.read());
}

void sha256d::thread_xor_ln84_71_fu_5503_p2() {
    xor_ln84_71_fu_5503_p2 = (xor_ln84_70_fu_5497_p2.read() ^ or_ln84_99_fu_5453_p3.read());
}

void sha256d::thread_xor_ln84_72_fu_7240_p2() {
    xor_ln84_72_fu_7240_p2 = (zext_ln84_36_fu_7236_p1.read() ^ or_ln84_101_fu_7218_p3.read());
}

void sha256d::thread_xor_ln84_73_fu_7246_p2() {
    xor_ln84_73_fu_7246_p2 = (xor_ln84_72_fu_7240_p2.read() ^ or_ln84_18_fu_7196_p3.read());
}

void sha256d::thread_xor_ln84_74_fu_5567_p2() {
    xor_ln84_74_fu_5567_p2 = (zext_ln84_37_fu_5563_p1.read() ^ or_ln84_103_fu_5545_p3.read());
}

void sha256d::thread_xor_ln84_75_fu_5573_p2() {
    xor_ln84_75_fu_5573_p2 = (xor_ln84_74_fu_5567_p2.read() ^ or_ln84_102_fu_5523_p3.read());
}

void sha256d::thread_xor_ln84_76_fu_7325_p2() {
    xor_ln84_76_fu_7325_p2 = (zext_ln84_38_fu_7321_p1.read() ^ or_ln84_104_fu_7303_p3.read());
}

void sha256d::thread_xor_ln84_77_fu_7331_p2() {
    xor_ln84_77_fu_7331_p2 = (xor_ln84_76_fu_7325_p2.read() ^ or_ln84_19_fu_7281_p3.read());
}

void sha256d::thread_xor_ln84_78_fu_5812_p2() {
    xor_ln84_78_fu_5812_p2 = (zext_ln84_39_fu_5808_p1.read() ^ or_ln84_106_fu_5790_p3.read());
}

void sha256d::thread_xor_ln84_79_fu_5818_p2() {
    xor_ln84_79_fu_5818_p2 = (xor_ln84_78_fu_5812_p2.read() ^ or_ln84_105_fu_5768_p3.read());
}

void sha256d::thread_xor_ln84_7_fu_2932_p2() {
    xor_ln84_7_fu_2932_p2 = (xor_ln84_6_fu_2926_p2.read() ^ or_ln84_49_fu_2858_p6.read());
}

void sha256d::thread_xor_ln84_80_fu_7411_p2() {
    xor_ln84_80_fu_7411_p2 = (zext_ln84_40_fu_7407_p1.read() ^ or_ln84_107_fu_7389_p3.read());
}

void sha256d::thread_xor_ln84_81_fu_7417_p2() {
    xor_ln84_81_fu_7417_p2 = (xor_ln84_80_fu_7411_p2.read() ^ or_ln84_20_fu_7367_p3.read());
}

void sha256d::thread_xor_ln84_82_fu_5882_p2() {
    xor_ln84_82_fu_5882_p2 = (zext_ln84_41_fu_5878_p1.read() ^ or_ln84_109_fu_5860_p3.read());
}

void sha256d::thread_xor_ln84_83_fu_5888_p2() {
    xor_ln84_83_fu_5888_p2 = (xor_ln84_82_fu_5882_p2.read() ^ or_ln84_108_fu_5838_p3.read());
}

void sha256d::thread_xor_ln84_84_fu_7497_p2() {
    xor_ln84_84_fu_7497_p2 = (zext_ln84_42_fu_7493_p1.read() ^ or_ln84_110_fu_7475_p3.read());
}

void sha256d::thread_xor_ln84_85_fu_7503_p2() {
    xor_ln84_85_fu_7503_p2 = (xor_ln84_84_fu_7497_p2.read() ^ or_ln84_21_fu_7453_p3.read());
}

void sha256d::thread_xor_ln84_86_fu_6122_p2() {
    xor_ln84_86_fu_6122_p2 = (zext_ln84_43_fu_6118_p1.read() ^ or_ln84_112_fu_6100_p3.read());
}

void sha256d::thread_xor_ln84_87_fu_6128_p2() {
    xor_ln84_87_fu_6128_p2 = (xor_ln84_86_fu_6122_p2.read() ^ or_ln84_111_fu_6078_p3.read());
}

void sha256d::thread_xor_ln84_88_fu_7583_p2() {
    xor_ln84_88_fu_7583_p2 = (zext_ln84_44_fu_7579_p1.read() ^ or_ln84_113_fu_7561_p3.read());
}

void sha256d::thread_xor_ln84_89_fu_7589_p2() {
    xor_ln84_89_fu_7589_p2 = (xor_ln84_88_fu_7583_p2.read() ^ or_ln84_22_fu_7539_p3.read());
}

void sha256d::thread_xor_ln84_8_fu_5047_p2() {
    xor_ln84_8_fu_5047_p2 = (zext_ln84_4_fu_5043_p1.read() ^ or_ln84_52_fu_5025_p3.read());
}

void sha256d::thread_xor_ln84_90_fu_6192_p2() {
    xor_ln84_90_fu_6192_p2 = (zext_ln84_45_fu_6188_p1.read() ^ or_ln84_115_fu_6170_p3.read());
}

void sha256d::thread_xor_ln84_91_fu_6198_p2() {
    xor_ln84_91_fu_6198_p2 = (xor_ln84_90_fu_6192_p2.read() ^ or_ln84_114_fu_6148_p3.read());
}

void sha256d::thread_xor_ln84_92_fu_7669_p2() {
    xor_ln84_92_fu_7669_p2 = (zext_ln84_46_fu_7665_p1.read() ^ or_ln84_116_fu_7647_p3.read());
}

void sha256d::thread_xor_ln84_93_fu_7675_p2() {
    xor_ln84_93_fu_7675_p2 = (xor_ln84_92_fu_7669_p2.read() ^ or_ln84_23_fu_7625_p3.read());
}

void sha256d::thread_xor_ln84_94_fu_6432_p2() {
    xor_ln84_94_fu_6432_p2 = (zext_ln84_47_fu_6428_p1.read() ^ or_ln84_118_fu_6410_p3.read());
}

void sha256d::thread_xor_ln84_95_fu_6438_p2() {
    xor_ln84_95_fu_6438_p2 = (xor_ln84_94_fu_6432_p2.read() ^ or_ln84_117_fu_6388_p3.read());
}

void sha256d::thread_xor_ln84_96_fu_7755_p2() {
    xor_ln84_96_fu_7755_p2 = (zext_ln84_48_fu_7751_p1.read() ^ or_ln84_119_fu_7733_p3.read());
}

void sha256d::thread_xor_ln84_97_fu_7761_p2() {
    xor_ln84_97_fu_7761_p2 = (xor_ln84_96_fu_7755_p2.read() ^ or_ln84_24_fu_7711_p3.read());
}

void sha256d::thread_xor_ln84_98_fu_6502_p2() {
    xor_ln84_98_fu_6502_p2 = (zext_ln84_49_fu_6498_p1.read() ^ or_ln84_121_fu_6480_p3.read());
}

void sha256d::thread_xor_ln84_99_fu_6508_p2() {
    xor_ln84_99_fu_6508_p2 = (xor_ln84_98_fu_6502_p2.read() ^ or_ln84_120_fu_6458_p3.read());
}

void sha256d::thread_xor_ln84_9_fu_5053_p2() {
    xor_ln84_9_fu_5053_p2 = (xor_ln84_8_fu_5047_p2.read() ^ or_ln84_51_fu_5003_p3.read());
}

void sha256d::thread_xor_ln84_fu_4671_p2() {
    xor_ln84_fu_4671_p2 = (zext_ln84_fu_4667_p1.read() ^ or_ln84_1_fu_4633_p6.read());
}

void sha256d::thread_xor_ln96_1_fu_11305_p2() {
    xor_ln96_1_fu_11305_p2 = (xor_ln96_fu_11299_p2.read() ^ or_ln96_2_fu_11291_p3.read());
}

void sha256d::thread_xor_ln96_2_fu_11317_p2() {
    xor_ln96_2_fu_11317_p2 = (f_1_reg_1537.read() ^ ap_const_lv32_FFFFFFFF);
}

void sha256d::thread_xor_ln96_3_fu_11329_p2() {
    xor_ln96_3_fu_11329_p2 = (and_ln96_1_fu_11323_p2.read() ^ and_ln96_fu_11311_p2.read());
}

void sha256d::thread_xor_ln96_fu_11299_p2() {
    xor_ln96_fu_11299_p2 = (or_ln4_fu_11247_p3.read() ^ or_ln96_1_fu_11269_p3.read());
}

void sha256d::thread_xor_ln97_1_fu_11431_p2() {
    xor_ln97_1_fu_11431_p2 = (xor_ln97_fu_11425_p2.read() ^ or_ln97_2_fu_11417_p3.read());
}

void sha256d::thread_xor_ln97_2_fu_11437_p2() {
    xor_ln97_2_fu_11437_p2 = (d_1_reg_1513.read() ^ c_1_reg_1501.read());
}

void sha256d::thread_xor_ln97_3_fu_11455_p2() {
    xor_ln97_3_fu_11455_p2 = (and_ln97_fu_11443_p2.read() ^ and_ln97_1_fu_11449_p2.read());
}

void sha256d::thread_xor_ln97_fu_11425_p2() {
    xor_ln97_fu_11425_p2 = (or_ln5_fu_11373_p3.read() ^ or_ln97_1_fu_11395_p3.read());
}

void sha256d::thread_zext_ln150_10_fu_12194_p1() {
    zext_ln150_10_fu_12194_p1 = esl_zext<32,22>(lshr_ln150_61_fu_12184_p4.read());
}

void sha256d::thread_zext_ln150_11_fu_12264_p1() {
    zext_ln150_11_fu_12264_p1 = esl_zext<32,29>(lshr_ln150_62_fu_12254_p4.read());
}

void sha256d::thread_zext_ln150_12_fu_12352_p1() {
    zext_ln150_12_fu_12352_p1 = esl_zext<32,22>(lshr_ln150_64_fu_12342_p4.read());
}

void sha256d::thread_zext_ln150_13_fu_12440_p1() {
    zext_ln150_13_fu_12440_p1 = esl_zext<32,22>(lshr_ln150_66_fu_12430_p4.read());
}

void sha256d::thread_zext_ln150_14_fu_12515_p1() {
    zext_ln150_14_fu_12515_p1 = esl_zext<32,22>(lshr_ln150_68_fu_12505_p4.read());
}

void sha256d::thread_zext_ln150_15_fu_13518_p1() {
    zext_ln150_15_fu_13518_p1 = esl_zext<32,22>(lshr_ln150_70_fu_13508_p4.read());
}

void sha256d::thread_zext_ln150_16_fu_12591_p1() {
    zext_ln150_16_fu_12591_p1 = esl_zext<32,22>(lshr_ln150_72_fu_12581_p4.read());
}

void sha256d::thread_zext_ln150_17_fu_13593_p1() {
    zext_ln150_17_fu_13593_p1 = esl_zext<32,22>(lshr_ln150_74_fu_13583_p4.read());
}

void sha256d::thread_zext_ln150_18_fu_12667_p1() {
    zext_ln150_18_fu_12667_p1 = esl_zext<32,22>(lshr_ln150_76_fu_12657_p4.read());
}

void sha256d::thread_zext_ln150_19_fu_13668_p1() {
    zext_ln150_19_fu_13668_p1 = esl_zext<32,22>(lshr_ln150_78_fu_13658_p4.read());
}

void sha256d::thread_zext_ln150_1_fu_2548_p1() {
    zext_ln150_1_fu_2548_p1 = esl_zext<32,29>(lshr_ln150_5_fu_2538_p4.read());
}

void sha256d::thread_zext_ln150_20_fu_12743_p1() {
    zext_ln150_20_fu_12743_p1 = esl_zext<32,22>(lshr_ln150_80_fu_12733_p4.read());
}

void sha256d::thread_zext_ln150_21_fu_12813_p1() {
    zext_ln150_21_fu_12813_p1 = esl_zext<32,29>(lshr_ln150_83_fu_12803_p4.read());
}

void sha256d::thread_zext_ln150_22_fu_13765_p1() {
    zext_ln150_22_fu_13765_p1 = esl_zext<32,22>(lshr_ln150_85_fu_13755_p4.read());
}

void sha256d::thread_zext_ln150_23_fu_2700_p1() {
    zext_ln150_23_fu_2700_p1 = esl_zext<32,29>(lshr_ln150_88_fu_2690_p4.read());
}

void sha256d::thread_zext_ln150_24_fu_13850_p1() {
    zext_ln150_24_fu_13850_p1 = esl_zext<32,22>(lshr_ln150_90_fu_13840_p4.read());
}

void sha256d::thread_zext_ln150_25_fu_12883_p1() {
    zext_ln150_25_fu_12883_p1 = esl_zext<32,29>(lshr_ln150_93_fu_12873_p4.read());
}

void sha256d::thread_zext_ln150_26_fu_13936_p1() {
    zext_ln150_26_fu_13936_p1 = esl_zext<32,22>(lshr_ln150_95_fu_13926_p4.read());
}

void sha256d::thread_zext_ln150_27_fu_12953_p1() {
    zext_ln150_27_fu_12953_p1 = esl_zext<32,29>(lshr_ln150_98_fu_12943_p4.read());
}

void sha256d::thread_zext_ln150_28_fu_14021_p1() {
    zext_ln150_28_fu_14021_p1 = esl_zext<32,22>(lshr_ln150_100_fu_14011_p4.read());
}

void sha256d::thread_zext_ln150_29_fu_13023_p1() {
    zext_ln150_29_fu_13023_p1 = esl_zext<32,29>(lshr_ln150_103_fu_13013_p4.read());
}

void sha256d::thread_zext_ln150_2_fu_11657_p1() {
    zext_ln150_2_fu_11657_p1 = esl_zext<32,22>(lshr_ln150_3_fu_11647_p4.read());
}

void sha256d::thread_zext_ln150_30_fu_14107_p1() {
    zext_ln150_30_fu_14107_p1 = esl_zext<32,22>(lshr_ln150_105_fu_14097_p4.read());
}

void sha256d::thread_zext_ln150_31_fu_13093_p1() {
    zext_ln150_31_fu_13093_p1 = esl_zext<32,29>(lshr_ln150_108_fu_13083_p4.read());
}

void sha256d::thread_zext_ln150_32_fu_14192_p1() {
    zext_ln150_32_fu_14192_p1 = esl_zext<32,22>(lshr_ln150_110_fu_14182_p4.read());
}

void sha256d::thread_zext_ln150_33_fu_13163_p1() {
    zext_ln150_33_fu_13163_p1 = esl_zext<32,29>(lshr_ln150_113_fu_13153_p4.read());
}

void sha256d::thread_zext_ln150_34_fu_14278_p1() {
    zext_ln150_34_fu_14278_p1 = esl_zext<32,22>(lshr_ln150_115_fu_14268_p4.read());
}

void sha256d::thread_zext_ln150_35_fu_13233_p1() {
    zext_ln150_35_fu_13233_p1 = esl_zext<32,29>(lshr_ln150_118_fu_13223_p4.read());
}

void sha256d::thread_zext_ln150_36_fu_14353_p1() {
    zext_ln150_36_fu_14353_p1 = esl_zext<32,22>(lshr_ln150_120_fu_14343_p4.read());
}

void sha256d::thread_zext_ln150_37_fu_14423_p1() {
    zext_ln150_37_fu_14423_p1 = esl_zext<32,29>(lshr_ln150_123_fu_14413_p4.read());
}

void sha256d::thread_zext_ln150_38_fu_15216_p1() {
    zext_ln150_38_fu_15216_p1 = esl_zext<32,22>(lshr_ln150_125_fu_15206_p4.read());
}

void sha256d::thread_zext_ln150_39_fu_13303_p1() {
    zext_ln150_39_fu_13303_p1 = esl_zext<32,29>(lshr_ln150_128_fu_13293_p4.read());
}

void sha256d::thread_zext_ln150_3_fu_11727_p1() {
    zext_ln150_3_fu_11727_p1 = esl_zext<32,29>(lshr_ln150_4_fu_11717_p4.read());
}

void sha256d::thread_zext_ln150_40_fu_15301_p1() {
    zext_ln150_40_fu_15301_p1 = esl_zext<32,22>(lshr_ln150_130_fu_15291_p4.read());
}

void sha256d::thread_zext_ln150_41_fu_14498_p1() {
    zext_ln150_41_fu_14498_p1 = esl_zext<32,29>(lshr_ln150_133_fu_14488_p4.read());
}

void sha256d::thread_zext_ln150_42_fu_15386_p1() {
    zext_ln150_42_fu_15386_p1 = esl_zext<32,22>(lshr_ln150_135_fu_15376_p4.read());
}

void sha256d::thread_zext_ln150_43_fu_13373_p1() {
    zext_ln150_43_fu_13373_p1 = esl_zext<32,29>(lshr_ln150_138_fu_13363_p4.read());
}

void sha256d::thread_zext_ln150_44_fu_15471_p1() {
    zext_ln150_44_fu_15471_p1 = esl_zext<32,22>(lshr_ln150_140_fu_15461_p4.read());
}

void sha256d::thread_zext_ln150_45_fu_14568_p1() {
    zext_ln150_45_fu_14568_p1 = esl_zext<32,29>(lshr_ln150_143_fu_14558_p4.read());
}

void sha256d::thread_zext_ln150_46_fu_15556_p1() {
    zext_ln150_46_fu_15556_p1 = esl_zext<32,22>(lshr_ln150_145_fu_15546_p4.read());
}

void sha256d::thread_zext_ln150_47_fu_13443_p1() {
    zext_ln150_47_fu_13443_p1 = esl_zext<32,29>(lshr_ln150_148_fu_13433_p4.read());
}

void sha256d::thread_zext_ln150_48_fu_15641_p1() {
    zext_ln150_48_fu_15641_p1 = esl_zext<32,22>(lshr_ln150_150_fu_15631_p4.read());
}

void sha256d::thread_zext_ln150_49_fu_14638_p1() {
    zext_ln150_49_fu_14638_p1 = esl_zext<32,29>(lshr_ln150_153_fu_14628_p4.read());
}

void sha256d::thread_zext_ln150_4_fu_2630_p1() {
    zext_ln150_4_fu_2630_p1 = esl_zext<32,22>(lshr_ln150_50_fu_2620_p4.read());
}

void sha256d::thread_zext_ln150_50_fu_15727_p1() {
    zext_ln150_50_fu_15727_p1 = esl_zext<32,22>(lshr_ln150_155_fu_15717_p4.read());
}

void sha256d::thread_zext_ln150_51_fu_14708_p1() {
    zext_ln150_51_fu_14708_p1 = esl_zext<32,29>(lshr_ln150_158_fu_14698_p4.read());
}

void sha256d::thread_zext_ln150_52_fu_15813_p1() {
    zext_ln150_52_fu_15813_p1 = esl_zext<32,22>(lshr_ln150_160_fu_15803_p4.read());
}

void sha256d::thread_zext_ln150_53_fu_14778_p1() {
    zext_ln150_53_fu_14778_p1 = esl_zext<32,29>(lshr_ln150_163_fu_14768_p4.read());
}

void sha256d::thread_zext_ln150_54_fu_15899_p1() {
    zext_ln150_54_fu_15899_p1 = esl_zext<32,22>(lshr_ln150_165_fu_15889_p4.read());
}

void sha256d::thread_zext_ln150_55_fu_14848_p1() {
    zext_ln150_55_fu_14848_p1 = esl_zext<32,29>(lshr_ln150_168_fu_14838_p4.read());
}

void sha256d::thread_zext_ln150_56_fu_15985_p1() {
    zext_ln150_56_fu_15985_p1 = esl_zext<32,22>(lshr_ln150_170_fu_15975_p4.read());
}

void sha256d::thread_zext_ln150_57_fu_14918_p1() {
    zext_ln150_57_fu_14918_p1 = esl_zext<32,29>(lshr_ln150_173_fu_14908_p4.read());
}

void sha256d::thread_zext_ln150_58_fu_16071_p1() {
    zext_ln150_58_fu_16071_p1 = esl_zext<32,22>(lshr_ln150_175_fu_16061_p4.read());
}

void sha256d::thread_zext_ln150_59_fu_14988_p1() {
    zext_ln150_59_fu_14988_p1 = esl_zext<32,29>(lshr_ln150_178_fu_14978_p4.read());
}

void sha256d::thread_zext_ln150_5_fu_11809_p1() {
    zext_ln150_5_fu_11809_p1 = esl_zext<32,29>(lshr_ln150_51_fu_11799_p4.read());
}

void sha256d::thread_zext_ln150_60_fu_16146_p1() {
    zext_ln150_60_fu_16146_p1 = esl_zext<32,22>(lshr_ln150_180_fu_16136_p4.read());
}

void sha256d::thread_zext_ln150_61_fu_15058_p1() {
    zext_ln150_61_fu_15058_p1 = esl_zext<32,29>(lshr_ln150_183_fu_15048_p4.read());
}

void sha256d::thread_zext_ln150_62_fu_17021_p1() {
    zext_ln150_62_fu_17021_p1 = esl_zext<32,22>(lshr_ln150_185_fu_17011_p4.read());
}

void sha256d::thread_zext_ln150_63_fu_15128_p1() {
    zext_ln150_63_fu_15128_p1 = esl_zext<32,29>(lshr_ln150_188_fu_15118_p4.read());
}

void sha256d::thread_zext_ln150_64_fu_17106_p1() {
    zext_ln150_64_fu_17106_p1 = esl_zext<32,22>(lshr_ln150_190_fu_17096_p4.read());
}

void sha256d::thread_zext_ln150_65_fu_16221_p1() {
    zext_ln150_65_fu_16221_p1 = esl_zext<32,29>(lshr_ln150_193_fu_16211_p4.read());
}

void sha256d::thread_zext_ln150_66_fu_17191_p1() {
    zext_ln150_66_fu_17191_p1 = esl_zext<32,22>(lshr_ln150_195_fu_17181_p4.read());
}

void sha256d::thread_zext_ln150_67_fu_16291_p1() {
    zext_ln150_67_fu_16291_p1 = esl_zext<32,29>(lshr_ln150_198_fu_16281_p4.read());
}

void sha256d::thread_zext_ln150_68_fu_17276_p1() {
    zext_ln150_68_fu_17276_p1 = esl_zext<32,22>(lshr_ln150_200_fu_17266_p4.read());
}

void sha256d::thread_zext_ln150_69_fu_16361_p1() {
    zext_ln150_69_fu_16361_p1 = esl_zext<32,29>(lshr_ln150_203_fu_16351_p4.read());
}

void sha256d::thread_zext_ln150_6_fu_11890_p1() {
    zext_ln150_6_fu_11890_p1 = esl_zext<32,22>(lshr_ln150_54_fu_11880_p4.read());
}

void sha256d::thread_zext_ln150_70_fu_17361_p1() {
    zext_ln150_70_fu_17361_p1 = esl_zext<32,22>(lshr_ln150_205_fu_17351_p4.read());
}

void sha256d::thread_zext_ln150_71_fu_16431_p1() {
    zext_ln150_71_fu_16431_p1 = esl_zext<32,29>(lshr_ln150_208_fu_16421_p4.read());
}

void sha256d::thread_zext_ln150_72_fu_17446_p1() {
    zext_ln150_72_fu_17446_p1 = esl_zext<32,22>(lshr_ln150_210_fu_17436_p4.read());
}

void sha256d::thread_zext_ln150_73_fu_16501_p1() {
    zext_ln150_73_fu_16501_p1 = esl_zext<32,29>(lshr_ln150_213_fu_16491_p4.read());
}

void sha256d::thread_zext_ln150_74_fu_17532_p1() {
    zext_ln150_74_fu_17532_p1 = esl_zext<32,22>(lshr_ln150_215_fu_17522_p4.read());
}

void sha256d::thread_zext_ln150_75_fu_16571_p1() {
    zext_ln150_75_fu_16571_p1 = esl_zext<32,29>(lshr_ln150_218_fu_16561_p4.read());
}

void sha256d::thread_zext_ln150_76_fu_17618_p1() {
    zext_ln150_76_fu_17618_p1 = esl_zext<32,22>(lshr_ln150_220_fu_17608_p4.read());
}

void sha256d::thread_zext_ln150_77_fu_16641_p1() {
    zext_ln150_77_fu_16641_p1 = esl_zext<32,29>(lshr_ln150_223_fu_16631_p4.read());
}

void sha256d::thread_zext_ln150_78_fu_17704_p1() {
    zext_ln150_78_fu_17704_p1 = esl_zext<32,22>(lshr_ln150_225_fu_17694_p4.read());
}

void sha256d::thread_zext_ln150_79_fu_16711_p1() {
    zext_ln150_79_fu_16711_p1 = esl_zext<32,29>(lshr_ln150_228_fu_16701_p4.read());
}

void sha256d::thread_zext_ln150_7_fu_11960_p1() {
    zext_ln150_7_fu_11960_p1 = esl_zext<32,29>(lshr_ln150_55_fu_11950_p4.read());
}

void sha256d::thread_zext_ln150_80_fu_17790_p1() {
    zext_ln150_80_fu_17790_p1 = esl_zext<32,22>(lshr_ln150_230_fu_17780_p4.read());
}

void sha256d::thread_zext_ln150_81_fu_16781_p1() {
    zext_ln150_81_fu_16781_p1 = esl_zext<32,29>(lshr_ln150_233_fu_16771_p4.read());
}

void sha256d::thread_zext_ln150_82_fu_17876_p1() {
    zext_ln150_82_fu_17876_p1 = esl_zext<32,22>(lshr_ln150_235_fu_17866_p4.read());
}

void sha256d::thread_zext_ln150_83_fu_16851_p1() {
    zext_ln150_83_fu_16851_p1 = esl_zext<32,29>(lshr_ln150_238_fu_16841_p4.read());
}

void sha256d::thread_zext_ln150_84_fu_17957_p1() {
    zext_ln150_84_fu_17957_p1 = esl_zext<32,22>(lshr_ln150_240_fu_17947_p4.read());
}

void sha256d::thread_zext_ln150_85_fu_16927_p1() {
    zext_ln150_85_fu_16927_p1 = esl_zext<32,29>(lshr_ln150_243_fu_16917_p4.read());
}

void sha256d::thread_zext_ln150_8_fu_12042_p1() {
    zext_ln150_8_fu_12042_p1 = esl_zext<32,22>(lshr_ln150_58_fu_12032_p4.read());
}

void sha256d::thread_zext_ln150_9_fu_12112_p1() {
    zext_ln150_9_fu_12112_p1 = esl_zext<32,29>(lshr_ln150_59_fu_12102_p4.read());
}

void sha256d::thread_zext_ln150_fu_11581_p1() {
    zext_ln150_fu_11581_p1 = esl_zext<32,29>(lshr_ln150_2_fu_11571_p4.read());
}

void sha256d::thread_zext_ln162_fu_17996_p1() {
    zext_ln162_fu_17996_p1 = esl_zext<64,7>(i18_2_reg_1584.read());
}

void sha256d::thread_zext_ln392_1_fu_18442_p1() {
    zext_ln392_1_fu_18442_p1 = esl_zext<9,8>(or_ln186_fu_18408_p2.read());
}

void sha256d::thread_zext_ln392_2_fu_18482_p1() {
    zext_ln392_2_fu_18482_p1 = esl_zext<256,9>(select_ln392_2_fu_18468_p3.read());
}

void sha256d::thread_zext_ln392_3_fu_18486_p1() {
    zext_ln392_3_fu_18486_p1 = esl_zext<256,9>(select_ln392_1_fu_18460_p3.read());
}

void sha256d::thread_zext_ln392_4_fu_18490_p1() {
    zext_ln392_4_fu_18490_p1 = esl_zext<256,9>(xor_ln392_1_fu_18476_p2.read());
}

void sha256d::thread_zext_ln392_fu_18438_p1() {
    zext_ln392_fu_18438_p1 = esl_zext<9,8>(Lo_assign_1_fu_18400_p3.read());
}

void sha256d::thread_zext_ln681_1_fu_1822_p1() {
    zext_ln681_1_fu_1822_p1 = esl_zext<640,10>(sub_ln681_3_fu_1812_p2.read());
}

void sha256d::thread_zext_ln681_fu_1818_p1() {
    zext_ln681_fu_1818_p1 = esl_zext<640,10>(select_ln681_2_fu_1804_p3.read());
}

void sha256d::thread_zext_ln84_10_fu_5418_p1() {
    zext_ln84_10_fu_5418_p1 = esl_zext<32,22>(lshr_ln84_60_fu_5408_p4.read());
}

void sha256d::thread_zext_ln84_11_fu_3502_p1() {
    zext_ln84_11_fu_3502_p1 = esl_zext<32,29>(lshr_ln84_61_fu_3490_p5.read());
}

void sha256d::thread_zext_ln84_12_fu_5663_p1() {
    zext_ln84_12_fu_5663_p1 = esl_zext<32,22>(lshr_ln84_63_fu_5653_p4.read());
}

void sha256d::thread_zext_ln84_13_fu_3594_p1() {
    zext_ln84_13_fu_3594_p1 = esl_zext<32,29>(lshr_ln84_64_fu_3582_p5.read());
}

void sha256d::thread_zext_ln84_14_fu_5733_p1() {
    zext_ln84_14_fu_5733_p1 = esl_zext<32,22>(lshr_ln84_66_fu_5723_p4.read());
}

void sha256d::thread_zext_ln84_15_fu_3792_p1() {
    zext_ln84_15_fu_3792_p1 = esl_zext<32,29>(lshr_ln84_67_fu_3780_p5.read());
}

void sha256d::thread_zext_ln84_16_fu_5978_p1() {
    zext_ln84_16_fu_5978_p1 = esl_zext<32,22>(lshr_ln84_69_fu_5968_p4.read());
}

void sha256d::thread_zext_ln84_17_fu_3884_p1() {
    zext_ln84_17_fu_3884_p1 = esl_zext<32,29>(lshr_ln84_70_fu_3872_p5.read());
}

void sha256d::thread_zext_ln84_18_fu_6048_p1() {
    zext_ln84_18_fu_6048_p1 = esl_zext<32,22>(lshr_ln84_72_fu_6038_p4.read());
}

void sha256d::thread_zext_ln84_19_fu_4082_p1() {
    zext_ln84_19_fu_4082_p1 = esl_zext<32,29>(lshr_ln84_73_fu_4070_p5.read());
}

void sha256d::thread_zext_ln84_1_fu_2478_p1() {
    zext_ln84_1_fu_2478_p1 = esl_zext<32,29>(lshr_ln84_5_fu_2466_p5.read());
}

void sha256d::thread_zext_ln84_20_fu_6288_p1() {
    zext_ln84_20_fu_6288_p1 = esl_zext<32,22>(lshr_ln84_75_fu_6278_p4.read());
}

void sha256d::thread_zext_ln84_21_fu_4174_p1() {
    zext_ln84_21_fu_4174_p1 = esl_zext<32,29>(lshr_ln84_76_fu_4162_p5.read());
}

void sha256d::thread_zext_ln84_22_fu_6358_p1() {
    zext_ln84_22_fu_6358_p1 = esl_zext<32,22>(lshr_ln84_78_fu_6348_p4.read());
}

void sha256d::thread_zext_ln84_23_fu_4377_p1() {
    zext_ln84_23_fu_4377_p1 = esl_zext<32,29>(lshr_ln84_79_fu_4365_p5.read());
}

void sha256d::thread_zext_ln84_24_fu_6588_p1() {
    zext_ln84_24_fu_6588_p1 = esl_zext<32,22>(lshr_ln84_81_fu_6578_p4.read());
}

void sha256d::thread_zext_ln84_25_fu_4469_p1() {
    zext_ln84_25_fu_4469_p1 = esl_zext<32,29>(lshr_ln84_82_fu_4457_p5.read());
}

void sha256d::thread_zext_ln84_26_fu_6662_p1() {
    zext_ln84_26_fu_6662_p1 = esl_zext<32,22>(lshr_ln84_84_fu_6652_p4.read());
}

void sha256d::thread_zext_ln84_27_fu_4851_p1() {
    zext_ln84_27_fu_4851_p1 = esl_zext<32,29>(lshr_ln84_85_fu_4839_p5.read());
}

void sha256d::thread_zext_ln84_28_fu_6896_p1() {
    zext_ln84_28_fu_6896_p1 = esl_zext<32,22>(lshr_ln84_87_fu_6886_p4.read());
}

void sha256d::thread_zext_ln84_29_fu_4943_p1() {
    zext_ln84_29_fu_4943_p1 = esl_zext<32,29>(lshr_ln84_88_fu_4931_p5.read());
}

void sha256d::thread_zext_ln84_2_fu_4759_p1() {
    zext_ln84_2_fu_4759_p1 = esl_zext<32,22>(lshr_ln84_s_fu_4749_p4.read());
}

void sha256d::thread_zext_ln84_30_fu_6981_p1() {
    zext_ln84_30_fu_6981_p1 = esl_zext<32,22>(lshr_ln84_90_fu_6971_p4.read());
}

void sha256d::thread_zext_ln84_31_fu_5183_p1() {
    zext_ln84_31_fu_5183_p1 = esl_zext<32,29>(lshr_ln84_93_fu_5173_p4.read());
}

void sha256d::thread_zext_ln84_32_fu_7066_p1() {
    zext_ln84_32_fu_7066_p1 = esl_zext<32,22>(lshr_ln84_95_fu_7056_p4.read());
}

void sha256d::thread_zext_ln84_33_fu_5253_p1() {
    zext_ln84_33_fu_5253_p1 = esl_zext<32,29>(lshr_ln84_98_fu_5243_p4.read());
}

void sha256d::thread_zext_ln84_34_fu_7151_p1() {
    zext_ln84_34_fu_7151_p1 = esl_zext<32,22>(lshr_ln84_100_fu_7141_p4.read());
}

void sha256d::thread_zext_ln84_35_fu_5493_p1() {
    zext_ln84_35_fu_5493_p1 = esl_zext<32,29>(lshr_ln84_103_fu_5483_p4.read());
}

void sha256d::thread_zext_ln84_36_fu_7236_p1() {
    zext_ln84_36_fu_7236_p1 = esl_zext<32,22>(lshr_ln84_105_fu_7226_p4.read());
}

void sha256d::thread_zext_ln84_37_fu_5563_p1() {
    zext_ln84_37_fu_5563_p1 = esl_zext<32,29>(lshr_ln84_108_fu_5553_p4.read());
}

void sha256d::thread_zext_ln84_38_fu_7321_p1() {
    zext_ln84_38_fu_7321_p1 = esl_zext<32,22>(lshr_ln84_110_fu_7311_p4.read());
}

void sha256d::thread_zext_ln84_39_fu_5808_p1() {
    zext_ln84_39_fu_5808_p1 = esl_zext<32,29>(lshr_ln84_113_fu_5798_p4.read());
}

void sha256d::thread_zext_ln84_3_fu_2922_p1() {
    zext_ln84_3_fu_2922_p1 = esl_zext<32,29>(lshr_ln84_1_fu_2910_p5.read());
}

void sha256d::thread_zext_ln84_40_fu_7407_p1() {
    zext_ln84_40_fu_7407_p1 = esl_zext<32,22>(lshr_ln84_115_fu_7397_p4.read());
}

void sha256d::thread_zext_ln84_41_fu_5878_p1() {
    zext_ln84_41_fu_5878_p1 = esl_zext<32,29>(lshr_ln84_118_fu_5868_p4.read());
}

void sha256d::thread_zext_ln84_42_fu_7493_p1() {
    zext_ln84_42_fu_7493_p1 = esl_zext<32,22>(lshr_ln84_120_fu_7483_p4.read());
}

void sha256d::thread_zext_ln84_43_fu_6118_p1() {
    zext_ln84_43_fu_6118_p1 = esl_zext<32,29>(lshr_ln84_123_fu_6108_p4.read());
}

void sha256d::thread_zext_ln84_44_fu_7579_p1() {
    zext_ln84_44_fu_7579_p1 = esl_zext<32,22>(lshr_ln84_125_fu_7569_p4.read());
}

void sha256d::thread_zext_ln84_45_fu_6188_p1() {
    zext_ln84_45_fu_6188_p1 = esl_zext<32,29>(lshr_ln84_128_fu_6178_p4.read());
}

void sha256d::thread_zext_ln84_46_fu_7665_p1() {
    zext_ln84_46_fu_7665_p1 = esl_zext<32,22>(lshr_ln84_130_fu_7655_p4.read());
}

void sha256d::thread_zext_ln84_47_fu_6428_p1() {
    zext_ln84_47_fu_6428_p1 = esl_zext<32,29>(lshr_ln84_133_fu_6418_p4.read());
}

void sha256d::thread_zext_ln84_48_fu_7751_p1() {
    zext_ln84_48_fu_7751_p1 = esl_zext<32,22>(lshr_ln84_135_fu_7741_p4.read());
}

void sha256d::thread_zext_ln84_49_fu_6498_p1() {
    zext_ln84_49_fu_6498_p1 = esl_zext<32,29>(lshr_ln84_138_fu_6488_p4.read());
}

void sha256d::thread_zext_ln84_4_fu_5043_p1() {
    zext_ln84_4_fu_5043_p1 = esl_zext<32,22>(lshr_ln84_48_fu_5033_p4.read());
}

void sha256d::thread_zext_ln84_50_fu_7826_p1() {
    zext_ln84_50_fu_7826_p1 = esl_zext<32,22>(lshr_ln84_140_fu_7816_p4.read());
}

void sha256d::thread_zext_ln84_51_fu_6736_p1() {
    zext_ln84_51_fu_6736_p1 = esl_zext<32,29>(lshr_ln84_143_fu_6726_p4.read());
}

void sha256d::thread_zext_ln84_52_fu_8759_p1() {
    zext_ln84_52_fu_8759_p1 = esl_zext<32,22>(lshr_ln84_145_fu_8749_p4.read());
}

void sha256d::thread_zext_ln84_53_fu_6806_p1() {
    zext_ln84_53_fu_6806_p1 = esl_zext<32,29>(lshr_ln84_148_fu_6796_p4.read());
}

void sha256d::thread_zext_ln84_54_fu_8844_p1() {
    zext_ln84_54_fu_8844_p1 = esl_zext<32,22>(lshr_ln84_150_fu_8834_p4.read());
}

void sha256d::thread_zext_ln84_55_fu_7901_p1() {
    zext_ln84_55_fu_7901_p1 = esl_zext<32,29>(lshr_ln84_153_fu_7891_p4.read());
}

void sha256d::thread_zext_ln84_56_fu_8929_p1() {
    zext_ln84_56_fu_8929_p1 = esl_zext<32,22>(lshr_ln84_155_fu_8919_p4.read());
}

void sha256d::thread_zext_ln84_57_fu_7971_p1() {
    zext_ln84_57_fu_7971_p1 = esl_zext<32,29>(lshr_ln84_158_fu_7961_p4.read());
}

void sha256d::thread_zext_ln84_58_fu_9014_p1() {
    zext_ln84_58_fu_9014_p1 = esl_zext<32,22>(lshr_ln84_160_fu_9004_p4.read());
}

void sha256d::thread_zext_ln84_59_fu_8041_p1() {
    zext_ln84_59_fu_8041_p1 = esl_zext<32,29>(lshr_ln84_163_fu_8031_p4.read());
}

void sha256d::thread_zext_ln84_5_fu_3014_p1() {
    zext_ln84_5_fu_3014_p1 = esl_zext<32,29>(lshr_ln84_49_fu_3002_p5.read());
}

void sha256d::thread_zext_ln84_60_fu_9099_p1() {
    zext_ln84_60_fu_9099_p1 = esl_zext<32,22>(lshr_ln84_165_fu_9089_p4.read());
}

void sha256d::thread_zext_ln84_61_fu_8111_p1() {
    zext_ln84_61_fu_8111_p1 = esl_zext<32,29>(lshr_ln84_168_fu_8101_p4.read());
}

void sha256d::thread_zext_ln84_62_fu_9184_p1() {
    zext_ln84_62_fu_9184_p1 = esl_zext<32,22>(lshr_ln84_170_fu_9174_p4.read());
}

void sha256d::thread_zext_ln84_63_fu_8181_p1() {
    zext_ln84_63_fu_8181_p1 = esl_zext<32,29>(lshr_ln84_173_fu_8171_p4.read());
}

void sha256d::thread_zext_ln84_64_fu_9270_p1() {
    zext_ln84_64_fu_9270_p1 = esl_zext<32,22>(lshr_ln84_175_fu_9260_p4.read());
}

void sha256d::thread_zext_ln84_65_fu_8251_p1() {
    zext_ln84_65_fu_8251_p1 = esl_zext<32,29>(lshr_ln84_178_fu_8241_p4.read());
}

void sha256d::thread_zext_ln84_66_fu_9356_p1() {
    zext_ln84_66_fu_9356_p1 = esl_zext<32,22>(lshr_ln84_180_fu_9346_p4.read());
}

void sha256d::thread_zext_ln84_67_fu_8321_p1() {
    zext_ln84_67_fu_8321_p1 = esl_zext<32,29>(lshr_ln84_183_fu_8311_p4.read());
}

void sha256d::thread_zext_ln84_68_fu_9442_p1() {
    zext_ln84_68_fu_9442_p1 = esl_zext<32,22>(lshr_ln84_185_fu_9432_p4.read());
}

void sha256d::thread_zext_ln84_69_fu_8391_p1() {
    zext_ln84_69_fu_8391_p1 = esl_zext<32,29>(lshr_ln84_188_fu_8381_p4.read());
}

void sha256d::thread_zext_ln84_6_fu_5113_p1() {
    zext_ln84_6_fu_5113_p1 = esl_zext<32,22>(lshr_ln84_52_fu_5103_p4.read());
}

void sha256d::thread_zext_ln84_70_fu_9528_p1() {
    zext_ln84_70_fu_9528_p1 = esl_zext<32,22>(lshr_ln84_190_fu_9518_p4.read());
}

void sha256d::thread_zext_ln84_71_fu_8461_p1() {
    zext_ln84_71_fu_8461_p1 = esl_zext<32,29>(lshr_ln84_193_fu_8451_p4.read());
}

void sha256d::thread_zext_ln84_72_fu_9614_p1() {
    zext_ln84_72_fu_9614_p1 = esl_zext<32,22>(lshr_ln84_195_fu_9604_p4.read());
}

void sha256d::thread_zext_ln84_73_fu_8531_p1() {
    zext_ln84_73_fu_8531_p1 = esl_zext<32,29>(lshr_ln84_198_fu_8521_p4.read());
}

void sha256d::thread_zext_ln84_74_fu_9684_p1() {
    zext_ln84_74_fu_9684_p1 = esl_zext<32,22>(lshr_ln84_200_fu_9674_p4.read());
}

void sha256d::thread_zext_ln84_75_fu_8601_p1() {
    zext_ln84_75_fu_8601_p1 = esl_zext<32,29>(lshr_ln84_203_fu_8591_p4.read());
}

void sha256d::thread_zext_ln84_76_fu_10424_p1() {
    zext_ln84_76_fu_10424_p1 = esl_zext<32,22>(lshr_ln84_205_fu_10414_p4.read());
}

void sha256d::thread_zext_ln84_77_fu_8671_p1() {
    zext_ln84_77_fu_8671_p1 = esl_zext<32,29>(lshr_ln84_208_fu_8661_p4.read());
}

void sha256d::thread_zext_ln84_78_fu_10509_p1() {
    zext_ln84_78_fu_10509_p1 = esl_zext<32,22>(lshr_ln84_210_fu_10499_p4.read());
}

void sha256d::thread_zext_ln84_79_fu_9754_p1() {
    zext_ln84_79_fu_9754_p1 = esl_zext<32,29>(lshr_ln84_213_fu_9744_p4.read());
}

void sha256d::thread_zext_ln84_7_fu_3212_p1() {
    zext_ln84_7_fu_3212_p1 = esl_zext<32,29>(lshr_ln84_53_fu_3200_p5.read());
}

void sha256d::thread_zext_ln84_80_fu_10594_p1() {
    zext_ln84_80_fu_10594_p1 = esl_zext<32,22>(lshr_ln84_215_fu_10584_p4.read());
}

void sha256d::thread_zext_ln84_81_fu_9824_p1() {
    zext_ln84_81_fu_9824_p1 = esl_zext<32,29>(lshr_ln84_218_fu_9814_p4.read());
}

void sha256d::thread_zext_ln84_82_fu_10679_p1() {
    zext_ln84_82_fu_10679_p1 = esl_zext<32,22>(lshr_ln84_220_fu_10669_p4.read());
}

void sha256d::thread_zext_ln84_83_fu_9894_p1() {
    zext_ln84_83_fu_9894_p1 = esl_zext<32,29>(lshr_ln84_223_fu_9884_p4.read());
}

void sha256d::thread_zext_ln84_84_fu_10764_p1() {
    zext_ln84_84_fu_10764_p1 = esl_zext<32,22>(lshr_ln84_225_fu_10754_p4.read());
}

void sha256d::thread_zext_ln84_85_fu_9964_p1() {
    zext_ln84_85_fu_9964_p1 = esl_zext<32,29>(lshr_ln84_228_fu_9954_p4.read());
}

void sha256d::thread_zext_ln84_86_fu_10849_p1() {
    zext_ln84_86_fu_10849_p1 = esl_zext<32,22>(lshr_ln84_230_fu_10839_p4.read());
}

void sha256d::thread_zext_ln84_87_fu_10034_p1() {
    zext_ln84_87_fu_10034_p1 = esl_zext<32,29>(lshr_ln84_233_fu_10024_p4.read());
}

void sha256d::thread_zext_ln84_88_fu_10935_p1() {
    zext_ln84_88_fu_10935_p1 = esl_zext<32,22>(lshr_ln84_235_fu_10925_p4.read());
}

void sha256d::thread_zext_ln84_89_fu_10104_p1() {
    zext_ln84_89_fu_10104_p1 = esl_zext<32,29>(lshr_ln84_238_fu_10094_p4.read());
}

void sha256d::thread_zext_ln84_8_fu_5348_p1() {
    zext_ln84_8_fu_5348_p1 = esl_zext<32,22>(lshr_ln84_56_fu_5338_p4.read());
}

void sha256d::thread_zext_ln84_90_fu_11021_p1() {
    zext_ln84_90_fu_11021_p1 = esl_zext<32,22>(lshr_ln84_240_fu_11011_p4.read());
}

void sha256d::thread_zext_ln84_91_fu_10174_p1() {
    zext_ln84_91_fu_10174_p1 = esl_zext<32,29>(lshr_ln84_243_fu_10164_p4.read());
}

void sha256d::thread_zext_ln84_92_fu_11107_p1() {
    zext_ln84_92_fu_11107_p1 = esl_zext<32,22>(lshr_ln84_245_fu_11097_p4.read());
}

void sha256d::thread_zext_ln84_93_fu_10244_p1() {
    zext_ln84_93_fu_10244_p1 = esl_zext<32,29>(lshr_ln84_248_fu_10234_p4.read());
}

void sha256d::thread_zext_ln84_94_fu_11188_p1() {
    zext_ln84_94_fu_11188_p1 = esl_zext<32,22>(lshr_ln84_250_fu_11178_p4.read());
}

void sha256d::thread_zext_ln84_95_fu_10320_p1() {
    zext_ln84_95_fu_10320_p1 = esl_zext<32,29>(lshr_ln84_253_fu_10310_p4.read());
}

void sha256d::thread_zext_ln84_9_fu_3304_p1() {
    zext_ln84_9_fu_3304_p1 = esl_zext<32,29>(lshr_ln84_57_fu_3292_p5.read());
}

void sha256d::thread_zext_ln84_fu_4667_p1() {
    zext_ln84_fu_4667_p1 = esl_zext<32,22>(lshr_ln84_2_fu_4657_p4.read());
}

void sha256d::thread_zext_ln96_fu_11227_p1() {
    zext_ln96_fu_11227_p1 = esl_zext<64,7>(i6_2_reg_1479.read());
}

}

