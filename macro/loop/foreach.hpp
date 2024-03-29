#pragma once
#include <meta/macro/arithmetic/increment.hpp>
#include <meta/macro/arithmetic/sub.hpp>
#include <meta/macro/va_args/count.hpp>

#define META_FOR_EACH(f, ...) INTERNAL_META_FOR_EACH(f, __VA_ARGS__)


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_FOR_EACH_0(f, i, x, ...) f(i, x)
#define INTERNAL_META_FOR_EACH_1(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_0(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_2(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_1(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_3(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_2(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_4(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_3(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_5(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_4(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_6(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_5(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_7(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_6(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_8(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_7(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_9(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_8(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_10(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_9(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_11(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_10(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_12(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_11(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_13(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_12(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_14(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_13(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_15(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_14(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_16(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_15(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_17(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_16(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_18(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_17(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_19(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_18(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_20(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_19(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_21(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_20(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_22(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_21(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_23(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_22(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_24(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_23(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_25(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_24(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_26(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_25(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_27(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_26(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_28(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_27(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_29(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_28(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_30(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_29(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_31(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_30(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_32(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_31(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_33(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_32(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_34(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_33(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_35(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_34(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_36(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_35(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_37(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_36(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_38(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_37(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_39(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_38(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_40(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_39(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_41(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_40(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_42(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_41(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_43(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_42(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_44(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_43(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_45(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_44(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_46(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_45(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_47(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_46(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_48(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_47(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_49(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_48(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_50(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_49(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_51(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_50(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_52(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_51(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_53(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_52(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_54(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_53(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_55(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_54(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_56(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_55(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_57(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_56(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_58(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_57(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_59(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_58(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_60(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_59(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_61(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_60(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_62(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_61(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_63(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_62(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_64(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_63(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_65(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_64(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_66(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_65(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_67(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_66(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_68(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_67(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_69(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_68(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_70(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_69(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_71(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_70(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_72(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_71(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_73(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_72(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_74(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_73(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_75(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_74(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_76(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_75(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_77(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_76(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_78(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_77(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_79(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_78(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_80(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_79(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_81(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_80(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_82(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_81(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_83(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_82(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_84(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_83(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_85(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_84(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_86(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_85(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_87(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_86(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_88(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_87(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_89(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_88(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_90(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_89(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_91(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_90(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_92(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_91(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_93(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_92(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_94(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_93(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_95(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_94(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_96(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_95(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_97(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_96(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_98(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_97(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_99(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_98(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_100(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_99(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_101(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_100(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_102(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_101(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_103(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_102(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_104(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_103(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_105(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_104(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_106(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_105(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_107(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_106(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_108(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_107(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_109(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_108(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_110(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_109(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_111(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_110(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_112(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_111(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_113(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_112(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_114(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_113(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_115(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_114(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_116(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_115(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_117(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_116(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_118(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_117(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_119(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_118(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_120(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_119(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_121(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_120(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_122(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_121(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_123(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_122(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_124(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_123(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_125(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_124(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_126(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_125(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_127(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_126(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_128(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_127(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_129(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_128(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_130(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_129(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_131(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_130(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_132(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_131(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_133(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_132(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_134(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_133(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_135(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_134(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_136(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_135(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_137(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_136(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_138(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_137(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_139(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_138(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_140(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_139(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_141(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_140(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_142(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_141(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_143(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_142(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_144(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_143(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_145(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_144(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_146(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_145(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_147(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_146(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_148(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_147(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_149(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_148(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_150(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_149(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_151(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_150(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_152(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_151(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_153(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_152(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_154(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_153(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_155(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_154(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_156(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_155(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_157(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_156(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_158(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_157(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_159(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_158(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_160(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_159(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_161(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_160(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_162(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_161(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_163(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_162(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_164(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_163(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_165(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_164(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_166(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_165(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_167(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_166(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_168(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_167(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_169(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_168(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_170(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_169(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_171(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_170(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_172(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_171(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_173(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_172(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_174(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_173(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_175(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_174(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_176(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_175(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_177(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_176(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_178(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_177(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_179(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_178(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_180(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_179(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_181(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_180(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_182(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_181(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_183(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_182(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_184(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_183(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_185(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_184(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_186(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_185(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_187(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_186(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_188(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_187(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_189(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_188(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_190(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_189(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_191(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_190(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_192(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_191(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_193(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_192(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_194(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_193(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_195(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_194(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_196(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_195(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_197(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_196(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_198(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_197(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_199(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_198(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_200(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_199(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_201(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_200(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_202(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_201(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_203(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_202(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_204(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_203(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_205(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_204(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_206(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_205(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_207(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_206(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_208(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_207(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_209(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_208(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_210(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_209(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_211(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_210(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_212(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_211(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_213(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_212(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_214(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_213(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_215(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_214(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_216(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_215(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_217(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_216(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_218(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_217(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_219(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_218(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_220(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_219(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_221(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_220(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_222(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_221(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_223(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_222(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_224(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_223(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_225(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_224(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_226(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_225(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_227(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_226(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_228(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_227(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_229(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_228(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_230(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_229(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_231(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_230(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_232(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_231(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_233(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_232(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_234(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_233(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_235(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_234(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_236(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_235(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_237(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_236(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_238(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_237(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_239(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_238(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_240(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_239(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_241(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_240(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_242(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_241(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_243(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_242(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_244(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_243(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_245(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_244(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_246(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_245(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_247(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_246(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_248(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_247(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_249(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_248(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_250(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_249(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_251(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_250(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_252(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_251(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_253(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_252(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_254(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_253(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EACH_255(f, i, x, ...) f(i, x) META_EXPAND(INTERNAL_META_FOR_EACH_254(f, META_INC(i), __VA_ARGS__))

#define META_PRIMITIVE_CAT(l, r) l ## r
#define META_CAT(l, r) META_PRIMITIVE_CAT(l, r)

#define INTERNAL_META_FOR_EACH_I(f, n, ...) META_EXPAND(META_CAT(INTERNAL_META_FOR_EACH_, n)(f, 0, __VA_ARGS__))
#define INTERNAL_META_FOR_EACH(f, ...) INTERNAL_META_FOR_EACH_I(f, META_DEC(META_COUNT(__VA_ARGS__)), __VA_ARGS__)