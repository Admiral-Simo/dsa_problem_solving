/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    
    int *result = malloc(sizeof(int) * numsSize);

    for(int i = 0; i < numsSize; i++) {
        result[i] = 0;
    }

    for(int i = 0; i < numsSize; i++) {
        for(int j = 0; j < numsSize; j++) {
            if (i != j && nums[j] < nums[i]) result[i]++;
        }
    }

    *returnSize = numsSize;
    return result;
}
