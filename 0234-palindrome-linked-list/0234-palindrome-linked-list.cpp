
class Solution {
    
public:
bool isPalindrome(ListNode* head) {
    // If the list is empty or has only one node, it's a palindrome
    if (head == nullptr || head->next == nullptr) return true;

    // Find the middle of the linked list using slow and fast pointers
    ListNode *slow = head, *fast = head;
    std::stack<int> first_half;

    while (fast != nullptr && fast->next != nullptr) {
        first_half.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    // If the list has an odd number of nodes, skip the middle node
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Compare the second half of the list with the elements in the stack
    while (slow != nullptr) {
        if (slow->val != first_half.top()) {
            return false;
        }
        first_half.pop();
        slow = slow->next;
    }

    return true;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example 1
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(1);

    std::cout << "Example 1: ";
    printList(head1);
    std::cout << "Is palindrome? " << std::boolalpha << isPalindrome(head1) << std::endl;

    // Example 2
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);

    std::cout << "Example 2: ";
    printList(head2);
    std::cout << "Is palindrome? " << std::boolalpha << isPalindrome(head2) << std::endl;

    return 0;
}
};