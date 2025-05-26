/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    // Base case: if the node is NULL, there's no path
    if (root == NULL) {
        return false;
    }

    // Check if it's a leaf node and the value equals targetSum
    if (root->left == NULL && root->right == NULL) {
        return (root->val == targetSum);
    }

    // Recur on left and right subtrees with updated targetSum
    int remainingSum = targetSum - root->val;
    return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
}
