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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> vc;
        ListNode * current = head;
        int n = 0, i = 0;

        while(current) {
            vc.push_back(current->val);
            current = current -> next;
            n++;
        }

        swap(vc[k-1], vc[n-k]);
        current = head;

        while(current) {
            current -> val = vc[i++];
            current = current -> next;
        }

        return head;
    }
};
