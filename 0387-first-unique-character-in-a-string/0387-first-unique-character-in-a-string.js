/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function (s) {
  let charMap = {};
  for (let i = 0; i < s.length; i++) {
    charMap[s.charAt(i)] = (charMap[s.charAt(i)] ?? 0) + 1;
  }
  for (let i = 0; i < s.length; i++) {
    if (charMap[s.charAt(i)] === 1) return i;
  }
  return -1;
};

