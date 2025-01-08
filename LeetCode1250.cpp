class Solution {
public:
    int n = 0, m = 0, ans = 0;

    void dfs(vector<vector<int>>& grid, int i, int j, bool &is_closed_island) {
        if(i < 0 or j < 0 or i >= n or j >=  m or grid[i][j] == 2 or grid[i][j] == 1) {
            if(i < 0 or j < 0 or i >= n or j >= m) {
                is_closed_island = false;
            }
            return;
        }

        grid[i][j] = 2;
        
        dfs(grid, i, j + 1, is_closed_island);
        dfs(grid, i, j - 1, is_closed_island);
        dfs(grid, i + 1, j, is_closed_island);
        dfs(grid, i - 1, j, is_closed_island);
    }

    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(grid[i][j] == 0) {
                    bool is_closed_island = true;
                    dfs(grid, i, j, is_closed_island);
                    ans += is_closed_island;
                }
            }
        }

        return ans;
    }
};
