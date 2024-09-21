class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        int carry = 0;

        while(l1 or l2) {
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;
            int sum = val1+val2+carry;
            carry = sum / 10;
            cur->next = new ListNode(sum%10);
            cur = cur->next;

            if(l1 != NULL) {
                l1 = l1 -> next;
            }

            if(l2 != NULL) {
                l2 = l2 -> next;
            }
        }

        if(carry) {
            cur->next = new ListNode(carry);
        }
        
        return dummy->next;
    }
};
