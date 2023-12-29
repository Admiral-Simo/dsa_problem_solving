/**
 * @param {number} numRows
 * @return {number[][]}
 */
const pascalNext = (nums) => {
    let result = [];
    for(let i = -1; i < nums.length; i++) {
        if (isNaN(nums[i] + nums[i+1])) {
            result.push(1);
            continue;
        } else {
            result.push(nums[i] + nums[i + 1]);
        }
    }
    return result
}
const generate = (n) => {
    let result = [];
    for(let i = 0; i < n; i++) {
        if (i === 0) {
            result.push(pascalNext([]));
            continue;
        }
        result.push(pascalNext(result[i - 1])); 
    }
    return result;
}