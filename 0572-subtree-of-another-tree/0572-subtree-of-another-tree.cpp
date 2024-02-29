class Solution {
public:
  bool isSubtree(TreeNode *root, TreeNode *subRoot) {
    if (root == nullptr) return false;
    if (isSameTree(root, subRoot)) return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
  }
  bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr && q == nullptr)
      return true;
    if (p == nullptr || q == nullptr || p->val != q->val)
      return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
  }
};
