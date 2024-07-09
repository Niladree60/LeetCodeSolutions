class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> prev_row(1, poured);

        for(int row  = 1 ; row < query_row + 1 ; row++) {
            vector<double> curr_row(row+1, 0);

            for(int i = 0 ; i < row ; i++) {
                double extra = prev_row[i] - 1;

                if(extra > 0) {
                    curr_row[i] += extra * 0.50;
                    curr_row[i+1] += extra * 0.50;
                }
            }

            prev_row = curr_row;
        }

        return min(1.00, prev_row[query_glass]);
    }
};
