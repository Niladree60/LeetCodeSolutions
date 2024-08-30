class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low = 1;
        long long int high = *max_element(piles.begin(), piles.end());
        long long int result = high;

        while(low <= high) {
            long long int mid = low + (high - low) / 2;
            long long int hours = 0;

            for(int i = 0 ; i < piles.size() ; i++) {
                hours += ceil((double) piles[i] / mid);
            }

            if(hours <= h) {
                result = min(result, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return (int)result;
    }
};
