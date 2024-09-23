/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int calculate_length(ListNode * head) {
        int length = 0;
        
        while(head) {
            length++;
            head = head -> next;
        }

        return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA or !headB) {
            return NULL;
        }

        int lengthA = calculate_length(headA);
        int lengthB = calculate_length(headB);

        if(lengthA > lengthB) {
            while(lengthA > lengthB) {
                headA = headA -> next;
                lengthA--;
            }
        } else {
            while(lengthB > lengthA) {
                headB = headB -> next;
                lengthB--;
            }
        }

        while(headA and headB) {
            if(headA == headB) return headA;
            headA = headA -> next;
            headB = headB -> next;
        }

        return NULL;
    }
};
