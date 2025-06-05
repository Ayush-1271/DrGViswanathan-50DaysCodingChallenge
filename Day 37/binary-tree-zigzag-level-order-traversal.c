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
struct TreeNode** createQueue(int* front, int* rear, int size) {
    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * size);
    *front = *rear = 0;
    return queue;
}

void enqueue(struct TreeNode** queue, int* rear, struct TreeNode* node) {
    queue[(*rear)++] = node;
}

struct TreeNode* dequeue(struct TreeNode** queue, int* front) {
    return queue[(*front)++];
}

int** zigzagLevelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    if (!root) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    int maxLevels = 2000;
    int** result = (int**)malloc(sizeof(int*) * maxLevels);
    *returnColumnSizes = (int*)malloc(sizeof(int) * maxLevels);

    struct TreeNode** queue;
    int front, rear;
    queue = createQueue(&front, &rear, 2000);

    enqueue(queue, &rear, root);

    int level = 0;
    *returnSize = 0;

    while (front < rear) {
        int size = rear - front;
        int* levelNodes = (int*)malloc(sizeof(int) * size);
        int idx = 0;

        for (int i = 0; i < size; i++) {
            struct TreeNode* node = dequeue(queue, &front);

            // Insert based on direction
            if (level % 2 == 0) {
                levelNodes[idx++] = node->val;        // left to right
            } else {
                levelNodes[size - 1 - i] = node->val; // right to left
            }

            if (node->left) enqueue(queue, &rear, node->left);
            if (node->right) enqueue(queue, &rear, node->right);
        }

        result[*returnSize] = levelNodes;
        (*returnColumnSizes)[*returnSize] = size;
        (*returnSize)++;
        level++;
    }

    free(queue); // Free the queue
    return result;
}
