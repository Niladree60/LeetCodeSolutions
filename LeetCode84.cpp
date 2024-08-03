class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<pair<int, int>> stk; // height - index
        int ans = 0, n = a.size();

        for(int i = 0 ; i < n ; i++) {
            int start = i;
            while(!stk.empty() and stk.top().first > a[i]) {
                int indx = stk.top().second;
                int width = i - indx;
                int height = stk.top().first;
                ans = max(ans, width * height);
                stk.pop();
                start = indx;
            }
            stk.push(make_pair(a[i], start));
        }

        while(!stk.empty()) {
            int height = stk.top().first;
            int width = n - stk.top().second;
            ans = max(ans, width*height);
            stk.pop();
        }

        return ans;
    }
};
