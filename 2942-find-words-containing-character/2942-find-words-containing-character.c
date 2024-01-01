/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* result = malloc(sizeof(int) * wordsSize);
    *returnSize = 0;
    for(int i = 0; i < wordsSize; i++) {
        for(int j = 0; j < strlen(words[i]); j++) {
            if (words[i][j] == x) {
                result[*returnSize] = i;
                (*returnSize)++;
                break;
            }
        }
    }    
    *returnSize++;
    return result;

}