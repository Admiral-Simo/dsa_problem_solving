class Solution {
public:
  std::vector<std::string> sortPeople(std::vector<std::string> &names,
                                      std::vector<int> &heights) {
      std::vector<std::pair<int, std::string>> names_height_map;
      for (int i = 0; i < names.size(); i++) {
          names_height_map.emplace_back(heights[i], names[i]);
      }
      std::sort(names_height_map.begin(), names_height_map.end(), std::greater<std::pair<int, std::string>>());
      std::vector<std::string> result;
      for (const auto &pairs : names_height_map) {
          result.push_back(pairs.second);
      }
      return result;
  }
};
