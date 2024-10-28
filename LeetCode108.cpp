class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& a) {
        if(a.empty()) return NULL;

        int mid = a.size() / 2;
        TreeNode * root = new TreeNode(a[mid]);

        vector<int> leftPart(a.begin(), a.begin() + mid);
        vector<int> rightPart(a.begin() + mid + 1, a.end());

        root -> left = sortedArrayToBST(leftPart);
        root -> right = sortedArrayToBST(rightPart);

        return root;
    }
};
