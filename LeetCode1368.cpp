class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> cost(n, vector<int>(m, INT_MAX));
        deque<pair<int, int>> dq;
        vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        dq.emplace_back(0, 0);
        cost[0][0] = 0;

        while (!dq.empty()) {
            auto cur = dq.front();
            int x = cur.first, y = cur.second;
            dq.pop_front();

            for (int i = 0; i < 4; i++) {
                int nx = x + dir[i].first;
                int ny = y + dir[i].second;

                if(nx < 0 or nx >= n or ny < 0 or ny >= m) continue;

                int newCost = cost[x][y] + (grid[x][y] != i + 1);

                if (newCost < cost[nx][ny]) {
                    cost[nx][ny] = newCost;

                    if (grid[x][y] == i) {
                        dq.emplace_front(nx, ny);
                    } else {
                        dq.emplace_back(nx, ny);
                    }
                }
            }
        }

        return cost[n - 1][m- 1];
    }
};
