class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int mn = INT_MAX;
        for(int i = k -1; i < a.size() ; i++ )
        {
            mn = min(mn,abs(a[i]-a[i-k+1]));
        }
        return mn;
    }
};
