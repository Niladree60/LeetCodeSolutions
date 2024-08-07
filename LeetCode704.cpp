class Solution {
public:
    int search(vector<int>& a, int k) {
        int start = 0 , end = a.size() - 1, indx = -1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(k == a[mid]) {
                indx = mid;
                break;
            } else if (k > a[mid]) {
                start = mid + 1;
            } else if(k < a[mid]) {
                end = mid - 1;
            }
        }

        return indx;
    }
};
