
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL or head->next == NULL) {
            return head;
        }

        if(head->next->next == NULL) {
            return head->next;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL) {
            fast = fast->next;

            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }

        return slow;
    }
};
