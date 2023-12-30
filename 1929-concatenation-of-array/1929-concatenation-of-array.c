int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the concatenated array
    int* concatenated = malloc(sizeof(int) * numsSize * 2);

    // Check for memory allocation failure
    if (!concatenated) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Copy elements from nums to concatenated
    for (int i = 0; i < numsSize; ++i) {
        concatenated[i] = concatenated[i + numsSize] = nums[i];
    }

    // Set the returnSize value
    if (returnSize != NULL) {
        *returnSize = numsSize * 2;
    }

    return concatenated;
}