void rotate(int* nums, int numsSize, int k){
    if (numsSize < 2) {return;}
    else if ((k %= numsSize) == 0) {return;}
    else if (numsSize == k) {return;}
    
    //only works for even elements
    // for(i = 0; (i < numsSize-1) && (k > 0); i++) {
    //     num = nums[k-1];
    //     nums[k-1] = nums[last];
    //     nums[last] = num;
    //     last--;
    //     k--;
    // }

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}

void reverse(int* arr, int start, int end) {
    for (; start < end; start++, end--) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
}
