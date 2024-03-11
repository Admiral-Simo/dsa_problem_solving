class Solution {
public:
  std::string interpret(std::string command) {
    std::string ans;
    for (int i = 0; i < command.size();) {
      char current = command[i];
      char next = command[i + 1];
      if (current == 'G') {
        ans += 'G';
        i++;
      } else if (next == ')') {
        ans += 'o';
        i += 2;
      } else {
        ans += "al";
        i += 4;
      }
    }
    return ans;
  }
};
