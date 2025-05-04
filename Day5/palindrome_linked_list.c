/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while(curr){
        struct ListNode* temp = curr->next;
        curr->next=prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool isPalindrome(struct ListNode* head) {
    if (!head || !head->next) return true;
    
    // find the middle, slow will point to middle
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse second half
    struct ListNode* secondHalf = reverseList(slow);
    
    //compare firse and second half
    struct ListNode* firstHalf = head;
    //struct ListNode* seconfHalfCopy = secondHalf;
    while(secondHalf){
        if (firstHalf->val != secondHalf->val) return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}
