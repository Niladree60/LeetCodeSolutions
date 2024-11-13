class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(!root) return ans;

        queue<TreeNode * > q;
        q.push(root);

        while(!q.empty()) {
            int q_size = q.size();
            vector<int> cur;

            while(q_size--) {
                auto x = q.front();
                q.pop();
                cur.push_back(x -> val);
                
                if(x -> left) q.push(x -> left);
                if(x -> right) q.push(x -> right);
            }
            ans.push_back(cur);
        }

        for(int i = 0 ; i < ans.size() ; i++) {
            if (i % 2 == 1) reverse(ans[i].begin(), ans[i].end());
        }

        return ans;
    }
};
