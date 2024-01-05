class Solution {
public:
    int arraySign(vector<int>& a) {
        int neg = 0;
        bool zero = false;
        for(auto x : a)
        {
            if(x == 0)
            {
                zero = true;
            }
            else if(x < 0)
            {
                neg++;
            }
        }
        if(zero)
        {
            return 0;
        }
        else if(neg%2)
        {
            return -1;
        }
        else return 1;
    }
};
