class Solution {
public:
    int maxNumberOfBalloons(string s) {
        map<char, int> mp;
        for(int i = 0  ; i < s.size() ; i++) {
            mp[s[i]]++;
        }
        int ans = mp['b'];
        
        ans = min(ans, mp['a']);
        ans = min(ans, mp['l'] / 2);
        ans = min(ans, mp['o'] / 2);
        ans = min(ans, mp['n']);

        return ans;
    }

};
