class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int> in(n, 0);
        vector<vector<int>> adj(n), ans(n);
        queue<int> q;
        vector<set<int>> ancestor(n);

        for (auto it: edges) {
            in[it[1]]++;
            adj[it[0]].push_back(it[1]);
        }
        
        for(int i = 0 ; i < n ; i++) {
            if (in[i] == 0) q.push(i);
        }

        while(!q.empty()){
            auto cur = q.front();
            q.pop();

            for (int child : adj[cur]) {
                ancestor[child].insert(cur);
                ancestor[child].insert(ancestor[cur].begin(), ancestor[cur].end());
                in[child]--;
                
                if (in[child] == 0) q.push(child);
            }
        }
        
        for(int i = 0 ; i < n ; i++) {
            ans[i] = vector<int>(ancestor[i].begin(), ancestor[i].end());
        }
            
        return ans;
    }
};
