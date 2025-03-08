class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto it : roads) {
            int u = it[0], v = it[1], w = it[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        queue<int> q;
        vector<bool> visited(n + 1, false);
        q.push(1);
        visited[1] = true;
        int minEdge = INT_MAX;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : adj[node]) {
                int neighbor = it.first;
                int weight = it.second;
                minEdge = min(minEdge, weight);
                
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return minEdge;
    }
};
