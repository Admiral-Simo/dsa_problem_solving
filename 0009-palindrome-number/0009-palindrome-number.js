/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0) return false;
  let tmp = x;
  let reversed = 0;
  while (tmp) {
    reversed = reversed * 10 + (tmp % 10);
    tmp = Math.floor(tmp / 10);
  }
  return x == reversed;
};
