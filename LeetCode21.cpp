class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL and list2 == NULL) {
            return NULL;
        }

        if(list1 == NULL) {
            return list2;
        }
        
        if(list2 == NULL) {
            return list1;
        }

        ListNode * dummy = new ListNode(0);
        ListNode * current = dummy;

        while(list1 != NULL and list2 != NULL) {
            if(list1->val <= list2->val) {
                current -> next = list1;
                list1 = list1 -> next;
            } else {
                current -> next = list2;
                list2 = list2 -> next;
            }

            current = current -> next;
        }

        if(list1 == NULL) {
            current -> next = list2;
        } else {
            current -> next = list1;
        }

        return dummy -> next;
    }
};
