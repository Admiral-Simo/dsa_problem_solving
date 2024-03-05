class Solution {
public:
  bool arrayStringsAreEqual(std::vector<std::string> &word1,
                            std::vector<std::string> &word2) {
      int w1 = 0, w2 = 0;
      int i = 0, j = 0;
      while (w1 < word1.size() && w2 < word2.size()) {
          if (word1[w1][i] != word2[w2][j]) {
              return false;
          }
          i++;
          j++;
          if (i == word1[w1].size()) {
              w1++;
              i = 0;
          }
          if (j == word2[w2].size()) {
              w2++;
              j = 0;
          }
      }
      if (w1 != word1.size() || w2 != word2.size()) return false;
      return true;
  }
};
