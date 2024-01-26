/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function (nums1, nums2) {
  const hashMap = new Map();
  const res = new Array(nums1.length).fill(-1);
  for (let i = 0; i < nums1.length; ++i) {
    hashMap.set(nums1[i], i);
  }
  for (let i = 0; i < nums2.length; ++i) {
    if (hashMap.has(nums2[i])) {
      for (let j = i + 1; j < nums2.length; ++j) {
        if (nums2[j] > nums2[i]) {
          res[hashMap.get(nums2[i])] = nums2[j];
          break;
        }
      }
    }
  }
  return res;
};




