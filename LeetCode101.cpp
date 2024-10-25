class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        return dfs(root->left, root->right);
    }
private:
    bool dfs(TreeNode * p, TreeNode * q) {
        if(!p and !q) return true;
        if(!p or !q) return false;
        if(p->val != q->val) return false;
        
        return dfs(p->left,q->right) and dfs(p->right,q->left);
    }
};
