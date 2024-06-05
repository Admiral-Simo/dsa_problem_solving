const alphabets = "abcdefghijklmnopqrstuvwxyz"

func reverseString(s *string) {
	runes := []rune(*s)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	*s = string(runes)
}

func freqAlphabets(s string) string {
	var result string

	for i := len(s) - 1; i >= 0; {
		character := 0
		if s[i] == '#' {
			i--
			character += int(s[i]) - '0'
			i--
			character += (int(s[i]) - '0') * 10
			i--
		} else {
			character += int(s[i]) - '0'
			i--
		}

		result += fmt.Sprintf("%c", character+'a'-1)
	}

	reverseString(&result)

	return result
}
