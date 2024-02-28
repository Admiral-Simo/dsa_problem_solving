class Solution {
public:
  void setZeroes(std::vector<std::vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    bool firstColZero = false;
    bool firstRowZero = false;

    for (int i = 0; i < n; i++) {
      if (matrix[i][0] == 0) {
        firstColZero = true;
        break;
      }
    }

    for (int i = 0; i < m; i++) {
      if (matrix[0][i] == 0) {
        firstRowZero = true;
        break;
      }
    }

    for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }
      }
    }

    for (int i = 1; i < n; i++) {
      for (int j = 1; j < m; j++) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }

    if (firstRowZero) {
      for (int i = 0; i < m; i++) {
        matrix[0][i] = 0;
      }
    }
    if (firstColZero) {
      for (int i = 0; i < n; i++) {
        matrix[i][0] = 0;
      }
    }
  }
};
