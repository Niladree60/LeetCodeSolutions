class Solution {
public:

    int backtrack(int i, int j, int n, int m, int &cnt, int temp_cnt, vector<vector<int>> &grid) {
        if(i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == 3) return 0;
          
        if(grid[i][j] == 2) {
            if(temp_cnt-1 == cnt) return 1;
        }

        grid[i][j] = 3;

        int right = backtrack(i, j+1, n , m, cnt, temp_cnt+1, grid);
        int left = backtrack(i, j-1, n , m, cnt, temp_cnt+1, grid);
        int up = backtrack(i-1, j, n , m, cnt, temp_cnt+1, grid);
        int down = backtrack(i+1, j, n , m, cnt, temp_cnt+1, grid);

        grid[i][j] = 0;

        return up+down+right+left;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int start_i, start_j, cnt = 0;
        int n = grid.size() , m = grid[0].size();

        for(int i =0  ; i < n ; i++) {
            for( int j = 0 ; j < m ; j++) {
                if(grid[i][j] == 2 ) {
                    start_i = i;
                    start_j = j;
                }
                if(grid[i][j] == 0) {
                    cnt++;
                }
            }
        }

        return backtrack(start_i, start_j, n, m, cnt, 0, grid);

    }
};
