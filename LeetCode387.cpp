class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int indx = -1;
        for(int i =0  ; i < s.size() ; i++)
        {
            mp[s[i]]++;
        }
        for(int i =0 ; i < s.size() ; i++)
        {
            if(mp[s[i]] == 1)
            {
                indx = i;
                break;
            }
        }
        return indx;
    }
};
