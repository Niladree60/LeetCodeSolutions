class Solution {
public:
    int leastBricks(vector<vector<int>>& a) {
        map<int , int> mp;
        int n = a.size();
        for(auto x : a)
        {
            int sum = 0;
            for(int j =0 ; j < x.size() ; j++)
            {
                sum += x[j];
                if(j != x.size()-1)
                {
                    mp[sum]++;
                }
            }
        }
        int mx  = 0;
        for(auto x : mp)
        {
            mx = max(mx,x.second);
        }
        return n-mx;
    }
};
