class Solution {
public:
  std::vector<int> findDisappearedNumbers(std::vector<int> &nums) {
    int max = nums.size();
    int min = 1;
    std::vector<int> result;
    if (nums.empty())
        return result;
    std::set<int> seen;
    for (int i = 0; i < nums.size(); i++) {
      seen.insert(nums[i]);
    }
    for (int i = min; i <= max; i++) {
      if (!seen.count(i))
        result.push_back(i);
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

