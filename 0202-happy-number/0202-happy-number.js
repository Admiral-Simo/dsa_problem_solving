/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
  let seen = new Set();
  while (n != 1) {
    let sum = 0;
    while (n != 0) {
      sum += (n % 10) ** 2;
      n = Math.floor(n / 10);
    }
    n = sum;
    if (seen.has(n)) return false;
    seen.add(n);
  }
  return true;
};
