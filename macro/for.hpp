#pragma once
#include <meta/macro/array.hpp>
#include <meta/macro/arithmetic.hpp>
/*--------------------------------------------------
*                      For                          |
*                 Public macros                     |
---------------------------------------------------*/

#define META_FOREACH(f, ...) META_EVAL(INTERNAL_META_FOREACH(META_COUNT(__VA_ARGS__), 0, f, __VA_ARGS__))


/*--------------------------------------------------
*                      For                          |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_FOREACHEACH
#define INTERNAL_META_FOREACH(user_data, i, f, x, ...) META_CAT(INTERNAL_META_FOREACH_IMPL_, META_IS_EMPTY(__VA_ARGS__))(user_data, i, f, x, __VA_ARGS__)
#define INTERNAL_META_FOREACH_IMPL_0(user_data, i, f, x, ...) f(user_data, i, x) META_DEFER(INTERNAL_META_FOREACH_I)()(user_data, META_INC(i), f, __VA_ARGS__)
#define INTERNAL_META_FOREACH_IMPL_1(user_data, i, f, x, ...) f(user_data, i, x)
#define INTERNAL_META_FOREACH_I() INTERNAL_META_FOREACH

#define NNN(...) __VA_ARGS__