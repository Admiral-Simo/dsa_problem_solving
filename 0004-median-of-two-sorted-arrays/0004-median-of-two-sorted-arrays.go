package main

import (
	"fmt"
	"math"
)

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	// Ensure nums1 is the smaller array for efficiency
	if len(nums1) > len(nums2) {
		return findMedianSortedArrays(nums2, nums1)
	}

	N, M := len(nums1), len(nums2)
	halfLen := (N + M + 1) / 2

	left, right := 0, N
	for left <= right {
		partitionX := (left + right) / 2
		partitionY := halfLen - partitionX

		// Handle out-of-bounds by using extreme values for empty partitions
		maxLeftX := math.Inf(-1)
		if partitionX > 0 {
			maxLeftX = float64(nums1[partitionX-1])
		}
		minRightX := math.Inf(1)
		if partitionX < N {
			minRightX = float64(nums1[partitionX])
		}

		maxLeftY := math.Inf(-1)
		if partitionY > 0 {
			maxLeftY = float64(nums2[partitionY-1])
		}
		minRightY := math.Inf(1)
		if partitionY < M {
			minRightY = float64(nums2[partitionY])
		}

		// Check if we have found the correct partition
		if maxLeftX <= minRightY && maxLeftY <= minRightX {
			// If total number of elements is odd, return max of left sides
			if (N+M)%2 == 1 {
				return math.Max(maxLeftX, maxLeftY)
			}
			// If total number of elements is even, return average of the middle values
			return (math.Max(maxLeftX, maxLeftY) + math.Min(minRightX, minRightY)) / 2
		} else if maxLeftX > minRightY {
			// Too far right in nums1, move left
			right = partitionX - 1
		} else {
			// Too far left in nums1, move right
			left = partitionX + 1
		}
	}

	return 0.0 // This will never be reached if input is valid
}

