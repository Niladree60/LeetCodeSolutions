class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& a) {
        vector<int> vc;
        int n = a.size();
        int total_sum = 0, prefix_sum = 0, suffix_sum = 0;

        for(int x : a) {
            total_sum += x;
        }

        for(int i = 0 ; i < n ; i++) {
            prefix_sum += a[i];
            suffix_sum = total_sum - prefix_sum + a[i];
            int left_sum = (i+1)*a[i] - prefix_sum;
            int right_sum = suffix_sum - (n-i)*a[i];
            vc.push_back(left_sum + right_sum);
        }
        
        return vc;
    }
};
