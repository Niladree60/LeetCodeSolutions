/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * prev = list1, * curr = list1, * temp = list2;
        int i = 0, j = 0;

        while(i < a - 1) {
            prev = prev -> next;
            i++;
        }

        while(j < b) {
            curr = curr -> next;
            j++;
        }

        while(temp -> next != NULL) {
            temp = temp -> next;
        }

        prev -> next = list2;
        temp -> next = curr -> next;

        return list1; 
    }
};
