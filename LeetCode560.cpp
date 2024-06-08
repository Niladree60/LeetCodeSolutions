class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        map<int,int> mp;
        int sum = 0,ans = 0;
        mp[sum] = 1;

        for(auto x : a) {
            sum += x;
            int f = sum-k;

            if(mp.find(f) != mp.end()) {
                ans += mp[f];
            }
            
            mp[sum]++;
        }

        return ans;
    }
};
