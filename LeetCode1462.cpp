class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int> in(n, 0);
        vector<vector<int>> adj(n);
        vector<bool> ans;
        queue<int> q; 
        vector<set<int>> ancestor(n);

        for(auto it : prerequisites) {
            in[it[1]]++;
            adj[it[0]].push_back(it[1]);
        }

        for(int i = 0 ; i < n ; i++) {
            if(in[i] == 0) q.push(i); 
        }

        while(!q.empty()) {
            auto cur = q.front();
            q.pop();

            for(int child : adj[cur]) {
                ancestor[child].insert(cur);
                ancestor[child].insert(ancestor[cur].begin(), ancestor[cur].end());
                in[child]--;

                if(in[child] == 0) q.push(child);
            }
        }

        for(auto it : queries) {
            if(ancestor[it[1]].count(it[0])) {
                ans.push_back(true);
            } else ans.push_back(false);
        }

        return ans;
    }
};
