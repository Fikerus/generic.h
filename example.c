#define LIB "example.h"
#include "generic.h"

#define LIB "example.h"
#define TYPE float
#define NAME _test_float_name
#include "generic.h"


#include <stdio.h>

int main(void) {
    float float_arr[3] = { 0.5f, 1.0f, 1.5f };
    int int_arr[3] = { 1, 2, 3 };

    printf("%f\n", get_minimum_test_float_name(float_arr, sizeof(float_arr)/sizeof(*float_arr)));
    printf("%i\n", get_minimum_int(int_arr, sizeof(int_arr)/sizeof(*int_arr)));

    return 0;
}