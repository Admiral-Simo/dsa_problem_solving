/**
 * @param {number} n
 * @return {number}
 */
const smallestEvenMultiple = function(n) {
    // loop and keep multiplying
    const initial = n;
    for(let i = 0; true; i++) {
        n += n * i;
        if (n % 2 === 0 && n % initial === 0) return n;
    }
};
