class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        while(current and current -> next){
            if(current -> val == current -> next -> val){
                ListNode* temp = current -> next;
                current -> next = current -> next -> next;
                delete temp;
            } else {
                current = current -> next;
            }
        }
        
        return head;
    }
};
