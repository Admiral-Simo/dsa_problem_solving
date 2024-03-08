class Solution {
public:
  int countMatches(std::vector<std::vector<std::string>> &items,
                   std::string ruleKey, std::string ruleValue) {
    int count = 0;
    int index;
    if (ruleKey == "type")
      index = 0;
    if (ruleKey == "color")
      index = 1;
    if (ruleKey == "name")
      index = 2;
    for (int i = 0; i < items.size(); i++) {
      if (items[i][index] == ruleValue)
        count++;
    }
    return count;
  }
};
