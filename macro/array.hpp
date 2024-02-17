#pragma once
#include <meta/macro/basic.hpp>
/*--------------------------------------------------
*                     array                         |
*                 Public macros                     |
---------------------------------------------------*/

// Get the number of variable arguments
#define META_ARG_COUNT(...) INTERNAL_META_ARG_COUNT(__VA_ARGS__)
// Get the number of array
#define META_ARRAY_COUNT(array) META_ARG_COUNT(META_ARRAY_ELEMS(array))
// Get the subarray of array(0 ~ count)
#define META_SUBARRAY(count, array) INTERNAL_META_RESERVE(count, META_ARRAY_ELEMS(array))
// Get the element at the specified index of array(start 0)
#define META_ARRAY_INDEX_BY_0(i, array) INTERNAL_META_ARGS_INDEX_BY_0(i, META_ARRAY_ELEMS(array))
// Get the element at the specified index of array(start 1)
#define META_ARRAY_INDEX_BY_1(i, array) INTERNAL_META_ARGS_INDEX_BY_1(i, META_ARRAY_ELEMS(array))
// Convert the array to variable arguments
#define META_ARRAY_ELEMS(p) META_REMOVE_PARAM(p)
#define META_ARRAY_REMOVE_LAST(array) INTERNAL_META_ARGS_REMOVE_LAST(array)


/*--------------------------------------------------
*                     array                         |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_ARG_COUNT
#define INTERNAL_META_ARG_COUNT_IMPL(\
	 _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \
	_10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
	_20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
	_30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
	_40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
	_50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
	_60, _61, _62, _63, _64, N, ...) N

#define INTERNAL_META_ARG_COUNT(...) META_EXPAND(INTERNAL_META_ARG_COUNT_IMPL(0, ##__VA_ARGS__,\
	64, 63, 62, 61, 60, \
	59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
	39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
	29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
	19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
	 9,  8,  7,  6,  5,  4,  3,  2,  1,  0))

// Internal for META_SUBARRAY
#define INTERNAL_META_RESERVE_0()
#define INTERNAL_META_RESERVE_1(n) n
#define INTERNAL_META_RESERVE_2(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_1(__VA_ARGS__))
#define INTERNAL_META_RESERVE_3(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_2(__VA_ARGS__))
#define INTERNAL_META_RESERVE_4(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_3(__VA_ARGS__))
#define INTERNAL_META_RESERVE_5(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_4(__VA_ARGS__))
#define INTERNAL_META_RESERVE_6(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_5(__VA_ARGS__))
#define INTERNAL_META_RESERVE_7(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_6(__VA_ARGS__))
#define INTERNAL_META_RESERVE_8(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_7(__VA_ARGS__))
#define INTERNAL_META_RESERVE_9(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_8(__VA_ARGS__))
#define INTERNAL_META_RESERVE_10(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_9(__VA_ARGS__))
#define INTERNAL_META_RESERVE_11(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_10(__VA_ARGS__))
#define INTERNAL_META_RESERVE_12(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_11(__VA_ARGS__))
#define INTERNAL_META_RESERVE_13(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_12(__VA_ARGS__))
#define INTERNAL_META_RESERVE_14(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_13(__VA_ARGS__))
#define INTERNAL_META_RESERVE_15(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_14(__VA_ARGS__))
#define INTERNAL_META_RESERVE_16(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_15(__VA_ARGS__))
#define INTERNAL_META_RESERVE_17(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_16(__VA_ARGS__))
#define INTERNAL_META_RESERVE_18(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_17(__VA_ARGS__))
#define INTERNAL_META_RESERVE_19(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_18(__VA_ARGS__))
#define INTERNAL_META_RESERVE_20(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_19(__VA_ARGS__))
#define INTERNAL_META_RESERVE_21(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_20(__VA_ARGS__))
#define INTERNAL_META_RESERVE_22(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_21(__VA_ARGS__))
#define INTERNAL_META_RESERVE_23(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_22(__VA_ARGS__))
#define INTERNAL_META_RESERVE_24(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_23(__VA_ARGS__))
#define INTERNAL_META_RESERVE_25(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_24(__VA_ARGS__))
#define INTERNAL_META_RESERVE_26(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_25(__VA_ARGS__))
#define INTERNAL_META_RESERVE_27(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_26(__VA_ARGS__))
#define INTERNAL_META_RESERVE_28(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_27(__VA_ARGS__))
#define INTERNAL_META_RESERVE_29(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_28(__VA_ARGS__))
#define INTERNAL_META_RESERVE_30(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_29(__VA_ARGS__))
#define INTERNAL_META_RESERVE_31(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_30(__VA_ARGS__))
#define INTERNAL_META_RESERVE_32(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_31(__VA_ARGS__))
#define INTERNAL_META_RESERVE_33(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_32(__VA_ARGS__))
#define INTERNAL_META_RESERVE_34(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_33(__VA_ARGS__))
#define INTERNAL_META_RESERVE_35(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_34(__VA_ARGS__))
#define INTERNAL_META_RESERVE_36(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_35(__VA_ARGS__))
#define INTERNAL_META_RESERVE_37(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_36(__VA_ARGS__))
#define INTERNAL_META_RESERVE_38(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_37(__VA_ARGS__))
#define INTERNAL_META_RESERVE_39(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_38(__VA_ARGS__))
#define INTERNAL_META_RESERVE_40(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_39(__VA_ARGS__))
#define INTERNAL_META_RESERVE_41(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_40(__VA_ARGS__))
#define INTERNAL_META_RESERVE_42(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_41(__VA_ARGS__))
#define INTERNAL_META_RESERVE_43(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_42(__VA_ARGS__))
#define INTERNAL_META_RESERVE_44(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_43(__VA_ARGS__))
#define INTERNAL_META_RESERVE_45(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_44(__VA_ARGS__))
#define INTERNAL_META_RESERVE_46(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_45(__VA_ARGS__))
#define INTERNAL_META_RESERVE_47(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_46(__VA_ARGS__))
#define INTERNAL_META_RESERVE_48(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_47(__VA_ARGS__))
#define INTERNAL_META_RESERVE_49(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_48(__VA_ARGS__))
#define INTERNAL_META_RESERVE_50(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_49(__VA_ARGS__))
#define INTERNAL_META_RESERVE_51(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_50(__VA_ARGS__))
#define INTERNAL_META_RESERVE_52(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_51(__VA_ARGS__))
#define INTERNAL_META_RESERVE_53(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_52(__VA_ARGS__))
#define INTERNAL_META_RESERVE_54(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_53(__VA_ARGS__))
#define INTERNAL_META_RESERVE_55(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_54(__VA_ARGS__))
#define INTERNAL_META_RESERVE_56(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_55(__VA_ARGS__))
#define INTERNAL_META_RESERVE_57(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_56(__VA_ARGS__))
#define INTERNAL_META_RESERVE_58(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_57(__VA_ARGS__))
#define INTERNAL_META_RESERVE_59(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_58(__VA_ARGS__))
#define INTERNAL_META_RESERVE_60(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_59(__VA_ARGS__))
#define INTERNAL_META_RESERVE_61(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_60(__VA_ARGS__))
#define INTERNAL_META_RESERVE_62(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_61(__VA_ARGS__))
#define INTERNAL_META_RESERVE_63(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_62(__VA_ARGS__))
#define INTERNAL_META_RESERVE_64(n, ...) n, META_EXPAND(INTERNAL_META_RESERVE_63(__VA_ARGS__))

#define INTERNAL_META_RESERVE(count, ...) \
	META_EXPAND(META_CAT(INTERNAL_META_RESERVE_, count)(__VA_ARGS__))


// Internal for META_ARRAY_REMOVE_LAST
#define INTERNAL_META_ARGS_REMOVE_LAST_0()
#define INTERNAL_META_ARGS_REMOVE_LAST_1(n)
#define INTERNAL_META_ARGS_REMOVE_LAST_2(n, ...) n
#define INTERNAL_META_ARGS_REMOVE_LAST_3(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_2(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_4(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_3(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_5(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_4(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_6(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_5(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_7(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_6(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_8(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_7(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_9(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_8(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_10(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_9(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_11(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_10(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_12(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_11(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_13(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_12(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_14(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_13(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_15(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_14(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_16(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_15(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_17(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_16(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_18(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_17(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_19(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_18(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_20(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_19(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_21(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_20(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_22(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_21(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_23(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_22(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_24(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_23(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_25(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_24(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_26(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_25(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_27(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_26(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_28(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_27(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_29(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_28(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_30(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_29(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_31(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_30(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_32(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_31(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_33(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_32(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_34(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_33(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_35(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_34(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_36(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_35(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_37(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_36(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_38(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_37(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_39(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_38(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_40(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_39(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_41(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_40(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_42(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_41(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_43(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_42(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_44(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_43(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_45(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_44(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_46(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_45(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_47(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_46(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_48(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_47(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_49(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_48(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_50(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_49(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_51(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_50(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_52(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_51(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_53(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_52(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_54(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_53(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_55(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_54(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_56(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_55(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_57(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_56(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_58(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_57(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_59(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_58(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_60(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_59(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_61(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_60(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_62(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_61(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_63(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_62(__VA_ARGS__))
#define INTERNAL_META_ARGS_REMOVE_LAST_64(n, ...) n, META_EXPAND(INTERNAL_META_ARGS_REMOVE_LAST_63(__VA_ARGS__))

#define INTERNAL_META_ARGS_REMOVE_LAST_I(...) \
	META_EXPAND(META_CAT(INTERNAL_META_ARGS_REMOVE_LAST_, META_ARG_COUNT(__VA_ARGS__))(__VA_ARGS__))

#define INTERNAL_META_ARGS_REMOVE_LAST(array) (INTERNAL_META_ARGS_REMOVE_LAST_I(META_ARRAY_ELEMS(array)))


// Internal for META_ARGS_INDEX_BY_0
#define INTERNAL_META_ARGS_INDEX_BY_0_0(_0, ...) _0
#define INTERNAL_META_ARGS_INDEX_BY_0_1(_0, _1, ...) _1
#define INTERNAL_META_ARGS_INDEX_BY_0_2(_0, _1, _2, ...) _2
#define INTERNAL_META_ARGS_INDEX_BY_0_3(_0, _1, _2, _3, ...) _3
#define INTERNAL_META_ARGS_INDEX_BY_0_4(_0, _1, _2, _3, _4, ...) _4
#define INTERNAL_META_ARGS_INDEX_BY_0_5(_0, _1, _2, _3, _4, _5, ...) _5
#define INTERNAL_META_ARGS_INDEX_BY_0_6(_0, _1, _2, _3, _4, _5, _6, ...) _6
#define INTERNAL_META_ARGS_INDEX_BY_0_7(_0, _1, _2, _3, _4, _5, _6, _7, ...) _7
#define INTERNAL_META_ARGS_INDEX_BY_0_8(_0, _1, _2, _3, _4, _5, _6, _7, _8, ...) _8
#define INTERNAL_META_ARGS_INDEX_BY_0_9(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) _9
#define INTERNAL_META_ARGS_INDEX_BY_0_10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) _10
#define INTERNAL_META_ARGS_INDEX_BY_0_11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) _11
#define INTERNAL_META_ARGS_INDEX_BY_0_12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) _12
#define INTERNAL_META_ARGS_INDEX_BY_0_13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) _13
#define INTERNAL_META_ARGS_INDEX_BY_0_14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) _14
#define INTERNAL_META_ARGS_INDEX_BY_0_15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) _15
#define INTERNAL_META_ARGS_INDEX_BY_0_16(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) _16
#define INTERNAL_META_ARGS_INDEX_BY_0_17(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, ...) _17
#define INTERNAL_META_ARGS_INDEX_BY_0_18(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, ...) _18
#define INTERNAL_META_ARGS_INDEX_BY_0_19(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, ...) _19
#define INTERNAL_META_ARGS_INDEX_BY_0_20(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, ...) _20
#define INTERNAL_META_ARGS_INDEX_BY_0_21(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, ...) _21
#define INTERNAL_META_ARGS_INDEX_BY_0_22(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, ...) _22
#define INTERNAL_META_ARGS_INDEX_BY_0_23(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, ...) _23
#define INTERNAL_META_ARGS_INDEX_BY_0_24(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, ...) _24
#define INTERNAL_META_ARGS_INDEX_BY_0_25(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, ...) _25
#define INTERNAL_META_ARGS_INDEX_BY_0_26(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, ...) _26
#define INTERNAL_META_ARGS_INDEX_BY_0_27(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, ...) _27
#define INTERNAL_META_ARGS_INDEX_BY_0_28(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, ...) _28
#define INTERNAL_META_ARGS_INDEX_BY_0_29(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, ...) _29
#define INTERNAL_META_ARGS_INDEX_BY_0_30(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, ...) _30
#define INTERNAL_META_ARGS_INDEX_BY_0_31(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, ...) _31
#define INTERNAL_META_ARGS_INDEX_BY_0_32(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, ...) _32
#define INTERNAL_META_ARGS_INDEX_BY_0_33(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, ...) _33
#define INTERNAL_META_ARGS_INDEX_BY_0_34(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, ...) _34
#define INTERNAL_META_ARGS_INDEX_BY_0_35(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, ...) _35
#define INTERNAL_META_ARGS_INDEX_BY_0_36(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, ...) _36
#define INTERNAL_META_ARGS_INDEX_BY_0_37(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, ...) _37
#define INTERNAL_META_ARGS_INDEX_BY_0_38(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, ...) _38
#define INTERNAL_META_ARGS_INDEX_BY_0_39(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, ...) _39
#define INTERNAL_META_ARGS_INDEX_BY_0_40(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, ...) _40
#define INTERNAL_META_ARGS_INDEX_BY_0_41(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, ...) _41
#define INTERNAL_META_ARGS_INDEX_BY_0_42(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, ...) _42
#define INTERNAL_META_ARGS_INDEX_BY_0_43(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, ...) _43
#define INTERNAL_META_ARGS_INDEX_BY_0_44(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, ...) _44
#define INTERNAL_META_ARGS_INDEX_BY_0_45(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, ...) _45
#define INTERNAL_META_ARGS_INDEX_BY_0_46(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, ...) _46
#define INTERNAL_META_ARGS_INDEX_BY_0_47(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, ...) _47
#define INTERNAL_META_ARGS_INDEX_BY_0_48(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, ...) _48
#define INTERNAL_META_ARGS_INDEX_BY_0_49(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, ...) _49
#define INTERNAL_META_ARGS_INDEX_BY_0_50(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, ...) _50
#define INTERNAL_META_ARGS_INDEX_BY_0_51(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, ...) _51
#define INTERNAL_META_ARGS_INDEX_BY_0_52(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, ...) _52
#define INTERNAL_META_ARGS_INDEX_BY_0_53(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, ...) _53
#define INTERNAL_META_ARGS_INDEX_BY_0_54(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, ...) _54
#define INTERNAL_META_ARGS_INDEX_BY_0_55(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, ...) _55
#define INTERNAL_META_ARGS_INDEX_BY_0_56(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, ...) _56
#define INTERNAL_META_ARGS_INDEX_BY_0_57(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, ...) _57
#define INTERNAL_META_ARGS_INDEX_BY_0_58(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, ...) _58
#define INTERNAL_META_ARGS_INDEX_BY_0_59(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, ...) _59
#define INTERNAL_META_ARGS_INDEX_BY_0_60(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, ...) _60
#define INTERNAL_META_ARGS_INDEX_BY_0_61(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, ...) _61
#define INTERNAL_META_ARGS_INDEX_BY_0_62(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, ...) _62
#define INTERNAL_META_ARGS_INDEX_BY_0_63(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, ...) _63
#define INTERNAL_META_ARGS_INDEX_BY_0_64(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, ...) _64

#define INTERNAL_META_ARGS_INDEX_BY_0(i, ...) META_CAT(INTERNAL_META_ARGS_INDEX_BY_0_, i)(__VA_ARGS__)


// Internal for META_ARGS_INDEX_BY_1
#define INTERNAL_META_ARGS_INDEX_BY_1_1(_1, ...) _1
#define INTERNAL_META_ARGS_INDEX_BY_1_2(_1, _2, ...) _2
#define INTERNAL_META_ARGS_INDEX_BY_1_3(_1, _2, _3, ...) _3
#define INTERNAL_META_ARGS_INDEX_BY_1_4(_1, _2, _3, _4, ...) _4
#define INTERNAL_META_ARGS_INDEX_BY_1_5(_1, _2, _3, _4, _5, ...) _5
#define INTERNAL_META_ARGS_INDEX_BY_1_6(_1, _2, _3, _4, _5, _6, ...) _6
#define INTERNAL_META_ARGS_INDEX_BY_1_7(_1, _2, _3, _4, _5, _6, _7, ...) _7
#define INTERNAL_META_ARGS_INDEX_BY_1_8(_1, _2, _3, _4, _5, _6, _7, _8, ...) _8
#define INTERNAL_META_ARGS_INDEX_BY_1_9(_1, _2, _3, _4, _5, _6, _7, _8, _9, ...) _9
#define INTERNAL_META_ARGS_INDEX_BY_1_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) _10
#define INTERNAL_META_ARGS_INDEX_BY_1_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) _11
#define INTERNAL_META_ARGS_INDEX_BY_1_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) _12
#define INTERNAL_META_ARGS_INDEX_BY_1_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) _13
#define INTERNAL_META_ARGS_INDEX_BY_1_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) _14
#define INTERNAL_META_ARGS_INDEX_BY_1_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) _15
#define INTERNAL_META_ARGS_INDEX_BY_1_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) _16
#define INTERNAL_META_ARGS_INDEX_BY_1_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, ...) _17
#define INTERNAL_META_ARGS_INDEX_BY_1_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, ...) _18
#define INTERNAL_META_ARGS_INDEX_BY_1_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, ...) _19
#define INTERNAL_META_ARGS_INDEX_BY_1_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, ...) _20
#define INTERNAL_META_ARGS_INDEX_BY_1_21(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, ...) _21
#define INTERNAL_META_ARGS_INDEX_BY_1_22(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, ...) _22
#define INTERNAL_META_ARGS_INDEX_BY_1_23(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, ...) _23
#define INTERNAL_META_ARGS_INDEX_BY_1_24(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, ...) _24
#define INTERNAL_META_ARGS_INDEX_BY_1_25(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, ...) _25
#define INTERNAL_META_ARGS_INDEX_BY_1_26(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, ...) _26
#define INTERNAL_META_ARGS_INDEX_BY_1_27(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, ...) _27
#define INTERNAL_META_ARGS_INDEX_BY_1_28(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, ...) _28
#define INTERNAL_META_ARGS_INDEX_BY_1_29(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, ...) _29
#define INTERNAL_META_ARGS_INDEX_BY_1_30(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, ...) _30
#define INTERNAL_META_ARGS_INDEX_BY_1_31(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, ...) _31
#define INTERNAL_META_ARGS_INDEX_BY_1_32(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, ...) _32
#define INTERNAL_META_ARGS_INDEX_BY_1_33(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, ...) _33
#define INTERNAL_META_ARGS_INDEX_BY_1_34(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, ...) _34
#define INTERNAL_META_ARGS_INDEX_BY_1_35(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, ...) _35
#define INTERNAL_META_ARGS_INDEX_BY_1_36(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, ...) _36
#define INTERNAL_META_ARGS_INDEX_BY_1_37(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, ...) _37
#define INTERNAL_META_ARGS_INDEX_BY_1_38(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, ...) _38
#define INTERNAL_META_ARGS_INDEX_BY_1_39(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, ...) _39
#define INTERNAL_META_ARGS_INDEX_BY_1_40(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, ...) _40
#define INTERNAL_META_ARGS_INDEX_BY_1_41(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, ...) _41
#define INTERNAL_META_ARGS_INDEX_BY_1_42(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, ...) _42
#define INTERNAL_META_ARGS_INDEX_BY_1_43(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, ...) _43
#define INTERNAL_META_ARGS_INDEX_BY_1_44(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, ...) _44
#define INTERNAL_META_ARGS_INDEX_BY_1_45(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, ...) _45
#define INTERNAL_META_ARGS_INDEX_BY_1_46(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, ...) _46
#define INTERNAL_META_ARGS_INDEX_BY_1_47(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, ...) _47
#define INTERNAL_META_ARGS_INDEX_BY_1_48(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, ...) _48
#define INTERNAL_META_ARGS_INDEX_BY_1_49(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, ...) _49
#define INTERNAL_META_ARGS_INDEX_BY_1_50(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, ...) _50
#define INTERNAL_META_ARGS_INDEX_BY_1_51(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, ...) _51
#define INTERNAL_META_ARGS_INDEX_BY_1_52(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, ...) _52
#define INTERNAL_META_ARGS_INDEX_BY_1_53(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, ...) _53
#define INTERNAL_META_ARGS_INDEX_BY_1_54(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, ...) _54
#define INTERNAL_META_ARGS_INDEX_BY_1_55(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, ...) _55
#define INTERNAL_META_ARGS_INDEX_BY_1_56(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, ...) _56
#define INTERNAL_META_ARGS_INDEX_BY_1_57(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, ...) _57
#define INTERNAL_META_ARGS_INDEX_BY_1_58(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, ...) _58
#define INTERNAL_META_ARGS_INDEX_BY_1_59(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, ...) _59
#define INTERNAL_META_ARGS_INDEX_BY_1_60(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, ...) _60
#define INTERNAL_META_ARGS_INDEX_BY_1_61(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, ...) _61
#define INTERNAL_META_ARGS_INDEX_BY_1_62(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, ...) _62
#define INTERNAL_META_ARGS_INDEX_BY_1_63(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, ...) _63
#define INTERNAL_META_ARGS_INDEX_BY_1_64(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, ...) _64
#define INTERNAL_META_ARGS_INDEX_BY_1_64(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, ...) _65

#define INTERNAL_META_ARGS_INDEX_BY_1(i, ...) META_CAT(INTERNAL_META_ARGS_INDEX_BY_1_, i)(__VA_ARGS__)