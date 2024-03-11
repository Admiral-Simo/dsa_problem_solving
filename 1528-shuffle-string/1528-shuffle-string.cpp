class Solution {
public:
    std::string restoreString(std::string s, const std::vector<int>& indices) {
        std::string ans(s.size(), ' ');
        for (int i = 0; i < s.size(); i++) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};
