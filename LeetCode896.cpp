class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        if(is_sorted(a.begin(),a.end()))
        {
            return true;
        }
        else
        {
            for(int i = 1 ; i < a.size() ; i++)
            {
                if(a[i-1] < a[i])
                {
                    return false;
                }
            }
            return true;
        }
    }
};
