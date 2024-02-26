class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        int length = nums.size();
        std::sort(nums.begin(), nums.end());
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end()); // Remove duplicates
        length = nums.size(); // Update the length after removing duplicates
        if (length >= 3) return nums[length - 3];
        else return nums[length - 1];
    }
};