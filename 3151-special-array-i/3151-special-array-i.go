
func sameParity(a, b int) bool {
	return a%2 == 0 && b%2 == 0 || a%2 != 0 && b%2 != 0
}

func isArraySpecial(nums []int) bool {
	prev := 0
	for i, n := range nums {
		if i == 0 {
			prev = n
			continue
		}
		if sameParity(prev, n) {
			return false
		}
		prev = n
	}
	return true
}
