class Solution {
public:
    long long largestPerimeter(vector<int>& a) {
        sort(a.begin(),a.end());
        long long ans = -1, temp = a[0] + a[1];

        for(int i = 2 ; i < a.size() ; i++) {
            if(temp > a[i]) {
                ans = max(ans, temp + a[i]);
            }
            temp += a[i];
        }

        return ans;

    }
};
