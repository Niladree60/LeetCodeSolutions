class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) {
        long long int sum = 0, ans = INT_MAX, i = 0 , j = 0;

        while(j < a.size()) {
            sum += a[j];

            while(sum >= k) {
                sum -= a[i];
                ans = min(ans, j - i + 1);
                i++;
            }

            j++;
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};
