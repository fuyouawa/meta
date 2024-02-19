#pragma once
#include <meta/macro/basic/primitive.hpp>
#include <meta/macro/basic/increment.hpp>
#include <meta/macro/basic/decrement.hpp>
#include <meta/macro/basic/equal.hpp>
#include <meta/macro/basic/while.hpp>

/*--------------------------------------------------
*                     Basic                         |
*                 Public macros                     |
---------------------------------------------------*/

// Simulate for loop
// 
// Parameters:
//	f: Function(Macro) called in each iteration of the loop
//	n: Number of iterations in the loop
//	va_args: User data passed to f(parameter 1)
#define META_FOR(f, n, ...)			META_WHILE(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
// Used in nested calls of META_FOR
#define META_FOR2(f, n, ...)		META_WHILE2(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
// Used in nested calls of META_FOR2
#define META_FOR3(f, n, ...)		META_WHILE3(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
// Used in nested calls of META_FOR3
#define META_FOR4(f, n, ...)		META_WHILE4(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)

#define META_FOREACH(f, ...)		META_FOR(INTERNAL_META_FOREACH_IMPL, META_COUNT(__VA_ARGS__), f, __VA_ARGS__)

// Get the number of variable arguments
#define META_COUNT(...)				INTERNAL_META_COUNT(__VA_ARGS__)

#define META_RESERVE(n, ...)		INTERNAL_META_RESERVE(n, __VA_ARGS__)
#define META_REMOVE_LAST(...)		META_RESERVE(META_DEC(META_COUNT(__VA_ARGS__)), __VA_ARGS__)

#define META_INDEX(i, ...)			INTERNAL_META_INDEX(i, __VA_ARGS__)

#define META_INDEX_IS_END(i, ...)	META_EQUAL(META_INC(i), META_COUNT(__VA_ARGS__))
#define META_INDEX_IS_BEGIN(i, ...) META_EQUAL(i, 0)

#define META_IS_EMPTY(...)			META_EQUAL(META_COUNT(__VA_ARGS__), 0)


/*--------------------------------------------------
*                     Basic                         |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_FOR_COND(i, n) META_EQUAL(i, n)

// Use in internal
#define SYS_META_FOR(f, n, ...)			SYS_META_WHILE(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
#define SYS_META_FOR2(f, n, ...)		SYS_META_WHILE2(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
#define SYS_META_FOR3(f, n, ...)		SYS_META_WHILE3(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)
#define SYS_META_FOR4(f, n, ...)		SYS_META_WHILE4(f, INTERNAL_META_FOR_COND, META_DEC(n), __VA_ARGS__)

// Internal for META_COUNT
#define INTERNAL_META_COUNT_IMPL(\
	 _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \
	_10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
	_20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
	_30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
	_40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
	_50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
	_60, _61, _62, _63, _64, N, ...) N

#define INTERNAL_META_COUNT(...) META_EXPAND(INTERNAL_META_COUNT_IMPL(0, ##__VA_ARGS__,\
	64, 63, 62, 61, 60, \
	59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
	39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
	29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
	19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
	 9,  8,  7,  6,  5,  4,  3,  2,  1,  0))


// Internal for META_INDEX
#define INTERNAL_META_INDEX_IMPL(target_i, i, ...) META_CAT(INTERNAL_META_INDEX_IMPL_, META_EQUAL(i, target_i))(target_i, i, __VA_ARGS__)
#define INTERNAL_META_INDEX_IMPL_0(target_i, i, x, ...) META_DEFER(INTERNAL_META_INDEX_IMPL_I)()(target_i, META_INC(i), __VA_ARGS__)
#define INTERNAL_META_INDEX_IMPL_1(target_i, i, x, ...) x
#define INTERNAL_META_INDEX_IMPL_I() INTERNAL_META_INDEX_IMPL

#define INTERNAL_META_INDEX(target_i, ...) META_EVAL2(INTERNAL_META_INDEX_IMPL(target_i, 0, __VA_ARGS__))

// Internal for META_RESERVE
#define INTERNAL_META_RESERVE_IMPL(i, ...) META_INDEX(i, __VA_ARGS__)
#define INTERNAL_META_RESERVE(n, ...) SYS_META_FOR(INTERNAL_META_RESERVE_IMPL, n, __VA_ARGS__)

// Internal for META_FOREACH
#define INTERNAL_META_FOREACH_IMPL(i, f, ...) f(i, META_INDEX(i, __VA_ARGS__))