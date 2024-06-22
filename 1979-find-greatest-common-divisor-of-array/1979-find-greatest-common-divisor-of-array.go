func findGCD(nums []int) int {
	if len(nums) == 0 {
		return 0
	}
	var minNum, maxNum int = nums[0], nums[0]
	for _, n := range nums {
		minNum = min(minNum, n)
		maxNum = max(maxNum, n)
	}
	return gcd(maxNum, minNum)
}

func gcd(a int, b int) int {
	for b != 0 {
		a, b = b, a%b
	}
	return a
}
