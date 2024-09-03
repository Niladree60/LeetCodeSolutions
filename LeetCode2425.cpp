class Solution {
public:
    int xorAllNums(vector<int>& a, vector<int>& b) {
        int n = a.size() , m = b.size();
        if(n%2 == 0 and m%2 == 0)
        {
            return 0;
        }
        else
        {
            int x = 0,y = 0;
            for(int i = 0 ; i < n ; i++)
            {
                x = x^a[i];
            }
            for(int i = 0 ; i < m ; i++)
            {
                y = y^b[i];
            }
            if(m%2 == 0 and n%2 == 1)
            {
                return y;
            }
            else if(n%2 == 0 and m%2 == 1)
            {
                return x;
            }
            else
            {
                return x^y;
            }
        }
    }
};
