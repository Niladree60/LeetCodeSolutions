class Solution {
private:
    bool check(vector<int> &weights, int capacity, int days) {
        int day_count = 1;
        int cur_weight = 0;

        for(auto weight : weights) {
            if(cur_weight + weight > capacity) {
                day_count++;
                cur_weight = 0;
            }

            cur_weight += weight;

            if(day_count > days) {
                return false;
            }
        }

        return true;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(check(weights, mid, days)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
