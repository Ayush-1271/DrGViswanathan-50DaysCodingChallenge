/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) return NULL;

    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    struct ListNode* current = head;

    while (current) {
        int isDuplicate = 0;
        while (current->next && current->val == current->next->val) {
            isDuplicate = 1;
            current = current->next;
        }

        if (isDuplicate) {
            prev->next = current->next;
        } else {
            prev = prev->next;
        }
        current = current->next;
    }
    return dummy.next;
    
}
