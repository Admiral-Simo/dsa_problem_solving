class Solution {
public:
  int dfs(vector<vector<int>> &grid, int r, int c, int ROWS, int COLS) {
    if (min(r, c) < 0 || r == ROWS || c == COLS || grid[r][c] == 0)
      return 0;

    grid[r][c] = 0;

    int surface = 1;

    surface += dfs(grid, r + 1, c, ROWS, COLS);
    surface += dfs(grid, r - 1, c, ROWS, COLS);
    surface += dfs(grid, r, c + 1, ROWS, COLS);
    surface += dfs(grid, r, c - 1, ROWS, COLS);

    return surface;
  }
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ROWS = grid.size(), COLS = grid[0].size();
    int max_surface = 0;

    for (int i = 0; i < ROWS; i++)
      for (int j = 0; j < COLS; j++)
        if (grid[i][j] == 1) {
          max_surface = max(dfs(grid, i, j, ROWS, COLS), max_surface);
        }

    return max_surface;
  }
};
