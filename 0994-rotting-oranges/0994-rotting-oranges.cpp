class Solution {
public:
  int orangesRotting(vector<vector<int>> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int freshCount = 0;
    queue<pair<int, int>> rotten;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    // Initialize the queue with the positions of rotten oranges and count fresh
    // oranges
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        if (grid[i][j] == 2)
          rotten.push({i, j});
        else if (grid[i][j] == 1)
          ++freshCount;
      }
    }

    int minutes = 0;
    while (!rotten.empty()) {
      // Check if all oranges are rotten
      if (freshCount == 0)
        return minutes;

      // Process rotten oranges in the current minute
      int size = rotten.size();
      for (int i = 0; i < size; ++i) {
        int x = rotten.front().first;
        int y = rotten.front().second;
        rotten.pop();

        for (const auto &dir : directions) {
          int nx = x + dir.first;
          int ny = y + dir.second;
          if (nx >= 0 && nx < rows && ny >= 0 && ny < cols &&
              grid[nx][ny] == 1) {
            grid[nx][ny] = 2;
            --freshCount;
            rotten.push({nx, ny});
          }
        }
      }

      // Increment minutes
      ++minutes;
    }

    return freshCount == 0 ? minutes : -1;
  }
};
