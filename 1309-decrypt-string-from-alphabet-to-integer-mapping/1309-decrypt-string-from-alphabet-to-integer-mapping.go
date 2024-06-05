func freqAlphabets(s string) string {
	var res string
	for i := 0; i < len(s); i++ {
		if i+2 < len(s) && s[i+2] == '#' {
			n, _ := strconv.Atoi(s[i : i+2])
			res += fmt.Sprintf("%c", 'a'+n-1)
			i += 2
		} else {
			n, _ := strconv.Atoi(string(s[i]))
			res += fmt.Sprintf("%c", 'a'+n-1)
		}
	}
	return res
}
