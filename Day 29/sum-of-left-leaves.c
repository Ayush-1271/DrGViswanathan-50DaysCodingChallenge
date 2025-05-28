/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int isLeaf(struct TreeNode* node) {
    return node != NULL && node->left == NULL && node->right == NULL;
}

int sumOfLeftLeaves(struct TreeNode* root) {
    if (root == NULL) return 0;

    int sum = 0;

    // If left child exists and is a leaf
    if (isLeaf(root->left)) {
        sum += root->left->val;
    }

    // Recurse on left and right children
    sum += sumOfLeftLeaves(root->left);
    sum += sumOfLeftLeaves(root->right);

    return sum;
}
