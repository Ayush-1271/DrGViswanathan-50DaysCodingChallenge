
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *first = head, *second = head, *temp = head;
    
    // Step 1: Move `first` to the k-th node from the beginning
    for (int i = 1; i < k; ++i) {
        first = first->next;
    }

    // Step 2: Move `temp` to the end while advancing `second`
    while (temp->next) {
        temp = temp->next;
        if (k-- > 1) continue;  // Only start moving `second` after `k` steps
        second = second->next;
    }

    // Step 3: Swap the values of `first` and `second`
    int swapValue = first->val;
    first->val = second->val;
    second->val = swapValue;

    return head;
}
