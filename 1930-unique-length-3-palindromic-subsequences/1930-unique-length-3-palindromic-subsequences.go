type MinMax struct {
	min int
	max int
}

func countPalindromicSubsequence(s string) int {
	runeToMinMax := make(map[rune]MinMax)

	for i, r := range s {
		val, ok := runeToMinMax[r]
		if !ok {
			runeToMinMax[r] = MinMax{
				min: i,
				max: -1,
			}
			continue
		}

		val.min = min(val.min, i)
		val.max = max(val.max, i)
		runeToMinMax[r] = val
	}

	numPalindromes := 0
	for _, v := range runeToMinMax {
		// it only appears once
		if v.max == -1 {
			continue
		}
		// no space in between
		if v.max-v.min < 2 {
			continue
		}

		uniqueBetween := make(map[byte]struct{})
		for i := v.min + 1; i < v.max; i++ {
			uniqueBetween[s[i]] = struct{}{}
		}

		numPalindromes += len(uniqueBetween)
	}
	return numPalindromes
}
