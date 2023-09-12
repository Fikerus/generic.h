//
// Pseudo-generics in C
// https://stackoverflow.com/questions/16522341/pseudo-generics-in-c
//
//
// Usage:
// #define LIB "lib.h"
// #define TYPE type
// #define NAME name
// #include "generic.h"
//
// For example:
// #define LIB "example.h"
// #define TYPE float
// #define NAME _test_float
// #include "generic.h"
//
//
// will result in following function:
// float get_minimum_test_float (float *nums, size_t len);
//


#define JOIN_2(x, y) x ## y
#define JOIN_3(x, y, z) x ## y ## z

#ifndef TYPE
    #define TYPE int
#endif

#ifndef NAME
    #define NAME TYPE
    #define FUNCTION_NAME(x, y) JOIN_3(x, _, y)
#else
    #define FUNCTION_NAME(x, y) JOIN_2(x, y)
#endif

#include LIB

#undef FUNCTION_NAME
#undef NAME
#undef TYPE
#undef LIB