class Solution {
public:
    int mySqrt(int x) {
        int low = 0 , high  = x;
        while(low < high)
        {
            long long mid = (long long)low + (long long)((long long)high-low+1)/2;
            if((long long)mid*mid > x)
            {
                high = mid-1;
            }
            else low = mid;
        }
        return low;
    }
};
