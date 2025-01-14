class Solution {
public:
    int minTrioDegree(int n, vector<vector<int>>& edges) {
        vector<int> in(n + 1, 0);
        vector<set<int>> adj(n + 1);

        for(auto it : edges) {
            int x = it[0], y = it[1];
            in[x]++;
            in[y]++;
            adj[x].insert(y);
            adj[y].insert(x);
        }

        int ans = INT_MAX;

        for(int i = 1 ; i <= n ; i++) {
            if(in[i] < 2) continue;

            for(int j = i + 1 ; j <= n ; j++) {
                if(in[j] < 2) continue;
                if(!adj[i].count(j)) continue;

                for(int k = j + 1 ; k <= n ; k++) {
                    if(in[k] < 2) continue;
                    if(adj[i].count(j) and adj[j].count(k) and adj[k].count(i)) {
                        ans = min(ans, in[i] + in[j] + in[k] - 6);
                    }
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
