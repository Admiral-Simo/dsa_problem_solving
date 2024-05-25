func scoreOfString(s string) int {
	sum := 0
	for i := 0; i < len(s)-1; i++ {
		max := int(math.Max(float64(s[i]), float64(s[i+1])))
		min := int(math.Min(float64(s[i]), float64(s[i+1])))
		sum += max - min
	}
	return sum
}
