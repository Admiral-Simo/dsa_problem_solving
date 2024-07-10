use std::collections::HashSet;

impl Solution {
    pub fn intersection(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
        let mut result: Vec<i32> = vec![];
        let mut set: HashSet<i32> = HashSet::new();
        for n in nums1 {
            set.insert(n);
        }
        for n in nums2 {
            if set.remove(&n) {
                result.push(n);
            }
        }
        result
    }
}
