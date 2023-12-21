/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let result = [];
    for(let i = 1; i <= n; i++) {
        switch(true) {
            case i % 3 === 0 && i % 5 === 0:
                result.push("FizzBuzz");
                break;
            case i % 3 === 0:
                result.push("Fizz");
                break;
            case i % 5 === 0:
                result.push("Buzz");
                break;
            default:
                result.push(i.toString());     
        }

    }
    return result;
};