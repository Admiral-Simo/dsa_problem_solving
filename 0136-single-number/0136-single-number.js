/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
  console.log('something')
  const arr = {};
  for(let i = 0; i < nums.length; i++) {
    arr[nums[i]] = arr[nums[i]] ? arr[nums[i]] + 1 : 1;
  }
  console.log(arr);
  for(let key in arr) {
    if (arr[key] === 1) return key;
  }
};