class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> ans(n);
        int m = 1;
        for(int i = 0 ; i < n ; i++)
        {
            ans[i] = m;
            m *= a[i];
        }
        m = 1;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            ans[i] *= m;
            m *= a[i];
        }
        return ans;
    }
};
