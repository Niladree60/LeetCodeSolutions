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
    ListNode* sortList(ListNode* head) {
        vector<int> vc;
        ListNode * cur = head;

        while(cur) {
            vc.push_back(cur->val);
            cur = cur -> next;
        }
        
        sort(vc.begin(), vc.end());
        ListNode * dummy = new ListNode(0);
        ListNode * current = dummy;

        for(int i = 0 ; i < vc.size() ; i++) {
            current -> next = new ListNode(vc[i]);
            current = current -> next;
        }

        return dummy -> next;
    }
};
