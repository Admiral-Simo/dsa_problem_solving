func fizzBuzz(n int) []string {
	result := make([]string, 0, n)
	for i := 1; i <= n; i++ {
		switch {
		case i%3 == 0 && i%5 == 0:
			result = append(result, "FizzBuzz")
		case i%3 == 0:
			result = append(result, "Fizz")
		case i%5 == 0:
			result = append(result, "Buzz")
		default:
			result = append(result, fmt.Sprintf("%d", i))
		}
	}
	return result
}
