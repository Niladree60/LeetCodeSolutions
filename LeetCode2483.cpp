class Solution {
public:
    int bestClosingTime(string s) {
        int ans = 0, indx = -1, total = 0;

        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == 'Y') total++;
            else total--;

            if(total > ans) {
                ans = total;
                indx = i;
            }
        }
        
        return indx + 1;
    }
};
