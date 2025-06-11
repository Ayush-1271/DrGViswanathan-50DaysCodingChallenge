/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int count = 0;
int result = 0;

void inorder(struct TreeNode* root, int k) {
    if (!root) return;
    
    inorder(root->left, k);
    
    count++;
    if (count == k) {
        result = root->val;
        return;
    }
    
    inorder(root->right, k);
}

int kthSmallest(struct TreeNode* root, int k) {
    count = 0;
    result = 0;
    inorder(root, k);
    return result;
}
