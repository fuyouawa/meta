#pragma once
#include <meta/macro/basic.hpp>
/*--------------------------------------------------
*                     array                         |
*                 Public macros                     |
---------------------------------------------------*/

#define META_ARRAY(...) (__VA_ARGS__)
// Convert the array to variable arguments
#define META_ARRAY_ELEMS(p) META_GET_PARAM(p)
// Get the number of array
#define META_ARRAY_COUNT(array) META_COUNT(META_ARRAY_ELEMS(array))
// Get the subarray of array(0 ~ count)
#define META_SUBARRAY(n, array) META_RESERVE(n, META_ARRAY_ELEMS(array))
// Get the element at the specified index of array(start 0)
#define META_ARRAY_INDEX(i, array) META_INDEX(i, META_ARRAY_ELEMS(array))
// Get the element at the specified index of array(start 1)
#define META_ARRAY_INDEX_BY_1(i, array) META_INDEX_BY_1(i, META_ARRAY_ELEMS(array))
#define META_ARRAY_REMOVE_LAST(array) META_REMOVE_LAST(META_ARRAY_ELEMS(array))

#define META_ARRAY_INDEX_IS_END(i, array) META_INDEX_IS_END(i, META_ARRAY_ELEMS(array))
#define META_ARRAY_INDEX_IS_BEGIN(i, array) META_EQUAL(i, 0)

/*--------------------------------------------------
*                     array                         |
*            Internal macros(Dont use!)             |
---------------------------------------------------*/
