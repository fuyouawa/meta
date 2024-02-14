#pragma once

#define META_CONCAT_(l, r) l ## r
#define META_CONCAT(l, r) META_CONCAT_(l, r)

#define META_MARCO_EXPAND(...) __VA_ARGS__

#define META_INTERNAL_ARG_COUNT(\
	 _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \
	_10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
	_20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
	_30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
	_40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
	_50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
	_60, _61, _62, _63, _64, N, ...) N

#define META_ARG_COUNT(...) META_MARCO_EXPAND(META_INTERNAL_ARG_COUNT(0, ##__VA_ARGS__,\
	64, 63, 62, 61, 60, \
	59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
	39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
	29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
	19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
	 9,  8,  7,  6,  5,  4,  3,  2,  1,  0))

#define META_REPEAT0(f,o) 
#define META_REPEAT1(f,arg,...)  META_MARCO_EXPAND(META_REPEAT0(f,__VA_ARGS__)) f(0,arg)
#define META_REPEAT2(f,arg,...)  META_MARCO_EXPAND(META_REPEAT1(f,__VA_ARGS__)) f(1,arg) 
#define META_REPEAT3(f,arg,...)  META_MARCO_EXPAND(META_REPEAT2(f,__VA_ARGS__)) f(2,arg)
#define META_REPEAT4(f,arg,...)  META_MARCO_EXPAND(META_REPEAT3(f,__VA_ARGS__)) f(3,arg)
#define META_REPEAT5(f,arg,...)  META_MARCO_EXPAND(META_REPEAT4(f,__VA_ARGS__)) f(4,arg)
#define META_REPEAT6(f,arg,...)  META_MARCO_EXPAND(META_REPEAT5(f,__VA_ARGS__)) f(5,arg)
#define META_REPEAT7(f,arg,...)  META_MARCO_EXPAND(META_REPEAT6(f,__VA_ARGS__)) f(6,arg)
#define META_REPEAT8(f,arg,...)  META_MARCO_EXPAND(META_REPEAT7(f,__VA_ARGS__)) f(7,arg)
#define META_REPEAT9(f,arg,...)  META_MARCO_EXPAND(META_REPEAT8(f,__VA_ARGS__)) f(8,arg)
#define META_REPEAT10(f,arg,...) META_MARCO_EXPAND(META_REPEAT9(f,__VA_ARGS__)) f(9,arg)
#define META_REPEAT11(f,arg,...) META_MARCO_EXPAND(META_REPEAT10(f,__VA_ARGS__)) f(10,arg)
#define META_REPEAT12(f,arg,...) META_MARCO_EXPAND(META_REPEAT11(f,__VA_ARGS__)) f(11,arg)
#define META_REPEAT13(f,arg,...) META_MARCO_EXPAND(META_REPEAT12(f,__VA_ARGS__)) f(12,arg)
#define META_REPEAT14(f,arg,...) META_MARCO_EXPAND(META_REPEAT13(f,__VA_ARGS__)) f(13,arg)
#define META_REPEAT15(f,arg,...) META_MARCO_EXPAND(META_REPEAT14(f,__VA_ARGS__)) f(14,arg)
#define META_REPEAT16(f,arg,...) META_MARCO_EXPAND(META_REPEAT15(f,__VA_ARGS__)) f(15,arg)
#define META_REPEAT17(f,arg,...) META_MARCO_EXPAND(META_REPEAT16(f,__VA_ARGS__)) f(16,arg)
#define META_REPEAT18(f,arg,...) META_MARCO_EXPAND(META_REPEAT17(f,__VA_ARGS__)) f(17,arg)
#define META_REPEAT19(f,arg,...) META_MARCO_EXPAND(META_REPEAT18(f,__VA_ARGS__)) f(18,arg)
#define META_REPEAT20(f,arg,...) META_MARCO_EXPAND(META_REPEAT19(f,__VA_ARGS__)) f(19,arg)
#define META_REPEAT21(f,arg,...) META_MARCO_EXPAND(META_REPEAT20(f,__VA_ARGS__)) f(20,arg)
#define META_REPEAT22(f,arg,...) META_MARCO_EXPAND(META_REPEAT21(f,__VA_ARGS__)) f(21,arg)
#define META_REPEAT23(f,arg,...) META_MARCO_EXPAND(META_REPEAT22(f,__VA_ARGS__)) f(22,arg)
#define META_REPEAT24(f,arg,...) META_MARCO_EXPAND(META_REPEAT23(f,__VA_ARGS__)) f(23,arg)
#define META_REPEAT25(f,arg,...) META_MARCO_EXPAND(META_REPEAT24(f,__VA_ARGS__)) f(24,arg)
#define META_REPEAT26(f,arg,...) META_MARCO_EXPAND(META_REPEAT25(f,__VA_ARGS__)) f(25,arg)
#define META_REPEAT27(f,arg,...) META_MARCO_EXPAND(META_REPEAT26(f,__VA_ARGS__)) f(26,arg)
#define META_REPEAT28(f,arg,...) META_MARCO_EXPAND(META_REPEAT27(f,__VA_ARGS__)) f(27,arg)
#define META_REPEAT29(f,arg,...) META_MARCO_EXPAND(META_REPEAT28(f,__VA_ARGS__)) f(28,arg)
#define META_REPEAT30(f,arg,...) META_MARCO_EXPAND(META_REPEAT29(f,__VA_ARGS__)) f(29,arg)
#define META_REPEAT31(f,arg,...) META_MARCO_EXPAND(META_REPEAT30(f,__VA_ARGS__)) f(30,arg)
#define META_REPEAT32(f,arg,...) META_MARCO_EXPAND(META_REPEAT31(f,__VA_ARGS__)) f(31,arg)
#define META_REPEAT33(f,arg,...) META_MARCO_EXPAND(META_REPEAT32(f,__VA_ARGS__)) f(32,arg)
#define META_REPEAT34(f,arg,...) META_MARCO_EXPAND(META_REPEAT33(f,__VA_ARGS__)) f(33,arg)
#define META_REPEAT35(f,arg,...) META_MARCO_EXPAND(META_REPEAT34(f,__VA_ARGS__)) f(34,arg)
#define META_REPEAT36(f,arg,...) META_MARCO_EXPAND(META_REPEAT35(f,__VA_ARGS__)) f(35,arg)
#define META_REPEAT37(f,arg,...) META_MARCO_EXPAND(META_REPEAT36(f,__VA_ARGS__)) f(36,arg)
#define META_REPEAT38(f,arg,...) META_MARCO_EXPAND(META_REPEAT37(f,__VA_ARGS__)) f(37,arg)
#define META_REPEAT39(f,arg,...) META_MARCO_EXPAND(META_REPEAT38(f,__VA_ARGS__)) f(38,arg)
#define META_REPEAT40(f,arg,...) META_MARCO_EXPAND(META_REPEAT39(f,__VA_ARGS__)) f(39,arg)
#define META_REPEAT41(f,arg,...) META_MARCO_EXPAND(META_REPEAT40(f,__VA_ARGS__)) f(40,arg)
#define META_REPEAT42(f,arg,...) META_MARCO_EXPAND(META_REPEAT41(f,__VA_ARGS__)) f(41,arg)
#define META_REPEAT43(f,arg,...) META_MARCO_EXPAND(META_REPEAT42(f,__VA_ARGS__)) f(42,arg)
#define META_REPEAT44(f,arg,...) META_MARCO_EXPAND(META_REPEAT43(f,__VA_ARGS__)) f(43,arg)
#define META_REPEAT45(f,arg,...) META_MARCO_EXPAND(META_REPEAT44(f,__VA_ARGS__)) f(44,arg)
#define META_REPEAT46(f,arg,...) META_MARCO_EXPAND(META_REPEAT45(f,__VA_ARGS__)) f(45,arg)
#define META_REPEAT47(f,arg,...) META_MARCO_EXPAND(META_REPEAT46(f,__VA_ARGS__)) f(46,arg)
#define META_REPEAT48(f,arg,...) META_MARCO_EXPAND(META_REPEAT47(f,__VA_ARGS__)) f(47,arg)
#define META_REPEAT49(f,arg,...) META_MARCO_EXPAND(META_REPEAT48(f,__VA_ARGS__)) f(48,arg)
#define META_REPEAT50(f,arg,...) META_MARCO_EXPAND(META_REPEAT49(f,__VA_ARGS__)) f(49,arg)
#define META_REPEAT51(f,arg,...) META_MARCO_EXPAND(META_REPEAT50(f,__VA_ARGS__)) f(50,arg)
#define META_REPEAT52(f,arg,...) META_MARCO_EXPAND(META_REPEAT51(f,__VA_ARGS__)) f(51,arg)
#define META_REPEAT53(f,arg,...) META_MARCO_EXPAND(META_REPEAT52(f,__VA_ARGS__)) f(52,arg)
#define META_REPEAT54(f,arg,...) META_MARCO_EXPAND(META_REPEAT53(f,__VA_ARGS__)) f(53,arg)
#define META_REPEAT55(f,arg,...) META_MARCO_EXPAND(META_REPEAT54(f,__VA_ARGS__)) f(54,arg)
#define META_REPEAT56(f,arg,...) META_MARCO_EXPAND(META_REPEAT55(f,__VA_ARGS__)) f(55,arg)
#define META_REPEAT57(f,arg,...) META_MARCO_EXPAND(META_REPEAT56(f,__VA_ARGS__)) f(56,arg)
#define META_REPEAT58(f,arg,...) META_MARCO_EXPAND(META_REPEAT57(f,__VA_ARGS__)) f(57,arg)
#define META_REPEAT59(f,arg,...) META_MARCO_EXPAND(META_REPEAT58(f,__VA_ARGS__)) f(58,arg)
#define META_REPEAT60(f,arg,...) META_MARCO_EXPAND(META_REPEAT59(f,__VA_ARGS__)) f(59,arg)
#define META_REPEAT61(f,arg,...) META_MARCO_EXPAND(META_REPEAT60(f,__VA_ARGS__)) f(60,arg)
#define META_REPEAT62(f,arg,...) META_MARCO_EXPAND(META_REPEAT61(f,__VA_ARGS__)) f(61,arg)
#define META_REPEAT63(f,arg,...) META_MARCO_EXPAND(META_REPEAT62(f,__VA_ARGS__)) f(62,arg)
#define META_REPEAT64(f,arg,...) META_MARCO_EXPAND(META_REPEAT63(f,__VA_ARGS__)) f(63,arg)

#define META_REPEAT_(f,...) \
		META_MARCO_EXPAND(META_CONCAT(META_REPEAT,META_ARG_COUNT(__VA_ARGS__))(f,__VA_ARGS__))

// For example:
// 
// #define printf_macro(i, arg) printf("%d: %s", i, arg);
// META_REPEAT(printf_macro, "First", "Second", "Third")
// 
// Expand to:
// printf("%d: %s", 1, "First"); printf("%d: %s", 2, "Second"); printf("%d: %s", 3, "Third");
#define META_REPEAT(f,...) \
		META_REPEAT_(f,__VA_ARGS__)
