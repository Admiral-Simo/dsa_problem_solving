class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int m = mat[0].size();

        int i = 0, j = 0;

        while (i < mat.size() && j < mat.size()) {
            if (i == j) sum += mat[i][j];
            i++;
            j++;
        }

        i = 0, j = mat.size() - 1;

        while (i < mat.size() && j > -1) {
            if (i != j) sum += mat[i][j];
            i++;
            j--;
        }
        return sum;
    }
};
