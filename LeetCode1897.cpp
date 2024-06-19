class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int> mp;

        for(int i = 0 ; i < words.size() ; i++) {
            string s = words[i];

            for(int j = 0; j < s.size() ; j++) {
                mp[s[j]]++;
            }
        }

        bool ok = true;
        int n = words.size();
        
        for(auto it : mp) {
            if(it.second % n != 0) {
                ok = false;
                break;
            }
        }

        return ok;
    }
};
