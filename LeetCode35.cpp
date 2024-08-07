class Solution {
public:
    int searchInsert(vector<int>& a, int k) {
        int start = 0, end = a.size() - 1;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(k > a[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return start;
    }
};
