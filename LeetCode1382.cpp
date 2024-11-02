class Solution {
public:
    vector<TreeNode *> vc;

    void inorder(TreeNode * root) {
        if(!root) return;

        inorder(root -> left);
        vc.push_back(root);
        inorder(root -> right);
    }

    TreeNode * makeTree(vector<TreeNode*> &vc, int l, int r) {
        if(l <= r) {
            int m = (l + r) / 2;
            vc[m] -> left = makeTree(vc, l, m-1);
            vc[m] -> right = makeTree(vc, m+1, r);

            return vc[m];
        }

        return NULL;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);    

        return makeTree(vc, 0, vc.size() - 1);
    }
};
