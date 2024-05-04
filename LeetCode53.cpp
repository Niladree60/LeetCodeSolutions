class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int cur = 0 , sum = INT_MIN;
        for(int i = 0 ; i < a.size() ; i++)
        {
            cur += a[i];
            sum = max(sum,cur);
            cur = max(0,cur);
        }
        return sum;
    }
};
