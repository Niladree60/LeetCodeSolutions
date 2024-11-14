class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;

        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int q_size = q.size();
            int mx = INT_MIN;

            while(q_size--) {
                auto x = q.front();
                q.pop();
                mx = max(mx, x -> val);

                if(x -> left) q.push(x -> left);
                if(x -> right) q.push(x -> right);
            }

            ans.push_back(mx);
        }

        return ans;
    }
};
