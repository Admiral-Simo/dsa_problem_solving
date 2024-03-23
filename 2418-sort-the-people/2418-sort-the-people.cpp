class Solution {
public:
  std::vector<std::string> sortPeople(std::vector<std::string> &names,
                                      std::vector<int> &heights) {
      std::vector<std::string> ans;
      std::priority_queue<std::pair<int, std::string>> pq;
      for (int i = 0; i < names.size(); i++) {
          pq.push({heights[i], names[i]});
      }
      while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
      }
      return ans;
  }
};
