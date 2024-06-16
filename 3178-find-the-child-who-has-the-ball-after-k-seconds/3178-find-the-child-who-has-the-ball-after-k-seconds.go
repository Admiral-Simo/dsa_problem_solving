type Direction byte

const (
	DirectionRight = iota
	DirectionLeft
)

func numberOfChild(n int, k int) int {
	child := 0
	dir := DirectionRight
	for i := 0; i < k; i++ {
		switch dir {
		case DirectionRight:
			child++
		case DirectionLeft:
			child--
		}

		switch child {
		case n - 1:
			dir = DirectionLeft
		case 0:
			dir = DirectionRight
		}
	}
	return child
}
