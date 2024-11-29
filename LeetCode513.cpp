class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* cur;
        q.push(root);
        while(!q.empty())
        {
            cur = q.front();
            q.pop();
            if(cur->right != NULL)
            {
                q.push(cur->right);
            }
            if(cur->left != NULL )
            {
                q.push(cur->left);
            }
        }
        return cur->val;
    }
};
