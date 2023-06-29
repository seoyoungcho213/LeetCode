int removeDuplicates(int* nums, int numsSize){
    if (numsSize <= 2) {return numsSize;}
    
    int dupl = 0;
    int k = 0;
    int num;

    for(int i = 0; i < numsSize; i++) {
        if((i > 0) && nums[i] == num) {
            dupl++;
            if(dupl >= 2) {k++;}
        }
        else{
            num = nums[i];
            dupl = 0;
        }
        if(dupl < 3){nums[i-k] = nums[i];}
    }

    return (numsSize - k);
}
