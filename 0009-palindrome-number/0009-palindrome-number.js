/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  let s = x.toString();
  let t = "";
  for (let i = s.length - 1; i >= 0; i--) {
    t += s[i];
  }
  return s == t;
};
