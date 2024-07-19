func luckyNumbers(matrix [][]int) []int {
	var result []int
	for i := 0; i < len(matrix); i++ {
		minVal, minIdx := findMinInRow(matrix[i])
		if isMaxInColumn(matrix, minVal, minIdx) {
			result = append(result, minVal)
		}
	}
	return result
}

func findMinInRow(row []int) (int, int) {
	minIdx := 0
	minVal := row[0]
	for i := 1; i < len(row); i++ {
		if row[i] < minVal {
			minIdx = i
			minVal = row[i]
		}
	}
	return minVal, minIdx
}

func isMaxInColumn(matrix [][]int, value int, colIdx int) bool {
	for k := 0; k < len(matrix); k++ {
		if matrix[k][colIdx] > value {
			return false
		}
	}
	return true
}
