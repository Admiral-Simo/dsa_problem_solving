class Solution {
public:
  std::vector<int> findDisappearedNumbers(std::vector<int> &nums) {
      std::vector<int> result;
      for(int n : nums) {
          int i = abs(n) - 1;
          nums[i] = -abs(nums[i]);
      }
      for(int i = 0; i < nums.size(); i++) {
          if (nums[i] > 0) {
              result.push_back(i + 1);
          }
      }
      return result;
  }
  void printVector(std::vector<int> &nums) {
    std::cout << "{ ";
    for (int i = 0; i < nums.size(); i++) {
      std::cout << nums[i] << ' ';
    }
    std::cout << "}\n";
  }
};

