impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
        let rows = matrix.len() as i32;
        let cols = matrix[0].len() as i32;
        let mut left = 0;
        let mut right = rows * cols - 1;
        while left <= right {
            let mid = left + (right - left) / 2;
            let mid_value = matrix[(mid / cols) as usize][(mid % cols) as usize];
            if mid_value == target {
                return true;
            } else if mid_value > target {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        false
    }
}

