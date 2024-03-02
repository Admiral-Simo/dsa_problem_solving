class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int negative_count = 0;
        for (int x : nums)  {
            if (x == 0) return 0;
            if (x < 0) negative_count++;
        }
        return (negative_count % 2) == 0 ? 1 : -1;
    }
};
