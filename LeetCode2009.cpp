class Solution {
public:
    int minOperations(vector<int>& a) {
        int n = a.size();
        int ans = n;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        for(int i = 0 ; i < n ; i++) {
            int max_element = a[i] + n - 1;
            int upperBound = upper_bound(a.begin(), a.end(), max_element) - a.begin();
            int present_unique_element = upperBound - i;
            int required_operation = n - present_unique_element;
            ans = min(ans, required_operation);
        }

        return ans;
    }
};
