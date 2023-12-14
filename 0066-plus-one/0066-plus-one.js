/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let carry = 1;
    let result = [];

    for (let i = digits.length - 1; i >= 0; i--) {
        let sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = Math.floor(sum / 10);
    }

    while (carry > 0) {
        result.push(carry % 10);
        carry = Math.floor(carry / 10);
    }

    result = result.concat(digits);

    return result;
};