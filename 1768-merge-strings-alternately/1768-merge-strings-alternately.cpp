class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        // make a double pointer the first pointer pointing to the first char at word1
        // and the second pointer pointing to the second pointer at word2
        // after that make a while loop the condition must be (first_pointer < word1.size() && second_pointer < word2.size())
        // after that loop through the first word and add it to the result string
        // after that lop through the second word and add it to the result string
        int i = 0;
        int j = 0;
        int length1 = word1.size();
        int length2 = word2.size();
        std::string result;
        while (i < length1 && j < length2) {
            result.push_back(word1[i]);
            result.push_back(word2[j]);
            i++;
            j++;
        }
        while (i < length1) {
            result.push_back(word1[i]);
            i++;
        }
        while (j < length2) {
            result.push_back(word2[j]);
            j++;
        }
        return result;
    }
};
