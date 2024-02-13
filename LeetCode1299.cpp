class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        vector<int> vc(a.size());
        vc[a.size()-1] = -1;
        int mx = -1;
        for(int i = a.size()-2 ; i >= 0 ; i--)
        {
            mx = max(mx,a[i+1]);
            vc[i] = mx;
        }
        return vc;
    }
};
