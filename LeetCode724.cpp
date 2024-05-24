class Solution {
 #define ll long long
public:
    int pivotIndex(vector<int>& a) {
        ll right_sum = accumulate(a.begin(),a.end(),0);
        ll ans = -1;
        ll left_sum = 0;
        for(int i =0 ; i < a.size() ; i++)
        {
            right_sum -= a[i];
            if(left_sum == right_sum)
            {
                return i;
            }
            left_sum += a[i];
        }
        return -1;
    }
};
