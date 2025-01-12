class Solution {
public:
    void dfs(int node, vector<bool> &vis, vector<vector<int>> &adj) {
        vis[node] = true;

        for (auto child : adj[node]) {
            if (!vis[child]) dfs(child, vis, adj);
        }
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    long long x1 = bombs[i][0], y1 = bombs[i][1], r1 = bombs[i][2];
                    long long x2 = bombs[j][0], y2 = bombs[j][1];
                    long long dis = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

                    if (dis <= (long long)r1 * r1) {
                        adj[i].push_back(j);
                    }
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            dfs(i, vis, adj);

            for (int j = 0; j < n; j++) {
                if (vis[j]) cnt++;
            }

            ans = max(ans, cnt);
            fill(vis.begin(), vis.end(), false);
        }

        return ans;
    }
};
