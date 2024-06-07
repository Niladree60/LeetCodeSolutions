class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& a, int k) {
        sort(a.begin(), a.end());
        vector<vector<int>> vc;
        bool ok = true;

        for(int i =0  ; i< a.size() ; i+=3) {
            int x = a[i], y = a[i+1], z = a[i+2];
            if(z - x > k) {
                ok = false;
                break;
            } else {
                vc.push_back({x,y,z});
            }
        }

        if(!ok) {
            return {};
        } else return vc;
    }
};
