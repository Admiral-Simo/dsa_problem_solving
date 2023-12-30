int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    
    int* new = malloc(sizeof(int) * numsSize * 2);
    for(int i = 0; i < numsSize; i++) {
        new[i] = nums[i];
        new[i + numsSize] = nums[i];
    }    
    *returnSize = numsSize * 2;
    return new;
}