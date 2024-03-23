#include <functional>

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        function<void(int)> dfs = [&](int start) {
            if (start == nums.size()) {
                ans.push_back(subset);
                return;
            }
            subset.push_back(nums[start]);
            dfs(start + 1);
            subset.pop_back();
            dfs(start + 1);
        };
        dfs(0);
        return ans;
    }
};