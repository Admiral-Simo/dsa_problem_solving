/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
const rotate = (s) => {
    s = s.split('');
    const len = s.length;
    let tmp = s[0];
    for(let i = 0;i < s.length - 1; i++) {
        s[i] = s[i+1];
    }
    s[len - 1] = tmp;
    s = s.join('');
    return s;
}

var rotateString = function(s, goal) {
    for(let i = 0; i < s.length; i++) {
        s = rotate(s);
        if (s === goal) return true;
    }
    return false;
};