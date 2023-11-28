class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indx = 0;
        
        for(int i =0  ; i < t.size() ; i++) {
            if(s[indx] == t[i]) indx++;
        }

        return indx == s.size();
    }
};
