class Solution {
public:
    int strStr(string s, string t) {
        int ans = -1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s.substr(i,t.size()) == t)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
