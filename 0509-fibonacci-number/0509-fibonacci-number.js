/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n, memo = {}) {
    if (n === 0) return 0;
    if (n <= 2) return 1;
    if (memo[n]) return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
};