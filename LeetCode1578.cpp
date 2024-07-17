class Solution {
public:
    int minCost(string s, vector<int>& a) {
        int i = 0, ans = 0;

        for(int j = 1 ; j < a.size() ; j++) {
            if(s[i] == s[j]) {
                if(a[i] < a[j]) {
                    ans += a[i];
                    i = j;
                } else {
                    ans += a[j]; 
                }
            } else {
                i = j;
            }
        }

        return ans;
    }
};
