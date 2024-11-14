class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int q_size = q.size();
            double sum = 0;
            int count = 0;

            while(q_size--) {
                auto x = q.front();
                q.pop();
                double val = x -> val;
                sum += val;
                count++;

                if(x -> left) q.push(x -> left);
                if(x -> right) q.push(x -> right);
            }

            ans.push_back(sum/count);
        }

        return ans;
    }
};
