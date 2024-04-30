func calculate(a, b int, token string) int {
	switch token {
	case "/":
		return a / b
	case "*":
		return a * b
	case "-":
		return a - b
	case "+":
		return a + b
	}
	return 0
}

func evalRPN(tokens []string) int {
	stack := make([]int, 0)
	for _, token := range tokens {
		if isDigit(token) || (len(token) > 1 && token[0] == '-' && isDigit(token[1:])) {
			val, _ := strconv.Atoi(token)
			stack = append(stack, val)
		} else {
			pop1 := stack[len(stack)-1]
			stack = stack[:len(stack)-1]
			pop2 := stack[len(stack)-1]
			stack = stack[:len(stack)-1]

			result := calculate(pop2, pop1, token)
			stack = append(stack, result)
		}
	}
	return stack[0]
}

func isDigit(s string) bool {
	_, err := strconv.Atoi(s)
	return err == nil
}
