class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> dp;
        dp.push_back(1);
        dp.push_back(1);

        for(int i = 2 ; i <= n ; i++) {
            int x = dp[i-1] + dp[i-2];
            dp.push_back(x);
        }

        return dp[n];
    }
};
