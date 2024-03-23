class Solution {
public:
  std::vector<std::string> sortPeople(std::vector<std::string> &names,
                                      std::vector<int> &heights) {
    int n = heights.size();
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (heights[j] < heights[j + 1]) {
          std::swap(heights[j], heights[j + 1]);
          std::swap(names[j], names[j + 1]);
        }
      }
    }
    return names;
  }
};
