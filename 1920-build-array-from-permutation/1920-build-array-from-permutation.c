int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* new = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for(int i = 0; i < numsSize; i++) {
        new[i] = nums[nums[i]]; 
    }
    return new;
}