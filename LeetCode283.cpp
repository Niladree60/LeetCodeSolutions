class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int x = 0;
        for(int i = 0 ; i < a.size() ; i++) {
            if(a[i] != 0) {
                a[x++] = a[i];
            }
        }
        for(int i = x ; i < a.size() ; i++) {
            a[i] = 0;
        }
    }
};
