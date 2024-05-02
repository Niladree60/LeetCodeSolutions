class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 )
        {
            return false;
        }
        long long temp = x;
        long long rev =0 ;
        while(x)
        {
            int rem = x%10;
            rev = (rev*10) + rem;
            x /= 10;
        }
        return temp==rev  ;
    }
};
