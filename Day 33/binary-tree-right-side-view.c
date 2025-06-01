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
#define MAX_NODES 100

int* rightSideView(struct TreeNode* root, int* returnSize) {
    if (!root) {
        *returnSize = 0;
        return NULL;
    }

    struct TreeNode* queue[MAX_NODES];
    int* result = (int*)malloc(sizeof(int) * MAX_NODES);
    int front = 0, rear = 0;
    int levelSize;
    *returnSize = 0;

    queue[rear++] = root;

    while (front < rear) {
        levelSize = rear - front;

        for (int i = 0; i < levelSize; i++) {
            struct TreeNode* node = queue[front++];

            // The rightmost node of the level
            if (i == levelSize - 1) {
                result[(*returnSize)++] = node->val;
            }

            if (node->left)
                queue[rear++] = node->left;
            if (node->right)
                queue[rear++] = node->right;
        }
    }

    return result;
}
