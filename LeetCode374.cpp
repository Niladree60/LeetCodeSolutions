/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    #define ll long long
public:
    int guessNumber(int n) {
        ll l = 0, r = n;
        while(true)
        {
            ll m = (l+r)/2;
            ll res = guess(m);
            if(res == -1)
            {
                r = m-1;
            }
            else if(res == 1)
            {
                l = m+1;
            }
            else return m;
        }
    }
};
