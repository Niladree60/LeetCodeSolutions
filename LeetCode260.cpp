class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        int n = a.size();
        vector<int> vc;
        sort(a.begin(), a.end());
        for(int i = 0 ; i < n ; i++) {
            if(i == 0) {
                if(a[0] != a[1]) {
                    vc.push_back(a[0]);
                }
            } else if(i == n-1) {
                if(a[n-1] != a[n-2]) {
                    vc.push_back(a[n-1]);
                }
            } else {
                if(a[i] != a[i+1] and a[i] != a[i-1]) {
                    vc.push_back(a[i]);
                }
            }
        }
        return vc;
    }
};
