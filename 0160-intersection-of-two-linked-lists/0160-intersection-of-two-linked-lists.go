/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getIntersectionNode(headA, headB *ListNode) *ListNode {
	seenNodes := map[*ListNode]struct{}{}
	for headA != nil {
		seenNodes[headA] = struct{}{}
		headA = headA.Next
	}
	for headB != nil {
		if _, ok := seenNodes[headB]; ok {
			return headB
		}
		headB = headB.Next
	}
	return nil
}
