class Solution {
public:
    int rob(vector<int>& a) {
       if(a.size() == 0) return 0;
        if(a.size() == 1) return a[0];
        if(a.size() == 2) return max(a[0],a[1]);
        vector<int > v1(a.begin(),a.end()-1);
        vector<int > v2(a.begin()+1,a.end());
        return max(robber(v1),robber(v2));
    }
private:
    int robber(vector<int> &a)
    {
        int n = a.size();
        int dp[n+1];
        dp[0] = a[0];
        dp[1] = max(a[0],a[1]);
        for(int i = 2 ; i < n ; i++)
        {
            dp[i] = max(dp[i-1],dp[i-2]+a[i]);
        }
        return dp[n-1];
    }
};
