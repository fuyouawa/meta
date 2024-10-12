#pragma once
#include <meta/macro/basic/primitive.hpp>


#define META_IF(cond, true_func)    META_EXPAND(_META_IF(cond)(true_func))
#define META_NOT_IF(cond, true_func)    META_EXPAND(_META_NOT_IF(cond)(true_func))
#define META_IF_ELSE(cond, true_func, false_func)    META_EXPAND(_META_IF_ELSE(cond)(true_func)(false_func))

/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define _META_IF_1_ELSE(...)
#define _META_IF_0_ELSE(...) __VA_ARGS__

#define _META_IF_ELSE_1(...) __VA_ARGS__ _META_IF_1_ELSE
#define _META_IF_ELSE_0(...)             _META_IF_0_ELSE

#define _META_IF_1(...) __VA_ARGS__
#define _META_IF_0(...)

#define _META_IF(cond)               META_CAT(_META_IF_, META_BOOL(cond))
#define _META_NOT_IF(cond)           META_CAT(_META_IF_, META_NOT(cond))
#define _META_IF_ELSE(cond)          META_EXPAND(META_CAT(_META_IF_ELSE_, META_BOOL(cond)))