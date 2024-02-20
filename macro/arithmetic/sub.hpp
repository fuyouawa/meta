#pragma once
#include <meta/macro/arithmetic/decrement.hpp>

#define META_SUB(x, y) INTERNAL_META_SUB(x, y)


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_SUB_0(x) x
#define INTERNAL_META_SUB_1(x) INTERNAL_META_SUB_0(META_DEC(x))
#define INTERNAL_META_SUB_2(x) INTERNAL_META_SUB_1(META_DEC(x))
#define INTERNAL_META_SUB_3(x) INTERNAL_META_SUB_2(META_DEC(x))
#define INTERNAL_META_SUB_4(x) INTERNAL_META_SUB_3(META_DEC(x))
#define INTERNAL_META_SUB_5(x) INTERNAL_META_SUB_4(META_DEC(x))
#define INTERNAL_META_SUB_6(x) INTERNAL_META_SUB_5(META_DEC(x))
#define INTERNAL_META_SUB_7(x) INTERNAL_META_SUB_6(META_DEC(x))
#define INTERNAL_META_SUB_8(x) INTERNAL_META_SUB_7(META_DEC(x))
#define INTERNAL_META_SUB_9(x) INTERNAL_META_SUB_8(META_DEC(x))
#define INTERNAL_META_SUB_10(x) INTERNAL_META_SUB_9(META_DEC(x))
#define INTERNAL_META_SUB_11(x) INTERNAL_META_SUB_10(META_DEC(x))
#define INTERNAL_META_SUB_12(x) INTERNAL_META_SUB_11(META_DEC(x))
#define INTERNAL_META_SUB_13(x) INTERNAL_META_SUB_12(META_DEC(x))
#define INTERNAL_META_SUB_14(x) INTERNAL_META_SUB_13(META_DEC(x))
#define INTERNAL_META_SUB_15(x) INTERNAL_META_SUB_14(META_DEC(x))
#define INTERNAL_META_SUB_16(x) INTERNAL_META_SUB_15(META_DEC(x))
#define INTERNAL_META_SUB_17(x) INTERNAL_META_SUB_16(META_DEC(x))
#define INTERNAL_META_SUB_18(x) INTERNAL_META_SUB_17(META_DEC(x))
#define INTERNAL_META_SUB_19(x) INTERNAL_META_SUB_18(META_DEC(x))
#define INTERNAL_META_SUB_20(x) INTERNAL_META_SUB_19(META_DEC(x))
#define INTERNAL_META_SUB_21(x) INTERNAL_META_SUB_20(META_DEC(x))
#define INTERNAL_META_SUB_22(x) INTERNAL_META_SUB_21(META_DEC(x))
#define INTERNAL_META_SUB_23(x) INTERNAL_META_SUB_22(META_DEC(x))
#define INTERNAL_META_SUB_24(x) INTERNAL_META_SUB_23(META_DEC(x))
#define INTERNAL_META_SUB_25(x) INTERNAL_META_SUB_24(META_DEC(x))
#define INTERNAL_META_SUB_26(x) INTERNAL_META_SUB_25(META_DEC(x))
#define INTERNAL_META_SUB_27(x) INTERNAL_META_SUB_26(META_DEC(x))
#define INTERNAL_META_SUB_28(x) INTERNAL_META_SUB_27(META_DEC(x))
#define INTERNAL_META_SUB_29(x) INTERNAL_META_SUB_28(META_DEC(x))
#define INTERNAL_META_SUB_30(x) INTERNAL_META_SUB_29(META_DEC(x))
#define INTERNAL_META_SUB_31(x) INTERNAL_META_SUB_30(META_DEC(x))
#define INTERNAL_META_SUB_32(x) INTERNAL_META_SUB_31(META_DEC(x))
#define INTERNAL_META_SUB_33(x) INTERNAL_META_SUB_32(META_DEC(x))
#define INTERNAL_META_SUB_34(x) INTERNAL_META_SUB_33(META_DEC(x))
#define INTERNAL_META_SUB_35(x) INTERNAL_META_SUB_34(META_DEC(x))
#define INTERNAL_META_SUB_36(x) INTERNAL_META_SUB_35(META_DEC(x))
#define INTERNAL_META_SUB_37(x) INTERNAL_META_SUB_36(META_DEC(x))
#define INTERNAL_META_SUB_38(x) INTERNAL_META_SUB_37(META_DEC(x))
#define INTERNAL_META_SUB_39(x) INTERNAL_META_SUB_38(META_DEC(x))
#define INTERNAL_META_SUB_40(x) INTERNAL_META_SUB_39(META_DEC(x))
#define INTERNAL_META_SUB_41(x) INTERNAL_META_SUB_40(META_DEC(x))
#define INTERNAL_META_SUB_42(x) INTERNAL_META_SUB_41(META_DEC(x))
#define INTERNAL_META_SUB_43(x) INTERNAL_META_SUB_42(META_DEC(x))
#define INTERNAL_META_SUB_44(x) INTERNAL_META_SUB_43(META_DEC(x))
#define INTERNAL_META_SUB_45(x) INTERNAL_META_SUB_44(META_DEC(x))
#define INTERNAL_META_SUB_46(x) INTERNAL_META_SUB_45(META_DEC(x))
#define INTERNAL_META_SUB_47(x) INTERNAL_META_SUB_46(META_DEC(x))
#define INTERNAL_META_SUB_48(x) INTERNAL_META_SUB_47(META_DEC(x))
#define INTERNAL_META_SUB_49(x) INTERNAL_META_SUB_48(META_DEC(x))
#define INTERNAL_META_SUB_50(x) INTERNAL_META_SUB_49(META_DEC(x))
#define INTERNAL_META_SUB_51(x) INTERNAL_META_SUB_50(META_DEC(x))
#define INTERNAL_META_SUB_52(x) INTERNAL_META_SUB_51(META_DEC(x))
#define INTERNAL_META_SUB_53(x) INTERNAL_META_SUB_52(META_DEC(x))
#define INTERNAL_META_SUB_54(x) INTERNAL_META_SUB_53(META_DEC(x))
#define INTERNAL_META_SUB_55(x) INTERNAL_META_SUB_54(META_DEC(x))
#define INTERNAL_META_SUB_56(x) INTERNAL_META_SUB_55(META_DEC(x))
#define INTERNAL_META_SUB_57(x) INTERNAL_META_SUB_56(META_DEC(x))
#define INTERNAL_META_SUB_58(x) INTERNAL_META_SUB_57(META_DEC(x))
#define INTERNAL_META_SUB_59(x) INTERNAL_META_SUB_58(META_DEC(x))
#define INTERNAL_META_SUB_60(x) INTERNAL_META_SUB_59(META_DEC(x))
#define INTERNAL_META_SUB_61(x) INTERNAL_META_SUB_60(META_DEC(x))
#define INTERNAL_META_SUB_62(x) INTERNAL_META_SUB_61(META_DEC(x))
#define INTERNAL_META_SUB_63(x) INTERNAL_META_SUB_62(META_DEC(x))
#define INTERNAL_META_SUB_64(x) INTERNAL_META_SUB_63(META_DEC(x))
#define INTERNAL_META_SUB_65(x) INTERNAL_META_SUB_64(META_DEC(x))
#define INTERNAL_META_SUB_66(x) INTERNAL_META_SUB_65(META_DEC(x))
#define INTERNAL_META_SUB_67(x) INTERNAL_META_SUB_66(META_DEC(x))
#define INTERNAL_META_SUB_68(x) INTERNAL_META_SUB_67(META_DEC(x))
#define INTERNAL_META_SUB_69(x) INTERNAL_META_SUB_68(META_DEC(x))
#define INTERNAL_META_SUB_70(x) INTERNAL_META_SUB_69(META_DEC(x))
#define INTERNAL_META_SUB_71(x) INTERNAL_META_SUB_70(META_DEC(x))
#define INTERNAL_META_SUB_72(x) INTERNAL_META_SUB_71(META_DEC(x))
#define INTERNAL_META_SUB_73(x) INTERNAL_META_SUB_72(META_DEC(x))
#define INTERNAL_META_SUB_74(x) INTERNAL_META_SUB_73(META_DEC(x))
#define INTERNAL_META_SUB_75(x) INTERNAL_META_SUB_74(META_DEC(x))
#define INTERNAL_META_SUB_76(x) INTERNAL_META_SUB_75(META_DEC(x))
#define INTERNAL_META_SUB_77(x) INTERNAL_META_SUB_76(META_DEC(x))
#define INTERNAL_META_SUB_78(x) INTERNAL_META_SUB_77(META_DEC(x))
#define INTERNAL_META_SUB_79(x) INTERNAL_META_SUB_78(META_DEC(x))
#define INTERNAL_META_SUB_80(x) INTERNAL_META_SUB_79(META_DEC(x))
#define INTERNAL_META_SUB_81(x) INTERNAL_META_SUB_80(META_DEC(x))
#define INTERNAL_META_SUB_82(x) INTERNAL_META_SUB_81(META_DEC(x))
#define INTERNAL_META_SUB_83(x) INTERNAL_META_SUB_82(META_DEC(x))
#define INTERNAL_META_SUB_84(x) INTERNAL_META_SUB_83(META_DEC(x))
#define INTERNAL_META_SUB_85(x) INTERNAL_META_SUB_84(META_DEC(x))
#define INTERNAL_META_SUB_86(x) INTERNAL_META_SUB_85(META_DEC(x))
#define INTERNAL_META_SUB_87(x) INTERNAL_META_SUB_86(META_DEC(x))
#define INTERNAL_META_SUB_88(x) INTERNAL_META_SUB_87(META_DEC(x))
#define INTERNAL_META_SUB_89(x) INTERNAL_META_SUB_88(META_DEC(x))
#define INTERNAL_META_SUB_90(x) INTERNAL_META_SUB_89(META_DEC(x))
#define INTERNAL_META_SUB_91(x) INTERNAL_META_SUB_90(META_DEC(x))
#define INTERNAL_META_SUB_92(x) INTERNAL_META_SUB_91(META_DEC(x))
#define INTERNAL_META_SUB_93(x) INTERNAL_META_SUB_92(META_DEC(x))
#define INTERNAL_META_SUB_94(x) INTERNAL_META_SUB_93(META_DEC(x))
#define INTERNAL_META_SUB_95(x) INTERNAL_META_SUB_94(META_DEC(x))
#define INTERNAL_META_SUB_96(x) INTERNAL_META_SUB_95(META_DEC(x))
#define INTERNAL_META_SUB_97(x) INTERNAL_META_SUB_96(META_DEC(x))
#define INTERNAL_META_SUB_98(x) INTERNAL_META_SUB_97(META_DEC(x))
#define INTERNAL_META_SUB_99(x) INTERNAL_META_SUB_98(META_DEC(x))
#define INTERNAL_META_SUB_100(x) INTERNAL_META_SUB_99(META_DEC(x))
#define INTERNAL_META_SUB_101(x) INTERNAL_META_SUB_100(META_DEC(x))
#define INTERNAL_META_SUB_102(x) INTERNAL_META_SUB_101(META_DEC(x))
#define INTERNAL_META_SUB_103(x) INTERNAL_META_SUB_102(META_DEC(x))
#define INTERNAL_META_SUB_104(x) INTERNAL_META_SUB_103(META_DEC(x))
#define INTERNAL_META_SUB_105(x) INTERNAL_META_SUB_104(META_DEC(x))
#define INTERNAL_META_SUB_106(x) INTERNAL_META_SUB_105(META_DEC(x))
#define INTERNAL_META_SUB_107(x) INTERNAL_META_SUB_106(META_DEC(x))
#define INTERNAL_META_SUB_108(x) INTERNAL_META_SUB_107(META_DEC(x))
#define INTERNAL_META_SUB_109(x) INTERNAL_META_SUB_108(META_DEC(x))
#define INTERNAL_META_SUB_110(x) INTERNAL_META_SUB_109(META_DEC(x))
#define INTERNAL_META_SUB_111(x) INTERNAL_META_SUB_110(META_DEC(x))
#define INTERNAL_META_SUB_112(x) INTERNAL_META_SUB_111(META_DEC(x))
#define INTERNAL_META_SUB_113(x) INTERNAL_META_SUB_112(META_DEC(x))
#define INTERNAL_META_SUB_114(x) INTERNAL_META_SUB_113(META_DEC(x))
#define INTERNAL_META_SUB_115(x) INTERNAL_META_SUB_114(META_DEC(x))
#define INTERNAL_META_SUB_116(x) INTERNAL_META_SUB_115(META_DEC(x))
#define INTERNAL_META_SUB_117(x) INTERNAL_META_SUB_116(META_DEC(x))
#define INTERNAL_META_SUB_118(x) INTERNAL_META_SUB_117(META_DEC(x))
#define INTERNAL_META_SUB_119(x) INTERNAL_META_SUB_118(META_DEC(x))
#define INTERNAL_META_SUB_120(x) INTERNAL_META_SUB_119(META_DEC(x))
#define INTERNAL_META_SUB_121(x) INTERNAL_META_SUB_120(META_DEC(x))
#define INTERNAL_META_SUB_122(x) INTERNAL_META_SUB_121(META_DEC(x))
#define INTERNAL_META_SUB_123(x) INTERNAL_META_SUB_122(META_DEC(x))
#define INTERNAL_META_SUB_124(x) INTERNAL_META_SUB_123(META_DEC(x))
#define INTERNAL_META_SUB_125(x) INTERNAL_META_SUB_124(META_DEC(x))
#define INTERNAL_META_SUB_126(x) INTERNAL_META_SUB_125(META_DEC(x))
#define INTERNAL_META_SUB_127(x) INTERNAL_META_SUB_126(META_DEC(x))
#define INTERNAL_META_SUB_128(x) INTERNAL_META_SUB_127(META_DEC(x))
#define INTERNAL_META_SUB_129(x) INTERNAL_META_SUB_128(META_DEC(x))
#define INTERNAL_META_SUB_130(x) INTERNAL_META_SUB_129(META_DEC(x))
#define INTERNAL_META_SUB_131(x) INTERNAL_META_SUB_130(META_DEC(x))
#define INTERNAL_META_SUB_132(x) INTERNAL_META_SUB_131(META_DEC(x))
#define INTERNAL_META_SUB_133(x) INTERNAL_META_SUB_132(META_DEC(x))
#define INTERNAL_META_SUB_134(x) INTERNAL_META_SUB_133(META_DEC(x))
#define INTERNAL_META_SUB_135(x) INTERNAL_META_SUB_134(META_DEC(x))
#define INTERNAL_META_SUB_136(x) INTERNAL_META_SUB_135(META_DEC(x))
#define INTERNAL_META_SUB_137(x) INTERNAL_META_SUB_136(META_DEC(x))
#define INTERNAL_META_SUB_138(x) INTERNAL_META_SUB_137(META_DEC(x))
#define INTERNAL_META_SUB_139(x) INTERNAL_META_SUB_138(META_DEC(x))
#define INTERNAL_META_SUB_140(x) INTERNAL_META_SUB_139(META_DEC(x))
#define INTERNAL_META_SUB_141(x) INTERNAL_META_SUB_140(META_DEC(x))
#define INTERNAL_META_SUB_142(x) INTERNAL_META_SUB_141(META_DEC(x))
#define INTERNAL_META_SUB_143(x) INTERNAL_META_SUB_142(META_DEC(x))
#define INTERNAL_META_SUB_144(x) INTERNAL_META_SUB_143(META_DEC(x))
#define INTERNAL_META_SUB_145(x) INTERNAL_META_SUB_144(META_DEC(x))
#define INTERNAL_META_SUB_146(x) INTERNAL_META_SUB_145(META_DEC(x))
#define INTERNAL_META_SUB_147(x) INTERNAL_META_SUB_146(META_DEC(x))
#define INTERNAL_META_SUB_148(x) INTERNAL_META_SUB_147(META_DEC(x))
#define INTERNAL_META_SUB_149(x) INTERNAL_META_SUB_148(META_DEC(x))
#define INTERNAL_META_SUB_150(x) INTERNAL_META_SUB_149(META_DEC(x))
#define INTERNAL_META_SUB_151(x) INTERNAL_META_SUB_150(META_DEC(x))
#define INTERNAL_META_SUB_152(x) INTERNAL_META_SUB_151(META_DEC(x))
#define INTERNAL_META_SUB_153(x) INTERNAL_META_SUB_152(META_DEC(x))
#define INTERNAL_META_SUB_154(x) INTERNAL_META_SUB_153(META_DEC(x))
#define INTERNAL_META_SUB_155(x) INTERNAL_META_SUB_154(META_DEC(x))
#define INTERNAL_META_SUB_156(x) INTERNAL_META_SUB_155(META_DEC(x))
#define INTERNAL_META_SUB_157(x) INTERNAL_META_SUB_156(META_DEC(x))
#define INTERNAL_META_SUB_158(x) INTERNAL_META_SUB_157(META_DEC(x))
#define INTERNAL_META_SUB_159(x) INTERNAL_META_SUB_158(META_DEC(x))
#define INTERNAL_META_SUB_160(x) INTERNAL_META_SUB_159(META_DEC(x))
#define INTERNAL_META_SUB_161(x) INTERNAL_META_SUB_160(META_DEC(x))
#define INTERNAL_META_SUB_162(x) INTERNAL_META_SUB_161(META_DEC(x))
#define INTERNAL_META_SUB_163(x) INTERNAL_META_SUB_162(META_DEC(x))
#define INTERNAL_META_SUB_164(x) INTERNAL_META_SUB_163(META_DEC(x))
#define INTERNAL_META_SUB_165(x) INTERNAL_META_SUB_164(META_DEC(x))
#define INTERNAL_META_SUB_166(x) INTERNAL_META_SUB_165(META_DEC(x))
#define INTERNAL_META_SUB_167(x) INTERNAL_META_SUB_166(META_DEC(x))
#define INTERNAL_META_SUB_168(x) INTERNAL_META_SUB_167(META_DEC(x))
#define INTERNAL_META_SUB_169(x) INTERNAL_META_SUB_168(META_DEC(x))
#define INTERNAL_META_SUB_170(x) INTERNAL_META_SUB_169(META_DEC(x))
#define INTERNAL_META_SUB_171(x) INTERNAL_META_SUB_170(META_DEC(x))
#define INTERNAL_META_SUB_172(x) INTERNAL_META_SUB_171(META_DEC(x))
#define INTERNAL_META_SUB_173(x) INTERNAL_META_SUB_172(META_DEC(x))
#define INTERNAL_META_SUB_174(x) INTERNAL_META_SUB_173(META_DEC(x))
#define INTERNAL_META_SUB_175(x) INTERNAL_META_SUB_174(META_DEC(x))
#define INTERNAL_META_SUB_176(x) INTERNAL_META_SUB_175(META_DEC(x))
#define INTERNAL_META_SUB_177(x) INTERNAL_META_SUB_176(META_DEC(x))
#define INTERNAL_META_SUB_178(x) INTERNAL_META_SUB_177(META_DEC(x))
#define INTERNAL_META_SUB_179(x) INTERNAL_META_SUB_178(META_DEC(x))
#define INTERNAL_META_SUB_180(x) INTERNAL_META_SUB_179(META_DEC(x))
#define INTERNAL_META_SUB_181(x) INTERNAL_META_SUB_180(META_DEC(x))
#define INTERNAL_META_SUB_182(x) INTERNAL_META_SUB_181(META_DEC(x))
#define INTERNAL_META_SUB_183(x) INTERNAL_META_SUB_182(META_DEC(x))
#define INTERNAL_META_SUB_184(x) INTERNAL_META_SUB_183(META_DEC(x))
#define INTERNAL_META_SUB_185(x) INTERNAL_META_SUB_184(META_DEC(x))
#define INTERNAL_META_SUB_186(x) INTERNAL_META_SUB_185(META_DEC(x))
#define INTERNAL_META_SUB_187(x) INTERNAL_META_SUB_186(META_DEC(x))
#define INTERNAL_META_SUB_188(x) INTERNAL_META_SUB_187(META_DEC(x))
#define INTERNAL_META_SUB_189(x) INTERNAL_META_SUB_188(META_DEC(x))
#define INTERNAL_META_SUB_190(x) INTERNAL_META_SUB_189(META_DEC(x))
#define INTERNAL_META_SUB_191(x) INTERNAL_META_SUB_190(META_DEC(x))
#define INTERNAL_META_SUB_192(x) INTERNAL_META_SUB_191(META_DEC(x))
#define INTERNAL_META_SUB_193(x) INTERNAL_META_SUB_192(META_DEC(x))
#define INTERNAL_META_SUB_194(x) INTERNAL_META_SUB_193(META_DEC(x))
#define INTERNAL_META_SUB_195(x) INTERNAL_META_SUB_194(META_DEC(x))
#define INTERNAL_META_SUB_196(x) INTERNAL_META_SUB_195(META_DEC(x))
#define INTERNAL_META_SUB_197(x) INTERNAL_META_SUB_196(META_DEC(x))
#define INTERNAL_META_SUB_198(x) INTERNAL_META_SUB_197(META_DEC(x))
#define INTERNAL_META_SUB_199(x) INTERNAL_META_SUB_198(META_DEC(x))
#define INTERNAL_META_SUB_200(x) INTERNAL_META_SUB_199(META_DEC(x))
#define INTERNAL_META_SUB_201(x) INTERNAL_META_SUB_200(META_DEC(x))
#define INTERNAL_META_SUB_202(x) INTERNAL_META_SUB_201(META_DEC(x))
#define INTERNAL_META_SUB_203(x) INTERNAL_META_SUB_202(META_DEC(x))
#define INTERNAL_META_SUB_204(x) INTERNAL_META_SUB_203(META_DEC(x))
#define INTERNAL_META_SUB_205(x) INTERNAL_META_SUB_204(META_DEC(x))
#define INTERNAL_META_SUB_206(x) INTERNAL_META_SUB_205(META_DEC(x))
#define INTERNAL_META_SUB_207(x) INTERNAL_META_SUB_206(META_DEC(x))
#define INTERNAL_META_SUB_208(x) INTERNAL_META_SUB_207(META_DEC(x))
#define INTERNAL_META_SUB_209(x) INTERNAL_META_SUB_208(META_DEC(x))
#define INTERNAL_META_SUB_210(x) INTERNAL_META_SUB_209(META_DEC(x))
#define INTERNAL_META_SUB_211(x) INTERNAL_META_SUB_210(META_DEC(x))
#define INTERNAL_META_SUB_212(x) INTERNAL_META_SUB_211(META_DEC(x))
#define INTERNAL_META_SUB_213(x) INTERNAL_META_SUB_212(META_DEC(x))
#define INTERNAL_META_SUB_214(x) INTERNAL_META_SUB_213(META_DEC(x))
#define INTERNAL_META_SUB_215(x) INTERNAL_META_SUB_214(META_DEC(x))
#define INTERNAL_META_SUB_216(x) INTERNAL_META_SUB_215(META_DEC(x))
#define INTERNAL_META_SUB_217(x) INTERNAL_META_SUB_216(META_DEC(x))
#define INTERNAL_META_SUB_218(x) INTERNAL_META_SUB_217(META_DEC(x))
#define INTERNAL_META_SUB_219(x) INTERNAL_META_SUB_218(META_DEC(x))
#define INTERNAL_META_SUB_220(x) INTERNAL_META_SUB_219(META_DEC(x))
#define INTERNAL_META_SUB_221(x) INTERNAL_META_SUB_220(META_DEC(x))
#define INTERNAL_META_SUB_222(x) INTERNAL_META_SUB_221(META_DEC(x))
#define INTERNAL_META_SUB_223(x) INTERNAL_META_SUB_222(META_DEC(x))
#define INTERNAL_META_SUB_224(x) INTERNAL_META_SUB_223(META_DEC(x))
#define INTERNAL_META_SUB_225(x) INTERNAL_META_SUB_224(META_DEC(x))
#define INTERNAL_META_SUB_226(x) INTERNAL_META_SUB_225(META_DEC(x))
#define INTERNAL_META_SUB_227(x) INTERNAL_META_SUB_226(META_DEC(x))
#define INTERNAL_META_SUB_228(x) INTERNAL_META_SUB_227(META_DEC(x))
#define INTERNAL_META_SUB_229(x) INTERNAL_META_SUB_228(META_DEC(x))
#define INTERNAL_META_SUB_230(x) INTERNAL_META_SUB_229(META_DEC(x))
#define INTERNAL_META_SUB_231(x) INTERNAL_META_SUB_230(META_DEC(x))
#define INTERNAL_META_SUB_232(x) INTERNAL_META_SUB_231(META_DEC(x))
#define INTERNAL_META_SUB_233(x) INTERNAL_META_SUB_232(META_DEC(x))
#define INTERNAL_META_SUB_234(x) INTERNAL_META_SUB_233(META_DEC(x))
#define INTERNAL_META_SUB_235(x) INTERNAL_META_SUB_234(META_DEC(x))
#define INTERNAL_META_SUB_236(x) INTERNAL_META_SUB_235(META_DEC(x))
#define INTERNAL_META_SUB_237(x) INTERNAL_META_SUB_236(META_DEC(x))
#define INTERNAL_META_SUB_238(x) INTERNAL_META_SUB_237(META_DEC(x))
#define INTERNAL_META_SUB_239(x) INTERNAL_META_SUB_238(META_DEC(x))
#define INTERNAL_META_SUB_240(x) INTERNAL_META_SUB_239(META_DEC(x))
#define INTERNAL_META_SUB_241(x) INTERNAL_META_SUB_240(META_DEC(x))
#define INTERNAL_META_SUB_242(x) INTERNAL_META_SUB_241(META_DEC(x))
#define INTERNAL_META_SUB_243(x) INTERNAL_META_SUB_242(META_DEC(x))
#define INTERNAL_META_SUB_244(x) INTERNAL_META_SUB_243(META_DEC(x))
#define INTERNAL_META_SUB_245(x) INTERNAL_META_SUB_244(META_DEC(x))
#define INTERNAL_META_SUB_246(x) INTERNAL_META_SUB_245(META_DEC(x))
#define INTERNAL_META_SUB_247(x) INTERNAL_META_SUB_246(META_DEC(x))
#define INTERNAL_META_SUB_248(x) INTERNAL_META_SUB_247(META_DEC(x))
#define INTERNAL_META_SUB_249(x) INTERNAL_META_SUB_248(META_DEC(x))
#define INTERNAL_META_SUB_250(x) INTERNAL_META_SUB_249(META_DEC(x))
#define INTERNAL_META_SUB_251(x) INTERNAL_META_SUB_250(META_DEC(x))
#define INTERNAL_META_SUB_252(x) INTERNAL_META_SUB_251(META_DEC(x))
#define INTERNAL_META_SUB_253(x) INTERNAL_META_SUB_252(META_DEC(x))
#define INTERNAL_META_SUB_254(x) INTERNAL_META_SUB_253(META_DEC(x))
#define INTERNAL_META_SUB_255(x) INTERNAL_META_SUB_254(META_DEC(x))

#define META_PRIMITIVE_CAT(l, r) l ## r
#define META_CAT(l, r) META_PRIMITIVE_CAT(l, r)

#define INTERNAL_META_SUB(x, y) META_CAT(INTERNAL_META_SUB_,y)(x)