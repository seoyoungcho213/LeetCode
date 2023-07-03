/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* out = malloc(*returnSize * (sizeof(int)));
    int prod = 0;
    int zero = 0; //flag for zero

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            if(prod == 0) {prod += nums[i];}
            else {prod *= nums[i];}
        }
        else {zero++;}
    }

    for(int i = 0; i < numsSize; i++) {
        if(zero > 1) {out[i] = 0;}
        else if(zero == 1 && nums[i] == 0) {out[i] = prod;}
        else if(zero >= 1 && nums[i] != 0) {out[i] = 0;}
        else {out[i] = prod / nums[i];}
    }

    return out;
}
