/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// first attempt : works even if array is not sorted
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int* output = malloc((*returnSize) * sizeof(int));
    output[0] = 1;

    //always gonna be a solution, so return if there are only 2 elements
    if(numbersSize == 2) {
        output[1] = 2;
        return output;
    }

    int pointer = 0;

    for(int i = 1; i < numbersSize; i++) {
        if(numbers[i] == target - *numbers) {
            output[0] = pointer + 1;
            output[1] = i + pointer + 1;
            break;
        }
        //if i reached to end or current pointer is same with the next one
        else if(i == (numbersSize - 1) || *numbers == numbers[i]) {
            //increase pointer
            *numbers++;
            pointer += 1;
            output[0] += 1;     
            numbersSize -= 1;
            i = 0;
        }
    }

    return output;
}

//second attempt : works only if array is sorted in non-decreasing order
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int* output = malloc((*returnSize) * sizeof(int));
    output[0] = 1;

    if(numbersSize == 2) {
        output[1] = 2;
        return output;
    }

    int lo, hi;

    for(lo = 0, hi = numbersSize - 1; lo < hi;) {
        int sum = numbers[lo] + numbers[hi];
        if(sum == target) {
            output[0] = lo + 1;
            output[1] = hi + 1;
            return output;
        }
        else if (sum < target) {lo++;}
        else {hi--;}
    }

    return output;
}
