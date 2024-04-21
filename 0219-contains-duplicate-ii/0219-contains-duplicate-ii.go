type HashSet map[int]struct{}

func NewHashSet() HashSet {
	return make(HashSet)
}

func (set HashSet) Add(value int) {
	set[value] = struct{}{}
}

func (set HashSet) Has(value int) bool {
	_, ok := set[value]
	return ok
}

func (set HashSet) Remove(value int) {
	delete(set, value)
}

func containsNearbyDuplicate(nums []int, k int) bool {
	hashSet := NewHashSet()
	n := len(nums)
	for i := 0; i < n; i++ {
		currentNum := nums[i]
		if i > k {
			hashSet.Remove(nums[i-k-1])
		}
		if hashSet.Has(currentNum) {
			return true
		}
		hashSet.Add(currentNum)
	}
	return false
}
