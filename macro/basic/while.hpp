#pragma once
#include <meta/macro/basic/primitive.hpp>
#include <meta/macro/basic/increment.hpp>
#include <meta/macro/basic/decrement.hpp>
#include <meta/macro/basic/eval.hpp>

#define META_WHILE(f, cond, cond_data, ...) INTERNAL_META_WHILE(f, cond, cond_data, __VA_ARGS__)
#define META_WHILE_EX(n, f, cond, cond_data, ...) INTERNAL_META_WHILE_EX(n, f, cond, cond_data, __VA_ARGS__)
#define META_WHILE2(f, cond, cond_data, ...) INTERNAL_META_WHILE2(f, cond, cond_data, __VA_ARGS__)
#define META_WHILE3(f, cond, cond_data, ...) INTERNAL_META_WHILE3(f, cond, cond_data, __VA_ARGS__)
#define META_WHILE4(f, cond, cond_data, ...) INTERNAL_META_WHILE4(f, cond, cond_data, __VA_ARGS__)


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal META_WHILE
#define INTERNAL_META_WHILE_IMPL(f, i, cond, cond_data, ...) META_CAT(INTERNAL_META_WHILE_IMPL_, cond(i, cond_data))(f, i, cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE_IMPL_1(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__)) META_DEFER(INTERNAL_META_WHILE_IMPL_I)()(f, META_INC(i), cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE_IMPL_0(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__))
#define INTERNAL_META_WHILE_IMPL_I() INTERNAL_META_WHILE_IMPL

#define INTERNAL_META_WHILE(f, cond, cond_data, ...) META_EVAL(256, INTERNAL_META_WHILE_IMPL(f, 0, cond, cond_data, __VA_ARGS__))
#define INTERNAL_META_WHILE_EX(n, f, cond, cond_data, ...) META_EVAL(n, INTERNAL_META_WHILE_IMPL(f, 0, cond, cond_data, __VA_ARGS__))

// Internal META_WHILE2
#define INTERNAL_META_WHILE2_IMPL(f, i, cond, cond_data, ...) META_CAT(INTERNAL_META_WHILE2_IMPL_, cond(i, cond_data))(f, i, cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE2_IMPL_1(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__)) META_DEFER(INTERNAL_META_WHILE2_IMPL_I)()(f, META_INC(i), cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE2_IMPL_0(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__))
#define INTERNAL_META_WHILE2_IMPL_I() INTERNAL_META_WHILE2_IMPL

#define INTERNAL_META_WHILE2(f, cond, cond_data, ...) INTERNAL_META_WHILE2_IMPL(f, 0, cond, cond_data, __VA_ARGS__)

// Internal META_WHILE3
#define INTERNAL_META_WHILE3_IMPL(f, i, cond, cond_data, ...) META_CAT(INTERNAL_META_WHILE3_IMPL_, cond(i, cond_data))(f, i, cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE3_IMPL_1(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__)) META_DEFER(INTERNAL_META_WHILE3_IMPL_I)()(f, META_INC(i), cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE3_IMPL_0(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__))
#define INTERNAL_META_WHILE3_IMPL_I() INTERNAL_META_WHILE3_IMPL

#define INTERNAL_META_WHILE3(f, cond, cond_data, ...) INTERNAL_META_WHILE3_IMPL(f, 0, cond, cond_data, __VA_ARGS__)

// Internal META_WHILE4
#define INTERNAL_META_WHILE4_IMPL(f, i, cond, cond_data, ...) META_CAT(INTERNAL_META_WHILE4_IMPL_, cond(i, cond_data))(f, i, cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE4_IMPL_1(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__)) META_DEFER(INTERNAL_META_WHILE4_IMPL_I)()(f, META_INC(i), cond, cond_data, __VA_ARGS__)
#define INTERNAL_META_WHILE4_IMPL_0(f, i, cond, cond_data, ...) META_EXPAND(f(i, __VA_ARGS__))
#define INTERNAL_META_WHILE4_IMPL_I() INTERNAL_META_WHILE4_IMPL

#define INTERNAL_META_WHILE4(f, cond, cond_data, ...) INTERNAL_META_WHILE4_IMPL(f, 0, cond, cond_data, __VA_ARGS__)
