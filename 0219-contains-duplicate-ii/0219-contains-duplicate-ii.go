func containsNearbyDuplicate(nums []int, k int) bool {
	hashMap := make(map[int]int)
	for i, num := range nums {
		if index, ok := hashMap[num]; ok && i-index <= k {
			return true
		}
		hashMap[num] = i
	}
	return false
}
