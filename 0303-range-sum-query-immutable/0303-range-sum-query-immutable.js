/**
 * @param {number[]} nums
 */
var NumArray = function(nums) {
    this.size = nums.length;
    this.prefixSum = Array(nums.length).fill(0);
    this.prefixSum[0] = nums[0];

    for(let i = 1; i < this.size; i++) {
        this.prefixSum[i] = this.prefixSum[i-1] + nums[i];
    }
};

/** 
 * @param {number} left 
 * @param {number} right
 * @return {number}
 */
NumArray.prototype.sumRange = function(left, right) {
    return left == 0 ? this.prefixSum[right] : this.prefixSum[right] - this.prefixSum[left-1];
};

/** 
 * Your NumArray object will be instantiated and called as such:
 * var obj = new NumArray(nums)
 * var param_1 = obj.sumRange(left,right)
 */