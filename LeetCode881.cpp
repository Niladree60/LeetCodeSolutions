class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        sort(a.begin(), a.end());
        int i = 0 , j = a.size() - 1;
        int ans = 0;
        while(i <= j) {
            if(a[i]+a[j] > limit) {
                ans++;
                j--;
            } else {
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};
