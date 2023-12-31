/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let x = 0;
    for(let i = 0; i < operations.length; i++) {
        if (operations[i][0] === '+' || operations[i][2] === '+') {
            x++;
        } else {
            x--;
        }
    }
    return x;
};