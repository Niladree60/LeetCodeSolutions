class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end()); // -2 -1 0 1 5 6 8 9
        vector<vector<int>> res;
        int n = a.size();
        for(int i =0 ; i < n-2 ; i++)
        {
            if(a[i] > 0)
            {
                break;
            }
            if(i > 0 and a[i] == a[i-1])
            {
                continue;
            }
            int j = i+1 , k = n-1;
            while(j < k)
            {
                int sum = a[i] + a[j] + a[k];
                if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else if(sum == 0)
                {
                    res.push_back({a[i],a[j],a[k]});
                    while(j < k and a[j] == a[j+1])
                    {
                        j++;
                    }
                    j++;
                    while(j < k and a[k] == a[k-1])
                    {
                        k--;
                    }
                    k--;
                }
            }
        }
        return res;
    }
};
