class Solution {
public:
  bool helper(TreeNode *root, int targetSum, int current) {
      if (root == nullptr) return false;
      current += root->val;
      if (root->left == nullptr && root->right == nullptr) return current == targetSum;
      return helper(root->left, targetSum, current) || helper(root->right, targetSum, current);
  }
  bool hasPathSum(TreeNode *root, int targetSum) {
    // base case is current > targetSum return;
      return helper(root, targetSum, 0);
  }
};
