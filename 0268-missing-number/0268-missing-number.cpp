class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        for (int x = 0; x <= nums.size(); x++) {
            if (std::find(nums.begin(), nums.end(), x) == nums.end()) return x;
        }
        return -1;
    }
};
