/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
// Helper function to find the minimum node in a subtree
struct TreeNode* findMin(struct TreeNode* node) {
    while (node && node->left) {
        node = node->left;
    }
    return node;
}

// Main function to delete a node with given key from BST
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (!root) return NULL;

    if (key < root->val) {
        // Recur on the left subtree
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        // Recur on the right subtree
        root->right = deleteNode(root->right, key);
    } else {
        // Found the node to be deleted

        // Case 1: No child or only right child
        if (!root->left) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        // Case 2: Only left child
        else if (!root->right) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Node with two children
        struct TreeNode* temp = findMin(root->right);  // Inorder successor
        root->val = temp->val;  // Copy successor's value
        root->right = deleteNode(root->right, temp->val);  // Delete successor
    }

    return root;
}
