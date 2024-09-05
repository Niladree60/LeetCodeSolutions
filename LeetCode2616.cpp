class Solution {
public:
    int minimizeMax(vector<int>& a, int p) {
        sort(a.begin(), a.end());
        int low = 0, high = 1e9 + 7;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int pairs = 0;

            for(int i = 1 ; i < a.size() ; i++) {
                if(a[i] - a[i-1] <= mid) {
                    pairs++;
                    i++;
                }
            }

            if(pairs >= p) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
