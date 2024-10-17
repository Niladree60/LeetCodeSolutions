class Solution {
public:

    int equalSubstring(string s, string t, int maxCost) {
        int ans = 0, i = 0 , j = 0, sum = 0;

        while(j < s.size()) {
            sum += abs(s[j] - t[j]);

            while(sum > maxCost) {
                sum -= abs(s[i] - t[i]);
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};
