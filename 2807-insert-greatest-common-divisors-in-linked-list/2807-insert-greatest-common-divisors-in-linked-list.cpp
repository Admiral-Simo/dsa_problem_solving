/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  ListNode *insertGreatestCommonDivisors(ListNode *head) {
    ListNode *tmpHead = head;
    while (tmpHead != nullptr && tmpHead->next != nullptr) {
      ListNode *NodeToInsert =
          new ListNode(std::gcd(tmpHead->val, tmpHead->next->val));
      NodeToInsert->next = tmpHead->next;
      tmpHead->next = NodeToInsert;
      tmpHead = tmpHead->next->next;
    }
    return head;
  }
};

