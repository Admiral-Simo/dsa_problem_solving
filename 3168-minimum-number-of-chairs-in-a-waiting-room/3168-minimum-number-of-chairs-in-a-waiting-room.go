func minimumChairs(s string) int {
	minChairs := 0
	curr := 0
	for _, r := range s {
		if r == 'E' {
			curr++
		} else {
			curr--
		}
		minChairs = max(curr, minChairs)
	}
	return minChairs
}
