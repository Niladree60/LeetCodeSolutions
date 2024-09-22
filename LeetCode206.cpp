class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *previous = NULL;
        ListNode *current = head;

        while (current) {
            ListNode *current_next = current->next;
            current->next = previous;
            previous = current;
            current = current_next;
        }
        
        return previous;
    }
};
