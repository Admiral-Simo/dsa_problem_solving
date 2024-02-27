class Solution {
public:
  int maxDepth(TreeNode *root) {
    if (root == nullptr)
      return 0;
    int level = 0;
    std::queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      int nodesCount = q.size();
      for (int i = 0; i < nodesCount; ++i) {
        TreeNode *node = q.front();
        q.pop();
        if (node->left != nullptr) {
          q.push(node->left);
        }
        if (node->right != nullptr) {
          q.push(node->right);
        }
      }
      level++;
    }
    return level;
  }
};
