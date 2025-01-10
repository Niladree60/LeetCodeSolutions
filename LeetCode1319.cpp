class Solution {
public:
    int ans = 0;

    void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
        visited[node] = true;

        for(int child : adj[node]) {
            if(!visited[child]) {
                dfs(child, adj, visited);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& a) {
        if(a.size() < n-1) return -1;

        vector<bool> visited(n, false);
        vector<vector<int>> adj(n);

        for(auto v : a) {
            int x = v[0] , y = v[1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for(int i = 0 ; i < n ; i++){
            if(!visited[i]) {
                dfs(i, adj, visited);
                ans++;
            }
        }

        return ans - 1;
    }
    
};
