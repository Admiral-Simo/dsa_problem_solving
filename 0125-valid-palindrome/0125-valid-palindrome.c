int inRange(char c) {
    return 'z' >= c && c >= 'a' || '9' >= c && c >= '0';
}
int isPalindrome(char* s) {
    int N = strlen(s), left = 0, right = N - 1;
    while(left < right) {
        // pseudocode: 
        // if s[left] is not in range then left++ continue
        // if s[right] is not in range then right++ continue
        // if s[left] !== s[right] not case sensitive then return 0
        if (!inRange(tolower(s[left]))) {left++; continue;}
        if (!inRange(tolower(s[right]))) {right--;continue;}
        if (tolower(s[left]) != tolower(s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}