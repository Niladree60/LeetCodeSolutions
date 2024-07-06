class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        bool is_one_found = false;
        int n = a.size();

        for(int i = 0 ; i < a.size() ; i++) {
            if(a[i] == 1) is_one_found = true;
            if(a[i] <= 0 or a[i] > n) a[i] = 1;
        }

        if(!is_one_found) return 1;
        a.push_back(1);

        for(int i = 0 ; i < a.size() ; i++) {
            int x = abs(a[i]);
            
            if(a[x] > 0) {
                a[x] *= -1;
            }
        }

        for(int i = 1  ; i <= n ; i++) {
            if(a[i] > 0 ) {
                return i;
            }
        }

        return n+1;
    }
};
