/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let newMap = {};
    
    for(let i = 0; i < nums.length; i++) {
        const compliment = target - nums[i];
        if (compliment in newMap) {
            return [newMap[compliment], i];
        }
        newMap[nums[i]] = i;
    }
};