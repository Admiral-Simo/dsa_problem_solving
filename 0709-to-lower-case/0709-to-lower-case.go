func toLowerCase(s string) string {
	bytes := []byte(s)
	for i := 0; i < len(s); i++ {
		if isUpperCase(bytes[i]) {
			// transform Upper to Lower decreasing it by 20
			bytes[i] += 32
		}
	}
	return string(bytes)
}

func isUpperCase(s byte) bool {
	if s >= 'A' && s <= 'Z' {
		return true
	}
	return false
}

