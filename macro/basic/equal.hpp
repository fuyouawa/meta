#pragma once
#include <meta/macro/basic/primitive.hpp>

#define META_EQUAL(x, y) META_CHECK(META_CAT(META_CAT(_META_EQUAL_, x)##_, y))
#define META_NOT_EQUAL(x, y) META_NOT(META_EQUAL(x, y))


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_EQUAL
#define _META_EQUAL_0_0 META_CHECK_TRUE
#define _META_EQUAL_1_1 META_CHECK_TRUE
#define _META_EQUAL_2_2 META_CHECK_TRUE
#define _META_EQUAL_3_3 META_CHECK_TRUE
#define _META_EQUAL_4_4 META_CHECK_TRUE
#define _META_EQUAL_5_5 META_CHECK_TRUE
#define _META_EQUAL_6_6 META_CHECK_TRUE
#define _META_EQUAL_7_7 META_CHECK_TRUE
#define _META_EQUAL_8_8 META_CHECK_TRUE
#define _META_EQUAL_9_9 META_CHECK_TRUE
#define _META_EQUAL_10_10 META_CHECK_TRUE
#define _META_EQUAL_11_11 META_CHECK_TRUE
#define _META_EQUAL_12_12 META_CHECK_TRUE
#define _META_EQUAL_13_13 META_CHECK_TRUE
#define _META_EQUAL_14_14 META_CHECK_TRUE
#define _META_EQUAL_15_15 META_CHECK_TRUE
#define _META_EQUAL_16_16 META_CHECK_TRUE
#define _META_EQUAL_17_17 META_CHECK_TRUE
#define _META_EQUAL_18_18 META_CHECK_TRUE
#define _META_EQUAL_19_19 META_CHECK_TRUE
#define _META_EQUAL_20_20 META_CHECK_TRUE
#define _META_EQUAL_21_21 META_CHECK_TRUE
#define _META_EQUAL_22_22 META_CHECK_TRUE
#define _META_EQUAL_23_23 META_CHECK_TRUE
#define _META_EQUAL_24_24 META_CHECK_TRUE
#define _META_EQUAL_25_25 META_CHECK_TRUE
#define _META_EQUAL_26_26 META_CHECK_TRUE
#define _META_EQUAL_27_27 META_CHECK_TRUE
#define _META_EQUAL_28_28 META_CHECK_TRUE
#define _META_EQUAL_29_29 META_CHECK_TRUE
#define _META_EQUAL_30_30 META_CHECK_TRUE
#define _META_EQUAL_31_31 META_CHECK_TRUE
#define _META_EQUAL_32_32 META_CHECK_TRUE
#define _META_EQUAL_33_33 META_CHECK_TRUE
#define _META_EQUAL_34_34 META_CHECK_TRUE
#define _META_EQUAL_35_35 META_CHECK_TRUE
#define _META_EQUAL_36_36 META_CHECK_TRUE
#define _META_EQUAL_37_37 META_CHECK_TRUE
#define _META_EQUAL_38_38 META_CHECK_TRUE
#define _META_EQUAL_39_39 META_CHECK_TRUE
#define _META_EQUAL_40_40 META_CHECK_TRUE
#define _META_EQUAL_41_41 META_CHECK_TRUE
#define _META_EQUAL_42_42 META_CHECK_TRUE
#define _META_EQUAL_43_43 META_CHECK_TRUE
#define _META_EQUAL_44_44 META_CHECK_TRUE
#define _META_EQUAL_45_45 META_CHECK_TRUE
#define _META_EQUAL_46_46 META_CHECK_TRUE
#define _META_EQUAL_47_47 META_CHECK_TRUE
#define _META_EQUAL_48_48 META_CHECK_TRUE
#define _META_EQUAL_49_49 META_CHECK_TRUE
#define _META_EQUAL_50_50 META_CHECK_TRUE
#define _META_EQUAL_51_51 META_CHECK_TRUE
#define _META_EQUAL_52_52 META_CHECK_TRUE
#define _META_EQUAL_53_53 META_CHECK_TRUE
#define _META_EQUAL_54_54 META_CHECK_TRUE
#define _META_EQUAL_55_55 META_CHECK_TRUE
#define _META_EQUAL_56_56 META_CHECK_TRUE
#define _META_EQUAL_57_57 META_CHECK_TRUE
#define _META_EQUAL_58_58 META_CHECK_TRUE
#define _META_EQUAL_59_59 META_CHECK_TRUE
#define _META_EQUAL_60_60 META_CHECK_TRUE
#define _META_EQUAL_61_61 META_CHECK_TRUE
#define _META_EQUAL_62_62 META_CHECK_TRUE
#define _META_EQUAL_63_63 META_CHECK_TRUE
#define _META_EQUAL_64_64 META_CHECK_TRUE
#define _META_EQUAL_65_65 META_CHECK_TRUE
#define _META_EQUAL_66_66 META_CHECK_TRUE
#define _META_EQUAL_67_67 META_CHECK_TRUE
#define _META_EQUAL_68_68 META_CHECK_TRUE
#define _META_EQUAL_69_69 META_CHECK_TRUE
#define _META_EQUAL_70_70 META_CHECK_TRUE
#define _META_EQUAL_71_71 META_CHECK_TRUE
#define _META_EQUAL_72_72 META_CHECK_TRUE
#define _META_EQUAL_73_73 META_CHECK_TRUE
#define _META_EQUAL_74_74 META_CHECK_TRUE
#define _META_EQUAL_75_75 META_CHECK_TRUE
#define _META_EQUAL_76_76 META_CHECK_TRUE
#define _META_EQUAL_77_77 META_CHECK_TRUE
#define _META_EQUAL_78_78 META_CHECK_TRUE
#define _META_EQUAL_79_79 META_CHECK_TRUE
#define _META_EQUAL_80_80 META_CHECK_TRUE
#define _META_EQUAL_81_81 META_CHECK_TRUE
#define _META_EQUAL_82_82 META_CHECK_TRUE
#define _META_EQUAL_83_83 META_CHECK_TRUE
#define _META_EQUAL_84_84 META_CHECK_TRUE
#define _META_EQUAL_85_85 META_CHECK_TRUE
#define _META_EQUAL_86_86 META_CHECK_TRUE
#define _META_EQUAL_87_87 META_CHECK_TRUE
#define _META_EQUAL_88_88 META_CHECK_TRUE
#define _META_EQUAL_89_89 META_CHECK_TRUE
#define _META_EQUAL_90_90 META_CHECK_TRUE
#define _META_EQUAL_91_91 META_CHECK_TRUE
#define _META_EQUAL_92_92 META_CHECK_TRUE
#define _META_EQUAL_93_93 META_CHECK_TRUE
#define _META_EQUAL_94_94 META_CHECK_TRUE
#define _META_EQUAL_95_95 META_CHECK_TRUE
#define _META_EQUAL_96_96 META_CHECK_TRUE
#define _META_EQUAL_97_97 META_CHECK_TRUE
#define _META_EQUAL_98_98 META_CHECK_TRUE
#define _META_EQUAL_99_99 META_CHECK_TRUE
#define _META_EQUAL_100_100 META_CHECK_TRUE
#define _META_EQUAL_101_101 META_CHECK_TRUE
#define _META_EQUAL_102_102 META_CHECK_TRUE
#define _META_EQUAL_103_103 META_CHECK_TRUE
#define _META_EQUAL_104_104 META_CHECK_TRUE
#define _META_EQUAL_105_105 META_CHECK_TRUE
#define _META_EQUAL_106_106 META_CHECK_TRUE
#define _META_EQUAL_107_107 META_CHECK_TRUE
#define _META_EQUAL_108_108 META_CHECK_TRUE
#define _META_EQUAL_109_109 META_CHECK_TRUE
#define _META_EQUAL_110_110 META_CHECK_TRUE
#define _META_EQUAL_111_111 META_CHECK_TRUE
#define _META_EQUAL_112_112 META_CHECK_TRUE
#define _META_EQUAL_113_113 META_CHECK_TRUE
#define _META_EQUAL_114_114 META_CHECK_TRUE
#define _META_EQUAL_115_115 META_CHECK_TRUE
#define _META_EQUAL_116_116 META_CHECK_TRUE
#define _META_EQUAL_117_117 META_CHECK_TRUE
#define _META_EQUAL_118_118 META_CHECK_TRUE
#define _META_EQUAL_119_119 META_CHECK_TRUE
#define _META_EQUAL_120_120 META_CHECK_TRUE
#define _META_EQUAL_121_121 META_CHECK_TRUE
#define _META_EQUAL_122_122 META_CHECK_TRUE
#define _META_EQUAL_123_123 META_CHECK_TRUE
#define _META_EQUAL_124_124 META_CHECK_TRUE
#define _META_EQUAL_125_125 META_CHECK_TRUE
#define _META_EQUAL_126_126 META_CHECK_TRUE
#define _META_EQUAL_127_127 META_CHECK_TRUE
#define _META_EQUAL_128_128 META_CHECK_TRUE
#define _META_EQUAL_129_129 META_CHECK_TRUE
#define _META_EQUAL_130_130 META_CHECK_TRUE
#define _META_EQUAL_131_131 META_CHECK_TRUE
#define _META_EQUAL_132_132 META_CHECK_TRUE
#define _META_EQUAL_133_133 META_CHECK_TRUE
#define _META_EQUAL_134_134 META_CHECK_TRUE
#define _META_EQUAL_135_135 META_CHECK_TRUE
#define _META_EQUAL_136_136 META_CHECK_TRUE
#define _META_EQUAL_137_137 META_CHECK_TRUE
#define _META_EQUAL_138_138 META_CHECK_TRUE
#define _META_EQUAL_139_139 META_CHECK_TRUE
#define _META_EQUAL_140_140 META_CHECK_TRUE
#define _META_EQUAL_141_141 META_CHECK_TRUE
#define _META_EQUAL_142_142 META_CHECK_TRUE
#define _META_EQUAL_143_143 META_CHECK_TRUE
#define _META_EQUAL_144_144 META_CHECK_TRUE
#define _META_EQUAL_145_145 META_CHECK_TRUE
#define _META_EQUAL_146_146 META_CHECK_TRUE
#define _META_EQUAL_147_147 META_CHECK_TRUE
#define _META_EQUAL_148_148 META_CHECK_TRUE
#define _META_EQUAL_149_149 META_CHECK_TRUE
#define _META_EQUAL_150_150 META_CHECK_TRUE
#define _META_EQUAL_151_151 META_CHECK_TRUE
#define _META_EQUAL_152_152 META_CHECK_TRUE
#define _META_EQUAL_153_153 META_CHECK_TRUE
#define _META_EQUAL_154_154 META_CHECK_TRUE
#define _META_EQUAL_155_155 META_CHECK_TRUE
#define _META_EQUAL_156_156 META_CHECK_TRUE
#define _META_EQUAL_157_157 META_CHECK_TRUE
#define _META_EQUAL_158_158 META_CHECK_TRUE
#define _META_EQUAL_159_159 META_CHECK_TRUE
#define _META_EQUAL_160_160 META_CHECK_TRUE
#define _META_EQUAL_161_161 META_CHECK_TRUE
#define _META_EQUAL_162_162 META_CHECK_TRUE
#define _META_EQUAL_163_163 META_CHECK_TRUE
#define _META_EQUAL_164_164 META_CHECK_TRUE
#define _META_EQUAL_165_165 META_CHECK_TRUE
#define _META_EQUAL_166_166 META_CHECK_TRUE
#define _META_EQUAL_167_167 META_CHECK_TRUE
#define _META_EQUAL_168_168 META_CHECK_TRUE
#define _META_EQUAL_169_169 META_CHECK_TRUE
#define _META_EQUAL_170_170 META_CHECK_TRUE
#define _META_EQUAL_171_171 META_CHECK_TRUE
#define _META_EQUAL_172_172 META_CHECK_TRUE
#define _META_EQUAL_173_173 META_CHECK_TRUE
#define _META_EQUAL_174_174 META_CHECK_TRUE
#define _META_EQUAL_175_175 META_CHECK_TRUE
#define _META_EQUAL_176_176 META_CHECK_TRUE
#define _META_EQUAL_177_177 META_CHECK_TRUE
#define _META_EQUAL_178_178 META_CHECK_TRUE
#define _META_EQUAL_179_179 META_CHECK_TRUE
#define _META_EQUAL_180_180 META_CHECK_TRUE
#define _META_EQUAL_181_181 META_CHECK_TRUE
#define _META_EQUAL_182_182 META_CHECK_TRUE
#define _META_EQUAL_183_183 META_CHECK_TRUE
#define _META_EQUAL_184_184 META_CHECK_TRUE
#define _META_EQUAL_185_185 META_CHECK_TRUE
#define _META_EQUAL_186_186 META_CHECK_TRUE
#define _META_EQUAL_187_187 META_CHECK_TRUE
#define _META_EQUAL_188_188 META_CHECK_TRUE
#define _META_EQUAL_189_189 META_CHECK_TRUE
#define _META_EQUAL_190_190 META_CHECK_TRUE
#define _META_EQUAL_191_191 META_CHECK_TRUE
#define _META_EQUAL_192_192 META_CHECK_TRUE
#define _META_EQUAL_193_193 META_CHECK_TRUE
#define _META_EQUAL_194_194 META_CHECK_TRUE
#define _META_EQUAL_195_195 META_CHECK_TRUE
#define _META_EQUAL_196_196 META_CHECK_TRUE
#define _META_EQUAL_197_197 META_CHECK_TRUE
#define _META_EQUAL_198_198 META_CHECK_TRUE
#define _META_EQUAL_199_199 META_CHECK_TRUE
#define _META_EQUAL_200_200 META_CHECK_TRUE
#define _META_EQUAL_201_201 META_CHECK_TRUE
#define _META_EQUAL_202_202 META_CHECK_TRUE
#define _META_EQUAL_203_203 META_CHECK_TRUE
#define _META_EQUAL_204_204 META_CHECK_TRUE
#define _META_EQUAL_205_205 META_CHECK_TRUE
#define _META_EQUAL_206_206 META_CHECK_TRUE
#define _META_EQUAL_207_207 META_CHECK_TRUE
#define _META_EQUAL_208_208 META_CHECK_TRUE
#define _META_EQUAL_209_209 META_CHECK_TRUE
#define _META_EQUAL_210_210 META_CHECK_TRUE
#define _META_EQUAL_211_211 META_CHECK_TRUE
#define _META_EQUAL_212_212 META_CHECK_TRUE
#define _META_EQUAL_213_213 META_CHECK_TRUE
#define _META_EQUAL_214_214 META_CHECK_TRUE
#define _META_EQUAL_215_215 META_CHECK_TRUE
#define _META_EQUAL_216_216 META_CHECK_TRUE
#define _META_EQUAL_217_217 META_CHECK_TRUE
#define _META_EQUAL_218_218 META_CHECK_TRUE
#define _META_EQUAL_219_219 META_CHECK_TRUE
#define _META_EQUAL_220_220 META_CHECK_TRUE
#define _META_EQUAL_221_221 META_CHECK_TRUE
#define _META_EQUAL_222_222 META_CHECK_TRUE
#define _META_EQUAL_223_223 META_CHECK_TRUE
#define _META_EQUAL_224_224 META_CHECK_TRUE
#define _META_EQUAL_225_225 META_CHECK_TRUE
#define _META_EQUAL_226_226 META_CHECK_TRUE
#define _META_EQUAL_227_227 META_CHECK_TRUE
#define _META_EQUAL_228_228 META_CHECK_TRUE
#define _META_EQUAL_229_229 META_CHECK_TRUE
#define _META_EQUAL_230_230 META_CHECK_TRUE
#define _META_EQUAL_231_231 META_CHECK_TRUE
#define _META_EQUAL_232_232 META_CHECK_TRUE
#define _META_EQUAL_233_233 META_CHECK_TRUE
#define _META_EQUAL_234_234 META_CHECK_TRUE
#define _META_EQUAL_235_235 META_CHECK_TRUE
#define _META_EQUAL_236_236 META_CHECK_TRUE
#define _META_EQUAL_237_237 META_CHECK_TRUE
#define _META_EQUAL_238_238 META_CHECK_TRUE
#define _META_EQUAL_239_239 META_CHECK_TRUE
#define _META_EQUAL_240_240 META_CHECK_TRUE
#define _META_EQUAL_241_241 META_CHECK_TRUE
#define _META_EQUAL_242_242 META_CHECK_TRUE
#define _META_EQUAL_243_243 META_CHECK_TRUE
#define _META_EQUAL_244_244 META_CHECK_TRUE
#define _META_EQUAL_245_245 META_CHECK_TRUE
#define _META_EQUAL_246_246 META_CHECK_TRUE
#define _META_EQUAL_247_247 META_CHECK_TRUE
#define _META_EQUAL_248_248 META_CHECK_TRUE
#define _META_EQUAL_249_249 META_CHECK_TRUE
#define _META_EQUAL_250_250 META_CHECK_TRUE
#define _META_EQUAL_251_251 META_CHECK_TRUE
#define _META_EQUAL_252_252 META_CHECK_TRUE
#define _META_EQUAL_253_253 META_CHECK_TRUE
#define _META_EQUAL_254_254 META_CHECK_TRUE
#define _META_EQUAL_255_255 META_CHECK_TRUE
#define _META_EQUAL_256_256 META_CHECK_TRUE