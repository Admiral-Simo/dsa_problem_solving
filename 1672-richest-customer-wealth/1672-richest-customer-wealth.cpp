class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int best_wealth = 0;
        for (int i = 0; i < n; i++) {
            int current_wealth = 0;
            for (int j = 0; j < m; j++) {
                current_wealth += accounts[i][j];
            }
            best_wealth = max(best_wealth, current_wealth);
        }
        return best_wealth;
    }
};
