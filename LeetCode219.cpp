class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        vector<pair<int,int >> vc;
        for(int i = 0 ; i < a.size() ; i++) {
            vc.push_back(make_pair(a[i],i));
        }

        sort(vc.begin(),vc.end());

        for(int i = 1 ; i < vc.size() ;i++) {
            if(vc[i].first == vc[i-1].first ) {
                if(vc[i].second - vc[i-1].second <= k) {
                    return true;
                }
            }
        }
        return false;
    }
};
