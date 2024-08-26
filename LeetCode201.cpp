class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        if(l == 0 or r == 0)
        {
            return 0;
        }
        if((int)log2(l) != (int)log2(r))
        {
            return 0;
        }
        int ans = l;
        for(long long int i = l ; i <= r ; i++)
        {
            ans &= i;
        }
        return ans;

    }
};
