class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        set <int> row, col;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(a[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(row.count(i) or col.count(j)) {
                    a[i][j] = 0;
                }
            }
        }
    }
};
