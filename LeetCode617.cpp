class Solution {
public:
    TreeNode* mergeTrees(TreeNode* p, TreeNode* q) {
        if(!p) return q;
        if(!q) return p;

        p -> val += q ->val;
        p -> left = mergeTrees(p->left, q->left);
        p -> right = mergeTrees(p->right, q->right);
        
        return p;
    }
};
