#pragma once
#include <meta/macro/array.hpp>
/*--------------------------------------------------
*                      For                          |
*                 Public macros                     |
---------------------------------------------------*/

// for macro
// 
// Example:
//	#define P(i, arg) printf("%d: %s", i, arg);
// 
//	META_FOR(P, "First", "Second") expand to...
//	printf("%d: %s", 1, "First"); printf("%d: %s", 2, "Second"););
#define META_FOR(f, args) INTERNAL_META_FOR(f, META_ARRAY_ELEMS(args))



/*--------------------------------------------------
*                      For                          |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_FOR_0(f, i, arg, ...)
#define INTERNAL_META_FOR_1(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_0(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_2(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_1(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_3(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_2(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_4(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_3(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_5(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_4(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_6(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_5(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_7(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_6(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_8(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_7(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_9(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_8(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_10(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_9(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_11(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_10(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_12(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_11(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_13(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_12(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_14(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_13(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_15(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_14(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_16(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_15(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_17(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_16(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_18(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_17(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_19(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_18(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_20(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_19(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_21(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_20(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_22(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_21(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_23(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_22(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_24(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_23(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_25(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_24(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_26(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_25(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_27(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_26(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_28(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_27(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_29(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_28(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_30(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_29(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_31(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_30(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_32(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_31(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_33(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_32(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_34(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_33(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_35(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_34(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_36(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_35(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_37(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_36(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_38(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_37(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_39(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_38(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_40(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_39(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_41(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_40(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_42(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_41(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_43(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_42(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_44(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_43(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_45(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_44(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_46(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_45(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_47(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_46(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_48(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_47(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_49(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_48(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_50(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_49(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_51(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_50(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_52(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_51(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_53(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_52(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_54(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_53(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_55(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_54(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_56(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_55(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_57(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_56(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_58(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_57(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_59(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_58(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_60(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_59(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_61(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_60(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_62(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_61(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_63(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_62(f, i+1, __VA_ARGS__))
#define INTERNAL_META_FOR_64(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_63(f, i+1, __VA_ARGS__))


#define INTERNAL_META_FOR(f, ...) \
		META_CAT(INTERNAL_META_FOR_, META_ARG_COUNT(__VA_ARGS__))(f, 0, __VA_ARGS__)