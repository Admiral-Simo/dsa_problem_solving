class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            // a boolean that checks if it's the right or left side
            bool is_left_side = nums[mid] >= nums[left];
            // assigning the variables to its correspendant values
            int mid_value = nums[mid], left_value = nums[left], right_value = nums[right];
            // checking if the mid value equals to the target then we reached to the desired index `mid`
            if (mid_value == target) return mid;
            if (is_left_side) {
                if (target < left_value || target > mid_value) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            } else {
                if (target < mid_value || target > right_value) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return -1;
    }
};
