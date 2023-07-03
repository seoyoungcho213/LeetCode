int majorityElement(int* nums, int numsSize){
    int dupl = 0;
    int num;

    for(int i=0; i<numsSize; i++) {
        if(dupl == 0) {num = nums[i];}
        if(nums[i] == num) {dupl++;}
        else {dupl--;}
    }

    return num;
}
