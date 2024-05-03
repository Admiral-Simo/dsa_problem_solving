
func leftRightDifference(nums []int) []int {
	result := make([]int, len(nums))
	left, right := 0, 0
	for _, num := range nums {
		right += num
	}
	for i, num := range nums {
		right -= num
		result[i] = Abs(left - right)
		left += num
	}
	return result
}

func Abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}
