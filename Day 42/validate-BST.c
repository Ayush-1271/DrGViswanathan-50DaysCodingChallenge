/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool validate(struct TreeNode* node, long long lower, long long upper) {
    if (node == NULL) return true;

    if (node->val <= lower || node->val >= upper)
        return false;

    return validate(node->left, lower, node->val) &&
           validate(node->right, node->val, upper);
}

bool isValidBST(struct TreeNode* root) {
    return validate(root, LLONG_MIN, LLONG_MAX);
}
