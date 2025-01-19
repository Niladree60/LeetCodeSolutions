class Solution {
public:
    int dfs(int node, vector<vector<int>> &adj , vector<int>&vis, vector<bool>&hasApple) {
        int distance = 0;
        vis[node] = 1;

        for(auto child : adj[node]) {
            if(!vis[child]) {
                int time = dfs(child, adj, vis, hasApple);

                if(hasApple[child]) {
                    distance += ( 2 + time );
                    hasApple[node] = true;
                }
            }
        }

        return distance;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        vector<int> vis(n, 0);

        for(auto x : edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        return dfs(0, adj, vis, hasApple);
    }
};
