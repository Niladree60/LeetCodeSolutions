class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long res = 0;
        map<double , int> mp;
        for(auto &rec : rectangles)
        {
            double ratio = (double) rec[0]/rec[1];
            if(mp.find(ratio) != mp.end()) // if found
            {
                res += mp[ratio];
            }
            mp[ratio]++;
        }
        return res;
    }
};
