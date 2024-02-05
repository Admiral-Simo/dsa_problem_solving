/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function (s) {
  let charMap = {};
  for (let i = 0; i < s.length; i++) {
    if (charMap[s.charAt(i)] !== undefined) {
      charMap[s.charAt(i)].count++;
    } else {
      charMap[s.charAt(i)] = { count: 1, index: i };
    }
  }

  for (const key in charMap) {
    if (charMap[key].count === 1) return charMap[key].index;
  }

  return -1;
};
