class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        const int cnt = 9;
        bool row[cnt][cnt] = {false};
        bool col[cnt][cnt] = {false};
        bool square[cnt][cnt] = {false};

        for(int i = 0 ; i < cnt ; i++) {
            for(int j = 0 ; j < cnt ; j++) {
                if(a[i][j] == '.') continue;
                int indx = a[i][j] - '0' - 1;
                int area = (i/3) * 3 + (j/3);

                if(row[i][indx] or col[j][indx] or square[area][indx]) {
                    return false;
                }
                row[i][indx] = true;
                col[j][indx] = true; 
                square[area][indx] = true;
            }
        }

        return true;
    }
};
