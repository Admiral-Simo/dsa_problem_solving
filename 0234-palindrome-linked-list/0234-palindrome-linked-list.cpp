class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    ListNode *prev = nullptr;
    while (head != nullptr) {
      ListNode *nextNode = head->next;
      head->next = prev;
      prev = head;
      head = nextNode;
    }
    return prev;
  }

  bool isPalindrome(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return true;
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *secondHalf = reverseList(slow);

    while (secondHalf != nullptr) {
      if (head->val != secondHalf->val) {
        return false;
      }
      head = head->next;
      secondHalf = secondHalf->next;
    }
    return true;
  }
};
