/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b) {
    return a > b ? a : b;
}

int dfs(struct TreeNode* root, int* diameter) {
    if (root == NULL) return 0;

    int left = dfs(root->left, diameter);
    int right = dfs(root->right, diameter);

    // Update the diameter if the path through root is larger
    *diameter = max(*diameter, left + right);

    // Return height of subtree rooted at current node
    return 1 + max(left, right);
}

int diameterOfBinaryTree(struct TreeNode* root) {
    int diameter = 0;
    dfs(root, &diameter);
    return diameter;
}
