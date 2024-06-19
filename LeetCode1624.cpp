class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char, vector<int>> mp;
        for(int i = 0 ; i < s.size() ; i++) {
            mp[s[i]].push_back(i);
        }
        int ans = -1;
        for(auto it : mp) {
            vector<int> vc = it.second;
            if(vc.size() >= 2) {
                int val = vc.back() - vc.front() - 1;
                ans = max(ans, val);
            }
        }

        return ans;
    }
};
