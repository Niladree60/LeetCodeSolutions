class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0, len = INT_MAX, counter = t.size(), start = 0;
        map<char,int> mp;
        
        for(char x : t) {
            mp[x]++;
        }

        while(j < s.size()) {
            if(mp[s[j]] > 0) counter--;

            mp[s[j]]--;

            while(counter == 0) {
                if(len > j - i + 1) {
                    len = j - i + 1;
                    start = i;
                }

                mp[s[i]]++;

                if(mp[s[i]] > 0) counter++;

                i++;
            }
            j++;
        }

        return len == INT_MAX ? "" : s.substr(start, len);
    }
};
