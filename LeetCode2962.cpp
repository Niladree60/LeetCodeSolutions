class Solution {
public:
    long long countSubarrays(vector<int>& a, int k) {
        map<int, int> mp;
        long long n = a.size();
        long long mx_elem = *max_element(a.begin(), a.end());
        long long i = 0, j = 0, total_subarray_less_than_k = 0, total_subarray = n * (n + 1) / 2;

        while(j < a.size()) {
            mp[a[j]]++;

            while(mp[mx_elem] >= k) {
                mp[a[i]]--;
                i++;
            }

            total_subarray_less_than_k += (j - i + 1);
            j++;
        }

        return total_subarray - total_subarray_less_than_k;
    }
};
