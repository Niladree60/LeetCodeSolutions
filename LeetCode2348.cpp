class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        vector<int> vc;
        long long ans = 0, cnt = 0;
        for(int i= 0 ; i < a.size() ; i++) {
            if(a[i] == 0) {
                cnt++;
            }
            if(i == a.size()-1 or a[i] != 0) {
                vc.push_back(cnt);
                cnt=0;
            }
        }
        for(int i =0  ; i< vc.size() ; i++) {
            long long x = vc[i];
            ans += x * (x+1)/2;
        }
        return ans;
    }
};
