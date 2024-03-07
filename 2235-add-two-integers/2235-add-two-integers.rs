impl Solution {
    pub fn sum(num1: i32, num2: i32) -> i32 {
        let mut a = num1;
        let mut b = num2;
        while b != 0 {
            let carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        a
    }
}
