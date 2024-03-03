class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return 1;
        for (size_t i = 0; i <= num / 2; i++) {
            if (i * i == num) return true;
        }
        return false;
    }
};
