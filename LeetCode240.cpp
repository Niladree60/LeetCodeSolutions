class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a , int target) {
        int n = a.size() , m = a[0].size(), i = 0 , j = m-1;

        while(i < n and j >= 0 ) {
            if(a[i][j] == target) {
                return true;
            } else if(a[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }

        return false;
    }
};
