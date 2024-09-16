class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int ans = 0, sum = 0, i = 0, j = k;

        for(int i = 0 ; i < k ; i++) {
            sum += a[i];
        }

        if(sum >= k * t) ans++;

        while(j < a.size()) {
            sum += a[j++];
            sum -= a[i++];

            if(sum >= k * t) ans++;
        }

        return ans;
    }
};
