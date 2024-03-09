class Solution {
public:
  bool isValid(std::string s) {
    std::unordered_map<char, char> something = {
        {'(', ')'}, {'{', '}'}, {'[', ']'}};
    std::stack<char> stack;
    for (char c : s) {
        if (something.find(c) != something.end()) stack.push(something[c]);
        else if (stack.empty() || c != stack.top()) return false;
        else stack.pop();
    }
    return stack.empty();
  }
};
