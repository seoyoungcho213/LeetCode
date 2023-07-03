int jump(int* nums, int numsSize){
    //edge case
    if(numsSize < 2) {return 0;}                 //one element in arr
    if (nums[0] >= (numsSize - 1)) {return 1;}   //first jump can reach end

    int maxIndex = findMax(nums, nums[0], 0, numsSize);
    if(1 + nums[maxIndex] >= numsSize - 1) {return 2;}  //second jump can reach end
    int jumpTot = 1;

    for(int i = maxIndex; i < numsSize;) {
        maxIndex = findMax(nums, nums[i], i, numsSize);
        if(i + nums[i] >= numsSize - 1) {
            jumpTot++;
            break;
        }
        
        i = maxIndex;
        jumpTot++;
    }

    return jumpTot;
}

//find an index, which can go furthest length
int findMax(int* nums, int numJump, int start, int end) {
    int max = 0;
    int maxIndex = start + 1;

    for(int i = maxIndex; (i < start + numJump + 1) && (i < end); i++) {
        if(i + nums[i] >= end) {return i;}
        if(max <= i + nums[i]) {
            max = i + nums[i];
            maxIndex = i;
        }
    }

    return maxIndex; //return index of max number
}
