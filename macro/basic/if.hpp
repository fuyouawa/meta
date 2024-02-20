#pragma once
#include <meta/macro/basic/primitive.hpp>

#define META_IF(cond, true_func) INTERNAL_META_IF(cond, true_func)
#define META_NOT_IF(cond, true_func) INTERNAL_META_IF(META_NOT(cond), true_func)

/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_IF_1(true_func) true_func()
#define INTERNAL_META_IF_0(true_func)

#define INTERNAL_META_IF(cond, true_func) META_EXPAND(META_CAT(INTERNAL_META_IF_, META_BOOL(cond))(true_func))