class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int left = 0, right = a.size() - 1;

        while(left < right) {
            int mid = left + (right - left) / 2;

            if(mid%2 == 1) {
                mid--;
            }

            if(a[mid] != a[mid+1]) {
                right = mid;
            } else {
                left = mid + 2;
            }
        }

        return a[left];
    }
};
