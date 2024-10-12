#pragma once
#include <meta/macro/basic/primitive.hpp>

#define META_IF(cond, true_func) META_EXPAND(META_CAT(_META_IF_, META_BOOL(cond))(true_func))
#define META_NOT_IF(cond, true_func) META_IF(META_NOT(cond), true_func)

#define META_IF_ELSE(cond, true_func, false_func) META_EXPAND(META_CAT(META_IF_ELSE_, META_BOOL(cond))(true_func, false_func))

/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define _META_IF_1(true_func) true_func()
#define _META_IF_0(true_func)

#define _META_IF_ELSE_1(true_func, false_func) true_func()
#define _META_IF_ELSE_0(true_func, false_func) false_func()
