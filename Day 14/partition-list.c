struct ListNode* partition(struct ListNode* head, int x) {
    // Create two dummy nodes to build the less and greater lists
    struct ListNode lessHead = {0, NULL};
    struct ListNode greaterHead = {0, NULL};
    
    struct ListNode *less = &lessHead;
    struct ListNode *greater = &greaterHead;

    // Traverse the original list and partition the nodes
    while (head) {
        if (head->val < x) {
            less->next = head;
            less = less->next;
        } else {
            greater->next = head;
            greater = greater->next;
        }
        head = head->next;
    }
    
    // Terminate the greater list
    greater->next = NULL;

    // Connect the two lists
    less->next = greaterHead.next;

    // Return the head of the modified list
    return lessHead.next;
}struct ListNode* partition(struct ListNode* head, int x) {
    // Create two dummy nodes to build the less and greater lists
    struct ListNode lessHead = {0, NULL};
    struct ListNode greaterHead = {0, NULL};
    
    struct ListNode *less = &lessHead;
    struct ListNode *greater = &greaterHead;

    // Traverse the original list and partition the nodes
    while (head) {
        if (head->val < x) {
            less->next = head;
            less = less->next;
        } else {
            greater->next = head;
            greater = greater->next;
        }
        head = head->next;
    }
    
    // Terminate the greater list
    greater->next = NULL;

    // Connect the two lists
    less->next = greaterHead.next;

    // Return the head of the modified list
    return lessHead.next;
}
