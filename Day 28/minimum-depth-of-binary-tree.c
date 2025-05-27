/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    struct QueueNode {
        struct TreeNode* node;
        int depth;
    };

    struct QueueNode* queue = malloc(sizeof(struct QueueNode) * 100000);
    int front = 0, rear = 0;
    queue[rear++] = (struct QueueNode){root, 1};

    while (front < rear) {
        struct QueueNode curr = queue[front++];
        struct TreeNode* n = curr.node;
        int d = curr.depth;

        if (n->left == NULL && n->right == NULL) {
            free(queue);
            return d;
        }

        if (n->left) queue[rear++] = (struct QueueNode){n->left, d + 1};
        if (n->right) queue[rear++] = (struct QueueNode){n->right, d + 1};
    }

    free(queue);
    return 0;
}
