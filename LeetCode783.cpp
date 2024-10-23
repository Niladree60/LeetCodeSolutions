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

    void dfs(TreeNode* root)
    {
        if(!root) return;
        vc.push_back(root->val);
        if(root->left ) dfs(root->left);
        if(root->right) dfs(root->right);
        
    }

    int minDiffInBST(TreeNode* root) {

        dfs(root);
        sort(vc.begin(),vc.end());
        int ans = INT_MAX;

        for(int i = 0 ; i < vc.size()-1 ; i++)
        {
            ans = min(ans,vc[i+1]-vc[i]);
        }

        return ans;
    }
};
