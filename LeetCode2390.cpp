class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        for(char x : s) {
            if(!ans.empty() and x == '*') {
                ans.pop_back();
            } else {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
