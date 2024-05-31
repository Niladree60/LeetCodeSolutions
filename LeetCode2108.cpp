class Solution {
public:
    string firstPalindrome(vector<string>& s) {
        for(string x : s)
        {
            string t = x;
            reverse(x.begin(), x.end());
            if(x == t) return x;
        }
        return "";
    }
};
