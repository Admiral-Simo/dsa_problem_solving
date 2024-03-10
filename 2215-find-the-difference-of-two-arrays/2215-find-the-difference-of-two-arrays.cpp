class Solution {
public:
  std::vector<std::vector<int>> findDifference(std::vector<int> &nums1,
                                               std::vector<int> &nums2) {
    std::unordered_set<int> set1;
    std::unordered_set<int> set2;
    std::vector<std::vector<int>> answer = {{}, {}};
    for (int n : nums1) {
      set1.insert(n);
    }
    for (int n : nums2) {
      set2.insert(n);
    }
    for (const auto &n : set1) {
        if (set2.find(n) == set2.end()) {
            answer[0].push_back(n);
        }
    }
    for (const auto &n : set2) {
        if (set1.find(n) == set1.end()) {
            answer[1].push_back(n);
        }
    }
    return answer;
  }
};
