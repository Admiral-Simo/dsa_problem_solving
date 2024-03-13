class Solution {
public:
  ListNode *reverseList(ListNode *head, ListNode *prev = nullptr) {
    if (head == nullptr) {
      return prev;
    }
    ListNode* nextNode = head->next;
    head->next = prev;
    prev = head;
    return reverseList(nextNode, prev);
  }
};
