func leftRightDifference(nums []int) []int {
	n := len(nums)
	leftSide := make([]int, n)
	rightSide := make([]int, n)
	result := make([]int, n)

	for i := 1; i < n; i++ {
		leftSide[i] = leftSide[i-1] + nums[i-1]
	}
	for i := n - 2; i >= 0; i-- {
		rightSide[i] = rightSide[i+1] + nums[i+1]
	}

	for i := 0; i < n; i++ {
		result[i] = Absolute(leftSide[i] - rightSide[i])
	}

	return result
}

func Absolute(a int) int {
	if a < 0 {
		return -a
	}
	return a
}
