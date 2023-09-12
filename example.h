TYPE FUNCTION_NAME(get_minimum, NAME) (TYPE *nums, int len){
    TYPE min = nums[0];

    for (int i = 1; i < len; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}