class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        std::stack<char> something;
        for(char c : s) {
            something.push(c);
        }
        for(char c : s) {
            if (something.top() != c) return false;
            something.pop();
        }
        return true;
    }
};
