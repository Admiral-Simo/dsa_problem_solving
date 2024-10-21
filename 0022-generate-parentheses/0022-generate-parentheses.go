func generateParenthesis(n int) []string {
	var stack []string
	var res []string
	var backtract func(o, c int)
	backtract = func(o, c int) {
		if o == c && o == n {
			res = append(res, strings.Join(stack, ""))
		}
		if o < n {
			stack = append(stack, "(")
			backtract(o+1, c)
			stack = stack[:len(stack)-1]
		}
		if c < o {
			stack = append(stack, ")")
			backtract(o, c+1)
			stack = stack[:len(stack)-1]
		}
	}
	backtract(0, 0)
	return res
}
