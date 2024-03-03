class Solution {
public:
  int calPoints(std::vector<std::string> &operations) {
    int sum = 0;
    std::vector<int> record;
    for (const std::string &s : operations) {
      if (s == "+") {
        if (record.size() >= 2) {
          int points = record[record.size() - 2] + record[record.size() - 1];
          sum += points;
          record.push_back(points);
        }
      } else if (s == "D") {
        if (!record.empty()) {
          int points = record.back() * 2;
          sum += points;
          record.push_back(points);
        }
      } else if (s == "C") {
        if (!record.empty()) {
          sum -= record.back();
          record.pop_back();
        }
      } else {
        int points = std::stoi(s);
        sum += points;
        record.push_back(points);
      }
    }
    return sum;
  }
};
