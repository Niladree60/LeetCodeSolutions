class Solution {
public:
    bool isFormable(string s, string t) {
        map<char, int> mp;
        for(char x : t) {
            mp[x]++;
        }
        for(char x : s) {
            mp[x]--;
        }
        for(auto it : mp) {
            if(it.second < 0) {
                return false;
            }
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        for(int i =0 ; i < words.size() ; i++) {
            if(isFormable(words[i], chars)) {
                ans += words[i].size();
            }
        }
        return ans;
    }
};
