#pragma once
#include <meta/macro/va_args/count.hpp>

#define META_ARGS_TO_STRING(...) INTERNAL_META_ARGS_TO_STRING(__VA_ARGS__)




/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define META_EXPAND(...) __VA_ARGS__

#define INTERNAL_META_ARGS_TO_STRING_0(...)
#define INTERNAL_META_ARGS_TO_STRING_1(x, ...) #x
#define INTERNAL_META_ARGS_TO_STRING_2(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_1(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_3(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_2(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_4(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_3(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_5(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_4(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_6(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_5(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_7(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_6(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_8(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_7(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_9(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_8(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_10(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_9(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_11(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_10(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_12(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_11(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_13(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_12(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_14(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_13(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_15(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_14(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_16(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_15(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_17(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_16(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_18(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_17(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_19(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_18(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_20(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_19(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_21(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_20(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_22(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_21(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_23(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_22(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_24(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_23(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_25(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_24(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_26(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_25(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_27(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_26(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_28(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_27(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_29(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_28(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_30(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_29(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_31(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_30(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_32(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_31(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_33(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_32(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_34(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_33(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_35(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_34(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_36(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_35(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_37(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_36(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_38(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_37(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_39(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_38(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_40(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_39(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_41(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_40(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_42(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_41(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_43(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_42(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_44(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_43(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_45(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_44(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_46(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_45(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_47(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_46(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_48(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_47(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_49(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_48(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_50(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_49(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_51(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_50(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_52(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_51(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_53(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_52(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_54(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_53(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_55(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_54(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_56(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_55(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_57(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_56(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_58(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_57(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_59(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_58(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_60(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_59(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_61(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_60(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_62(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_61(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_63(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_62(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_64(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_63(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_65(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_64(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_66(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_65(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_67(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_66(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_68(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_67(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_69(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_68(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_70(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_69(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_71(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_70(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_72(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_71(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_73(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_72(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_74(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_73(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_75(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_74(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_76(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_75(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_77(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_76(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_78(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_77(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_79(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_78(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_80(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_79(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_81(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_80(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_82(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_81(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_83(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_82(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_84(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_83(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_85(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_84(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_86(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_85(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_87(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_86(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_88(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_87(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_89(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_88(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_90(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_89(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_91(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_90(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_92(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_91(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_93(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_92(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_94(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_93(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_95(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_94(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_96(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_95(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_97(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_96(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_98(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_97(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_99(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_98(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_100(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_99(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_101(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_100(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_102(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_101(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_103(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_102(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_104(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_103(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_105(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_104(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_106(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_105(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_107(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_106(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_108(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_107(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_109(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_108(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_110(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_109(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_111(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_110(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_112(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_111(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_113(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_112(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_114(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_113(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_115(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_114(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_116(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_115(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_117(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_116(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_118(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_117(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_119(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_118(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_120(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_119(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_121(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_120(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_122(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_121(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_123(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_122(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_124(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_123(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_125(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_124(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_126(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_125(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_127(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_126(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_128(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_127(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_129(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_128(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_130(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_129(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_131(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_130(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_132(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_131(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_133(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_132(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_134(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_133(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_135(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_134(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_136(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_135(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_137(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_136(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_138(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_137(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_139(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_138(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_140(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_139(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_141(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_140(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_142(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_141(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_143(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_142(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_144(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_143(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_145(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_144(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_146(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_145(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_147(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_146(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_148(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_147(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_149(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_148(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_150(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_149(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_151(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_150(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_152(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_151(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_153(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_152(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_154(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_153(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_155(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_154(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_156(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_155(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_157(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_156(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_158(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_157(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_159(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_158(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_160(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_159(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_161(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_160(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_162(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_161(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_163(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_162(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_164(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_163(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_165(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_164(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_166(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_165(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_167(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_166(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_168(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_167(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_169(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_168(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_170(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_169(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_171(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_170(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_172(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_171(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_173(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_172(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_174(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_173(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_175(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_174(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_176(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_175(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_177(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_176(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_178(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_177(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_179(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_178(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_180(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_179(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_181(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_180(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_182(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_181(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_183(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_182(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_184(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_183(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_185(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_184(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_186(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_185(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_187(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_186(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_188(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_187(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_189(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_188(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_190(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_189(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_191(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_190(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_192(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_191(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_193(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_192(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_194(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_193(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_195(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_194(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_196(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_195(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_197(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_196(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_198(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_197(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_199(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_198(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_200(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_199(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_201(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_200(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_202(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_201(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_203(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_202(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_204(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_203(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_205(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_204(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_206(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_205(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_207(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_206(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_208(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_207(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_209(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_208(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_210(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_209(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_211(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_210(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_212(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_211(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_213(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_212(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_214(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_213(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_215(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_214(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_216(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_215(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_217(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_216(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_218(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_217(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_219(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_218(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_220(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_219(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_221(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_220(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_222(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_221(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_223(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_222(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_224(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_223(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_225(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_224(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_226(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_225(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_227(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_226(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_228(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_227(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_229(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_228(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_230(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_229(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_231(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_230(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_232(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_231(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_233(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_232(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_234(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_233(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_235(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_234(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_236(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_235(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_237(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_236(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_238(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_237(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_239(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_238(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_240(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_239(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_241(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_240(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_242(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_241(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_243(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_242(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_244(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_243(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_245(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_244(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_246(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_245(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_247(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_246(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_248(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_247(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_249(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_248(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_250(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_249(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_251(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_250(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_252(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_251(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_253(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_252(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_254(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_253(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_255(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_254(__VA_ARGS__))
#define INTERNAL_META_ARGS_TO_STRING_256(x, ...) #x, META_EXPAND(INTERNAL_META_ARGS_TO_STRING_255(__VA_ARGS__))

#define META_PRIMITIVE_CAT(l, r) l ## r
#define META_CAT(l, r) META_PRIMITIVE_CAT(l, r)

#define INTERNAL_META_ARGS_TO_STRING(...) META_EXPAND(META_CAT(INTERNAL_META_ARGS_TO_STRING_, META_COUNT(__VA_ARGS__))(__VA_ARGS__))