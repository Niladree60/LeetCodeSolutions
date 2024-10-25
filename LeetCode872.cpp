class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string x,y;
        dfs(root1, x);
        dfs(root2, y);

        return x == y;
    }

private:
    void dfs(TreeNode *root, string& s) {
        if(root == NULL) return;
        
        if(!root->left and !root ->right) {
            s += to_string(root->val) + "#";
        }

        dfs(root->left,s);
        dfs(root->right,s);
    }
};
