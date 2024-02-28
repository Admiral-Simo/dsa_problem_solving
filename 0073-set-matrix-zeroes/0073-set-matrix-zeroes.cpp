class Solution {
public:
  void setZeroes(std::vector<std::vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    std::vector<std::pair<int, int>> zeroPlaces;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0)
          zeroPlaces.push_back(std::make_pair(i, j));
      }
    }
    for (auto &[first, second] : zeroPlaces) {
      for (int i = 0; i < m; i++) {
        matrix[first][i] = 0;
      }
      for (int i = 0; i < n; i++) {
        matrix[i][second] = 0;
      }
    }
  }
};