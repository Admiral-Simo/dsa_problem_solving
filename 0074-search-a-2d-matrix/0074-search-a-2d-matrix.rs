impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
        let rows = matrix.len();
        let cols = matrix[0].len();
        for i in 0..rows {
            for j in 0..cols {
                if matrix[i][j] == target {
                    return true;
                }
            }
        }
        return false;
    }
}
