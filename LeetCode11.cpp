class Solution {
public:
    int maxArea(vector<int>& a) {
        int i = 0 , j = a.size() - 1;
        int ans = 0;

        while(i < j) {
            int w = j-i;
            int h = min(a[i],a[j]);
            int vol = w*h;
            ans = max(ans , vol);
            if(a[i] > a[j]) {
                j--;
            } else if (a[i] < a[j]) {
                i++;
            } else {
                i++;
                j--;
            }
        }
        return ans;
    }
};
