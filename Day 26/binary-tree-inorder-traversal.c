/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #define MAX_NODES 101  // max number of nodes as per constraints

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    struct TreeNode* stack[MAX_NODES];
    int top = -1;

    int* result = (int*)malloc(sizeof(int) * MAX_NODES);
    int count = 0;

    struct TreeNode* current = root;

    while (current != NULL || top != -1) {
        // Reach the leftmost node
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        // Current is NULL at this point
        current = stack[top--];
        result[count++] = current->val;  // Visit the node

        current = current->right;  // Explore right subtree
    }

    *returnSize = count;
    return result;
}
