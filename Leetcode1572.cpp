class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int l = 0 , r = a[0].size() - 1;
        int ans = 0;
        for(int i =0  ; i < a.size() ; i++)
        {
            if(l == r)
            {
                ans += a[i][l];
                l++;
                r--;
            }
            else if(l != r and l < a[0].size()  and r >= 0)
            {
                ans += a[i][l];
                ans += a[i][r];
                l++;
                r--;
            }
        }
        return ans;
    }
};
