class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i = 2 ; i <= n+1 ; i++)
        {
            auto &p = ans.back();
            vector<int> temp;
            temp.push_back(1);
            for(int j =0 ; j < p.size()-1 ; j++)
            {
                temp.push_back(p[j]+p[j+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans[n];
    }
};
