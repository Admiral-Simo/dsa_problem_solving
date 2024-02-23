class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        std::string d = s;
        std::reverse(d.begin(), d.end());
        return s == d;
    }
};
