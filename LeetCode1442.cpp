class Solution {
public:
    int countTriplets(vector<int>& a) {
        int ans = 0, n = a.size();

        for(int i = 0 ; i < n ; i++) {
            int xor_val = a[i];

            for(int j = i+1; j < n ; j++){
                xor_val ^= a[j];

                if(xor_val == 0) {
                    ans += (j-i);
                }
            }
        }

        return ans;
    }
};
