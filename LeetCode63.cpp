class Solution {
public:
    int dp[102][102];
    int func(int i, int j, vector<vector<int>>& obstacleGrid,int n, int m)
    {
        if(i == n-1 and j == m-1 and obstacleGrid[i][j] == 0)
        {
            return 1;
        }
        if(i >= n or j >= m or obstacleGrid[i][j] == 1)
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        return dp[i][j] = func(i+1,j,obstacleGrid,n,m) + func(i,j+1,obstacleGrid,n,m);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        for(int i = 0 ; i <n ; i++)
        {
            for(int j = 0 ; j <m ; j++)
            {
                dp[i][j] = -1;
            }
        }
        if(obstacleGrid[n-1][m-1] == 1)
        {
            return 0;
        }
        return func(0,0,obstacleGrid,n,m);
    }
};
