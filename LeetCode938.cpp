class Solution {
public:
    vector<int> vc;

    void inorder(TreeNode* root) {
        if(!root) return;

        inorder(root -> left);
        vc.push_back(root -> val);
        inorder(root -> right);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root);
        int ans = 0;

        for(int x : vc) {
            if(x >= low and x <= high) ans += x;
        }

        return ans;
    }
};
