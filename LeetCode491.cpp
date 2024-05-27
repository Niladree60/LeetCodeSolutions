class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        map<int,int> mp;
        for(int i = 0 ; i < b.size() ; i++)
        {
            mp[b[i]] = i;
        }
        vector<int> vc;
        for(int i =0 ; i < a.size() ; i++)
        {
            int ans = -1;
            for(int j = mp[a[i]] + 1; j < b.size() ; j++)
            {
                if(b[j] > a[i])
                {
                    ans = b[j];
                    break;
                }
            }
            vc.push_back(ans);
        }
        return vc;
    }
};
