class Solution {
public:
    int dfs(vector<vector<int>>& grid, int row, int col){
        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] <= 0) {
            return 0;
        }

        grid[row][col] = -grid[row][col];

        int down = dfs(grid, row+1, col);
        int right = dfs(grid, row, col+1);
        int up = dfs(grid, row-1, col);
        int left = dfs(grid, row, col-1);

        grid[row][col] = -grid[row][col];

        return grid[row][col] + max(max(left, right), max(up, down));
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j]) ans = max(ans, dfs(grid, i, j));
            }
        }
        return ans;
    }
};
