class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int> vc;
        for(int i = 0 ; i < a.size() ; i++)
        {
            vc.push_back(a[i]*a[i]);
        }
        sort(vc.begin(),vc.end());
        return vc;
    }
};
