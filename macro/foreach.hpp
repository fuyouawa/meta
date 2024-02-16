#pragma once
#include <meta/macro/array.hpp>

/*--------------------------------------------------
*                    Foreach                        |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/
#define INTERNAL_META_FORRACH_0(f,o) 
#define INTERNAL_META_FORRACH_1(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_0(f,__VA_ARGS__)) f(0,arg)
#define INTERNAL_META_FORRACH_2(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_1(f,__VA_ARGS__)) f(1,arg) 
#define INTERNAL_META_FORRACH_3(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_2(f,__VA_ARGS__)) f(2,arg)
#define INTERNAL_META_FORRACH_4(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_3(f,__VA_ARGS__)) f(3,arg)
#define INTERNAL_META_FORRACH_5(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_4(f,__VA_ARGS__)) f(4,arg)
#define INTERNAL_META_FORRACH_6(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_5(f,__VA_ARGS__)) f(5,arg)
#define INTERNAL_META_FORRACH_7(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_6(f,__VA_ARGS__)) f(6,arg)
#define INTERNAL_META_FORRACH_8(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_7(f,__VA_ARGS__)) f(7,arg)
#define INTERNAL_META_FORRACH_9(f,arg,...)  META_EXPAND(INTERNAL_META_FORRACH_8(f,__VA_ARGS__)) f(8,arg)
#define INTERNAL_META_FORRACH_10(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_9(f,__VA_ARGS__)) f(9,arg)
#define INTERNAL_META_FORRACH_11(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_10(f,__VA_ARGS__)) f(10,arg)
#define INTERNAL_META_FORRACH_12(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_11(f,__VA_ARGS__)) f(11,arg)
#define INTERNAL_META_FORRACH_13(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_12(f,__VA_ARGS__)) f(12,arg)
#define INTERNAL_META_FORRACH_14(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_13(f,__VA_ARGS__)) f(13,arg)
#define INTERNAL_META_FORRACH_15(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_14(f,__VA_ARGS__)) f(14,arg)
#define INTERNAL_META_FORRACH_16(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_15(f,__VA_ARGS__)) f(15,arg)
#define INTERNAL_META_FORRACH_17(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_16(f,__VA_ARGS__)) f(16,arg)
#define INTERNAL_META_FORRACH_18(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_17(f,__VA_ARGS__)) f(17,arg)
#define INTERNAL_META_FORRACH_19(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_18(f,__VA_ARGS__)) f(18,arg)
#define INTERNAL_META_FORRACH_20(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_19(f,__VA_ARGS__)) f(19,arg)
#define INTERNAL_META_FORRACH_21(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_20(f,__VA_ARGS__)) f(20,arg)
#define INTERNAL_META_FORRACH_22(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_21(f,__VA_ARGS__)) f(21,arg)
#define INTERNAL_META_FORRACH_23(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_22(f,__VA_ARGS__)) f(22,arg)
#define INTERNAL_META_FORRACH_24(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_23(f,__VA_ARGS__)) f(23,arg)
#define INTERNAL_META_FORRACH_25(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_24(f,__VA_ARGS__)) f(24,arg)
#define INTERNAL_META_FORRACH_26(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_25(f,__VA_ARGS__)) f(25,arg)
#define INTERNAL_META_FORRACH_27(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_26(f,__VA_ARGS__)) f(26,arg)
#define INTERNAL_META_FORRACH_28(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_27(f,__VA_ARGS__)) f(27,arg)
#define INTERNAL_META_FORRACH_29(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_28(f,__VA_ARGS__)) f(28,arg)
#define INTERNAL_META_FORRACH_30(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_29(f,__VA_ARGS__)) f(29,arg)
#define INTERNAL_META_FORRACH_31(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_30(f,__VA_ARGS__)) f(30,arg)
#define INTERNAL_META_FORRACH_32(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_31(f,__VA_ARGS__)) f(31,arg)
#define INTERNAL_META_FORRACH_33(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_32(f,__VA_ARGS__)) f(32,arg)
#define INTERNAL_META_FORRACH_34(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_33(f,__VA_ARGS__)) f(33,arg)
#define INTERNAL_META_FORRACH_35(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_34(f,__VA_ARGS__)) f(34,arg)
#define INTERNAL_META_FORRACH_36(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_35(f,__VA_ARGS__)) f(35,arg)
#define INTERNAL_META_FORRACH_37(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_36(f,__VA_ARGS__)) f(36,arg)
#define INTERNAL_META_FORRACH_38(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_37(f,__VA_ARGS__)) f(37,arg)
#define INTERNAL_META_FORRACH_39(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_38(f,__VA_ARGS__)) f(38,arg)
#define INTERNAL_META_FORRACH_40(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_39(f,__VA_ARGS__)) f(39,arg)
#define INTERNAL_META_FORRACH_41(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_40(f,__VA_ARGS__)) f(40,arg)
#define INTERNAL_META_FORRACH_42(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_41(f,__VA_ARGS__)) f(41,arg)
#define INTERNAL_META_FORRACH_43(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_42(f,__VA_ARGS__)) f(42,arg)
#define INTERNAL_META_FORRACH_44(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_43(f,__VA_ARGS__)) f(43,arg)
#define INTERNAL_META_FORRACH_45(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_44(f,__VA_ARGS__)) f(44,arg)
#define INTERNAL_META_FORRACH_46(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_45(f,__VA_ARGS__)) f(45,arg)
#define INTERNAL_META_FORRACH_47(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_46(f,__VA_ARGS__)) f(46,arg)
#define INTERNAL_META_FORRACH_48(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_47(f,__VA_ARGS__)) f(47,arg)
#define INTERNAL_META_FORRACH_49(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_48(f,__VA_ARGS__)) f(48,arg)
#define INTERNAL_META_FORRACH_50(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_49(f,__VA_ARGS__)) f(49,arg)
#define INTERNAL_META_FORRACH_51(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_50(f,__VA_ARGS__)) f(50,arg)
#define INTERNAL_META_FORRACH_52(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_51(f,__VA_ARGS__)) f(51,arg)
#define INTERNAL_META_FORRACH_53(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_52(f,__VA_ARGS__)) f(52,arg)
#define INTERNAL_META_FORRACH_54(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_53(f,__VA_ARGS__)) f(53,arg)
#define INTERNAL_META_FORRACH_55(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_54(f,__VA_ARGS__)) f(54,arg)
#define INTERNAL_META_FORRACH_56(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_55(f,__VA_ARGS__)) f(55,arg)
#define INTERNAL_META_FORRACH_57(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_56(f,__VA_ARGS__)) f(56,arg)
#define INTERNAL_META_FORRACH_58(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_57(f,__VA_ARGS__)) f(57,arg)
#define INTERNAL_META_FORRACH_59(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_58(f,__VA_ARGS__)) f(58,arg)
#define INTERNAL_META_FORRACH_60(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_59(f,__VA_ARGS__)) f(59,arg)
#define INTERNAL_META_FORRACH_61(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_60(f,__VA_ARGS__)) f(60,arg)
#define INTERNAL_META_FORRACH_62(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_61(f,__VA_ARGS__)) f(61,arg)
#define INTERNAL_META_FORRACH_63(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_62(f,__VA_ARGS__)) f(62,arg)
#define INTERNAL_META_FORRACH_64(f,arg,...) META_EXPAND(INTERNAL_META_FORRACH_63(f,__VA_ARGS__)) f(63,arg)

#define INTERNAL_META_FOREACH(f, ...) \
		META_CAT(INTERNAL_META_FORRACH_, META_ARG_COUNT(__VA_ARGS__))(f, __VA_ARGS__)


/*--------------------------------------------------
*                    Foreach                        |
*                 Public macros                     |
---------------------------------------------------*/

// Foreach macro
// 
// Example:
//	#define printf_macro(i, arg) printf("%d: %s", i, arg);
//	META_FOREACH(printf_macro, "First", "Second")
//	-> printf("%d: %s", 2, "First"); printf("%d: %s", 1, "Second"););
// 
// Look out:
//	i is in reverse order!
#define META_FOREACH(f, args) INTERNAL_META_FOREACH(f, META_REMOVE_PARAM(args))
