int removeDuplicates(int* nums, int numsSize){
    int k = 0;
    int num;

    for(int i = 0; i < numsSize; i++) {
        if((nums[i] == num) && (i > 0)) {k++;}
        else {num = nums[i];}
        nums[i-k] = nums[i];
    }

    return (numsSize-k);
}
