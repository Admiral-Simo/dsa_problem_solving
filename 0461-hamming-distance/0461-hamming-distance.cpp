class Solution {
public:
    int hammingDistance(int x, int y) {
        int tmp = x ^ y;
        int count = 0;
        while (tmp) {
            count += tmp & 1;
            tmp = tmp >> 1;
        }
        return count;
    }
};
