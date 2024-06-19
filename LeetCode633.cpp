class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long int i = 0 ; i <= sqrt(c) ; i++)
        {
            long long int x = c - i*i;
            double sq = sqrt(x);
            if(sq == (long long int) sq)
            {
                return true;
            }
        }
        return false;
    }
};
