#pragma once
#include <meta/macro/array.hpp>


/*--------------------------------------------------
*                   Synthetic                       |
*                 Public macros                     |
---------------------------------------------------*/

// (...)anything -> ...
#define META_GET_PARAM_RELAX(p) INTERNAL_META_REMOVE_PARAM_RELAX(p)


/*--------------------------------------------------
*                   Synthetic                       |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/

// Internal for META_GET_PARAM_RELAX
#define INTERNAL_META_REMOVE_PARAM_RELAX_HELPER(...) __VA_ARGS__,
#define INTERNAL_META_REMOVE_PARAM_RELAX_I(...) META_EXPAND(META_ARRAY_REMOVE_LAST((__VA_ARGS__)))
#define INTERNAL_META_REMOVE_PARAM_RELAX(p)			\
	INTERNAL_META_REMOVE_PARAM_RELAX_I(				\
		INTERNAL_META_REMOVE_PARAM_RELAX_HELPER p	\
)
