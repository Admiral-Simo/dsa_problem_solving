class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        int wordOneLength = word1.size();
        int wordTwoLength = word2.size();
        std::string first;
        std::string second;
        for (int i = 0; i < wordOneLength; i++) {
            for (int j = 0; j < word1[i].size(); ++j) {
                first += word1[i][j];
            }
        }
        for (int i = 0; i < wordTwoLength; i++) {
            for (int j = 0; j < word2[i].size(); ++j) {
                second += word2[i][j];
            }
        }
        return first == second;
    }
};
