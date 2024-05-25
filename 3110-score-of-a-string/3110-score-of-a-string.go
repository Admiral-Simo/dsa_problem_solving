
func scoreOfString(s string) int {
	sum := 0
	for i := 0; i < len(s)-1; i++ {
		currCharCode := int(s[i])
		nextCharCode := int(s[i+1])
		sum += abs(currCharCode - nextCharCode)
	}
	return sum
}

func abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}
