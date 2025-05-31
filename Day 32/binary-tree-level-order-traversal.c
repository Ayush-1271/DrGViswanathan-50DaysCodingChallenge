/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
typedef struct {
    struct TreeNode* node;
    int level;
} QueueNode;

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    if (!root) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    int** result = (int**)malloc(sizeof(int*) * 2000);             // max levels
    *returnColumnSizes = (int*)malloc(sizeof(int) * 2000);
    int* levelCounts = (int*)calloc(2000, sizeof(int));            // count elements per level

    QueueNode queue[2000];
    int front = 0, rear = 0;
    queue[rear++] = (QueueNode){root, 0};

    while (front < rear) {
        QueueNode qn = queue[front++];
        struct TreeNode* node = qn.node;
        int level = qn.level;

        if (levelCounts[level] == 0) {
            result[level] = (int*)malloc(sizeof(int) * 1000); // allocate space for each level
        }

        result[level][levelCounts[level]++] = node->val;

        if (node->left)
            queue[rear++] = (QueueNode){node->left, level + 1};
        if (node->right)
            queue[rear++] = (QueueNode){node->right, level + 1};
    }

    *returnSize = 0;
    for (int i = 0; levelCounts[i] > 0; i++) {
        (*returnColumnSizes)[i] = levelCounts[i];
        (*returnSize)++;
    }

    free(levelCounts);
    return result;
}
