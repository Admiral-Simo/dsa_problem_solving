/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let carry = 1;
    let result = [];
    for(let i = digits.length - 1; i >= 0; i--) {
        let sum = digits[i] + carry;
        result.unshift(sum % 10);
        carry = Math.floor(sum / 10);
    }
    while(carry > 0) {
        result.unshift(carry % 10);
        carry = Math.floor(carry / 10);
    }
    return result;
};