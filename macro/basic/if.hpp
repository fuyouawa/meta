#pragma once
#include <meta/macro/basic/primitive.hpp>

// META_IF_ELSE(condition)( True branch )( False branch )
#define META_IF_ELSE(cond)		INTERNAL_META_IF_ELSE(cond)
// META_IF(condition)( True branch )
#define META_IF(cond)			META_IF_ELSE(META_NOT(cond))()


/*--------------------------------------------------
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

#define INTERNAL_META_IF_ELSE_ELSE_1(...)
#define INTERNAL_META_IF_ELSE_ELSE_0(...) __VA_ARGS__
#define INTERNAL_META_IF_ELSE_HELPER_1(...) __VA_ARGS__ INTERNAL_META_IF_ELSE_ELSE_1
#define INTERNAL_META_IF_ELSE_HELPER_0(...)			    INTERNAL_META_IF_ELSE_ELSE_0
#define INTERNAL_META_IF_ELSE(cond) META_CAT(INTERNAL_META_IF_ELSE_HELPER_, META_BOOL(cond))