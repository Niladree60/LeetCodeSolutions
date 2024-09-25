class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, diposit = 1, days = 0;

        while(days < n) {
            ans += diposit;
            days += 1;
            diposit += 1;

            if(days % 7 == 0) {
                diposit = ( days / 7 ) + 1;
            }
        }

        return ans;
    }
};
