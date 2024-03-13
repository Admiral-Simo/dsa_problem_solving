class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;
        for (int i = 1; i < n; i++) {
            // the formula for calculating 1 + 2 + 3 + 4 + .... + n is n * (n + 1) / 2
            int left_side = formula(i);
            int right_side = formula(n) - left_side + i;
            if (left_side == right_side) return i;
        }
        return -1;
    }
    int formula(int n) {
        return n * (n + 1) / 2;
    }
};
