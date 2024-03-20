impl Solution {
    pub fn is_palindrome(s: &[u8]) -> bool {
        let mut l = 0;
        let mut r = s.len() - 1;
        while l < r {
            if s[l] != s[r] {
                return false;
            }
            l += 1;
            r -= 1;
        }
        true
    }
    pub fn valid_palindrome(s: String) -> bool {
        let s = s.as_bytes();
        let mut l = 0;
        let mut r = s.len() - 1;
        while l < r {
            if s[l] != s[r] {
                let first_slice = Solution::is_palindrome(&s[l + 1..=r]);
                let second_slice = Solution::is_palindrome(&s[l..r]);
                return first_slice || second_slice;
            }
            r -= 1;
            l += 1;
        }
        true
    }
}
