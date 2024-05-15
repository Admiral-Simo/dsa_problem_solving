func sortArrayByParityII(nums []int) []int {
	odds := []int{}
	evens := []int{}
	for _, value := range nums {
		if value%2 == 0 {
			evens = append(evens, value)
		} else {
			odds = append(odds, value)
		}
	}
	i, j := 0, 0
	for i < len(odds) || j < len(evens) {
		current := i + j
		if current%2 == 0 {
			// i want an even number
			nums[current] = evens[i]
			i++
		} else {
			// i want an odd number
			nums[current] = odds[j]
			j++
		}
	}
	return nums
}
