class Solution {
public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    vector<vector<int>> ans;
    vector<int> subset;
    function<void(int, int)> dfs = [&](int start, int sum) {
      if (sum == target) {
        ans.push_back(subset);
        return;
      }
      if (sum > target) return;
      for (int i = start; i < candidates.size(); i++) {
        subset.push_back(candidates[i]);
        dfs(i, sum + candidates[i]);
        subset.pop_back();
      }
    };
    dfs(0, 0);
    return ans;
  }
};
