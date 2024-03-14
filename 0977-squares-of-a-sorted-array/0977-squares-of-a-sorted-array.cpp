class Solution {
public:
    std::vector<int> sortedSquares(const std::vector<int>& nums) {
        std::vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            output.push_back(std::pow(nums[i], 2));
        }
        std::sort(output.begin(), output.end());
        return output;
    }
};
