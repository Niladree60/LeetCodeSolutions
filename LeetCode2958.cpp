class Solution {
public:
    int maxSubarrayLength(vector<int>& a, int k) {
        int ans = 0, i = 0, j = 0;
        map<int, int> mp;

        while(j < a.size()) {
            mp[a[j]]++;

            while(mp[a[j]] > k) {
                mp[a[i]]--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};
