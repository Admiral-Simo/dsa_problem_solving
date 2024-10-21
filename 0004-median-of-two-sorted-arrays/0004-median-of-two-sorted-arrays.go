func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	combinedArr := []int{}
	i, j := 0, 0

	N := len(nums1)
	M := len(nums2)

	for i < N && j < M {
		if nums1[i] <= nums2[j] {
			combinedArr = append(combinedArr, nums1[i])
			i++
		} else {
			combinedArr = append(combinedArr, nums2[j])
			j++
		}
	}

	for ; i < N; i++ {
		combinedArr = append(combinedArr, nums1[i])
	}

	for ; j < M; j++ {
		combinedArr = append(combinedArr, nums2[j])
	}

	totalLength := N + M
	if totalLength%2 == 1 {
		return float64(combinedArr[totalLength/2])
	}

	return (float64(combinedArr[totalLength/2]) + float64(combinedArr[totalLength/2-1])) / 2
}
