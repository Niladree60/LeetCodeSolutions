class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int left = 0, right = removable.size(), ans = 0;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            string s1 = s;
            
            for(int i = 0 ; i < mid ; i++) {
                s1[removable[i]] = 'A';
            }

            int l = p.size(), indx = 0;

            for(int i = 0 ; i < s1.size() and indx < l; i++) {
                if(s1[i] == p[indx]) indx++;
            }

            if(l == indx) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
