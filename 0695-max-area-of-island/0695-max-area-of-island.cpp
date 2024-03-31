class Solution {
public:
  int bfs(vector<vector<int>> &grid, int r, int c, int ROWS, int COLS) {
    int surface = 1;
    queue<pair<int, int>> q;
    q.push({r, c});

    grid[r][c] = 0;

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    while (!q.empty()) {
      pair<int, int> curr = q.front();
      int r = curr.first, c = curr.second;
      q.pop();

      for (auto &dir : directions) {
        int new_r = r + dir.first;
        int new_c = c + dir.second;
        if (new_r >= 0 && new_r < ROWS && new_c >= 0 && new_c < COLS &&
            grid[new_r][new_c] == 1) {
          q.push({new_r, new_c});
          grid[new_r][new_c] = 0;
          surface++;
        }
      }
    }
    return surface;
  }
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ROWS = grid.size(), COLS = grid[0].size();
    int max_surface = 0;

    for (int i = 0; i < ROWS; i++)
      for (int j = 0; j < COLS; j++)
        if (grid[i][j] == 1) {
          max_surface = max(bfs(grid, i, j, ROWS, COLS), max_surface);
        }

    return max_surface;
  }
};
