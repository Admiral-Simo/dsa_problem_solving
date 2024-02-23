/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  const s = x.toString();
  let t = "";
  for (let i = s.length - 1; i > -1; i--) {
    t = t + s[i];
  }
  return s == t;
};
