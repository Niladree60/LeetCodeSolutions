class Solution {
public:
    int numSubseq(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int mod = 1e9+7;
        int n = a.size();
        vector<long long int> power(n,1);
        for(int i = 1 ; i < n ; i++)
        {
            power[i] = (power[i-1]*2)%mod;
        }
        int ans = 0;
        int l = 0 , r = a.size()-1;
        while(l <= r)
        {
            if(a[l]+a[r] > k)
            {
                r--;
            }
            else
            {
                ans = (ans+ power[r-l]) %mod;
                l++;
            }
        }
        return ans%mod;
    }
};
