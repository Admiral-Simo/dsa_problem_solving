class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base cases: if both trees are empty, they are the same.
        if (p == nullptr && q == nullptr)
            return true;
        // If one tree is empty while the other is not, they are different.
        if (p == nullptr || q == nullptr)
            return false;
        // If the values at the current nodes are different, the trees are different.
        if (p->val != q->val)
            return false;
        // Recursively check the left and right subtrees.
        // If any subtree comparison returns false, immediately return false.
        if (!isSameTree(p->left, q->left) || !isSameTree(p->right, q->right))
            return false;
        // If all comparisons passed, the trees are the same.
        return true;
    }
};
