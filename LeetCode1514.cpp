class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> adj(n);

        for(int i = 0 ; i < edges.size() ; i++) {
            int x = edges[i][0], y = edges[i][1];
            double w = succProb[i];
            adj[x].push_back({y, w});
            adj[y].push_back({x, w});
        }

        priority_queue<pair<double, int>> pq;
        vector<double> dist(n, INT_MIN);
        dist[start_node] = 1;
        pq.push({1, start_node});

        while(!pq.empty()){
            int cur = pq.top().second;
            pq.pop();

            for(auto it : adj[cur]) {
                int child = it.first;
                double weight = it.second;

                if(dist[cur] * weight > dist[child]) {
                    dist[child] = dist[cur] * weight;
                    pq.push({dist[child], child});
                }
            }
        }

        if (dist[end_node] == INT_MIN) {
            return 0;
        } else {
            return dist[end_node];
        }
    }
};
