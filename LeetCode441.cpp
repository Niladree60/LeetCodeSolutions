class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0 , r = n, ans = 1;

        while(l <= r) {
            long long m = (l+r)/2;
            long long total = m*(m+1)/2;

            if(total == n) {
                return (int) m;
            } else if(n > total) {
                l = m + 1;
                ans = (int) m;
            } else if(n < total) {
                r = m - 1;
            }
        }

        return ans;
    }
};
