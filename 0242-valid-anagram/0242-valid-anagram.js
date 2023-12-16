/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;
    let sMap = {};
    let tMap = {};
    for(let i = 0; i < s.length; i++) {
        sMap[s.charAt(i)] = sMap[s.charAt(i)] ? sMap[s.charAt(i)] + 1 : 1;
        tMap[t.charAt(i)] = tMap[t.charAt(i)] ? tMap[t.charAt(i)] + 1 : 1;
    }
    for(let key in sMap) {
        if (sMap[key] !== tMap[key]) return false;
    }
    return true;
};