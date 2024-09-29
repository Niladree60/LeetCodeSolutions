class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        long long int left = 0 , right = 0 , total = 0 , ans = 0;
        
        while(right < a.size()) {
            total += a[right];

            while(a[right]* (right-left+1) > total+k ) {
                total -= a[left];
                left++;
            }
            
            ans = max(ans,right-left+1);
            right++;
        }
        
        return ans;
    }
};
