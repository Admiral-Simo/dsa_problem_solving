var numIdenticalPairs = function(nums) {
    let mp = new Map();
    let result = 0;
    for(let i = 0; i < nums.length; i++) {
        result += mp.get(nums[i]) || 0;
        mp.set(nums[i], (mp.get(nums[i]) || 0) + 1);
    }
    return result;
};