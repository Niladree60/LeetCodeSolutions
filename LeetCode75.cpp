class Solution {
public:
    void sortColors(vector<int>& a) {
        int zero = 0, one = 0, two = 0;
        for(int i = 0 ; i < a.size() ; i++) {
            if(a[i] == 0) zero++;
            if(a[i] == 1) one++;
            if(a[i] == 2) two++;
        }
        int indx = 0;
        while(zero--) {
            a[indx++] = 0;
        }
        while(one--) {
            a[indx++] = 1;
        }
        while(two--) {
            a[indx++] = 2;
        }
    }
};
