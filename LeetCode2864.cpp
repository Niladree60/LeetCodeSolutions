class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end());
        reverse(s.begin(), s.end());

        int indx_one = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '1') {
                indx_one = i;
            }
        }

        swap(s[indx_one], s[s.size()-1]);

        return s;
    }
};
