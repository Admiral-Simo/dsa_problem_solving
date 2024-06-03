
func minimumChairs(s string) int {
	minChairs := 0
	curr := 0
	for _, r := range s {
		if r == 'E' {
			curr += 1
		} else {
			curr -= 1
		}
		minChairs = max(curr, minChairs)
	}
	return minChairs
}
