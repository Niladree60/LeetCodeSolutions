class Solution {
public:
    int ans = 0;
    map<int, int> mp;

    void dfs(TreeNode * root) {
        if(!root) return;
        mp[root -> val] ++;
        if(!root -> left and !root -> right) {
            int odd = 0;
            for(auto x : mp) {
                if(x.second % 2 == 1) {
                    odd++;
                }
            }
            if(odd <= 1) ans++;
        }
        dfs(root-> left);
        dfs(root -> right);
        mp[root -> val] --;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return ans;
    }
};
