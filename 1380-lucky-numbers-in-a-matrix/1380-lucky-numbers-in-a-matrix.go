func luckyNumbers(matrix [][]int) []int {
	var result []int
	for i := 0; i < len(matrix); i++ {
		minVal := matrix[i][0]
		minIdx := 0
		for j := 1; j < len(matrix[i]); j++ {
			if matrix[i][j] < minVal {
				minVal = matrix[i][j]
				minIdx = j
			}
		}

		isMax := true
		for k := 0; k < len(matrix); k++ {
			if matrix[k][minIdx] > minVal {
				isMax = false
				break
			}
		}

		if isMax {
			result = append(result, minVal)
		}
	}
	return result
}
