class Solution {
public:
    std::vector<int> helper(TreeNode *root, std::vector<int>& path) {
        if (root == nullptr) return path;
        helper(root->left, path);
        path.push_back(root->val);
        helper(root->right, path);
        return path;
    }
    std::vector<int> inorderTraversal(TreeNode *root) {
        std::vector<int> path;
        helper(root, path);
        return path;
    }
};
