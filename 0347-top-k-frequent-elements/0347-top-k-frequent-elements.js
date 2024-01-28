/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
const topKFrequent = (nums, k) => {
  const hashMap = new Map();
  for (let i = 0; i < nums.length; ++i) {
    hashMap.set(nums[i], hashMap.has(nums[i]) ? hashMap.get(nums[i]) + 1 : 1);
  }
  let sortedEntries = Array.from(hashMap.entries()).sort((a, b) => b[1] - a[1]);
  const res = [];
  for (let i = 0; i < k; ++i) {
    res.push(sortedEntries[i][0]);
  }
  return res;
};



