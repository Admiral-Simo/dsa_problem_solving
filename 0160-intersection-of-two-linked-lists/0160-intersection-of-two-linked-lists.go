/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getIntersectionNode(headA, headB *ListNode) *ListNode {
	aLength := getLength(headA)
	bLength := getLength(headB)
	difference := int(math.Abs(float64(aLength) - float64(bLength)))
	if aLength > bLength {
		for i := 0; i < difference; i++ {
			headA = headA.Next
		}
	} else {
		for i := 0; i < difference; i++ {
			headB = headB.Next
		}
	}

	for headA != nil {
		if headA == headB {
			return headA
		}
		headA = headA.Next
		headB = headB.Next
	}
	return nil
}

func getLength(head *ListNode) int {
	count := 0
	for head != nil {
		count++
		head = head.Next
	}
	return count
}
