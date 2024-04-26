
class Solution {
public:
    int dp[101][101];

    int backtrack(int i, int j, int n, int m) {
        if(i == n-1 and j == m-1) return 1;
        if( i >= n or j >= m) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = backtrack(i, j+1, n, m) + backtrack(i+1, j, n, m);
    }

    int uniquePaths(int n, int m) {
        for(int i = 0 ; i <= n ; i++) {
            for(int j = 0 ; j <= m ; j++) {
                dp[i][j] = -1;
            }
        }

        return backtrack(0, 0, n, m);
    }
};
