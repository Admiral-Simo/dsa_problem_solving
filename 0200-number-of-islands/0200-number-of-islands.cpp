class Solution {
private:
  void dfs(vector<vector<char>> &grid, int r,
           int c) {
    if (c >= grid[0].size() || r >= grid.size() || min(c, r) < 0 ||
        grid[r][c] == '0')
      return;

    grid[r][c] = '0';

    dfs(grid, r + 1, c);
    dfs(grid, r - 1, c);
    dfs(grid, r, c + 1);
    dfs(grid, r, c - 1);
  }

public:
  int numIslands(vector<vector<char>> &grid) {
    if (grid.empty())
      return 0;

    int island_count = 0;
    int ROWS = grid.size(), COLS = grid[0].size();

    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
        if (grid[i][j] == '1') {
          // if cell equals to one execute a dfs otherwise
          dfs(grid, i, j);
          ++island_count;
        }
      }
    }

    return island_count;
  }
};
