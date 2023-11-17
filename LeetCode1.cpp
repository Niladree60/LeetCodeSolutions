class Solution {
public:
    vector<int> twoSum(vector<int>& a, int b) {
        map<int,int> mp;
        vector<int> vc;

        for(int i = 0 ; i < a.size() ; i++)
        {
            if(mp.find(b-a[i]) != mp.end())
            {
                vc.push_back(i);
                vc.push_back(mp[b-a[i]]);
                break;
            }
            mp[a[i]] = i;
        }
        return vc;
    }
};
