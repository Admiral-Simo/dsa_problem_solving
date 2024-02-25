#include <vector>
class NumArray {
private:
  std::vector<int> prefixSum;

public:
  NumArray(std::vector<int> &nums) {
    int count = 0;
    for (int x : nums) {
      count += x;
      prefixSum.push_back(count);
    }
  }

  int sumRange(int left, int right) {
    if (left == 0)
      return prefixSum[right];
    return prefixSum[right] - prefixSum[left - 1];
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
