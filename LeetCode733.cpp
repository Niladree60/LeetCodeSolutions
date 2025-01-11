class Solution {
public:
    int original_color = 0, n = 0, m = 0;
    
    void dfs(vector<vector<int>>& grid, int i, int j, int color) {
        if(i < 0 or j < 0 or i >= n or j >= m or grid[i][j] != original_color) {
            return;
        }

        grid[i][j] = color;

        dfs(grid, i, j + 1, color);
        dfs(grid, i, j - 1, color);
        dfs(grid, i + 1, j, color);
        dfs(grid, i - 1, j, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int i, int j, int color) {
        if(grid[i][j] == color) return grid;

        n = grid.size();
        m = grid[0].size();

        original_color = grid[i][j];
        dfs(grid, i, j, color);

        return grid;
    }
};
