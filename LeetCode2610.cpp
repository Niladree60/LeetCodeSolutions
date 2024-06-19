class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        map<int, int> mp;
        int mx = -1;

        for(int x : a) {
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        vector<vector<int>> ans;

        for(int i = 0 ; i < mx ; i++) {
            vector<int> temp;
            for (auto& it : mp) {
                if (it.second > 0) {
                    temp.push_back(it.first);
                    it.second--;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
