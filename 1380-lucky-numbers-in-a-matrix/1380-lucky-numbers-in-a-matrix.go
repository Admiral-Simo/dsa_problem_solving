func luckyNumbers(matrix [][]int) []int {
	var wg sync.WaitGroup
	resultChan := make(chan int, len(matrix))

	for i := 0; i < len(matrix); i++ {
		wg.Add(1)
		go func(row []int, matrix [][]int) {
			defer wg.Done()
			minVal, minIdx := findMinInRow(row)
			if isMaxInColumn(matrix, minVal, minIdx) {
				resultChan <- minVal
			}
		}(matrix[i], matrix)
	}

	wg.Wait()
	close(resultChan)

	var result []int
	for val := range resultChan {
		result = append(result, val)
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
