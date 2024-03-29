#pragma once

#define META_EXPAND(...)		__VA_ARGS__

#define META_EMPTY(...)

#define META_CHECK(...)			META_EXPAND(INTERNAL_META_GET_SEC(__VA_ARGS__, 0))
#define META_CHECK_TRUE			0, 1
#define META_CHECK_FALSE		0

// Concatenate macros
#define META_PRIMITIVE_CAT(l, r) l ## r
// Expand macros first, then concatenate
#define META_CAT(l, r)			META_PRIMITIVE_CAT(l, r)

// 1 -> 0; 0 -> 1
#define META_COMPL(x)			META_PRIMITIVE_CAT(INTERNAL_META_COMPL_, x)
// anything -> 0; 0 -> 1
#define META_NOT(x)				META_CHECK(META_PRIMITIVE_CAT(INTERNAL_META_NOT_IS_, x))
// anything -> 1; 0 -> 0
#define META_BOOL(x)			META_COMPL(META_NOT(x))

#define META_IS_PAREN(x)		META_CHECK(INTERNAL_META_IS_PAREN x)

#define META_DEFER(x) x META_EMPTY()

#define META_PACK(...) (__VA_ARGS__)
#define META_UNPACK(x) META_EXPAND x




/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_COMPL
#define INTERNAL_META_COMPL_0 1
#define INTERNAL_META_COMPL_1 0
// Internal for CHECK
#define INTERNAL_META_GET_SEC(x, n, ...) n
// Internal for META_IS_PAREN
#define INTERNAL_META_IS_PAREN(...) META_CHECK_TRUE
// Internal for META_NOT
#define INTERNAL_META_NOT_IS_0 META_CHECK_TRUE
// Internal for META_GET_PARAM
#define INTERNAL_META_GET_PARAM(p) 