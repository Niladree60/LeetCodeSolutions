class Solution {
public:
    int n = 0, m = 0;

    void dfs(vector<vector<char>>& grid, int i, int j) {
        if(i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == 'X' or grid[i][j] == 'E') {
            return;
        }

        grid[i][j] = 'E';

        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
    }

    void solve(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i = 0 ; i < n ; i++) {
            dfs(grid, i, 0);
            dfs(grid, i, m - 1);
        }

        for(int i = 0 ; i < m ; i++) {
            dfs(grid, 0, i);
            dfs(grid, n - 1, i);
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(grid[i][j] == 'E') {
                    grid[i][j] = 'O';
                } else {
                    grid[i][j] = 'X';
                }
            }
        }    
    }
};
