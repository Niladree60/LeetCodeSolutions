class Solution {
public:
    int singleNumber(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size();
        if(n<3) return a[0];
        if(a[0] != a[1]) {
            return a[0];
        }
        if(a[n-1] != a[n-2]) {
            return a[n-1];
        }

        for(int i = 1 ; i <= n-2 ; i++) {
            if(a[i] != a[i-1] and a[i] != a[i+1]) {
                return a[i];
            }
        }

        return -1;
    }
};
