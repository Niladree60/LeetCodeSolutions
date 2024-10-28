class Solution {
public:
    vector<int> a;

    void getNodeValue(ListNode * head) {
        ListNode * dummy = head;

        while(dummy) {
            a.push_back(dummy -> val);
            dummy = dummy -> next;
        }
    }

    TreeNode * generateBST(vector<int> &a) {
        if(a.empty()) return NULL;

        int mid = a.size() / 2;
        TreeNode * root = new TreeNode(a[mid]);
        vector<int> leftpart(a.begin(), a.begin() + mid);
        vector<int> rightpart(a.begin() + mid + 1, a.end());

        root -> left = generateBST(leftpart);
        root -> right = generateBST(rightpart);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        getNodeValue(head);

        return generateBST(a);  
    }
};
