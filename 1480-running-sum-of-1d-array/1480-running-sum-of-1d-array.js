/**
 * @param {number[]} nums
 * @return {number[]}
 */
const runningSum = (nums) => {
	let result = [];
	let sum = 0;
	for(let i = 0; i < nums.length; i++) {
		sum += nums[i];
		result.push(sum);
	}
	return result;
}
