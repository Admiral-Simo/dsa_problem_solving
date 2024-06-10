func canConstruct(ransomNote string, magazine string) bool {
	alphabets := [26]int{}

	for i := 0; i < len(magazine); i++ {
		char := magazine[i]
		alphabets[int(char-byte('a'))]++
	}

	for i := 0; i < len(ransomNote); i++ {
		char := ransomNote[i]
		if alphabets[int(char-byte('a'))] == 0 {
			return false
		}
		alphabets[int(char-byte('a'))]--
	}

	return true
}
