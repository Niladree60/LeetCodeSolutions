class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size();
        if(n != m) return false;
        map<int,vector<int>> mp1,mp2;
        for(int i = 0 ; i < n ; i++)
        {
            mp1[s[i]].push_back(i);
            mp2[t[i]].push_back(i);
        }
        for(int i =0  ; i< n ; i++)
        {
            vector<int> a = mp1[s[i]];
            vector<int> b = mp2[t[i]];
            if(a != b) return false;
            else continue;
        }
        return true;
    }
};
