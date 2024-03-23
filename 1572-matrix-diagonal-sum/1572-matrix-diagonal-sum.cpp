class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int m = mat[0].size();
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                // what is the second condition should be
                // i = 0 j = 2
                // i = 1 j = 1
                // i = 2 j = 0
                if (i == j) sum += mat[i][j];
            }
        }

        int i = 0, j = mat.size() - 1;

        while (i < mat.size() && j > -1) {
            if (i != j) sum += mat[i][j];
            i++;
            j--;
        }
        return sum;
    }
};
