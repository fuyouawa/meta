#pragma once
#include <meta/macro/va_args/reserve.hpp>
#include <meta/macro/va_args/pop_front.hpp>
#include <meta/macro/arithmetic/increment.hpp>

#define META_SUB_ARGS(beg, end, ...) META_POP_FRONT_N(beg, META_RESERVE(META_INC(end), __VA_ARGS__))