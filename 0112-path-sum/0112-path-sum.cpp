class Solution {
public:
  bool hasPathSum(TreeNode *root, int targetSum) {
    // base case is current > targetSum return;
      if (root == nullptr) return false;
      if (root->left == nullptr && root->right == nullptr) {
          return root->val == targetSum;
      }
      int newTarget = targetSum - root->val;
      return hasPathSum(root->right, newTarget) || hasPathSum(root->left, newTarget);
  }
};
