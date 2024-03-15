class Solution {
private:
  bool isMirror(TreeNode *left_subtree, TreeNode *right_subtree) {
    if (left_subtree == nullptr && right_subtree == nullptr) {
      return true;
    }
    if (left_subtree == nullptr || right_subtree == nullptr) {
      return false;
    }
    return (left_subtree->val == right_subtree->val) &&
           isMirror(left_subtree->left, right_subtree->right) && isMirror(left_subtree->right, right_subtree->left);
  }

public:
  bool isSymmetric(TreeNode *root) {
    if (root == nullptr)
      return true;
    return isMirror(root->right, root->left);
  }
};
