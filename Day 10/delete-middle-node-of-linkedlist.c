/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    // Edge Case: If there is only one node, return NULL
    if (!head || !head->next) {
        return NULL;
    }
    
    // Initialize pointers
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *prev = NULL;

    // Traverse the list
    while (fast && fast->next) {
        prev = slow;          // Keep track of the previous node
        slow = slow->next;    // Move slow pointer one step
        fast = fast->next->next; // Move fast pointer two steps
    }

    // Delete the middle node
    prev->next = slow->next;
    free(slow);

    return head;
}
