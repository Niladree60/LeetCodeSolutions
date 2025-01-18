class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<bool> &vis, int &total_count) {
        vis[node] = true;
        total_count++;

        for(int child : adj[node]) {
            if(!vis[child]) {
                dfs(child, adj, vis, total_count);
            }
        }
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        vector<int> vc;
        long long ans = 0;

        for (auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                int total_count = 0;
                dfs(i, adj, vis, total_count);
                vc.push_back(total_count);
            }
        }
        
        long long total_nodes = 0;

        for (int size : vc) {
            ans += total_nodes * size;
            total_nodes += size;
        }

        return ans;
    }
};
