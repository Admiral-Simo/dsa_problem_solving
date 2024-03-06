class Solution {
public:
  ListNode *removeElements(ListNode *head, int val) {
    // Handle the case where the first node has the value val
    while (head != nullptr && head->val == val) {
      ListNode *temp = head;
      head = head->next;
      delete temp;
    }

    // Now head points to the first node that does not have the value val
    ListNode *current = head;
    while (current != nullptr && current->next != nullptr) {
      if (current->next->val == val) {
        ListNode *temp = current->next;
        current->next = current->next->next;
        delete temp;
      } else {
        current = current->next;
      }
    }
    return head;
  }
};
