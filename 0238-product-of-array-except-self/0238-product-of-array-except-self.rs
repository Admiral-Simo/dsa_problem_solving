impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();

        let prefix_products: Vec<i32> = nums
            .iter()
            .scan(1, |product, &x| {
                *product *= x;
                Some(*product)
            })
            .collect();

        let suffix_products: Vec<i32> = nums
            .iter()
            .rev()
            .scan(1, |product, &x| {
                *product *= x;
                Some(*product)
            })
            .collect();

        let suffix_products: Vec<i32> = suffix_products.into_iter().rev().collect();

        (0..n)
            .map(|i| {
                let prefix = if i == 0 { 1 } else { prefix_products[i - 1] };
                let suffix = if i == n - 1 {
                    1
                } else {
                    suffix_products[i + 1]
                };
                prefix * suffix
            })
            .collect()
    }
}
