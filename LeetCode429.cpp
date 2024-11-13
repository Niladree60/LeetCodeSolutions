class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;

        if(!root) return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            int q_size = q.size();
            vector<int> cur;

            while(q_size--) {
                auto x = q.front();
                q.pop();
                cur.push_back(x -> val);

                for(Node * children : x -> children) {
                    q.push(children);
                }
            }

            ans.push_back(cur);
        }

        return ans;
    }
};
