class Solution {
public:
    vector<int> majorityElement(vector<int> & n) {
        int limit = n.size()/3;
        map<int, int> mp;
        vector<int> ans;
        for(int x : n)
        {
            mp[x]++;
            
        }
        for(auto it : mp)
        {
            if(it.second > limit)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
        
        
    }
};
