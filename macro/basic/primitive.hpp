#pragma once
/*--------------------------------------------------
*                   Primitive                       |
*                 Public macros                     |
---------------------------------------------------*/

// expand 243 count
#define META_EVAL(...)			INTERNAL_META_EVAL(__VA_ARGS__)
// avoid painted-blue(use in internal, You'd better not use it)
#define META_EVAL2(...)			INTERNAL_META_EVAL2(__VA_ARGS__)

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


// (...) -> ...
#define META_GET_PARAM(p)		META_EXPAND p
// (...)anything -> anything
#define META_REMOVE_PARAM(p)	META_EMPTY p

// META_IF_ELSE(condition)( True branch )( False branch )
#define META_IF_ELSE(cond)		INTERNAL_META_IF_ELSE(cond)
// META_IF(condition)( True branch )
#define META_IF(cond)			META_IF_ELSE(META_NOT(cond))()

#define META_DEFER(x) x META_EMPTY()

/*--------------------------------------------------
*                   Primitive                       |
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

#define INTERNAL_META_IF_ELSE_ELSE_1(...)
#define INTERNAL_META_IF_ELSE_ELSE_0(...) __VA_ARGS__
#define INTERNAL_META_IF_ELSE_HELPER_1(...) __VA_ARGS__ INTERNAL_META_IF_ELSE_ELSE_1
#define INTERNAL_META_IF_ELSE_HELPER_0(...)			    INTERNAL_META_IF_ELSE_ELSE_0
#define INTERNAL_META_IF_ELSE(cond) META_CAT(INTERNAL_META_IF_ELSE_HELPER_, META_BOOL(cond))

#define INTERNAL_META_EVAL(...)  INTERNAL_META_EVAL_1(INTERNAL_META_EVAL_1(INTERNAL_META_EVAL_1(__VA_ARGS__)))
#define INTERNAL_META_EVAL_1(...) INTERNAL_META_EVAL_2(INTERNAL_META_EVAL_2(INTERNAL_META_EVAL_2(__VA_ARGS__)))
#define INTERNAL_META_EVAL_2(...) INTERNAL_META_EVAL_3(INTERNAL_META_EVAL_3(INTERNAL_META_EVAL_3(__VA_ARGS__)))
#define INTERNAL_META_EVAL_3(...) INTERNAL_META_EVAL_4(INTERNAL_META_EVAL_4(INTERNAL_META_EVAL_4(__VA_ARGS__)))
#define INTERNAL_META_EVAL_4(...) INTERNAL_META_EVAL_5(INTERNAL_META_EVAL_5(INTERNAL_META_EVAL_5(__VA_ARGS__)))
#define INTERNAL_META_EVAL_5(...) __VA_ARGS__

#define INTERNAL_META_EVAL2(...)  INTERNAL_META_EVAL2_1(INTERNAL_META_EVAL2_1(INTERNAL_META_EVAL2_1(__VA_ARGS__)))
#define INTERNAL_META_EVAL2_1(...) INTERNAL_META_EVAL2_2(INTERNAL_META_EVAL2_2(INTERNAL_META_EVAL2_2(__VA_ARGS__)))
#define INTERNAL_META_EVAL2_2(...) INTERNAL_META_EVAL2_3(INTERNAL_META_EVAL2_3(INTERNAL_META_EVAL2_3(__VA_ARGS__)))
#define INTERNAL_META_EVAL2_3(...) INTERNAL_META_EVAL2_4(INTERNAL_META_EVAL2_4(INTERNAL_META_EVAL2_4(__VA_ARGS__)))
#define INTERNAL_META_EVAL2_4(...) INTERNAL_META_EVAL2_5(INTERNAL_META_EVAL2_5(INTERNAL_META_EVAL2_5(__VA_ARGS__)))
#define INTERNAL_META_EVAL2_5(...) __VA_ARGS__