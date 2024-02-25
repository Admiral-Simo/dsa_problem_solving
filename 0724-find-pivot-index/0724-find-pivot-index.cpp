#include <vector>
class Solution {
  std::vector<int> prefixSum;

public:
  int pivotIndex(std::vector<int> &nums) {
    int count = 0;
    for (int x : nums) {
      count += x;
      prefixSum.push_back(count);
    }
    for (int i = 0; i < nums.size(); i++) {
        int leftSum = i == 0 ? 0 : prefixSum[i - 1];
        int rightSum = prefixSum[nums.size() - 1] - prefixSum[i];
        if (leftSum == rightSum) return i;
    }
    return -1;
  }
};
