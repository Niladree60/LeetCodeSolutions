class Solution {
public:
    int maxPoints(vector<vector<int>>& a) {
        if(a.size() <= 2)
        {
            return a.size();
        }
        int n = a.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                // initial slope calculation
                int x1 = a[i][0];
                int y1 = a[i][1];
                int x2 = a[j][0];
                int y2 = a[j][1];
                int l = 2;
                for(int k = 0 ; k < n and k != i and k != j ; k++)
                {
                    int x = a[k][0];
                    int y = a[k][1];
                    if((y2-y1)*(x-x1) == (y-y1) * (x2 - x1))
                    l++;
                }
                ans = max(ans,l);
            }
        }
        return ans;
    }
};
