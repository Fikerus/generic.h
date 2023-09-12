# generic.h

Pseudo-generics in C:

https://stackoverflow.com/questions/16522341/pseudo-generics-in-c

---

Suppose you have some function
```C
int get_minimum_int(int *nums, int len) {
    int min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}
```

To make it generic rewrite it like this and put it in a separate file

```C
//
// function.h
//

TYPE FUNCTION_NAME(get_minimum, NAME) (TYPE *nums, int len){
    TYPE min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}
```

and then use it like this

```C
#define LIB "function.h"
#define TYPE float
#define NAME _test_float_name
#include "generic.h"

#define LIB "function.h"
#define TYPE int
#define NAME
#include "generic.h"
```

it will turn into this code

```C
float get_minimum_test_float_name (float *nums, int len){
    float min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}

int get_minimum (int *nums, int len){
    int min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}
```
