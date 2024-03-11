class Solution {
public:
    std::string interpret(std::string command) {
        std::stack<char> stack;
        std::string result;
        for (int i = 0; i < command.size(); i++) {
            char c = command[i];
            if (c == '(') stack.push('(');
            if (c == ')') {
                stack.pop();
                if (command[i - 1] == '(') {
                    result += 'o';
                    continue;
                } else {
                    result += "al";
                    continue;
                }
            }
            if (stack.empty()) {
                result += c;
            }
        }
        return result;
    }
};
