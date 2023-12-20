/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = (nums) => {
  const s = new Set(nums);
  return s.size !== nums.length;
}