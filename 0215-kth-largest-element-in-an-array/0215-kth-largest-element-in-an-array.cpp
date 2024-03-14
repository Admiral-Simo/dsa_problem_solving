class Solution {
public:
  int findKthLargest(std::vector<int> &nums, int k) {
      std::priority_queue<int> maxHeap(nums.begin(), nums.end());
      for (int i = 0; i < k - 1; i++) {
          maxHeap.pop();
      }
      return maxHeap.top();
  }
};
