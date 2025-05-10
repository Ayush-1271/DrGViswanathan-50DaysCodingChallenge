struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    // Create a dummy node that points to head
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;

    // Initialize two pointers
    struct ListNode *fast = dummy, *slow = dummy;

    // Step 1: Move `fast` n+1 steps ahead to maintain the gap
    for (int i = 0; i <= n; ++i) {
        fast = fast->next;
    }

    // Step 2: Move both `fast` and `slow` until `fast` reaches the end
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    // Step 3: Remove the nth node from the end
    struct ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    free(toDelete);

    // Step 4: Return the new head
    struct ListNode* newHead = dummy->next;
    free(dummy); // Free the dummy node
    return newHead;
}
