class Solution {
public:
    int countPrimes(int n) {
        vector<bool> is_prime(n+1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i <= n; i++) {
            if (is_prime[i] && (long long)i * i <= n) {
                for (int j = i * i; j <= n; j += i)
                    is_prime[j] = false;
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(is_prime[i]) cnt++;
        }
        return cnt;
    }
};
