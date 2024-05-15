class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();
        int mn[n+2];
        int m = a[0];
        for(int i =0 ; i < n ; i++)
        {
            m = min(a[i],m);
            mn[i] = m;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            ans = max(ans,abs(a[i]-mn[i]));
        }
        return ans;
    }
};
