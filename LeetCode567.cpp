class Solution {
public:
    bool checkInclusion(string s, string t) {
        if(s.size() > t.size()) {
            return false;
        }
        
        vector<int> window(26),freq(26);

        for(int i =0  ; i < s.size() ; i++) {
            window[t[i]-'a']++;
            freq[s[i]-'a']++;
        }

        if(window == freq) {
            return true;
        } else {
            int m = s.size();

            for(int i = m ; i < t.size() ; i++) {
                window[t[i] - 'a']++;
                window[t[i-m]-'a']--;
                
                if(window == freq) {
                    return true;
                }
            }

            return false;
        }
    }
    
};
