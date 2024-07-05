class Solution {
public:
    bool checkSubarraySum(vector<int>& a, int k) {
        int pref = 0;
        map<int,int> mp;
        for(int i = 0 ; i < a.size() ; i++)
        {
            pref += a[i];
            pref = pref % k;
            if(pref == 0 and i >= 1)
            {
                return true;
            }
            if(mp.find(pref) != mp.end())
            {
                if(i-mp[pref] >= 2)
                {
                    return true;
                }
                
            }
            else mp[pref] = i;
            
        }
        return false;
        
    }
};
