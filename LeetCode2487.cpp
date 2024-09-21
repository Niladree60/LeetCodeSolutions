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
    ListNode* removeNodes(ListNode* head) {
        stack <int> stk;
        vector<int> vc;
        ListNode * cur = head;

        while(cur) {
            while(!stk.empty() and stk.top() < cur->val) {
                stk.pop();
            }
            stk.push(cur->val);
            cur = cur -> next;
        }
        
        while(!stk.empty()) {
            vc.push_back(stk.top());
            stk.pop();
        }
        
        reverse(vc.begin(), vc.end());
        ListNode * dummy = new ListNode(0);
        ListNode * current = dummy;

        for(int i = 0 ; i < vc.size() ; i++) {
            current-> next = new ListNode(vc[i]);
            current = current -> next;
        }

        return dummy->next;
    }
};
