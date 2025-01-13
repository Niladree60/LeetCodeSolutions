class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<set<int>> adj(n);
        int ans = 0;

        for(auto it : roads) {
            int a = it[0], b = it[1];
            adj[a].insert(b);
            adj[b].insert(a);
        }

        for(int i = 0 ; i < n - 1 ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                int a = adj[i].size(), b = adj[j].size(), is_connected = 0;

                if(adj[i].count(j)) {
                    is_connected = -1;
                }

                ans = max(ans, a + b + is_connected);
            }
        }

        return ans;
    }
};
