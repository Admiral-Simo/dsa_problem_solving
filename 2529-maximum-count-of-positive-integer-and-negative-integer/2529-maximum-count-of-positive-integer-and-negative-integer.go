func maximumCount(nums []int) int {
	negCount := 0
	posCount := 0
	for _, n := range nums {
		if n < 0 {
			negCount++
		}
		if n > 0 {
			posCount++
		}
	}
	return max(posCount, negCount)
}
