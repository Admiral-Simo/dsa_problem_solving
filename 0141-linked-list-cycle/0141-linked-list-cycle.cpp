class Solution {
public:
  bool hasCycle(ListNode *head) {
      ListNode* current = head;


      unordered_set<ListNode*> visited;


      while (current != nullptr) {
          if (visited.find(current) != visited.end())
              return true;

          visited.insert(current);
          current = current->next;
      }

      return false;
  }
};
