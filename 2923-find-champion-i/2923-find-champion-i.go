func findChampion(grid [][]int) int {
	n := len(grid)

	strongerThan := make([]int, n)

	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			if grid[i][j] == 1 {
				strongerThan[i]++
			}
		}
	}

	champion := 0
	for i := 1; i < n; i++ {
		if strongerThan[i] > strongerThan[champion] {
			champion = i
		}
	}

	return champion
}
