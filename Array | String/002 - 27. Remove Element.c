int removeElement(int* nums, int numsSize, int val){
    int k = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == val) {k++;}
        else {nums[i-k] = nums[i];}
    }
    return (numsSize-k);
}
