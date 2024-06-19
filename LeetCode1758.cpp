class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string a,b;
        for(int i =0 ; i < n ; i++) {
            if(i%2 == 1) {
                a += '1';
                b += '0';
            } else if(i % 2 == 0) {
                a += '0';
                b += '1';
            }
        }
        int dif_a = 0, dif_b = 0;
        for(int i =0  ; i< n ; i++) {
            if(s[i] != a[i]) dif_a++;
            if(s[i] != b[i]) dif_b++;
        }
        return min(dif_a, dif_b);
    }
};
