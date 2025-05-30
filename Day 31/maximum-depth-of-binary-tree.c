/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0; // Base case: empty tree has depth 0
    }

    int leftDepth = maxDepth(root->left);   // Recursively find left subtree depth
    int rightDepth = maxDepth(root->right); // Recursively find right subtree depth

    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}
