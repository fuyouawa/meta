#pragma once
#include <meta/macro/array.hpp>
#include <meta/macro/arithmetic.hpp>
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

#define META_FOR_EX(f, args) INTERNAL_META_FOR_EX(f, META_ARRAY_ELEMS(args))



/*--------------------------------------------------
*                      For                          |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_FOR
#define INTERNAL_META_FOR_0(f, i, arg, ...)
#define INTERNAL_META_FOR_1(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_0(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_2(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_1(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_3(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_2(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_4(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_3(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_5(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_4(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_6(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_5(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_7(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_6(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_8(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_7(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_9(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_8(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_10(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_9(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_11(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_10(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_12(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_11(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_13(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_12(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_14(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_13(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_15(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_14(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_16(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_15(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_17(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_16(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_18(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_17(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_19(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_18(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_20(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_19(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_21(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_20(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_22(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_21(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_23(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_22(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_24(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_23(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_25(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_24(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_26(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_25(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_27(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_26(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_28(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_27(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_29(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_28(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_30(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_29(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_31(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_30(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_32(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_31(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_33(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_32(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_34(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_33(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_35(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_34(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_36(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_35(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_37(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_36(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_38(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_37(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_39(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_38(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_40(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_39(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_41(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_40(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_42(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_41(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_43(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_42(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_44(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_43(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_45(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_44(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_46(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_45(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_47(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_46(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_48(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_47(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_49(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_48(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_50(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_49(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_51(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_50(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_52(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_51(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_53(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_52(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_54(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_53(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_55(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_54(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_56(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_55(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_57(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_56(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_58(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_57(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_59(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_58(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_60(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_59(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_61(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_60(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_62(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_61(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_63(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_62(f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_64(f, i, arg, ...) f(i, arg) META_EXPAND(INTERNAL_META_FOR_63(f, META_INC(i), __VA_ARGS__))


#define INTERNAL_META_FOR(f, ...) \
	META_CAT(INTERNAL_META_FOR_, META_ARG_COUNT(__VA_ARGS__))(f, 0, __VA_ARGS__)


// Internal for META_FOR_EX
#define INTERNAL_META_FOR_EX_0(is_beg, is_end, f, i, arg, ...)
#define INTERNAL_META_FOR_EX_1(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg)
#define INTERNAL_META_FOR_EX_2(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_1(0, 1, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_3(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_2(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_4(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_3(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_5(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_4(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_6(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_5(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_7(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_6(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_8(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_7(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_9(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_8(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_10(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_9(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_11(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_10(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_12(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_11(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_13(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_12(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_14(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_13(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_15(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_14(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_16(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_15(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_17(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_16(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_18(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_17(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_19(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_18(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_20(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_19(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_21(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_20(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_22(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_21(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_23(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_22(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_24(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_23(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_25(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_24(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_26(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_25(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_27(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_26(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_28(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_27(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_29(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_28(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_30(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_29(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_31(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_30(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_32(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_31(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_33(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_32(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_34(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_33(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_35(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_34(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_36(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_35(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_37(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_36(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_38(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_37(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_39(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_38(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_40(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_39(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_41(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_40(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_42(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_41(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_43(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_42(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_44(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_43(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_45(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_44(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_46(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_45(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_47(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_46(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_48(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_47(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_49(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_48(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_50(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_49(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_51(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_50(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_52(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_51(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_53(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_52(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_54(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_53(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_55(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_54(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_56(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_55(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_57(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_56(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_58(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_57(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_59(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_58(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_60(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_59(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_61(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_60(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_62(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_61(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_63(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_62(0, 0, f, META_INC(i), __VA_ARGS__))
#define INTERNAL_META_FOR_EX_64(is_beg, is_end, f, i, arg, ...) f(is_beg, is_end, i, arg) META_EXPAND(INTERNAL_META_FOR_EX_63(0, 0, f, META_INC(i), __VA_ARGS__))

#define INTERNAL_META_FOR_EX(f, ...) \
	META_CAT(INTERNAL_META_FOR_EX_, META_ARG_COUNT(__VA_ARGS__))(1, 0, f, 0, __VA_ARGS__)


// Internal for META_FOREACH
#define INTERNAL_META_FOREACH_FOR_BLOCK_1(i, array) META_ARRAY_INDEX_BY_1(1, array),
#define INTERNAL_META_FOREACH_FOR_BLOCK_2(i, array) META_ARRAY_INDEX_BY_1(2, array),

#define INTERNAL_META_FOREACH_LV0(f, ...)
#define INTERNAL_META_FOREACH_LV1(f, ...) f(META_FOR(INTERNAL_META_FOREACH_FOR_BLOCK_1, (__VA_ARGS__)))
#define INTERNAL_META_FOREACH_LV2(f, ...) INTERNAL_META_FOREACH_LV1(f, __VA_ARGS__) f(META_FOR(INTERNAL_META_FOREACH_FOR_BLOCK_2, (__VA_ARGS__)))
