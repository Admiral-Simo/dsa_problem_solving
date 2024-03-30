class Solution {
private:
  void dfs(vector<vector<char>> &grid, unordered_set<string> &visited, int r,
           int c) {
    if (c >= grid[0].size() || r >= grid.size() || min(c, r) < 0 ||
        grid[r][c] == '0' || visited.count(to_string(r) + ',' + to_string(c)))
      return;

    visited.insert(to_string(r) + ',' + to_string(c));

    dfs(grid, visited, r + 1, c);
    dfs(grid, visited, r - 1, c);
    dfs(grid, visited, r, c + 1);
    dfs(grid, visited, r, c - 1);
  }

public:
  int numIslands(vector<vector<char>> &grid) {
    if (grid.empty())
      return 0;

    int island_count = 0;
    int ROWS = grid.size(), COLS = grid[0].size();
    unordered_set<string> visited;

    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
        if (visited.count(to_string(i) + ',' + to_string(j)) == 0 &&
            grid[i][j] == '1') {
          // if cell equals to one execute a dfs otherwise
          ++island_count;
          dfs(grid, visited, i, j);
        }
      }
    }

    return island_count;
  }
};
