class Solution {
public:
  bool isMirror(TreeNode *leftSubtree, TreeNode *rightSubtree) {
    // Base cases:
    // If both subtrees are null, they are symmetric.
    if (!leftSubtree && !rightSubtree)
      return true;

    // If one subtree is null and the other is not, they are not symmetric.
    if (!leftSubtree || !rightSubtree)
      return false;

    // Check if the values at the current nodes are equal,
    // and recursively check the symmetry of their children.
    return (leftSubtree->val == rightSubtree->val) &&
           isMirror(leftSubtree->left, rightSubtree->right) &&
           isMirror(leftSubtree->right, rightSubtree->left);
  }

  bool isSymmetric(TreeNode *root) {
    // If the root is null, it's considered symmetric.
    if (!root)
      return true;

    // Call the helper function to check the symmetry of the left and right
    // subtrees.
    return isMirror(root->left, root->right);
  }
};
