class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowRow = 0, highRow = matrix.size() - 1;

        while(lowRow < highRow) {
            int mid = lowRow + (highRow - lowRow) / 2;

            if(matrix[mid][0] == target) {
                return true;
            } 

            if(target > matrix[mid][0] and target < matrix[mid+1][0]) {
                lowRow = mid;
                break;
            }

            if(target > matrix[mid][0]) {
                lowRow = mid + 1;
            } else {
                highRow = mid - 1;
            }
        }

        int lowCol = 0, highCol = matrix[0].size() - 1;

        while(lowCol <= highCol) {
            int mid = lowCol + (highCol - lowCol) / 2;

            if(matrix[lowRow][mid] == target) {
                return true;
            } else if (target > matrix[lowRow][mid] ){
                lowCol = mid + 1;
            } else {
                highCol = mid - 1;
            }
        }

        return false;
    }
};
