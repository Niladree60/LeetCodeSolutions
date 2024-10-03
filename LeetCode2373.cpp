class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& a) {
        int n = a.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2));

        for(int i = 1 ; i <= n-2 ; i++) {
            for(int j = 1 ; j <= n - 2 ; j++) {
                int mx = 0;
                
                for(int r = i - 1 ; r <= i + 1 ; r++) {
                    for(int c = j - 1 ; c <= j + 1 ; c++) {
                        mx = max(a[r][c], mx);
                    }
                }

                ans[i-1][j-1] = mx;
            }
        }

        return ans;
    }
};
