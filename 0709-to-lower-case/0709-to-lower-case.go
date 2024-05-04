func toLowerCase(s string) string {
	n := len(s)
	for i := 0; i < n; i++ {
		if isUpperCase(s[i]) {
			// transform Upper to Lower decreasing it by 20
			s = s[:i] + string(s[i]+32) + s[i+1:]
		}
	}
	return s
}

func isUpperCase(s byte) bool {
	if s >= 'A' && s <= 'Z' {
		return true
	}
	return false
}

