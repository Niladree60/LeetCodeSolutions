class Solution {
public:
    string removeKdigits(string s, int k) {
        string ans = "";
        for(auto c : s)
        {
            while(ans.back() > c and ans.length() and k)
            {
                ans.pop_back();
                k--;
            }
            if(c != '0' or ans.size())
            {
                ans.push_back(c);
            }
        }
        while(ans.length() and k--)
        {
            ans.pop_back();
        }
        return ans.empty() ? "0" : ans;
    }
};
