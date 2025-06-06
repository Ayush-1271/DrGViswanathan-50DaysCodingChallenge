/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    // Base case: empty tree or match found
    if (root == NULL || root->val == val) {
        return root;
    }
    
    // If val is less than current node's value, go left
    if (val < root->val) {
        return searchBST(root->left, val);
    }

    // If val is greater, go right
    return searchBST(root->right, val);
}
