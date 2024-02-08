/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
  if (!head || !head.next) return head;
  let before = head;
  let current = head.next;
  while (current != null) {
    if (before.val === current.val) {
      before.next = current.next;
    } else {
      before = current;
    }
    current = current.next;
  }
  return head;
};



