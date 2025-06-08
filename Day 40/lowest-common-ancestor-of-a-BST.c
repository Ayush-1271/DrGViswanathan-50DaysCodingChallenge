/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    // Traverse the tree
    while (root != NULL) {
        if (p->val < root->val && q->val < root->val) {
            // Both nodes are in the left subtree
            root = root->left;
        } else if (p->val > root->val && q->val > root->val) {
            // Both nodes are in the right subtree
            root = root->right;
        } else {
            // Found the split point, this is the LCA
            return root;
        }
    }
    return NULL; // Just a safeguard, problem states p and q always exist
}
