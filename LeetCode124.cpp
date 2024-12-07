class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        dfs(root, ans);
        return ans;
    }
private:
    int dfs(TreeNode* root, int& ans)
    {
        if(root == NULL)
        {
            return 0;
        }
        int left = max(dfs(root->left,ans),0);
        int right = max(dfs(root->right,ans),0);
        int temp = root->val +  left + right;
        ans = max(ans,temp);
        return root -> val + max(left,right);
    }
};
