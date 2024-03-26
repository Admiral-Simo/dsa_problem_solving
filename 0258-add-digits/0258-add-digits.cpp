class Solution {
public:
    int helper(int num) {
        int ans = 0;
        while (num != 0) {
            int digit = num % 10;
            ans += digit;
            num /= 10;
        }
        return ans;
    }
    int addDigits(int num) {
        while (num > 9) {
            num = helper(num);
        }
        return num;
    }
};
