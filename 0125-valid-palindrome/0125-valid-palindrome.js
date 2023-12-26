/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
  s = s.toLowerCase();
  s = s.split("").filter((item) => item.charCodeAt(0) >= 'a'.charCodeAt(0) && item.charCodeAt(0) <= 'z'.charCodeAt(0) || item.charCodeAt(0) >= '0'.charCodeAt(0) && item.charCodeAt(0) <= '9'.charCodeAt(0)).join("");
  console.log(s)
  return s.split("").reverse().join("") === s;
};