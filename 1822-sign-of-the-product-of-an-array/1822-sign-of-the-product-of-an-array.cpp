class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int negative_count = 0;
        for (int x : nums)  {
            if (x == 0) return 0;
            if (x < 0) negative_count++;
        }
        if (negative_count == 0 || negative_count % 2 == 0) return 1;
        else return -1;
    }
};
