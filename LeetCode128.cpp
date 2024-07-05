class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        set<int> st(a.begin(), a.end());
        int ans = 0;

        for(int x : st) {
            if(!st.count(x-1)) {
                int length = 1;

                while(st.count(x+length)) {
                    length++;
                }

                ans = max(ans, length);
            }
        }

        return ans;

    }
};
