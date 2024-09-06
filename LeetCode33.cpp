class Solution {
public:
    int search(vector<int>& a, int t) {
        int left = 0, right = a.size() - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(a[mid] == t) {
                return mid;
            }
            if(a[left] <= a[mid]) {
                if(t >= a[left] and t <= a[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if(t >= a[mid] and t <= a[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};
