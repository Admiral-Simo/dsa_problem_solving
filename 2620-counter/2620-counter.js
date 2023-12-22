/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let local = n;
    return () => {
        return local++;
    }
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */