class Solution {
public:
    bool dfs(int node, int col, vector<vector<int>>& adj, vector<bool> &vis, vector<int>&color) {
        color[node] = col;
        vis[node] = true;

        for(auto child : adj[node]) {
            if(!vis[child]) {
                if(dfs(child, 3 - col, adj, vis, color)) {
                    return true;
                }
            } else if(color[child] == color[node]) {
                return true;
            }
        }

        return false;
    }

    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> color(n, 0);
        vector<bool> vis(n, false);

        for(int i = 0 ; i < n ; i++) {
            if(!vis[i]) {
                if(dfs(i, 1, adj, vis, color)) {
                    return false;
                }
            }
        }

        return true;
    }
};
