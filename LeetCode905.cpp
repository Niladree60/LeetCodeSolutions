class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int indx = 0;
        for(int i = 0 ; i < a.size() ; i++) {
            if(a[i]%2 == 0) {
                swap(a[indx], a[i]);
                indx++;
            }
        }
        return a;
    }
};
