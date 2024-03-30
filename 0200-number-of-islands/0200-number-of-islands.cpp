class Solution {
private:
  void bfs(vector<vector<char>> &grid, int r, int c) {
    int ROWS = grid.size(), COLS = grid[0].size();
    queue<pair<int, int>> q;
    q.push({r, c});
    grid[r][c] = '0';

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
      auto [r, c] = q.front();
      q.pop();

      for (auto &dir : directions) {
        int new_r = r + dir.first;
        int new_c = c + dir.second;

        if (new_r >= 0 && new_r < ROWS && new_c >= 0 && new_c < COLS &&
            grid[new_r][new_c] == '1') {
          q.push({new_r, new_c});
          grid[new_r][new_c] = '0';
        }
      }
    }
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
          bfs(grid, i, j);
          ++island_count;
        }
      }
    }

    return island_count;
  }
};
