/**
 * @param {number[]} nums
 * @return {number}
 */
const majorityElement = (nums) => {
    let result = {};
    for(let i = 0; i < nums.length; i++) {
        result[nums[i]] = (result[nums[i]] ?? 0) + 1;
    }
    let max = 0, desired;
    for(let key in result) {
        if (result[key] > max) {
            max = result[key];
            desired = key;
        }
    }
    return desired;
}