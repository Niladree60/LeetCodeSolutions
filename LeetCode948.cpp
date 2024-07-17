class Solution {
public:
    int bagOfTokensScore(vector<int>& a, int power) {
        sort(a.begin(), a.end());
        int i = 0 , j = a.size() - 1;
        int score = 0, mx = 0;

        while(i <= j) {
            if(a[i] <= power ) {
                score++;
                power -= a[i++];
            } else {
                power += a[j--];
                score--;
            }
            if(score < 0) break;
            mx = max(score,mx);
        }

        return mx;
    }
};
