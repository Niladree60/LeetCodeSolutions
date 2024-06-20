class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> vc;
        for(int i =0  ; i < a.size() ; i++) {
            int num = abs(a[i]);
            int indx = num -1;
            if(a[indx] < 0) {
                vc.push_back(num);
            }

            a[indx] *= -1;
        }
        return vc;
    }
};
