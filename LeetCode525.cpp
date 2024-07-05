class Solution {
public:
    int findMaxLength(vector<int>& a) {
        map<int, int> mp;
        int mx = 0, n = a.size(), sum = 0;
        mp[0] = -1;

        for(int i = 0 ; i < n ; i++) {
            sum += a[i] == 1 ? 1 : -1;
            
            if(mp.count(sum)) {
                mx = max(mx, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }

        return mx;
    }
};
