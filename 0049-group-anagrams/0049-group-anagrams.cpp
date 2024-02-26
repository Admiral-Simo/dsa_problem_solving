class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> m;
    for (const std::string& s : strs) {
      int count[26] = {0};
      for (char c : s) {
        count[c - 'a']++;
      }
      std::string key = "";
      for (int e : count) {
        key.append(std::to_string(e) + '#');
      }
      m[key].push_back(s);
    }
    std::vector<std::vector<std::string>> result;
    for (const auto& [_, second]: m) {
        result.push_back(second);
    }
    return result;
  }
};
