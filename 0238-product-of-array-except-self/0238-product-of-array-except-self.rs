impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let mut result = vec![1; nums.len()];
        let mut prefix = 1;
        for i in 0..nums.len() {
            result[i] *= prefix;
            prefix *= nums[i];
        }
        let mut postfix = 1;
        for i in (0..nums.len()).rev() {
            result[i] *= postfix;
            postfix *= nums[i];
        }
        result
    }
}
