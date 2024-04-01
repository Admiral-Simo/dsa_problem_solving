class Solution {
public:
  int orangesRotting(vector<vector<int>> &grid) {
      int rows = grid.size(), cols = grid[0].size();
      int freshCount = 0;
      queue<pair<int, int>> rotten;

      for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
              if (grid[i][j] == 2) rotten.push({i, j});
              else if (grid[i][j] == 1) freshCount++;
          }
      }


      int minute_count = 0;

      vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

      while (!rotten.empty()) {
          if (freshCount == 0) return minute_count;

          int size = rotten.size();
          for (int i = 0; i < size; i++) {
              int r = rotten.front().first;
              int c = rotten.front().second;
              rotten.pop();

              for (const auto &dir : directions) {
                      int new_r = r + dir.first;
                      int new_c = c + dir.second;

                      if (new_r >= 0 && new_c >= 0 && new_r < rows && new_c < cols && grid[new_r][new_c] == 1) {
                          grid[new_r][new_c] = 2;
                          rotten.push({new_r, new_c});
                          freshCount--;
                      }
              }

          }


          minute_count++;
      }

      return freshCount > 0 ? -1 : minute_count;

  }
};
