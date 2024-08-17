class Solution {
    #define ll long long
public:
    bool isPerfectSquare(int n) {
        ll sqrt;
        for(ll i = 1 ; i*i <= n ; i++)
        {
            sqrt = i*i;
        }
        return sqrt == n;
    }
};
