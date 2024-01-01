class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        vector<int> ans;
        for(int x : a)
        {
            ans.push_back(x);
        }
        for(int x : a)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
