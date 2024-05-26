class Solution {
public:
    int partitionString(string s) {
        set<char> st;
        int ans = 0;
        for(char c : s) {
            if(st.count(c)) {
                ans++;
                st.clear();
            }
            st.insert(c);
        }
        if(st.size()) ans++;
        return ans;
    }
};
