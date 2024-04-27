class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int n = a.size();
        for(int i = n-2 ; i >= 0 ; i--)
        {
            for(int j = 0 ; j <= a[i].size()-1 ; j++)
            {
                a[i][j] += min(a[i+1][j+1],a[i+1][j]);
            }
            
        }
        return a[0][0];
    }
};
