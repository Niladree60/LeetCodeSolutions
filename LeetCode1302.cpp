class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;

        queue<TreeNode*> q;
        q.push(root);
        vector<int> deepestLeaves;
        while(!q.empty()) {
            int size = q.size();
            deepestLeaves.clear();

            while(size --) {
                TreeNode* node = q.front();
                q.pop();
                deepestLeaves.push_back(node -> val);
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
        }

        int ans = 0;
        for(int x : deepestLeaves) {
            ans += x;
        }

        return ans;
    }
};
