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

    // Allocate memory for result arrays
    int** result = (int**)malloc(sizeof(int*) * 2000);
    *returnColumnSizes = (int*)malloc(sizeof(int) * 2000);
    int levelCounts[2000] = {0};  // Keeps track of number of nodes at each level
    int maxLevel = 0;

    // Temporary storage for each level's nodes
    for (int i = 0; i < 2000; i++) {
        result[i] = (int*)malloc(sizeof(int) * 2000);
    }

    // BFS queue
    QueueNode queue[4000];  // Enough to handle 2000 nodes
    int front = 0, rear = 0;

    // Enqueue root
    queue[rear++] = (QueueNode){root, 0};

    while (front < rear) {
        QueueNode qn = queue[front++];
        struct TreeNode* node = qn.node;
        int level = qn.level;

        result[level][levelCounts[level]++] = node->val;
        if (level > maxLevel) maxLevel = level;

        if (node->left) {
            queue[rear++] = (QueueNode){node->left, level + 1};
        }
        if (node->right) {
            queue[rear++] = (QueueNode){node->right, level + 1};
        }
    }

    *returnSize = maxLevel + 1;
    for (int i = 0; i <= maxLevel; i++) {
        (*returnColumnSizes)[i] = levelCounts[i];
    }

    return result;
}/**
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

    // Allocate memory for result arrays
    int** result = (int**)malloc(sizeof(int*) * 2000);
    *returnColumnSizes = (int*)malloc(sizeof(int) * 2000);
    int levelCounts[2000] = {0};  // Keeps track of number of nodes at each level
    int maxLevel = 0;

    // Temporary storage for each level's nodes
    for (int i = 0; i < 2000; i++) {
        result[i] = (int*)malloc(sizeof(int) * 2000);
    }

    // BFS queue
    QueueNode queue[4000];  // Enough to handle 2000 nodes
    int front = 0, rear = 0;

    // Enqueue root
    queue[rear++] = (QueueNode){root, 0};

    while (front < rear) {
        QueueNode qn = queue[front++];
        struct TreeNode* node = qn.node;
        int level = qn.level;

        result[level][levelCounts[level]++] = node->val;
        if (level > maxLevel) maxLevel = level;

        if (node->left) {
            queue[rear++] = (QueueNode){node->left, level + 1};
        }
        if (node->right) {
            queue[rear++] = (QueueNode){node->right, level + 1};
        }
    }

    *returnSize = maxLevel + 1;
    for (int i = 0; i <= maxLevel; i++) {
        (*returnColumnSizes)[i] = levelCounts[i];
    }

    return result;
}
