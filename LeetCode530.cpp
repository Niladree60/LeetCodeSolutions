/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> vc;
    void dfs(TreeNode * root)
    {
        if(!root)
        {
            return;
        }
        vc.push_back(root->val);
        if(root->left)
        {
            dfs(root->left);
        }
        if(root->right)
        {
            dfs(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        int ans = INT_MAX;
        sort(vc.begin(),vc.end());
        for(int i = 0 ; i < vc.size()-1 ; i++)
        {
            ans = min(ans,vc[i+1]-vc[i]);
        }
        return ans;
    }
};
