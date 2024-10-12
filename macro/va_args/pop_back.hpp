#pragma once
#include <meta/macro/va_args/count.hpp>

#define META_POP_BACK(...) _META_POP_BACK(__VA_ARGS__)



/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define META_EXPAND(...) __VA_ARGS__

#define _META_POP_BACK_0(...)
#define _META_POP_BACK_1(...)
#define _META_POP_BACK_2(x, ...) x
#define _META_POP_BACK_3(x, ...) x, META_EXPAND(_META_POP_BACK_2(__VA_ARGS__))
#define _META_POP_BACK_3(x, ...) x, META_EXPAND(_META_POP_BACK_2(__VA_ARGS__))
#define _META_POP_BACK_4(x, ...) x, META_EXPAND(_META_POP_BACK_3(__VA_ARGS__))
#define _META_POP_BACK_5(x, ...) x, META_EXPAND(_META_POP_BACK_4(__VA_ARGS__))
#define _META_POP_BACK_6(x, ...) x, META_EXPAND(_META_POP_BACK_5(__VA_ARGS__))
#define _META_POP_BACK_7(x, ...) x, META_EXPAND(_META_POP_BACK_6(__VA_ARGS__))
#define _META_POP_BACK_8(x, ...) x, META_EXPAND(_META_POP_BACK_7(__VA_ARGS__))
#define _META_POP_BACK_9(x, ...) x, META_EXPAND(_META_POP_BACK_8(__VA_ARGS__))
#define _META_POP_BACK_10(x, ...) x, META_EXPAND(_META_POP_BACK_9(__VA_ARGS__))
#define _META_POP_BACK_11(x, ...) x, META_EXPAND(_META_POP_BACK_10(__VA_ARGS__))
#define _META_POP_BACK_12(x, ...) x, META_EXPAND(_META_POP_BACK_11(__VA_ARGS__))
#define _META_POP_BACK_13(x, ...) x, META_EXPAND(_META_POP_BACK_12(__VA_ARGS__))
#define _META_POP_BACK_14(x, ...) x, META_EXPAND(_META_POP_BACK_13(__VA_ARGS__))
#define _META_POP_BACK_15(x, ...) x, META_EXPAND(_META_POP_BACK_14(__VA_ARGS__))
#define _META_POP_BACK_16(x, ...) x, META_EXPAND(_META_POP_BACK_15(__VA_ARGS__))
#define _META_POP_BACK_17(x, ...) x, META_EXPAND(_META_POP_BACK_16(__VA_ARGS__))
#define _META_POP_BACK_18(x, ...) x, META_EXPAND(_META_POP_BACK_17(__VA_ARGS__))
#define _META_POP_BACK_19(x, ...) x, META_EXPAND(_META_POP_BACK_18(__VA_ARGS__))
#define _META_POP_BACK_20(x, ...) x, META_EXPAND(_META_POP_BACK_19(__VA_ARGS__))
#define _META_POP_BACK_21(x, ...) x, META_EXPAND(_META_POP_BACK_20(__VA_ARGS__))
#define _META_POP_BACK_22(x, ...) x, META_EXPAND(_META_POP_BACK_21(__VA_ARGS__))
#define _META_POP_BACK_23(x, ...) x, META_EXPAND(_META_POP_BACK_22(__VA_ARGS__))
#define _META_POP_BACK_24(x, ...) x, META_EXPAND(_META_POP_BACK_23(__VA_ARGS__))
#define _META_POP_BACK_25(x, ...) x, META_EXPAND(_META_POP_BACK_24(__VA_ARGS__))
#define _META_POP_BACK_26(x, ...) x, META_EXPAND(_META_POP_BACK_25(__VA_ARGS__))
#define _META_POP_BACK_27(x, ...) x, META_EXPAND(_META_POP_BACK_26(__VA_ARGS__))
#define _META_POP_BACK_28(x, ...) x, META_EXPAND(_META_POP_BACK_27(__VA_ARGS__))
#define _META_POP_BACK_29(x, ...) x, META_EXPAND(_META_POP_BACK_28(__VA_ARGS__))
#define _META_POP_BACK_30(x, ...) x, META_EXPAND(_META_POP_BACK_29(__VA_ARGS__))
#define _META_POP_BACK_31(x, ...) x, META_EXPAND(_META_POP_BACK_30(__VA_ARGS__))
#define _META_POP_BACK_32(x, ...) x, META_EXPAND(_META_POP_BACK_31(__VA_ARGS__))
#define _META_POP_BACK_33(x, ...) x, META_EXPAND(_META_POP_BACK_32(__VA_ARGS__))
#define _META_POP_BACK_34(x, ...) x, META_EXPAND(_META_POP_BACK_33(__VA_ARGS__))
#define _META_POP_BACK_35(x, ...) x, META_EXPAND(_META_POP_BACK_34(__VA_ARGS__))
#define _META_POP_BACK_36(x, ...) x, META_EXPAND(_META_POP_BACK_35(__VA_ARGS__))
#define _META_POP_BACK_37(x, ...) x, META_EXPAND(_META_POP_BACK_36(__VA_ARGS__))
#define _META_POP_BACK_38(x, ...) x, META_EXPAND(_META_POP_BACK_37(__VA_ARGS__))
#define _META_POP_BACK_39(x, ...) x, META_EXPAND(_META_POP_BACK_38(__VA_ARGS__))
#define _META_POP_BACK_40(x, ...) x, META_EXPAND(_META_POP_BACK_39(__VA_ARGS__))
#define _META_POP_BACK_41(x, ...) x, META_EXPAND(_META_POP_BACK_40(__VA_ARGS__))
#define _META_POP_BACK_42(x, ...) x, META_EXPAND(_META_POP_BACK_41(__VA_ARGS__))
#define _META_POP_BACK_43(x, ...) x, META_EXPAND(_META_POP_BACK_42(__VA_ARGS__))
#define _META_POP_BACK_44(x, ...) x, META_EXPAND(_META_POP_BACK_43(__VA_ARGS__))
#define _META_POP_BACK_45(x, ...) x, META_EXPAND(_META_POP_BACK_44(__VA_ARGS__))
#define _META_POP_BACK_46(x, ...) x, META_EXPAND(_META_POP_BACK_45(__VA_ARGS__))
#define _META_POP_BACK_47(x, ...) x, META_EXPAND(_META_POP_BACK_46(__VA_ARGS__))
#define _META_POP_BACK_48(x, ...) x, META_EXPAND(_META_POP_BACK_47(__VA_ARGS__))
#define _META_POP_BACK_49(x, ...) x, META_EXPAND(_META_POP_BACK_48(__VA_ARGS__))
#define _META_POP_BACK_50(x, ...) x, META_EXPAND(_META_POP_BACK_49(__VA_ARGS__))
#define _META_POP_BACK_51(x, ...) x, META_EXPAND(_META_POP_BACK_50(__VA_ARGS__))
#define _META_POP_BACK_52(x, ...) x, META_EXPAND(_META_POP_BACK_51(__VA_ARGS__))
#define _META_POP_BACK_53(x, ...) x, META_EXPAND(_META_POP_BACK_52(__VA_ARGS__))
#define _META_POP_BACK_54(x, ...) x, META_EXPAND(_META_POP_BACK_53(__VA_ARGS__))
#define _META_POP_BACK_55(x, ...) x, META_EXPAND(_META_POP_BACK_54(__VA_ARGS__))
#define _META_POP_BACK_56(x, ...) x, META_EXPAND(_META_POP_BACK_55(__VA_ARGS__))
#define _META_POP_BACK_57(x, ...) x, META_EXPAND(_META_POP_BACK_56(__VA_ARGS__))
#define _META_POP_BACK_58(x, ...) x, META_EXPAND(_META_POP_BACK_57(__VA_ARGS__))
#define _META_POP_BACK_59(x, ...) x, META_EXPAND(_META_POP_BACK_58(__VA_ARGS__))
#define _META_POP_BACK_60(x, ...) x, META_EXPAND(_META_POP_BACK_59(__VA_ARGS__))
#define _META_POP_BACK_61(x, ...) x, META_EXPAND(_META_POP_BACK_60(__VA_ARGS__))
#define _META_POP_BACK_62(x, ...) x, META_EXPAND(_META_POP_BACK_61(__VA_ARGS__))
#define _META_POP_BACK_63(x, ...) x, META_EXPAND(_META_POP_BACK_62(__VA_ARGS__))
#define _META_POP_BACK_64(x, ...) x, META_EXPAND(_META_POP_BACK_63(__VA_ARGS__))
#define _META_POP_BACK_65(x, ...) x, META_EXPAND(_META_POP_BACK_64(__VA_ARGS__))
#define _META_POP_BACK_66(x, ...) x, META_EXPAND(_META_POP_BACK_65(__VA_ARGS__))
#define _META_POP_BACK_67(x, ...) x, META_EXPAND(_META_POP_BACK_66(__VA_ARGS__))
#define _META_POP_BACK_68(x, ...) x, META_EXPAND(_META_POP_BACK_67(__VA_ARGS__))
#define _META_POP_BACK_69(x, ...) x, META_EXPAND(_META_POP_BACK_68(__VA_ARGS__))
#define _META_POP_BACK_70(x, ...) x, META_EXPAND(_META_POP_BACK_69(__VA_ARGS__))
#define _META_POP_BACK_71(x, ...) x, META_EXPAND(_META_POP_BACK_70(__VA_ARGS__))
#define _META_POP_BACK_72(x, ...) x, META_EXPAND(_META_POP_BACK_71(__VA_ARGS__))
#define _META_POP_BACK_73(x, ...) x, META_EXPAND(_META_POP_BACK_72(__VA_ARGS__))
#define _META_POP_BACK_74(x, ...) x, META_EXPAND(_META_POP_BACK_73(__VA_ARGS__))
#define _META_POP_BACK_75(x, ...) x, META_EXPAND(_META_POP_BACK_74(__VA_ARGS__))
#define _META_POP_BACK_76(x, ...) x, META_EXPAND(_META_POP_BACK_75(__VA_ARGS__))
#define _META_POP_BACK_77(x, ...) x, META_EXPAND(_META_POP_BACK_76(__VA_ARGS__))
#define _META_POP_BACK_78(x, ...) x, META_EXPAND(_META_POP_BACK_77(__VA_ARGS__))
#define _META_POP_BACK_79(x, ...) x, META_EXPAND(_META_POP_BACK_78(__VA_ARGS__))
#define _META_POP_BACK_80(x, ...) x, META_EXPAND(_META_POP_BACK_79(__VA_ARGS__))
#define _META_POP_BACK_81(x, ...) x, META_EXPAND(_META_POP_BACK_80(__VA_ARGS__))
#define _META_POP_BACK_82(x, ...) x, META_EXPAND(_META_POP_BACK_81(__VA_ARGS__))
#define _META_POP_BACK_83(x, ...) x, META_EXPAND(_META_POP_BACK_82(__VA_ARGS__))
#define _META_POP_BACK_84(x, ...) x, META_EXPAND(_META_POP_BACK_83(__VA_ARGS__))
#define _META_POP_BACK_85(x, ...) x, META_EXPAND(_META_POP_BACK_84(__VA_ARGS__))
#define _META_POP_BACK_86(x, ...) x, META_EXPAND(_META_POP_BACK_85(__VA_ARGS__))
#define _META_POP_BACK_87(x, ...) x, META_EXPAND(_META_POP_BACK_86(__VA_ARGS__))
#define _META_POP_BACK_88(x, ...) x, META_EXPAND(_META_POP_BACK_87(__VA_ARGS__))
#define _META_POP_BACK_89(x, ...) x, META_EXPAND(_META_POP_BACK_88(__VA_ARGS__))
#define _META_POP_BACK_90(x, ...) x, META_EXPAND(_META_POP_BACK_89(__VA_ARGS__))
#define _META_POP_BACK_91(x, ...) x, META_EXPAND(_META_POP_BACK_90(__VA_ARGS__))
#define _META_POP_BACK_92(x, ...) x, META_EXPAND(_META_POP_BACK_91(__VA_ARGS__))
#define _META_POP_BACK_93(x, ...) x, META_EXPAND(_META_POP_BACK_92(__VA_ARGS__))
#define _META_POP_BACK_94(x, ...) x, META_EXPAND(_META_POP_BACK_93(__VA_ARGS__))
#define _META_POP_BACK_95(x, ...) x, META_EXPAND(_META_POP_BACK_94(__VA_ARGS__))
#define _META_POP_BACK_96(x, ...) x, META_EXPAND(_META_POP_BACK_95(__VA_ARGS__))
#define _META_POP_BACK_97(x, ...) x, META_EXPAND(_META_POP_BACK_96(__VA_ARGS__))
#define _META_POP_BACK_98(x, ...) x, META_EXPAND(_META_POP_BACK_97(__VA_ARGS__))
#define _META_POP_BACK_99(x, ...) x, META_EXPAND(_META_POP_BACK_98(__VA_ARGS__))
#define _META_POP_BACK_100(x, ...) x, META_EXPAND(_META_POP_BACK_99(__VA_ARGS__))
#define _META_POP_BACK_101(x, ...) x, META_EXPAND(_META_POP_BACK_100(__VA_ARGS__))
#define _META_POP_BACK_102(x, ...) x, META_EXPAND(_META_POP_BACK_101(__VA_ARGS__))
#define _META_POP_BACK_103(x, ...) x, META_EXPAND(_META_POP_BACK_102(__VA_ARGS__))
#define _META_POP_BACK_104(x, ...) x, META_EXPAND(_META_POP_BACK_103(__VA_ARGS__))
#define _META_POP_BACK_105(x, ...) x, META_EXPAND(_META_POP_BACK_104(__VA_ARGS__))
#define _META_POP_BACK_106(x, ...) x, META_EXPAND(_META_POP_BACK_105(__VA_ARGS__))
#define _META_POP_BACK_107(x, ...) x, META_EXPAND(_META_POP_BACK_106(__VA_ARGS__))
#define _META_POP_BACK_108(x, ...) x, META_EXPAND(_META_POP_BACK_107(__VA_ARGS__))
#define _META_POP_BACK_109(x, ...) x, META_EXPAND(_META_POP_BACK_108(__VA_ARGS__))
#define _META_POP_BACK_110(x, ...) x, META_EXPAND(_META_POP_BACK_109(__VA_ARGS__))
#define _META_POP_BACK_111(x, ...) x, META_EXPAND(_META_POP_BACK_110(__VA_ARGS__))
#define _META_POP_BACK_112(x, ...) x, META_EXPAND(_META_POP_BACK_111(__VA_ARGS__))
#define _META_POP_BACK_113(x, ...) x, META_EXPAND(_META_POP_BACK_112(__VA_ARGS__))
#define _META_POP_BACK_114(x, ...) x, META_EXPAND(_META_POP_BACK_113(__VA_ARGS__))
#define _META_POP_BACK_115(x, ...) x, META_EXPAND(_META_POP_BACK_114(__VA_ARGS__))
#define _META_POP_BACK_116(x, ...) x, META_EXPAND(_META_POP_BACK_115(__VA_ARGS__))
#define _META_POP_BACK_117(x, ...) x, META_EXPAND(_META_POP_BACK_116(__VA_ARGS__))
#define _META_POP_BACK_118(x, ...) x, META_EXPAND(_META_POP_BACK_117(__VA_ARGS__))
#define _META_POP_BACK_119(x, ...) x, META_EXPAND(_META_POP_BACK_118(__VA_ARGS__))
#define _META_POP_BACK_120(x, ...) x, META_EXPAND(_META_POP_BACK_119(__VA_ARGS__))
#define _META_POP_BACK_121(x, ...) x, META_EXPAND(_META_POP_BACK_120(__VA_ARGS__))
#define _META_POP_BACK_122(x, ...) x, META_EXPAND(_META_POP_BACK_121(__VA_ARGS__))
#define _META_POP_BACK_123(x, ...) x, META_EXPAND(_META_POP_BACK_122(__VA_ARGS__))
#define _META_POP_BACK_124(x, ...) x, META_EXPAND(_META_POP_BACK_123(__VA_ARGS__))
#define _META_POP_BACK_125(x, ...) x, META_EXPAND(_META_POP_BACK_124(__VA_ARGS__))
#define _META_POP_BACK_126(x, ...) x, META_EXPAND(_META_POP_BACK_125(__VA_ARGS__))
#define _META_POP_BACK_127(x, ...) x, META_EXPAND(_META_POP_BACK_126(__VA_ARGS__))
#define _META_POP_BACK_128(x, ...) x, META_EXPAND(_META_POP_BACK_127(__VA_ARGS__))
#define _META_POP_BACK_129(x, ...) x, META_EXPAND(_META_POP_BACK_128(__VA_ARGS__))
#define _META_POP_BACK_130(x, ...) x, META_EXPAND(_META_POP_BACK_129(__VA_ARGS__))
#define _META_POP_BACK_131(x, ...) x, META_EXPAND(_META_POP_BACK_130(__VA_ARGS__))
#define _META_POP_BACK_132(x, ...) x, META_EXPAND(_META_POP_BACK_131(__VA_ARGS__))
#define _META_POP_BACK_133(x, ...) x, META_EXPAND(_META_POP_BACK_132(__VA_ARGS__))
#define _META_POP_BACK_134(x, ...) x, META_EXPAND(_META_POP_BACK_133(__VA_ARGS__))
#define _META_POP_BACK_135(x, ...) x, META_EXPAND(_META_POP_BACK_134(__VA_ARGS__))
#define _META_POP_BACK_136(x, ...) x, META_EXPAND(_META_POP_BACK_135(__VA_ARGS__))
#define _META_POP_BACK_137(x, ...) x, META_EXPAND(_META_POP_BACK_136(__VA_ARGS__))
#define _META_POP_BACK_138(x, ...) x, META_EXPAND(_META_POP_BACK_137(__VA_ARGS__))
#define _META_POP_BACK_139(x, ...) x, META_EXPAND(_META_POP_BACK_138(__VA_ARGS__))
#define _META_POP_BACK_140(x, ...) x, META_EXPAND(_META_POP_BACK_139(__VA_ARGS__))
#define _META_POP_BACK_141(x, ...) x, META_EXPAND(_META_POP_BACK_140(__VA_ARGS__))
#define _META_POP_BACK_142(x, ...) x, META_EXPAND(_META_POP_BACK_141(__VA_ARGS__))
#define _META_POP_BACK_143(x, ...) x, META_EXPAND(_META_POP_BACK_142(__VA_ARGS__))
#define _META_POP_BACK_144(x, ...) x, META_EXPAND(_META_POP_BACK_143(__VA_ARGS__))
#define _META_POP_BACK_145(x, ...) x, META_EXPAND(_META_POP_BACK_144(__VA_ARGS__))
#define _META_POP_BACK_146(x, ...) x, META_EXPAND(_META_POP_BACK_145(__VA_ARGS__))
#define _META_POP_BACK_147(x, ...) x, META_EXPAND(_META_POP_BACK_146(__VA_ARGS__))
#define _META_POP_BACK_148(x, ...) x, META_EXPAND(_META_POP_BACK_147(__VA_ARGS__))
#define _META_POP_BACK_149(x, ...) x, META_EXPAND(_META_POP_BACK_148(__VA_ARGS__))
#define _META_POP_BACK_150(x, ...) x, META_EXPAND(_META_POP_BACK_149(__VA_ARGS__))
#define _META_POP_BACK_151(x, ...) x, META_EXPAND(_META_POP_BACK_150(__VA_ARGS__))
#define _META_POP_BACK_152(x, ...) x, META_EXPAND(_META_POP_BACK_151(__VA_ARGS__))
#define _META_POP_BACK_153(x, ...) x, META_EXPAND(_META_POP_BACK_152(__VA_ARGS__))
#define _META_POP_BACK_154(x, ...) x, META_EXPAND(_META_POP_BACK_153(__VA_ARGS__))
#define _META_POP_BACK_155(x, ...) x, META_EXPAND(_META_POP_BACK_154(__VA_ARGS__))
#define _META_POP_BACK_156(x, ...) x, META_EXPAND(_META_POP_BACK_155(__VA_ARGS__))
#define _META_POP_BACK_157(x, ...) x, META_EXPAND(_META_POP_BACK_156(__VA_ARGS__))
#define _META_POP_BACK_158(x, ...) x, META_EXPAND(_META_POP_BACK_157(__VA_ARGS__))
#define _META_POP_BACK_159(x, ...) x, META_EXPAND(_META_POP_BACK_158(__VA_ARGS__))
#define _META_POP_BACK_160(x, ...) x, META_EXPAND(_META_POP_BACK_159(__VA_ARGS__))
#define _META_POP_BACK_161(x, ...) x, META_EXPAND(_META_POP_BACK_160(__VA_ARGS__))
#define _META_POP_BACK_162(x, ...) x, META_EXPAND(_META_POP_BACK_161(__VA_ARGS__))
#define _META_POP_BACK_163(x, ...) x, META_EXPAND(_META_POP_BACK_162(__VA_ARGS__))
#define _META_POP_BACK_164(x, ...) x, META_EXPAND(_META_POP_BACK_163(__VA_ARGS__))
#define _META_POP_BACK_165(x, ...) x, META_EXPAND(_META_POP_BACK_164(__VA_ARGS__))
#define _META_POP_BACK_166(x, ...) x, META_EXPAND(_META_POP_BACK_165(__VA_ARGS__))
#define _META_POP_BACK_167(x, ...) x, META_EXPAND(_META_POP_BACK_166(__VA_ARGS__))
#define _META_POP_BACK_168(x, ...) x, META_EXPAND(_META_POP_BACK_167(__VA_ARGS__))
#define _META_POP_BACK_169(x, ...) x, META_EXPAND(_META_POP_BACK_168(__VA_ARGS__))
#define _META_POP_BACK_170(x, ...) x, META_EXPAND(_META_POP_BACK_169(__VA_ARGS__))
#define _META_POP_BACK_171(x, ...) x, META_EXPAND(_META_POP_BACK_170(__VA_ARGS__))
#define _META_POP_BACK_172(x, ...) x, META_EXPAND(_META_POP_BACK_171(__VA_ARGS__))
#define _META_POP_BACK_173(x, ...) x, META_EXPAND(_META_POP_BACK_172(__VA_ARGS__))
#define _META_POP_BACK_174(x, ...) x, META_EXPAND(_META_POP_BACK_173(__VA_ARGS__))
#define _META_POP_BACK_175(x, ...) x, META_EXPAND(_META_POP_BACK_174(__VA_ARGS__))
#define _META_POP_BACK_176(x, ...) x, META_EXPAND(_META_POP_BACK_175(__VA_ARGS__))
#define _META_POP_BACK_177(x, ...) x, META_EXPAND(_META_POP_BACK_176(__VA_ARGS__))
#define _META_POP_BACK_178(x, ...) x, META_EXPAND(_META_POP_BACK_177(__VA_ARGS__))
#define _META_POP_BACK_179(x, ...) x, META_EXPAND(_META_POP_BACK_178(__VA_ARGS__))
#define _META_POP_BACK_180(x, ...) x, META_EXPAND(_META_POP_BACK_179(__VA_ARGS__))
#define _META_POP_BACK_181(x, ...) x, META_EXPAND(_META_POP_BACK_180(__VA_ARGS__))
#define _META_POP_BACK_182(x, ...) x, META_EXPAND(_META_POP_BACK_181(__VA_ARGS__))
#define _META_POP_BACK_183(x, ...) x, META_EXPAND(_META_POP_BACK_182(__VA_ARGS__))
#define _META_POP_BACK_184(x, ...) x, META_EXPAND(_META_POP_BACK_183(__VA_ARGS__))
#define _META_POP_BACK_185(x, ...) x, META_EXPAND(_META_POP_BACK_184(__VA_ARGS__))
#define _META_POP_BACK_186(x, ...) x, META_EXPAND(_META_POP_BACK_185(__VA_ARGS__))
#define _META_POP_BACK_187(x, ...) x, META_EXPAND(_META_POP_BACK_186(__VA_ARGS__))
#define _META_POP_BACK_188(x, ...) x, META_EXPAND(_META_POP_BACK_187(__VA_ARGS__))
#define _META_POP_BACK_189(x, ...) x, META_EXPAND(_META_POP_BACK_188(__VA_ARGS__))
#define _META_POP_BACK_190(x, ...) x, META_EXPAND(_META_POP_BACK_189(__VA_ARGS__))
#define _META_POP_BACK_191(x, ...) x, META_EXPAND(_META_POP_BACK_190(__VA_ARGS__))
#define _META_POP_BACK_192(x, ...) x, META_EXPAND(_META_POP_BACK_191(__VA_ARGS__))
#define _META_POP_BACK_193(x, ...) x, META_EXPAND(_META_POP_BACK_192(__VA_ARGS__))
#define _META_POP_BACK_194(x, ...) x, META_EXPAND(_META_POP_BACK_193(__VA_ARGS__))
#define _META_POP_BACK_195(x, ...) x, META_EXPAND(_META_POP_BACK_194(__VA_ARGS__))
#define _META_POP_BACK_196(x, ...) x, META_EXPAND(_META_POP_BACK_195(__VA_ARGS__))
#define _META_POP_BACK_197(x, ...) x, META_EXPAND(_META_POP_BACK_196(__VA_ARGS__))
#define _META_POP_BACK_198(x, ...) x, META_EXPAND(_META_POP_BACK_197(__VA_ARGS__))
#define _META_POP_BACK_199(x, ...) x, META_EXPAND(_META_POP_BACK_198(__VA_ARGS__))
#define _META_POP_BACK_200(x, ...) x, META_EXPAND(_META_POP_BACK_199(__VA_ARGS__))
#define _META_POP_BACK_201(x, ...) x, META_EXPAND(_META_POP_BACK_200(__VA_ARGS__))
#define _META_POP_BACK_202(x, ...) x, META_EXPAND(_META_POP_BACK_201(__VA_ARGS__))
#define _META_POP_BACK_203(x, ...) x, META_EXPAND(_META_POP_BACK_202(__VA_ARGS__))
#define _META_POP_BACK_204(x, ...) x, META_EXPAND(_META_POP_BACK_203(__VA_ARGS__))
#define _META_POP_BACK_205(x, ...) x, META_EXPAND(_META_POP_BACK_204(__VA_ARGS__))
#define _META_POP_BACK_206(x, ...) x, META_EXPAND(_META_POP_BACK_205(__VA_ARGS__))
#define _META_POP_BACK_207(x, ...) x, META_EXPAND(_META_POP_BACK_206(__VA_ARGS__))
#define _META_POP_BACK_208(x, ...) x, META_EXPAND(_META_POP_BACK_207(__VA_ARGS__))
#define _META_POP_BACK_209(x, ...) x, META_EXPAND(_META_POP_BACK_208(__VA_ARGS__))
#define _META_POP_BACK_210(x, ...) x, META_EXPAND(_META_POP_BACK_209(__VA_ARGS__))
#define _META_POP_BACK_211(x, ...) x, META_EXPAND(_META_POP_BACK_210(__VA_ARGS__))
#define _META_POP_BACK_212(x, ...) x, META_EXPAND(_META_POP_BACK_211(__VA_ARGS__))
#define _META_POP_BACK_213(x, ...) x, META_EXPAND(_META_POP_BACK_212(__VA_ARGS__))
#define _META_POP_BACK_214(x, ...) x, META_EXPAND(_META_POP_BACK_213(__VA_ARGS__))
#define _META_POP_BACK_215(x, ...) x, META_EXPAND(_META_POP_BACK_214(__VA_ARGS__))
#define _META_POP_BACK_216(x, ...) x, META_EXPAND(_META_POP_BACK_215(__VA_ARGS__))
#define _META_POP_BACK_217(x, ...) x, META_EXPAND(_META_POP_BACK_216(__VA_ARGS__))
#define _META_POP_BACK_218(x, ...) x, META_EXPAND(_META_POP_BACK_217(__VA_ARGS__))
#define _META_POP_BACK_219(x, ...) x, META_EXPAND(_META_POP_BACK_218(__VA_ARGS__))
#define _META_POP_BACK_220(x, ...) x, META_EXPAND(_META_POP_BACK_219(__VA_ARGS__))
#define _META_POP_BACK_221(x, ...) x, META_EXPAND(_META_POP_BACK_220(__VA_ARGS__))
#define _META_POP_BACK_222(x, ...) x, META_EXPAND(_META_POP_BACK_221(__VA_ARGS__))
#define _META_POP_BACK_223(x, ...) x, META_EXPAND(_META_POP_BACK_222(__VA_ARGS__))
#define _META_POP_BACK_224(x, ...) x, META_EXPAND(_META_POP_BACK_223(__VA_ARGS__))
#define _META_POP_BACK_225(x, ...) x, META_EXPAND(_META_POP_BACK_224(__VA_ARGS__))
#define _META_POP_BACK_226(x, ...) x, META_EXPAND(_META_POP_BACK_225(__VA_ARGS__))
#define _META_POP_BACK_227(x, ...) x, META_EXPAND(_META_POP_BACK_226(__VA_ARGS__))
#define _META_POP_BACK_228(x, ...) x, META_EXPAND(_META_POP_BACK_227(__VA_ARGS__))
#define _META_POP_BACK_229(x, ...) x, META_EXPAND(_META_POP_BACK_228(__VA_ARGS__))
#define _META_POP_BACK_230(x, ...) x, META_EXPAND(_META_POP_BACK_229(__VA_ARGS__))
#define _META_POP_BACK_231(x, ...) x, META_EXPAND(_META_POP_BACK_230(__VA_ARGS__))
#define _META_POP_BACK_232(x, ...) x, META_EXPAND(_META_POP_BACK_231(__VA_ARGS__))
#define _META_POP_BACK_233(x, ...) x, META_EXPAND(_META_POP_BACK_232(__VA_ARGS__))
#define _META_POP_BACK_234(x, ...) x, META_EXPAND(_META_POP_BACK_233(__VA_ARGS__))
#define _META_POP_BACK_235(x, ...) x, META_EXPAND(_META_POP_BACK_234(__VA_ARGS__))
#define _META_POP_BACK_236(x, ...) x, META_EXPAND(_META_POP_BACK_235(__VA_ARGS__))
#define _META_POP_BACK_237(x, ...) x, META_EXPAND(_META_POP_BACK_236(__VA_ARGS__))
#define _META_POP_BACK_238(x, ...) x, META_EXPAND(_META_POP_BACK_237(__VA_ARGS__))
#define _META_POP_BACK_239(x, ...) x, META_EXPAND(_META_POP_BACK_238(__VA_ARGS__))
#define _META_POP_BACK_240(x, ...) x, META_EXPAND(_META_POP_BACK_239(__VA_ARGS__))
#define _META_POP_BACK_241(x, ...) x, META_EXPAND(_META_POP_BACK_240(__VA_ARGS__))
#define _META_POP_BACK_242(x, ...) x, META_EXPAND(_META_POP_BACK_241(__VA_ARGS__))
#define _META_POP_BACK_243(x, ...) x, META_EXPAND(_META_POP_BACK_242(__VA_ARGS__))
#define _META_POP_BACK_244(x, ...) x, META_EXPAND(_META_POP_BACK_243(__VA_ARGS__))
#define _META_POP_BACK_245(x, ...) x, META_EXPAND(_META_POP_BACK_244(__VA_ARGS__))
#define _META_POP_BACK_246(x, ...) x, META_EXPAND(_META_POP_BACK_245(__VA_ARGS__))
#define _META_POP_BACK_247(x, ...) x, META_EXPAND(_META_POP_BACK_246(__VA_ARGS__))
#define _META_POP_BACK_248(x, ...) x, META_EXPAND(_META_POP_BACK_247(__VA_ARGS__))
#define _META_POP_BACK_249(x, ...) x, META_EXPAND(_META_POP_BACK_248(__VA_ARGS__))
#define _META_POP_BACK_250(x, ...) x, META_EXPAND(_META_POP_BACK_249(__VA_ARGS__))
#define _META_POP_BACK_251(x, ...) x, META_EXPAND(_META_POP_BACK_250(__VA_ARGS__))
#define _META_POP_BACK_252(x, ...) x, META_EXPAND(_META_POP_BACK_251(__VA_ARGS__))
#define _META_POP_BACK_253(x, ...) x, META_EXPAND(_META_POP_BACK_252(__VA_ARGS__))
#define _META_POP_BACK_254(x, ...) x, META_EXPAND(_META_POP_BACK_253(__VA_ARGS__))
#define _META_POP_BACK_255(x, ...) x, META_EXPAND(_META_POP_BACK_254(__VA_ARGS__))
#define _META_POP_BACK_256(x, ...) x, META_EXPAND(_META_POP_BACK_255(__VA_ARGS__))

#define META_PRIMITIVE_CAT(l, r) l ## r
#define META_CAT(l, r) META_PRIMITIVE_CAT(l, r)

#define _META_POP_BACK(...) META_EXPAND(META_CAT(_META_POP_BACK_, META_COUNT(__VA_ARGS__))(__VA_ARGS__))