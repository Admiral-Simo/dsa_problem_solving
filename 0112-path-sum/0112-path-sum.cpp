class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        
        // Check if current node is a leaf node
        if (root->left == nullptr && root->right == nullptr) 
            return targetSum == root->val; 
        
        int newTarget = targetSum - root->val; // Update target sum for the next recursion
        
        // Recurse on left and right subtrees
        return hasPathSum(root->left, newTarget) || hasPathSum(root->right, newTarget);
    }
};
