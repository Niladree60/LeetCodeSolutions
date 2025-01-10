class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
        visited[node] = true;

        for(int child: adj[node]) {
            if(!visited[child]) {
                dfs(child, adj, visited);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> visited(n, false);
        vector<vector<int>> adj(n);

        for(auto x : edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }

        dfs(source, adj, visited);

        return visited[destination];
    }
};
