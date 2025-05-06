struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Step 1: Get the length of the list
    int length = 1;
    struct ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    // Step 2: Make it a circular list
    tail->next = head;

    // Step 3: Calculate the new tail position
    k = k % length;
    int stepsToNewTail = length - k;
    
    struct ListNode* newTail = head;
    for (int i = 1; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // Step 4: Break the circle and return new head
    struct ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Step 1: Get the length of the list
    int length = 1;
    struct ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    // Step 2: Make it a circular list
    tail->next = head;

    // Step 3: Calculate the new tail position
    k = k % length;
    int stepsToNewTail = length - k;
    
    struct ListNode* newTail = head;
    for (int i = 1; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // Step 4: Break the circle and return new head
    struct ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}
