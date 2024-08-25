class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        int left = 0, right = n - 1;

        while(left <= right) {
            int mid = left + (right-left) / 2;

            if(mid > 0 and a[mid] < a[mid-1] ) {
                right = mid - 1;
            } else if (mid < n-1 and a[mid] < a[mid+1]) {
                left = mid + 1;
            } else return mid;
        }

        return -1;
    }
};
