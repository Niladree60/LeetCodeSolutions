class Solution {
public:
    bool checkPossibility(vector<int>& a) {
        if(a.size() == 1)
        {
            return true;
        }
        int cnt = 0;
        for(int i = 1 ; i < a.size() ; i++)
        {
            if(a[i-1] > a[i])
            {
                cnt++;
                if(cnt > 1)
                {
                    return false;
                }
                if(i == 1 or a[i-2] <= a[i])
                {
                    a[i-1] = a[i];// 3 5 4(i) -> 3 4 4
                }
                else
                {
                    a[i] = a[i-1];// 3 5 2(i) -> 3 5 5
                }
            }
        }
        return true;
        
    }
};
