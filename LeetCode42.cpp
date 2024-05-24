class Solution {
public:
    int maxL[30004+1] = {0}, maxR[30004+1] = {0};
    int trap(vector<int>& a) {
        int n = a.size();
        int mx = 0;
        for(int i = 1 ; i < n ; i++)
        {
            mx = max(mx,a[i-1]);
            maxL[i] = mx;
        }
        mx = 0;
        for(int i = n-2 ; i >= 0 ; i--)
        {
            mx = max(mx,a[i+1]);
            maxR[i] = mx;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int water = min(maxL[i],maxR[i]) - a[i];
            if(water >= 0)
            {
                ans += water;
            }
        }
        return ans;
    }
};
