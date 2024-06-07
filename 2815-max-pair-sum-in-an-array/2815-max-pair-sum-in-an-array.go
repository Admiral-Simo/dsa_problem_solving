func largestDigit(num int) int {
	maxDigit := 0
	for num != 0 {
		maxDigit = max(maxDigit, num%10)
		num /= 10
	}
	return maxDigit
}

func maxSum(nums []int) int {
	maxSumValue := -1
	for i := 0; i < len(nums); i++ {
		for j := 0; j < len(nums); j++ {
			if i == j {
				continue
			}

			if largestDigit(nums[i]) == largestDigit(nums[j]) {
				sum := nums[i] + nums[j]
				maxSumValue = max(maxSumValue, sum)
			}
		}
	}
	return maxSumValue
}
