impl Solution {
    pub fn title_to_number(column_title: String) -> i32 {
        let mut sum = 0;

        for byte in column_title.bytes() {
            sum = sum * 26 + (byte as i32 - 'A' as i32 + 1);
        }

        sum
    }
}
