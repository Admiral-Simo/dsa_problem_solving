class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr)
            return 0;
        std::queue<TreeNode*> q;
        int element_count = 0;
        q.push(root);
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
            element_count++;
        }
        return element_count;
    }
};
