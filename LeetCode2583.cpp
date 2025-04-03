class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> vc;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            long long size = q.size(), sum = 0;

            while(size--) {
                auto cur = q.front();
                q.pop();
                sum += cur -> val;

                if(cur -> left) q.push(cur -> left);
                if(cur -> right) q.push(cur -> right);
            }

            vc.push_back(sum);
        }

        sort(vc.begin(), vc.end());
        reverse(vc.begin(), vc.end());

        if(k > vc.size()) {
            return -1;
        } else return vc[k-1];
    }
};
