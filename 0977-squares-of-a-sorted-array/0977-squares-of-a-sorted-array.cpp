class Solution {
public:
    std::vector<int> sortedSquares(const std::vector<int>& nums) {
        // nums is sorted in non decreasing order
        int n = nums.size();
        std::vector<int> output(n);
        int left = 0, right = n - 1, index = right;
        while (left <= right) {
            int leftSquared = nums[left] * nums[left];
            int rightSquared = nums[right] * nums[right];
            if (leftSquared > rightSquared) {
                output[index] = leftSquared;
                left++;
            } else {
                output[index] = rightSquared;
                right--;
            }
            index--;
        }
        return output;
    }
};
