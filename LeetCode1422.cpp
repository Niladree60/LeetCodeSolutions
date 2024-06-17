class Solution {
public:
    int maxScore(string s) {
        int zero = 0 , one = 0, ans = 0;

        for(char x : s) {
            if(x == '1') one++;
        }

        for(int i =0  ; i < s.size() - 1; i++) {
            if(s[i] == '0') {
                zero++;
            } else {
                one--;
            }
            ans = max(ans, zero + one);
        }

        return ans;
    }
};
