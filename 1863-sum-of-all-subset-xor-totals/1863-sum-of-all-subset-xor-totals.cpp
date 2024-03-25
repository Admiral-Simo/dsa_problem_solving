class Solution {
public:
  int subsetXORSum(vector<int> &nums) {
      if (nums.size() == 0) return 0;
      int sum = 0;
      function<void(int, int)> dfs = [&](int start, int currentXor) {
          sum += currentXor;
          for(int i = start; i < nums.size(); i++) {
              dfs(i + 1, currentXor ^ nums[i]);
          }
      };
      dfs(0, 0);
      return sum;
  }
};
