/**
 * @param {number} n
 * @return {number}
 */

const climbStairs = (target,n = 0, memo = []) => {
    // goal what's the number of possibilities to reach the sum n with only positive numbers zero not included n is included
    if (typeof memo[n] !== 'undefined') return memo[n];
    if (n > target) return 0;
    if (n === target) return 1;
    memo[n] = climbStairs(target,n + 1, memo ) + climbStairs(target,n + 2, memo )
    return memo[n];
}