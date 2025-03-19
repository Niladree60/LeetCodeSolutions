class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        vector<vector<int>> effort(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({0, 0});

        while(!pq.empty()) {
            auto cur = pq.top();
            int p_effort = cur.first;
            int x = cur.second / 100, y = cur.second % 100;
            pq.pop();

            if(x == n - 1 and y == m - 1) return p_effort;
            if(p_effort >= effort[x][y]) continue;

            effort[x][y] = p_effort;

            for(int i = 0 ; i < 4 ; i++) {
                int nx = x + dir[i].first;
                int ny = y + dir[i].second;

                if(nx < 0 or ny < 0 or nx >= n or ny >= m) continue;
                
                int n_effort = max(p_effort, abs(a[x][y] - a[nx][ny]));
                pq.push({n_effort, nx * 100 + ny});
            }
        }

        return -1;
    }
};
