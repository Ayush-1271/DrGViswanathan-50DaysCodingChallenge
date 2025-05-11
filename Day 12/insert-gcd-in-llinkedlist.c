/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if (!head || !head->next) return head;

    struct ListNode* current = head;

    while (current && current->next) {
        // Calculate GCD of current and next node values
        int gcdValue = gcd(current->val, current->next->val);

        // Create a new node with the GCD value
        struct ListNode* gcdNode = createNode(gcdValue);

        // Insert the GCD node between current and next
        gcdNode->next = current->next;
        current->next = gcdNode;

        // Move two steps forward (to the next original node)
        current = gcdNode->next;
    }

    return head;
}
