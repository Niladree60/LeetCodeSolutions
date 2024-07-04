class Solution {
public:
    int minOperations(vector<int>& a) {
        int ans = 0, n = a.size();
        map<int, int> mp;
        for(int x : a) {
            mp[x]++;
        } 

        for(auto &it : mp) {
            int f = it.second;
            if(f == 1 ) {
                ans = -1;
                break;
            } else {
                ans += (f+2)/3;
            }
        }

        return ans;
    }
};
