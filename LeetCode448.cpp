class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        vector<int> vc;
        int n = a.size();

        for(int i = 0 ; i < n ; i++) {
            int val = abs(a[i]) - 1;
            if(a[val] > 0) {
                a[val] *= -1;
            } 
        }
        for(int i = 0 ; i < n ; i++) {
            if(a[i] > 0) vc.push_back(i+1);
        }
        return vc;
    }
};
