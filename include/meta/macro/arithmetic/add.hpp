#pragma once
#include <meta/macro/arithmetic/increment.hpp>

#define META_ADD(x, y) META_CAT(_META_ADD_, x)(y)


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define _META_ADD_0(x) x
#define _META_ADD_1(x) _META_ADD_0(META_INC(x))
#define _META_ADD_2(x) _META_ADD_1(META_INC(x))
#define _META_ADD_3(x) _META_ADD_2(META_INC(x))
#define _META_ADD_4(x) _META_ADD_3(META_INC(x))
#define _META_ADD_5(x) _META_ADD_4(META_INC(x))
#define _META_ADD_6(x) _META_ADD_5(META_INC(x))
#define _META_ADD_7(x) _META_ADD_6(META_INC(x))
#define _META_ADD_8(x) _META_ADD_7(META_INC(x))
#define _META_ADD_9(x) _META_ADD_8(META_INC(x))
#define _META_ADD_10(x) _META_ADD_9(META_INC(x))
#define _META_ADD_11(x) _META_ADD_10(META_INC(x))
#define _META_ADD_12(x) _META_ADD_11(META_INC(x))
#define _META_ADD_13(x) _META_ADD_12(META_INC(x))
#define _META_ADD_14(x) _META_ADD_13(META_INC(x))
#define _META_ADD_15(x) _META_ADD_14(META_INC(x))
#define _META_ADD_16(x) _META_ADD_15(META_INC(x))
#define _META_ADD_17(x) _META_ADD_16(META_INC(x))
#define _META_ADD_18(x) _META_ADD_17(META_INC(x))
#define _META_ADD_19(x) _META_ADD_18(META_INC(x))
#define _META_ADD_20(x) _META_ADD_19(META_INC(x))
#define _META_ADD_21(x) _META_ADD_20(META_INC(x))
#define _META_ADD_22(x) _META_ADD_21(META_INC(x))
#define _META_ADD_23(x) _META_ADD_22(META_INC(x))
#define _META_ADD_24(x) _META_ADD_23(META_INC(x))
#define _META_ADD_25(x) _META_ADD_24(META_INC(x))
#define _META_ADD_26(x) _META_ADD_25(META_INC(x))
#define _META_ADD_27(x) _META_ADD_26(META_INC(x))
#define _META_ADD_28(x) _META_ADD_27(META_INC(x))
#define _META_ADD_29(x) _META_ADD_28(META_INC(x))
#define _META_ADD_30(x) _META_ADD_29(META_INC(x))
#define _META_ADD_31(x) _META_ADD_30(META_INC(x))
#define _META_ADD_32(x) _META_ADD_31(META_INC(x))
#define _META_ADD_33(x) _META_ADD_32(META_INC(x))
#define _META_ADD_34(x) _META_ADD_33(META_INC(x))
#define _META_ADD_35(x) _META_ADD_34(META_INC(x))
#define _META_ADD_36(x) _META_ADD_35(META_INC(x))
#define _META_ADD_37(x) _META_ADD_36(META_INC(x))
#define _META_ADD_38(x) _META_ADD_37(META_INC(x))
#define _META_ADD_39(x) _META_ADD_38(META_INC(x))
#define _META_ADD_40(x) _META_ADD_39(META_INC(x))
#define _META_ADD_41(x) _META_ADD_40(META_INC(x))
#define _META_ADD_42(x) _META_ADD_41(META_INC(x))
#define _META_ADD_43(x) _META_ADD_42(META_INC(x))
#define _META_ADD_44(x) _META_ADD_43(META_INC(x))
#define _META_ADD_45(x) _META_ADD_44(META_INC(x))
#define _META_ADD_46(x) _META_ADD_45(META_INC(x))
#define _META_ADD_47(x) _META_ADD_46(META_INC(x))
#define _META_ADD_48(x) _META_ADD_47(META_INC(x))
#define _META_ADD_49(x) _META_ADD_48(META_INC(x))
#define _META_ADD_50(x) _META_ADD_49(META_INC(x))
#define _META_ADD_51(x) _META_ADD_50(META_INC(x))
#define _META_ADD_52(x) _META_ADD_51(META_INC(x))
#define _META_ADD_53(x) _META_ADD_52(META_INC(x))
#define _META_ADD_54(x) _META_ADD_53(META_INC(x))
#define _META_ADD_55(x) _META_ADD_54(META_INC(x))
#define _META_ADD_56(x) _META_ADD_55(META_INC(x))
#define _META_ADD_57(x) _META_ADD_56(META_INC(x))
#define _META_ADD_58(x) _META_ADD_57(META_INC(x))
#define _META_ADD_59(x) _META_ADD_58(META_INC(x))
#define _META_ADD_60(x) _META_ADD_59(META_INC(x))
#define _META_ADD_61(x) _META_ADD_60(META_INC(x))
#define _META_ADD_62(x) _META_ADD_61(META_INC(x))
#define _META_ADD_63(x) _META_ADD_62(META_INC(x))
#define _META_ADD_64(x) _META_ADD_63(META_INC(x))
#define _META_ADD_65(x) _META_ADD_64(META_INC(x))
#define _META_ADD_66(x) _META_ADD_65(META_INC(x))
#define _META_ADD_67(x) _META_ADD_66(META_INC(x))
#define _META_ADD_68(x) _META_ADD_67(META_INC(x))
#define _META_ADD_69(x) _META_ADD_68(META_INC(x))
#define _META_ADD_70(x) _META_ADD_69(META_INC(x))
#define _META_ADD_71(x) _META_ADD_70(META_INC(x))
#define _META_ADD_72(x) _META_ADD_71(META_INC(x))
#define _META_ADD_73(x) _META_ADD_72(META_INC(x))
#define _META_ADD_74(x) _META_ADD_73(META_INC(x))
#define _META_ADD_75(x) _META_ADD_74(META_INC(x))
#define _META_ADD_76(x) _META_ADD_75(META_INC(x))
#define _META_ADD_77(x) _META_ADD_76(META_INC(x))
#define _META_ADD_78(x) _META_ADD_77(META_INC(x))
#define _META_ADD_79(x) _META_ADD_78(META_INC(x))
#define _META_ADD_80(x) _META_ADD_79(META_INC(x))
#define _META_ADD_81(x) _META_ADD_80(META_INC(x))
#define _META_ADD_82(x) _META_ADD_81(META_INC(x))
#define _META_ADD_83(x) _META_ADD_82(META_INC(x))
#define _META_ADD_84(x) _META_ADD_83(META_INC(x))
#define _META_ADD_85(x) _META_ADD_84(META_INC(x))
#define _META_ADD_86(x) _META_ADD_85(META_INC(x))
#define _META_ADD_87(x) _META_ADD_86(META_INC(x))
#define _META_ADD_88(x) _META_ADD_87(META_INC(x))
#define _META_ADD_89(x) _META_ADD_88(META_INC(x))
#define _META_ADD_90(x) _META_ADD_89(META_INC(x))
#define _META_ADD_91(x) _META_ADD_90(META_INC(x))
#define _META_ADD_92(x) _META_ADD_91(META_INC(x))
#define _META_ADD_93(x) _META_ADD_92(META_INC(x))
#define _META_ADD_94(x) _META_ADD_93(META_INC(x))
#define _META_ADD_95(x) _META_ADD_94(META_INC(x))
#define _META_ADD_96(x) _META_ADD_95(META_INC(x))
#define _META_ADD_97(x) _META_ADD_96(META_INC(x))
#define _META_ADD_98(x) _META_ADD_97(META_INC(x))
#define _META_ADD_99(x) _META_ADD_98(META_INC(x))
#define _META_ADD_100(x) _META_ADD_99(META_INC(x))
#define _META_ADD_101(x) _META_ADD_100(META_INC(x))
#define _META_ADD_102(x) _META_ADD_101(META_INC(x))
#define _META_ADD_103(x) _META_ADD_102(META_INC(x))
#define _META_ADD_104(x) _META_ADD_103(META_INC(x))
#define _META_ADD_105(x) _META_ADD_104(META_INC(x))
#define _META_ADD_106(x) _META_ADD_105(META_INC(x))
#define _META_ADD_107(x) _META_ADD_106(META_INC(x))
#define _META_ADD_108(x) _META_ADD_107(META_INC(x))
#define _META_ADD_109(x) _META_ADD_108(META_INC(x))
#define _META_ADD_110(x) _META_ADD_109(META_INC(x))
#define _META_ADD_111(x) _META_ADD_110(META_INC(x))
#define _META_ADD_112(x) _META_ADD_111(META_INC(x))
#define _META_ADD_113(x) _META_ADD_112(META_INC(x))
#define _META_ADD_114(x) _META_ADD_113(META_INC(x))
#define _META_ADD_115(x) _META_ADD_114(META_INC(x))
#define _META_ADD_116(x) _META_ADD_115(META_INC(x))
#define _META_ADD_117(x) _META_ADD_116(META_INC(x))
#define _META_ADD_118(x) _META_ADD_117(META_INC(x))
#define _META_ADD_119(x) _META_ADD_118(META_INC(x))
#define _META_ADD_120(x) _META_ADD_119(META_INC(x))
#define _META_ADD_121(x) _META_ADD_120(META_INC(x))
#define _META_ADD_122(x) _META_ADD_121(META_INC(x))
#define _META_ADD_123(x) _META_ADD_122(META_INC(x))
#define _META_ADD_124(x) _META_ADD_123(META_INC(x))
#define _META_ADD_125(x) _META_ADD_124(META_INC(x))
#define _META_ADD_126(x) _META_ADD_125(META_INC(x))
#define _META_ADD_127(x) _META_ADD_126(META_INC(x))
#define _META_ADD_128(x) _META_ADD_127(META_INC(x))
#define _META_ADD_129(x) _META_ADD_128(META_INC(x))
#define _META_ADD_130(x) _META_ADD_129(META_INC(x))
#define _META_ADD_131(x) _META_ADD_130(META_INC(x))
#define _META_ADD_132(x) _META_ADD_131(META_INC(x))
#define _META_ADD_133(x) _META_ADD_132(META_INC(x))
#define _META_ADD_134(x) _META_ADD_133(META_INC(x))
#define _META_ADD_135(x) _META_ADD_134(META_INC(x))
#define _META_ADD_136(x) _META_ADD_135(META_INC(x))
#define _META_ADD_137(x) _META_ADD_136(META_INC(x))
#define _META_ADD_138(x) _META_ADD_137(META_INC(x))
#define _META_ADD_139(x) _META_ADD_138(META_INC(x))
#define _META_ADD_140(x) _META_ADD_139(META_INC(x))
#define _META_ADD_141(x) _META_ADD_140(META_INC(x))
#define _META_ADD_142(x) _META_ADD_141(META_INC(x))
#define _META_ADD_143(x) _META_ADD_142(META_INC(x))
#define _META_ADD_144(x) _META_ADD_143(META_INC(x))
#define _META_ADD_145(x) _META_ADD_144(META_INC(x))
#define _META_ADD_146(x) _META_ADD_145(META_INC(x))
#define _META_ADD_147(x) _META_ADD_146(META_INC(x))
#define _META_ADD_148(x) _META_ADD_147(META_INC(x))
#define _META_ADD_149(x) _META_ADD_148(META_INC(x))
#define _META_ADD_150(x) _META_ADD_149(META_INC(x))
#define _META_ADD_151(x) _META_ADD_150(META_INC(x))
#define _META_ADD_152(x) _META_ADD_151(META_INC(x))
#define _META_ADD_153(x) _META_ADD_152(META_INC(x))
#define _META_ADD_154(x) _META_ADD_153(META_INC(x))
#define _META_ADD_155(x) _META_ADD_154(META_INC(x))
#define _META_ADD_156(x) _META_ADD_155(META_INC(x))
#define _META_ADD_157(x) _META_ADD_156(META_INC(x))
#define _META_ADD_158(x) _META_ADD_157(META_INC(x))
#define _META_ADD_159(x) _META_ADD_158(META_INC(x))
#define _META_ADD_160(x) _META_ADD_159(META_INC(x))
#define _META_ADD_161(x) _META_ADD_160(META_INC(x))
#define _META_ADD_162(x) _META_ADD_161(META_INC(x))
#define _META_ADD_163(x) _META_ADD_162(META_INC(x))
#define _META_ADD_164(x) _META_ADD_163(META_INC(x))
#define _META_ADD_165(x) _META_ADD_164(META_INC(x))
#define _META_ADD_166(x) _META_ADD_165(META_INC(x))
#define _META_ADD_167(x) _META_ADD_166(META_INC(x))
#define _META_ADD_168(x) _META_ADD_167(META_INC(x))
#define _META_ADD_169(x) _META_ADD_168(META_INC(x))
#define _META_ADD_170(x) _META_ADD_169(META_INC(x))
#define _META_ADD_171(x) _META_ADD_170(META_INC(x))
#define _META_ADD_172(x) _META_ADD_171(META_INC(x))
#define _META_ADD_173(x) _META_ADD_172(META_INC(x))
#define _META_ADD_174(x) _META_ADD_173(META_INC(x))
#define _META_ADD_175(x) _META_ADD_174(META_INC(x))
#define _META_ADD_176(x) _META_ADD_175(META_INC(x))
#define _META_ADD_177(x) _META_ADD_176(META_INC(x))
#define _META_ADD_178(x) _META_ADD_177(META_INC(x))
#define _META_ADD_179(x) _META_ADD_178(META_INC(x))
#define _META_ADD_180(x) _META_ADD_179(META_INC(x))
#define _META_ADD_181(x) _META_ADD_180(META_INC(x))
#define _META_ADD_182(x) _META_ADD_181(META_INC(x))
#define _META_ADD_183(x) _META_ADD_182(META_INC(x))
#define _META_ADD_184(x) _META_ADD_183(META_INC(x))
#define _META_ADD_185(x) _META_ADD_184(META_INC(x))
#define _META_ADD_186(x) _META_ADD_185(META_INC(x))
#define _META_ADD_187(x) _META_ADD_186(META_INC(x))
#define _META_ADD_188(x) _META_ADD_187(META_INC(x))
#define _META_ADD_189(x) _META_ADD_188(META_INC(x))
#define _META_ADD_190(x) _META_ADD_189(META_INC(x))
#define _META_ADD_191(x) _META_ADD_190(META_INC(x))
#define _META_ADD_192(x) _META_ADD_191(META_INC(x))
#define _META_ADD_193(x) _META_ADD_192(META_INC(x))
#define _META_ADD_194(x) _META_ADD_193(META_INC(x))
#define _META_ADD_195(x) _META_ADD_194(META_INC(x))
#define _META_ADD_196(x) _META_ADD_195(META_INC(x))
#define _META_ADD_197(x) _META_ADD_196(META_INC(x))
#define _META_ADD_198(x) _META_ADD_197(META_INC(x))
#define _META_ADD_199(x) _META_ADD_198(META_INC(x))
#define _META_ADD_200(x) _META_ADD_199(META_INC(x))
#define _META_ADD_201(x) _META_ADD_200(META_INC(x))
#define _META_ADD_202(x) _META_ADD_201(META_INC(x))
#define _META_ADD_203(x) _META_ADD_202(META_INC(x))
#define _META_ADD_204(x) _META_ADD_203(META_INC(x))
#define _META_ADD_205(x) _META_ADD_204(META_INC(x))
#define _META_ADD_206(x) _META_ADD_205(META_INC(x))
#define _META_ADD_207(x) _META_ADD_206(META_INC(x))
#define _META_ADD_208(x) _META_ADD_207(META_INC(x))
#define _META_ADD_209(x) _META_ADD_208(META_INC(x))
#define _META_ADD_210(x) _META_ADD_209(META_INC(x))
#define _META_ADD_211(x) _META_ADD_210(META_INC(x))
#define _META_ADD_212(x) _META_ADD_211(META_INC(x))
#define _META_ADD_213(x) _META_ADD_212(META_INC(x))
#define _META_ADD_214(x) _META_ADD_213(META_INC(x))
#define _META_ADD_215(x) _META_ADD_214(META_INC(x))
#define _META_ADD_216(x) _META_ADD_215(META_INC(x))
#define _META_ADD_217(x) _META_ADD_216(META_INC(x))
#define _META_ADD_218(x) _META_ADD_217(META_INC(x))
#define _META_ADD_219(x) _META_ADD_218(META_INC(x))
#define _META_ADD_220(x) _META_ADD_219(META_INC(x))
#define _META_ADD_221(x) _META_ADD_220(META_INC(x))
#define _META_ADD_222(x) _META_ADD_221(META_INC(x))
#define _META_ADD_223(x) _META_ADD_222(META_INC(x))
#define _META_ADD_224(x) _META_ADD_223(META_INC(x))
#define _META_ADD_225(x) _META_ADD_224(META_INC(x))
#define _META_ADD_226(x) _META_ADD_225(META_INC(x))
#define _META_ADD_227(x) _META_ADD_226(META_INC(x))
#define _META_ADD_228(x) _META_ADD_227(META_INC(x))
#define _META_ADD_229(x) _META_ADD_228(META_INC(x))
#define _META_ADD_230(x) _META_ADD_229(META_INC(x))
#define _META_ADD_231(x) _META_ADD_230(META_INC(x))
#define _META_ADD_232(x) _META_ADD_231(META_INC(x))
#define _META_ADD_233(x) _META_ADD_232(META_INC(x))
#define _META_ADD_234(x) _META_ADD_233(META_INC(x))
#define _META_ADD_235(x) _META_ADD_234(META_INC(x))
#define _META_ADD_236(x) _META_ADD_235(META_INC(x))
#define _META_ADD_237(x) _META_ADD_236(META_INC(x))
#define _META_ADD_238(x) _META_ADD_237(META_INC(x))
#define _META_ADD_239(x) _META_ADD_238(META_INC(x))
#define _META_ADD_240(x) _META_ADD_239(META_INC(x))
#define _META_ADD_241(x) _META_ADD_240(META_INC(x))
#define _META_ADD_242(x) _META_ADD_241(META_INC(x))
#define _META_ADD_243(x) _META_ADD_242(META_INC(x))
#define _META_ADD_244(x) _META_ADD_243(META_INC(x))
#define _META_ADD_245(x) _META_ADD_244(META_INC(x))
#define _META_ADD_246(x) _META_ADD_245(META_INC(x))
#define _META_ADD_247(x) _META_ADD_246(META_INC(x))
#define _META_ADD_248(x) _META_ADD_247(META_INC(x))
#define _META_ADD_249(x) _META_ADD_248(META_INC(x))
#define _META_ADD_250(x) _META_ADD_249(META_INC(x))
#define _META_ADD_251(x) _META_ADD_250(META_INC(x))
#define _META_ADD_252(x) _META_ADD_251(META_INC(x))
#define _META_ADD_253(x) _META_ADD_252(META_INC(x))
#define _META_ADD_254(x) _META_ADD_253(META_INC(x))
#define _META_ADD_255(x) _META_ADD_254(META_INC(x))