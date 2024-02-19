#pragma once

#define META_RESERVE(n, ...) INTERNAL_META_RESERVE(n, __VA_ARGS__)


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define META_EXPAND(...) __VA_ARGS__

#define INTERNAL_META_RESERVE_0(...)
#define INTERNAL_META_RESERVE_1(x, ...) x
#define INTERNAL_META_RESERVE_2(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_1(__VA_ARGS__))
#define INTERNAL_META_RESERVE_3(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_2(__VA_ARGS__))
#define INTERNAL_META_RESERVE_4(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_3(__VA_ARGS__))
#define INTERNAL_META_RESERVE_5(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_4(__VA_ARGS__))
#define INTERNAL_META_RESERVE_6(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_5(__VA_ARGS__))
#define INTERNAL_META_RESERVE_7(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_6(__VA_ARGS__))
#define INTERNAL_META_RESERVE_8(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_7(__VA_ARGS__))
#define INTERNAL_META_RESERVE_9(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_8(__VA_ARGS__))
#define INTERNAL_META_RESERVE_10(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_9(__VA_ARGS__))
#define INTERNAL_META_RESERVE_11(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_10(__VA_ARGS__))
#define INTERNAL_META_RESERVE_12(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_11(__VA_ARGS__))
#define INTERNAL_META_RESERVE_13(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_12(__VA_ARGS__))
#define INTERNAL_META_RESERVE_14(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_13(__VA_ARGS__))
#define INTERNAL_META_RESERVE_15(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_14(__VA_ARGS__))
#define INTERNAL_META_RESERVE_16(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_15(__VA_ARGS__))
#define INTERNAL_META_RESERVE_17(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_16(__VA_ARGS__))
#define INTERNAL_META_RESERVE_18(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_17(__VA_ARGS__))
#define INTERNAL_META_RESERVE_19(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_18(__VA_ARGS__))
#define INTERNAL_META_RESERVE_20(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_19(__VA_ARGS__))
#define INTERNAL_META_RESERVE_21(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_20(__VA_ARGS__))
#define INTERNAL_META_RESERVE_22(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_21(__VA_ARGS__))
#define INTERNAL_META_RESERVE_23(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_22(__VA_ARGS__))
#define INTERNAL_META_RESERVE_24(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_23(__VA_ARGS__))
#define INTERNAL_META_RESERVE_25(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_24(__VA_ARGS__))
#define INTERNAL_META_RESERVE_26(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_25(__VA_ARGS__))
#define INTERNAL_META_RESERVE_27(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_26(__VA_ARGS__))
#define INTERNAL_META_RESERVE_28(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_27(__VA_ARGS__))
#define INTERNAL_META_RESERVE_29(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_28(__VA_ARGS__))
#define INTERNAL_META_RESERVE_30(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_29(__VA_ARGS__))
#define INTERNAL_META_RESERVE_31(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_30(__VA_ARGS__))
#define INTERNAL_META_RESERVE_32(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_31(__VA_ARGS__))
#define INTERNAL_META_RESERVE_33(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_32(__VA_ARGS__))
#define INTERNAL_META_RESERVE_34(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_33(__VA_ARGS__))
#define INTERNAL_META_RESERVE_35(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_34(__VA_ARGS__))
#define INTERNAL_META_RESERVE_36(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_35(__VA_ARGS__))
#define INTERNAL_META_RESERVE_37(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_36(__VA_ARGS__))
#define INTERNAL_META_RESERVE_38(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_37(__VA_ARGS__))
#define INTERNAL_META_RESERVE_39(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_38(__VA_ARGS__))
#define INTERNAL_META_RESERVE_40(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_39(__VA_ARGS__))
#define INTERNAL_META_RESERVE_41(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_40(__VA_ARGS__))
#define INTERNAL_META_RESERVE_42(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_41(__VA_ARGS__))
#define INTERNAL_META_RESERVE_43(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_42(__VA_ARGS__))
#define INTERNAL_META_RESERVE_44(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_43(__VA_ARGS__))
#define INTERNAL_META_RESERVE_45(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_44(__VA_ARGS__))
#define INTERNAL_META_RESERVE_46(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_45(__VA_ARGS__))
#define INTERNAL_META_RESERVE_47(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_46(__VA_ARGS__))
#define INTERNAL_META_RESERVE_48(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_47(__VA_ARGS__))
#define INTERNAL_META_RESERVE_49(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_48(__VA_ARGS__))
#define INTERNAL_META_RESERVE_50(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_49(__VA_ARGS__))
#define INTERNAL_META_RESERVE_51(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_50(__VA_ARGS__))
#define INTERNAL_META_RESERVE_52(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_51(__VA_ARGS__))
#define INTERNAL_META_RESERVE_53(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_52(__VA_ARGS__))
#define INTERNAL_META_RESERVE_54(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_53(__VA_ARGS__))
#define INTERNAL_META_RESERVE_55(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_54(__VA_ARGS__))
#define INTERNAL_META_RESERVE_56(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_55(__VA_ARGS__))
#define INTERNAL_META_RESERVE_57(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_56(__VA_ARGS__))
#define INTERNAL_META_RESERVE_58(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_57(__VA_ARGS__))
#define INTERNAL_META_RESERVE_59(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_58(__VA_ARGS__))
#define INTERNAL_META_RESERVE_60(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_59(__VA_ARGS__))
#define INTERNAL_META_RESERVE_61(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_60(__VA_ARGS__))
#define INTERNAL_META_RESERVE_62(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_61(__VA_ARGS__))
#define INTERNAL_META_RESERVE_63(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_62(__VA_ARGS__))
#define INTERNAL_META_RESERVE_64(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_63(__VA_ARGS__))
#define INTERNAL_META_RESERVE_65(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_64(__VA_ARGS__))
#define INTERNAL_META_RESERVE_66(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_65(__VA_ARGS__))
#define INTERNAL_META_RESERVE_67(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_66(__VA_ARGS__))
#define INTERNAL_META_RESERVE_68(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_67(__VA_ARGS__))
#define INTERNAL_META_RESERVE_69(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_68(__VA_ARGS__))
#define INTERNAL_META_RESERVE_70(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_69(__VA_ARGS__))
#define INTERNAL_META_RESERVE_71(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_70(__VA_ARGS__))
#define INTERNAL_META_RESERVE_72(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_71(__VA_ARGS__))
#define INTERNAL_META_RESERVE_73(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_72(__VA_ARGS__))
#define INTERNAL_META_RESERVE_74(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_73(__VA_ARGS__))
#define INTERNAL_META_RESERVE_75(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_74(__VA_ARGS__))
#define INTERNAL_META_RESERVE_76(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_75(__VA_ARGS__))
#define INTERNAL_META_RESERVE_77(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_76(__VA_ARGS__))
#define INTERNAL_META_RESERVE_78(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_77(__VA_ARGS__))
#define INTERNAL_META_RESERVE_79(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_78(__VA_ARGS__))
#define INTERNAL_META_RESERVE_80(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_79(__VA_ARGS__))
#define INTERNAL_META_RESERVE_81(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_80(__VA_ARGS__))
#define INTERNAL_META_RESERVE_82(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_81(__VA_ARGS__))
#define INTERNAL_META_RESERVE_83(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_82(__VA_ARGS__))
#define INTERNAL_META_RESERVE_84(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_83(__VA_ARGS__))
#define INTERNAL_META_RESERVE_85(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_84(__VA_ARGS__))
#define INTERNAL_META_RESERVE_86(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_85(__VA_ARGS__))
#define INTERNAL_META_RESERVE_87(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_86(__VA_ARGS__))
#define INTERNAL_META_RESERVE_88(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_87(__VA_ARGS__))
#define INTERNAL_META_RESERVE_89(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_88(__VA_ARGS__))
#define INTERNAL_META_RESERVE_90(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_89(__VA_ARGS__))
#define INTERNAL_META_RESERVE_91(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_90(__VA_ARGS__))
#define INTERNAL_META_RESERVE_92(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_91(__VA_ARGS__))
#define INTERNAL_META_RESERVE_93(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_92(__VA_ARGS__))
#define INTERNAL_META_RESERVE_94(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_93(__VA_ARGS__))
#define INTERNAL_META_RESERVE_95(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_94(__VA_ARGS__))
#define INTERNAL_META_RESERVE_96(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_95(__VA_ARGS__))
#define INTERNAL_META_RESERVE_97(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_96(__VA_ARGS__))
#define INTERNAL_META_RESERVE_98(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_97(__VA_ARGS__))
#define INTERNAL_META_RESERVE_99(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_98(__VA_ARGS__))
#define INTERNAL_META_RESERVE_100(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_99(__VA_ARGS__))
#define INTERNAL_META_RESERVE_101(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_100(__VA_ARGS__))
#define INTERNAL_META_RESERVE_102(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_101(__VA_ARGS__))
#define INTERNAL_META_RESERVE_103(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_102(__VA_ARGS__))
#define INTERNAL_META_RESERVE_104(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_103(__VA_ARGS__))
#define INTERNAL_META_RESERVE_105(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_104(__VA_ARGS__))
#define INTERNAL_META_RESERVE_106(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_105(__VA_ARGS__))
#define INTERNAL_META_RESERVE_107(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_106(__VA_ARGS__))
#define INTERNAL_META_RESERVE_108(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_107(__VA_ARGS__))
#define INTERNAL_META_RESERVE_109(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_108(__VA_ARGS__))
#define INTERNAL_META_RESERVE_110(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_109(__VA_ARGS__))
#define INTERNAL_META_RESERVE_111(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_110(__VA_ARGS__))
#define INTERNAL_META_RESERVE_112(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_111(__VA_ARGS__))
#define INTERNAL_META_RESERVE_113(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_112(__VA_ARGS__))
#define INTERNAL_META_RESERVE_114(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_113(__VA_ARGS__))
#define INTERNAL_META_RESERVE_115(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_114(__VA_ARGS__))
#define INTERNAL_META_RESERVE_116(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_115(__VA_ARGS__))
#define INTERNAL_META_RESERVE_117(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_116(__VA_ARGS__))
#define INTERNAL_META_RESERVE_118(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_117(__VA_ARGS__))
#define INTERNAL_META_RESERVE_119(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_118(__VA_ARGS__))
#define INTERNAL_META_RESERVE_120(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_119(__VA_ARGS__))
#define INTERNAL_META_RESERVE_121(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_120(__VA_ARGS__))
#define INTERNAL_META_RESERVE_122(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_121(__VA_ARGS__))
#define INTERNAL_META_RESERVE_123(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_122(__VA_ARGS__))
#define INTERNAL_META_RESERVE_124(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_123(__VA_ARGS__))
#define INTERNAL_META_RESERVE_125(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_124(__VA_ARGS__))
#define INTERNAL_META_RESERVE_126(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_125(__VA_ARGS__))
#define INTERNAL_META_RESERVE_127(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_126(__VA_ARGS__))
#define INTERNAL_META_RESERVE_128(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_127(__VA_ARGS__))
#define INTERNAL_META_RESERVE_129(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_128(__VA_ARGS__))
#define INTERNAL_META_RESERVE_130(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_129(__VA_ARGS__))
#define INTERNAL_META_RESERVE_131(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_130(__VA_ARGS__))
#define INTERNAL_META_RESERVE_132(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_131(__VA_ARGS__))
#define INTERNAL_META_RESERVE_133(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_132(__VA_ARGS__))
#define INTERNAL_META_RESERVE_134(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_133(__VA_ARGS__))
#define INTERNAL_META_RESERVE_135(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_134(__VA_ARGS__))
#define INTERNAL_META_RESERVE_136(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_135(__VA_ARGS__))
#define INTERNAL_META_RESERVE_137(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_136(__VA_ARGS__))
#define INTERNAL_META_RESERVE_138(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_137(__VA_ARGS__))
#define INTERNAL_META_RESERVE_139(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_138(__VA_ARGS__))
#define INTERNAL_META_RESERVE_140(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_139(__VA_ARGS__))
#define INTERNAL_META_RESERVE_141(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_140(__VA_ARGS__))
#define INTERNAL_META_RESERVE_142(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_141(__VA_ARGS__))
#define INTERNAL_META_RESERVE_143(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_142(__VA_ARGS__))
#define INTERNAL_META_RESERVE_144(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_143(__VA_ARGS__))
#define INTERNAL_META_RESERVE_145(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_144(__VA_ARGS__))
#define INTERNAL_META_RESERVE_146(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_145(__VA_ARGS__))
#define INTERNAL_META_RESERVE_147(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_146(__VA_ARGS__))
#define INTERNAL_META_RESERVE_148(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_147(__VA_ARGS__))
#define INTERNAL_META_RESERVE_149(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_148(__VA_ARGS__))
#define INTERNAL_META_RESERVE_150(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_149(__VA_ARGS__))
#define INTERNAL_META_RESERVE_151(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_150(__VA_ARGS__))
#define INTERNAL_META_RESERVE_152(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_151(__VA_ARGS__))
#define INTERNAL_META_RESERVE_153(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_152(__VA_ARGS__))
#define INTERNAL_META_RESERVE_154(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_153(__VA_ARGS__))
#define INTERNAL_META_RESERVE_155(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_154(__VA_ARGS__))
#define INTERNAL_META_RESERVE_156(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_155(__VA_ARGS__))
#define INTERNAL_META_RESERVE_157(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_156(__VA_ARGS__))
#define INTERNAL_META_RESERVE_158(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_157(__VA_ARGS__))
#define INTERNAL_META_RESERVE_159(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_158(__VA_ARGS__))
#define INTERNAL_META_RESERVE_160(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_159(__VA_ARGS__))
#define INTERNAL_META_RESERVE_161(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_160(__VA_ARGS__))
#define INTERNAL_META_RESERVE_162(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_161(__VA_ARGS__))
#define INTERNAL_META_RESERVE_163(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_162(__VA_ARGS__))
#define INTERNAL_META_RESERVE_164(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_163(__VA_ARGS__))
#define INTERNAL_META_RESERVE_165(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_164(__VA_ARGS__))
#define INTERNAL_META_RESERVE_166(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_165(__VA_ARGS__))
#define INTERNAL_META_RESERVE_167(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_166(__VA_ARGS__))
#define INTERNAL_META_RESERVE_168(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_167(__VA_ARGS__))
#define INTERNAL_META_RESERVE_169(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_168(__VA_ARGS__))
#define INTERNAL_META_RESERVE_170(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_169(__VA_ARGS__))
#define INTERNAL_META_RESERVE_171(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_170(__VA_ARGS__))
#define INTERNAL_META_RESERVE_172(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_171(__VA_ARGS__))
#define INTERNAL_META_RESERVE_173(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_172(__VA_ARGS__))
#define INTERNAL_META_RESERVE_174(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_173(__VA_ARGS__))
#define INTERNAL_META_RESERVE_175(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_174(__VA_ARGS__))
#define INTERNAL_META_RESERVE_176(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_175(__VA_ARGS__))
#define INTERNAL_META_RESERVE_177(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_176(__VA_ARGS__))
#define INTERNAL_META_RESERVE_178(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_177(__VA_ARGS__))
#define INTERNAL_META_RESERVE_179(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_178(__VA_ARGS__))
#define INTERNAL_META_RESERVE_180(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_179(__VA_ARGS__))
#define INTERNAL_META_RESERVE_181(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_180(__VA_ARGS__))
#define INTERNAL_META_RESERVE_182(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_181(__VA_ARGS__))
#define INTERNAL_META_RESERVE_183(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_182(__VA_ARGS__))
#define INTERNAL_META_RESERVE_184(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_183(__VA_ARGS__))
#define INTERNAL_META_RESERVE_185(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_184(__VA_ARGS__))
#define INTERNAL_META_RESERVE_186(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_185(__VA_ARGS__))
#define INTERNAL_META_RESERVE_187(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_186(__VA_ARGS__))
#define INTERNAL_META_RESERVE_188(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_187(__VA_ARGS__))
#define INTERNAL_META_RESERVE_189(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_188(__VA_ARGS__))
#define INTERNAL_META_RESERVE_190(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_189(__VA_ARGS__))
#define INTERNAL_META_RESERVE_191(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_190(__VA_ARGS__))
#define INTERNAL_META_RESERVE_192(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_191(__VA_ARGS__))
#define INTERNAL_META_RESERVE_193(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_192(__VA_ARGS__))
#define INTERNAL_META_RESERVE_194(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_193(__VA_ARGS__))
#define INTERNAL_META_RESERVE_195(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_194(__VA_ARGS__))
#define INTERNAL_META_RESERVE_196(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_195(__VA_ARGS__))
#define INTERNAL_META_RESERVE_197(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_196(__VA_ARGS__))
#define INTERNAL_META_RESERVE_198(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_197(__VA_ARGS__))
#define INTERNAL_META_RESERVE_199(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_198(__VA_ARGS__))
#define INTERNAL_META_RESERVE_200(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_199(__VA_ARGS__))
#define INTERNAL_META_RESERVE_201(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_200(__VA_ARGS__))
#define INTERNAL_META_RESERVE_202(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_201(__VA_ARGS__))
#define INTERNAL_META_RESERVE_203(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_202(__VA_ARGS__))
#define INTERNAL_META_RESERVE_204(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_203(__VA_ARGS__))
#define INTERNAL_META_RESERVE_205(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_204(__VA_ARGS__))
#define INTERNAL_META_RESERVE_206(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_205(__VA_ARGS__))
#define INTERNAL_META_RESERVE_207(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_206(__VA_ARGS__))
#define INTERNAL_META_RESERVE_208(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_207(__VA_ARGS__))
#define INTERNAL_META_RESERVE_209(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_208(__VA_ARGS__))
#define INTERNAL_META_RESERVE_210(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_209(__VA_ARGS__))
#define INTERNAL_META_RESERVE_211(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_210(__VA_ARGS__))
#define INTERNAL_META_RESERVE_212(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_211(__VA_ARGS__))
#define INTERNAL_META_RESERVE_213(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_212(__VA_ARGS__))
#define INTERNAL_META_RESERVE_214(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_213(__VA_ARGS__))
#define INTERNAL_META_RESERVE_215(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_214(__VA_ARGS__))
#define INTERNAL_META_RESERVE_216(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_215(__VA_ARGS__))
#define INTERNAL_META_RESERVE_217(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_216(__VA_ARGS__))
#define INTERNAL_META_RESERVE_218(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_217(__VA_ARGS__))
#define INTERNAL_META_RESERVE_219(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_218(__VA_ARGS__))
#define INTERNAL_META_RESERVE_220(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_219(__VA_ARGS__))
#define INTERNAL_META_RESERVE_221(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_220(__VA_ARGS__))
#define INTERNAL_META_RESERVE_222(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_221(__VA_ARGS__))
#define INTERNAL_META_RESERVE_223(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_222(__VA_ARGS__))
#define INTERNAL_META_RESERVE_224(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_223(__VA_ARGS__))
#define INTERNAL_META_RESERVE_225(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_224(__VA_ARGS__))
#define INTERNAL_META_RESERVE_226(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_225(__VA_ARGS__))
#define INTERNAL_META_RESERVE_227(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_226(__VA_ARGS__))
#define INTERNAL_META_RESERVE_228(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_227(__VA_ARGS__))
#define INTERNAL_META_RESERVE_229(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_228(__VA_ARGS__))
#define INTERNAL_META_RESERVE_230(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_229(__VA_ARGS__))
#define INTERNAL_META_RESERVE_231(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_230(__VA_ARGS__))
#define INTERNAL_META_RESERVE_232(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_231(__VA_ARGS__))
#define INTERNAL_META_RESERVE_233(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_232(__VA_ARGS__))
#define INTERNAL_META_RESERVE_234(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_233(__VA_ARGS__))
#define INTERNAL_META_RESERVE_235(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_234(__VA_ARGS__))
#define INTERNAL_META_RESERVE_236(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_235(__VA_ARGS__))
#define INTERNAL_META_RESERVE_237(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_236(__VA_ARGS__))
#define INTERNAL_META_RESERVE_238(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_237(__VA_ARGS__))
#define INTERNAL_META_RESERVE_239(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_238(__VA_ARGS__))
#define INTERNAL_META_RESERVE_240(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_239(__VA_ARGS__))
#define INTERNAL_META_RESERVE_241(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_240(__VA_ARGS__))
#define INTERNAL_META_RESERVE_242(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_241(__VA_ARGS__))
#define INTERNAL_META_RESERVE_243(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_242(__VA_ARGS__))
#define INTERNAL_META_RESERVE_244(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_243(__VA_ARGS__))
#define INTERNAL_META_RESERVE_245(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_244(__VA_ARGS__))
#define INTERNAL_META_RESERVE_246(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_245(__VA_ARGS__))
#define INTERNAL_META_RESERVE_247(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_246(__VA_ARGS__))
#define INTERNAL_META_RESERVE_248(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_247(__VA_ARGS__))
#define INTERNAL_META_RESERVE_249(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_248(__VA_ARGS__))
#define INTERNAL_META_RESERVE_250(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_249(__VA_ARGS__))
#define INTERNAL_META_RESERVE_251(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_250(__VA_ARGS__))
#define INTERNAL_META_RESERVE_252(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_251(__VA_ARGS__))
#define INTERNAL_META_RESERVE_253(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_252(__VA_ARGS__))
#define INTERNAL_META_RESERVE_254(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_253(__VA_ARGS__))
#define INTERNAL_META_RESERVE_255(x, ...) x, META_EXPAND(INTERNAL_META_RESERVE_254(__VA_ARGS__))

#define INTERNAL_META_RESERVE(n, ...) META_EXPAND(INTERNAL_META_RESERVE_##n(__VA_ARGS__))