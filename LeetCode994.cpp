class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int time = 0, fresh = 0;

        queue<pair<int,int>> q;
        vector<pair<int,int>> directions = {{0,1}, {0,-1}, {1,0}, {-1,0}};

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                if (grid[i][j] == 1) fresh++;
                if (grid[i][j] == 2) q.push({i,j});
            }
        }

        while (!q.empty() and fresh){
            int size = q.size();

            while (size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                for (auto x : directions){
                    int n_i = i + x.first;
                    int n_j = j + x.second;

                    if (n_i < 0 || n_i >= n || n_j < 0 || n_j >= m || grid[n_i][n_j] != 1)
                        continue;

                    grid[n_i][n_j] = 2;
                    q.push({n_i,n_j});
                    fresh--;
                }
            }
            time++;
        }

        return fresh ? -1 : time;
    }
};
