func addStrings(num1 string, num2 string) string {
	first := new(big.Int)
	second := new(big.Int)

	first, _ = first.SetString(num1, 10)
	second, _ = second.SetString(num2, 10)

	sum := new(big.Int).Add(first, second)

	return sum.String()
}
