class Solution {
public:
    int dfs(TreeNode* root, int mn, int mx) {
        if(!root) return mx - mn;

        mx = max(mx, root -> val);
        mn = min(mn, root -> val);

        int left = dfs(root -> left, mn, mx);
        int right = dfs(root -> right, mn, mx);

        return max(left, right);
    }
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root, root -> val, root -> val);
    }
};
