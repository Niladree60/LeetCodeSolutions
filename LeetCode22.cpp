class Solution {
public:
    void func(string cur, int open, int close, int n, vector<string> &ans)
    {
        if(open == n and close == n) {
            ans.push_back(cur);
            return;
        }

        if(open < n) {
            func(cur + '(', open+1,close, n, ans);
        }

        if(close < open) {
            func(cur + ')', open,close+1, n, ans);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func("",0,0,n,ans);
        return ans;
    }
};
