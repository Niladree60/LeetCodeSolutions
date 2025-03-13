class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n+1);

        for(auto it : times) {
            int x = it[0], y = it[1], w = it[2];
            adj[x].push_back({y, w});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;
        pq.push({0, k});

        while(!pq.empty()) {
            int cur = pq.top().second;
            pq.pop();

            for(auto it : adj[cur]) {
                int child = it.first;
                int weight = it.second;

                if(dist[cur] + weight < dist[child]) {
                    dist[child] = dist[cur] + weight;
                    pq.push({dist[child], child});
                }
            }
        }

        int ans = 0;

        for(int i = 1; i <= n; i++) {
            if(dist[i] == INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }

        return ans;
    }
};
