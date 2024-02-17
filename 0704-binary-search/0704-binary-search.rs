impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let mut right: i32 = nums.len() as i32 - 1;
        let mut left: i32 = 0;
        while right >= left {
            let mid: i32 = left + (right - left) / 2;
            if nums[mid as usize] == target {
                return mid;
            } else if nums[mid as usize] > target {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
        return -1;
    }
}

