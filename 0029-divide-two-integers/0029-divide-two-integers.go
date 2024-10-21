func divide(dividend int, divisor int) int {
	if dividend == math.MinInt32 && divisor == -1 {
		return math.MaxInt32
	}

	negative := (dividend < 0) != (divisor < 0)

	dividendAbs := abs(dividend)
	divisorAbs := abs(divisor)

	quotient := 0

	for dividendAbs >= divisorAbs {
		tempDivisor := divisorAbs
		multiple := 1

		for dividendAbs >= (tempDivisor << 1) {
			tempDivisor <<= 1
			multiple <<= 1
		}

		dividendAbs -= tempDivisor
		quotient += multiple
	}

	if negative {
		quotient *= -1
	}

	return min(math.MaxInt32, max(math.MinInt32, quotient))
}
func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
