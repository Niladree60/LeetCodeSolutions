class Solution {
public:
    int area = 0, ans = 0, n = 0, m = 0;

    void dfs(vector<vector<int>>& grid, int i, int j) {
        if(i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == 0 or grid[i][j] == 2) {
            return;
        }

        area++;
        grid[i][j] = 2;

        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(grid[i][j] == 1) {
                    area = 0;
                    dfs(grid, i, j);
                    ans = max(ans, area);
                }
            }
        }

        return ans;
    }
};
