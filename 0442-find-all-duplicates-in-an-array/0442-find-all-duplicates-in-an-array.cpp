class Solution {
public:
  vector<int> findDuplicates(vector<int> &nums) {
    unordered_set<int> set;
    vector<int> ans;
    for (int n : nums) {
      if (set.count(n))
        ans.push_back(n);
      set.insert(n);
    }
    return ans;
  }
};
