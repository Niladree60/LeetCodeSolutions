class Solution {
public:
    int count_subarray_less_than_k(vector<int>&a, int k) {
        int i = 0, j = 0, total = 0, sum = 0;

        if (k < 0) return 0;

        while(j < a.size()) {
            sum += a[j];

            while(sum > k) {
                sum -= a[i];
                i++;
            }

            total += (j - i + 1);
            j++;
        }

        return total;
    }

    int numSubarraysWithSum(vector<int>& a, int k) {
        int x = count_subarray_less_than_k(a, k);
        int y = count_subarray_less_than_k(a, k-1);

        return x - y;
    }
};
