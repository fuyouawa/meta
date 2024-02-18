#pragma once
#include <meta/macro/basic/primitive.hpp>
#include <meta/macro/basic/inc.hpp>
#include <meta/macro/basic/dec.hpp>
#include <meta/macro/basic/equal.hpp>

/*--------------------------------------------------
*                     Basic                         |
*                 Public macros                     |
---------------------------------------------------*/

#define META_FOR(f, n, ...) INTERNAL_META_FOR(f, n, __VA_ARGS__)


/*--------------------------------------------------
*                     Basic                         |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_FOR
#define INTERNAL_META_FOR_IMPL(f, n, i, ...) META_CAT(INTERNAL_META_FOR_IMPL_, META_EQUAL(i, n))(f, n, i, __VA_ARGS__)
#define INTERNAL_META_FOR_IMPL_0(f, n, i, ...) f(i, __VA_ARGS__) META_DEFER(INTERNAL_META_FOR_IMPL_I)()(f, n, META_INC(i), __VA_ARGS__)
#define INTERNAL_META_FOR_IMPL_1(f, n, i, ...) f(i, __VA_ARGS__)
#define INTERNAL_META_FOR_IMPL_I() INTERNAL_META_FOR_IMPL

#define INTERNAL_META_FOR(f, n, ...) META_EVAL(INTERNAL_META_FOR_IMPL(f, META_DEC(n), 0, __VA_ARGS__))