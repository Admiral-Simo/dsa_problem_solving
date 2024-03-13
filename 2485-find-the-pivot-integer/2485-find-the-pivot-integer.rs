impl Solution {
    pub fn pivot_integer(n: i32) -> i32 {
        let s = n * (n + 1) / 2;
        let ans = (s as f64).sqrt() as i32;
        if (ans * ans == s) {
            ans
        } else {
            -1
        }
    }
}