bool canJump(int* nums, int numsSize){
    int count = nums[0];
    if(numsSize < 2) {return true;}
    if(nums[0] == 0) {return false;}
    if(count >= numsSize) {return true;}

    for(int i = 1; i <= count && i < numsSize; i++) {
        if(i + nums[i] > count) {count = i + nums[i];}
    }

    if(count >= numsSize - 1) {return true;}
    
    return false;
}
