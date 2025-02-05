class Solution {
public:
    queue<pair<int,int>> q;
    
    int shortestBridge(vector<vector<int>>& grid) {
        bool flag = false;
        int n = grid.size() , m = grid[0].size();
        
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(grid[i][j] == 1 and flag == false) {
                    dfs(grid,i,j);
                    flag = true;
                    break;
                }
            }

            if(flag) break;
        }

        return bfs(grid);
    }
private:
    void dfs(vector<vector<int>> &grid, int i , int j) {
        int n = grid.size() , m = grid[0].size();

        if(i < 0 or j < 0 or j >= m or i >= n or grid[i][j] != 1) return;

        grid[i][j] = 2;
        q.push({i,j});

        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
    }

    int bfs(vector<vector<int>> &grid) {
        int level = 0 , mindist = INT_MAX;
        vector<pair<int, int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                auto a = q.front();
                q.pop();

                for(int h = 0 ; h < 4 ; h++) {
                    int x = dir[h].first + a.first;
                    int y = dir[h].second + a.second;

                    if(x >= 0 and x < grid.size() and y >= 0 and y < grid[0].size() and grid[x][y] == 1) {
                        mindist = min(mindist,level);
                    } else if(x >= 0 and x < grid.size() and y >= 0 and y < grid[0].size() and grid[x][y] == 0) {
                        q.push({x,y});
                        grid[x][y] = 2;
                    }
                }
            }

            level++;
        }

        return mindist;
    }
};
