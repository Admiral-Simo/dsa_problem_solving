int countPairs(int* nums, int numsSize, int target){
    int result = 0;
    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] < target) result++;
        }
    }
    return result;
}