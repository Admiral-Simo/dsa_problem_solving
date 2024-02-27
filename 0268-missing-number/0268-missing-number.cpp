class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        for (int x = 0; x <= nums.size(); x++) {
            if (numSet.find(x) == numSet.end()) return x;
        }
        return -1;
    }
};
