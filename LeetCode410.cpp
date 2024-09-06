class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        int left = 0, right = 0, ans = 0;

        for(int i = 0 ; i < a.size() ; i++) {
            left = max(left, a[i]);
            right += a[i];
        }

        while(left <= right) {
            int mid = left + (right - left) / 2;

            int total_subarray = 0, partial_sum = 0;
            for(int i = 0 ; i < a.size() ; i++) {
                if(a[i] + partial_sum <= mid) {
                    partial_sum += a[i];
                } else {
                    total_subarray++;
                    partial_sum = a[i];
                }
            }

            if(total_subarray < k) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};
