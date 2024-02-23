class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) // Negative numbers can't be palindromes
            return false;
        
        int original = x;
        long long rev = 0; // Use long long to handle potential overflow
        
        while (x) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        return original == rev;
    }
};
