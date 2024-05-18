class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        map<int, int> mp;
        for(int x : a) {
            mp[x]++;
        }
        vector<pair<int, int>> vc;
        for(auto &it : mp) {
            vc.push_back(make_pair(it.second, it.first));
        }
        sort(vc.begin(),vc.end());
        reverse(vc.begin(),vc.end());
        vector<int> ans;
        for(int i = 0 ; i< k ; i++) {
            ans.push_back(vc[i].second);
        }
        return ans;
    }
};
