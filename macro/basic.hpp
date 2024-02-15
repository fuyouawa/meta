#pragma once
/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/
// Internal for META_COMPL
#define INTERNAL_META_COMPL_0 1
#define INTERNAL_META_COMPL_1 0
// Internal for CHECK
#define INTERNAL_META_CHECK(...) META_EXPAND(INTERNAL_META_GET_SEC(__VA_ARGS__, 0))
#define INTERNAL_META_GET_SEC(x, n, ...) n
#define INTERNAL_META_PROBE(x) x, 1
// Internal for META_IS_EMPTY
#define INTERNAL_META_IS_EMPTY_0 INTERNAL_META_PROBE()
// Internal for META_IS_PAREN
#define INTERNAL_META_IS_PAREN_PROBE(...) INTERNAL_META_PROBE()

#define INTERNAL_META_NOT_0 INTERNAL_META_PROBE()


/*--------------------------------------------------
*                   Public macros                   |
---------------------------------------------------*/
// Concatenate macros
#define META_PRIMITIVE_CAT(l, r) l ## r
// Expand macros first, then concatenate
#define META_CAT(l, r) META_PRIMITIVE_CAT(l, r)

#define META_EXPAND(...) __VA_ARGS__

// 1 -> 0; 0 -> 1
#define META_COMPL(x) META_PRIMITIVE_CAT(INTERNAL_META_COMPL_, x)
// anything -> 0; 0 -> 1
#define META_NOT(x) INTERNAL_META_CHECK(META_PRIMITIVE_CAT(INTERNAL_META_NOT_, x))
// anything -> 1; 0 -> 0
#define MATE_BOOL(x) META_COMPL(META_NOT(x))

#define META_IS_EMPTY(x) INTERNAL_META_CHECK(META_CAT(META_PRIMITIVE_CAT(INTERNAL_META_IS_EMPTY_, x), 0))
#define META_IS_PAREN(x) INTERNAL_META_CHECK(INTERNAL_META_IS_PAREN_PROBE x)