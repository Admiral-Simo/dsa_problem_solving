impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        let length = high - low + 1;
        let mut count = length / 2;
        if low % 2 == 1 && length % 2 == 1 {
            count += 1;
        }
        count
    }
}
