class Solution {
public:
    int lower_bound(vector<int>&a, int low, int high, int t) {
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(t > a[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return low;
    }

    vector<int> searchRange(vector<int>& a, int t) {
        int low = 0, high = a.size() - 1;
        int start_position = lower_bound(a, low, high, t);
        int end_position = lower_bound(a, low, high, t+1) - 1;

        if(start_position < a.size() and a[start_position] == t) {
            return {start_position, end_position};
        } else return {-1, -1};
    }
};
