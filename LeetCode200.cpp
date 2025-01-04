class Solution {
    int ans = 0, n = 0, m = 0;
    
    void dfs(vector<vector<char>> &a, int i, int j) {
        if(i < 0 or j < 0 or i >= n or j >= m or a[i][j] == '0') return;

        a[i][j] = '0';
        
        dfs(a, i, j+1);
        dfs(a, i, j-1);
        dfs(a, i+1, j);
        dfs(a, i-1, j);
    }
    
public:
    int numIslands(vector<vector<char>>& a) {
        n = a.size();
        m = a[0].size();

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(a[i][j] == '1') {
                    ans++;
                    dfs(a,i,j);
                }
            }
        }

        return ans;
    }
};
