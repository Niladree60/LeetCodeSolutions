class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int total_sum = accumulate(a.begin(), a.end(), 0);
        int target_sum = total_sum - x, i = 0, j = 0, window_sum = 0, max_window_size = 0;

        if(target_sum == 0) {
            return a.size();
        }

        if(target_sum < 0) {
            return -1;
        }

        while(j < a.size()) {
            window_sum += a[j];

            while(window_sum > target_sum) {
                window_sum -= a[i];
                i++;
            }

            if(window_sum == target_sum) {
                max_window_size = max(max_window_size, j - i + 1);
            }

            j++;
        }

        if (max_window_size == 0) return -1;
        else return a.size() - max_window_size;
    }
};
