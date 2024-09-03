class Solution {
public:
    vector<int> findArray(vector<int>& a) {
        vector<int> ans;
        int n = a.size();
        ans.push_back(a[0]);
        for(int i = 1 ; i < n ; i++)
        {
            int x = a[i-1]^a[i];
            ans.push_back(x);
        }
        return ans;
    }
};
