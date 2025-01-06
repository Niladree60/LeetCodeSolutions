class Solution {
public:
    int ans = 0, n = 0, m = 0;

    void dfs(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 2 || grid[i][j] == 0) {
            if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) {
                ans++;
            }
            return;
        }

        grid[i][j] = 2;

        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dfs(grid, i, j);
                    break;
                }
            }
        }

        return ans;
    }
};
