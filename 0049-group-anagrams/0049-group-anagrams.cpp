class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::vector<std::vector<std::string>> result;
    std::vector<std::string> something;
    std::unordered_map<std::string, std::vector<std::string>> hashmap;

    for (std::string s : strs) {
      std::sort(s.begin(), s.end());
      something.push_back(s);
    }

    for (int i = 0; i < something.size(); i++) {
      hashmap[something[i]].push_back(strs[i]);
    }

    for (const auto &[sorted_word, arr] : hashmap) {
        result.push_back(arr);
    }

    return result;
  }
};
