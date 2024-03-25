class Solution {
public:
  int subsetXORSum(vector<int> &nums) {
     int bits = 0;
      for (int n : nums) {
          bits |= n;
      }
      return bits * 1 << (nums.size() - 1);
  }
};
