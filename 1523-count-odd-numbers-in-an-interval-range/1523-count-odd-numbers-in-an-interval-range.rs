impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        if low == high {
            return if low % 2 == 0 { 0 } else { 1 };
        }
        let low = if low % 2 == 0 { low + 1 } else { low };
        (high - low) / 2 + 1
    }
}
