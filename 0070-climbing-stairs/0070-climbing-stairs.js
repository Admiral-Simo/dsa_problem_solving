/**
 * @param {number} n
 * @return {number}
 */

const climbStairs = (n) => {
    // goal what's the number of possibilities to reach the sum n with only positive numbers zero not included n is included
    let one = 1, two = 1;
    for(let i = 0; i < n - 1; i++) {
        let temp = one;
        one = one + two;
        two = temp;
    }
    return one;
}