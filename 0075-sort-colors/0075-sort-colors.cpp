class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        // the range is gonna be between 0 to 2 including 0 and 2
        int range[] = {0, 0, 0};
        for (int n : nums) {
            ++range[n];
        }
        int insertion_index = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < range[i]; j++) {
                nums[insertion_index++] = i;
            }
        }
    }
};
