/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;        // Step 1: Copy value from next node
    struct ListNode* temp = node->next; // Step 2: Store reference to next node
    node->next = node->next->next;      // Step 3: Skip the next node
    free(temp);                         // Step 4: Free memory of removed node
}
