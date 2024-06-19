func findContentChildren(g []int, s []int) int {
	sort.Ints(g)
	sort.Ints(s)

	i, j := 0, 0
	result := 0

	for i < len(g) && j < len(s) {
		if s[j] >= g[i] {
			result++
			j++
			i++
		} else {
			j++
		}
	}

	return result
}
