/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = (nums) => {
  const seen = {};
  for(let i = 0; i < nums.length; i++) {
    if (seen[nums[i]]) return true;
    else seen[nums[i]] = 1; 
  }
  return false;

}