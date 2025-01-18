class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int> &vis, int node, int &no_of_node, int &no_of_edges) {
        vis[node] = 1;
        no_of_node++;

        for(auto child : adj[node]) {
            no_of_edges++;
            if(!vis[child]) {
                dfs(adj, vis, child, no_of_node, no_of_edges);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        int ans = 0;

        for(auto it : edges) {
            int x = it[0], y = it[1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for(int i = 0 ; i < n ; i++) {
            if(!vis[i]) {
                int no_of_node = 0, no_of_edges = 0;
                dfs(adj, vis, i, no_of_node, no_of_edges);

                if(no_of_node * (no_of_node - 1) == no_of_edges) {
                    ans++;
                }
            }
        }

        
        return ans;
    }
};
