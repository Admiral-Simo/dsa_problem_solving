/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function (s, t) {
  let sMap = new Map();
  let tMap = new Map();
  for (let i = 0; i < s.length; ++i) {
    // checking if there is a conflict there
    if (
      (sMap.has(s.charAt(i)) && sMap.get(s.charAt(i)) != t.charAt(i)) ||
      (tMap.has(t.charAt(i)) && tMap && tMap.get(t.charAt(i)) != s.charAt(i))
    )
      return false;
    sMap.set(s.charAt(i), t.charAt(i));
    tMap.set(t.charAt(i), s.charAt(i));
  }
  return true;
};


