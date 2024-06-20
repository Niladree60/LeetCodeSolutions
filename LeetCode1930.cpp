class Solution {
public:

    int func(string st, string s)
    {
        int j = 0;
        
        for(int i = 0 ; i < s.size() and j < 3 ; i++) {
            
            if(s[i] == st[j]) {
                j++;
            }
        }

        if(j == 3) {
            return 1;
        }
        else return 0;
    }

    int countPalindromicSubsequence(string s) {
        int ans = 0;

        for(char a = 'a' ; a <= 'z' ; a++) {
            for(char b = 'a' ; b <= 'z' ; b++) {
                string st = "";
                st += a;
                st += b;
                st += a;

                if(func(st,s)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
