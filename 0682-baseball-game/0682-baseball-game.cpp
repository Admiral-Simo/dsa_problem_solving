class Solution {
public:
  int calPoints(std::vector<std::string> &operations) {
    int sum = 0;
    std::stack<int> record;
    for (const std::string &s : operations) {
      if (s == "+") {
        if (record.size() >= 2) {
          int first = record.top();
          record.pop();
          int second = record.top();
          record.push(first);
          int points = first + second;
          sum += points;
          record.push(points);
        }
      } else if (s == "D") {
        if (!record.empty()) {
          int points = record.top() * 2;
          sum += points;
          record.push(points);
        }
      } else if (s == "C") {
        if (!record.empty()) {
          sum -= record.top();
          record.pop();
        }
      } else {
        int points = std::stoi(s);
        sum += points;
        record.push(points);
      }
    }
    return sum;
  }
};
