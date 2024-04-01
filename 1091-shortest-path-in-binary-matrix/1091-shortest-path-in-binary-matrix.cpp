class Solution {
private:
  int bfs(vector<vector<int>> &grid, int r, int c, int ROWS, int COLS) {
    queue<pair<int, int>> q;
    q.push({r, c});

    grid[r][c] = 1;

    int min_path = 0;

    while (!q.empty()) {
      int size = q.size();
      min_path++;

      for (int i = 0; i < size; i++) {
        pair<int, int> node = q.front();
        q.pop();
        int r = node.first, c = node.second;

        if (r == ROWS - 1 && c == COLS - 1)
          return min_path;

        for (int dr = -1; dr <= 1; dr++) {
          for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0)
              continue;
            int new_r = r + dr;
            int new_c = c + dc;

            if (min(new_r, new_c) >= 0 && new_c < COLS && new_r < ROWS &&
                grid[new_r][new_c] == 0) {
              grid[new_r][new_c] = 1;

              q.push({new_r, new_c});
            }
          }
        }
      }
    }

    return -1;
  }

public:
  int shortestPathBinaryMatrix(vector<vector<int>> &grid) {
    int ROWS = grid.size(), COLS = grid[0].size();
    if (grid[0][0] == 1)
      return -1;
    return bfs(grid, 0, 0, ROWS, COLS);
  }
};
