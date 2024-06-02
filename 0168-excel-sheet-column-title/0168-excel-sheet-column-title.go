func convertToTitle(columnNumber int) string {
	var result string
	for columnNumber > 0 {
		ch := fmt.Sprintf("%c", (columnNumber-1)%26+65)
		result = ch + result
		columnNumber = (columnNumber - 1) / 26
	}
	return result
}
