/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function (nums1, nums2) {
  const hashMap = new Map(nums1.map((val, i) => [val, i]));
  const res = new Array(nums1.length).fill(-1);
  const stack = [];
  for (let i = 0; i < nums2.length; ++i) {
    while (stack.length && nums2[i] > stack[stack.length - 1]) {
      res[hashMap.get(stack.pop())] = nums2[i];
    }
    if (hashMap.has(nums2[i])) stack.push(nums2[i]);
  }
  return res;
};







