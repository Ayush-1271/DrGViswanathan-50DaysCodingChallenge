/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct ListNode* findMiddle(struct ListNode* head, struct ListNode** prev) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    *prev = NULL;

    while (fast && fast->next) {
        *prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

struct TreeNode* sortedListToBST(struct ListNode* head) {
    if (!head) return NULL;
    if (!head->next) {
        struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->val = head->val;
        root->left = root->right = NULL;
        return root;
    }

    struct ListNode* prev = NULL;
    struct ListNode* mid = findMiddle(head, &prev);

    // Disconnect left part
    if (prev) prev->next = NULL;

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = mid->val;
    root->left = (mid == head) ? NULL : sortedListToBST(head); // Only if left exists
    root->right = sortedListToBST(mid->next);

    return root;
}
