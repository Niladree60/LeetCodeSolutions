class Solution {
public:
    int majorityElement(vector<int>& n) {
        int limit = n.size()/2;
        
        map<int, int> mp;
        int ans;
        for(int x : n)
        {
            mp[x]++;
            if(mp[x] > limit)
            {
                ans = x;
            }
        }
        return ans;
        
        
    }
};
