class Solution {
public:
    std::string finalString(std::string s) {
        std::string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i') {
                // Reverse the portion of the string from 0 to i
                int left = 0;
                int right = result.size() - 1;
                while ( left < right ) {
                    std::swap(result[left], result[right]);
                    left++;
                    right--;
                }
            } else {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};
