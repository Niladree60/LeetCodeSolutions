class Solution {
public:
    bool find132pattern(vector<int>& a) {
        stack<int> st;
        int check = INT_MIN;

        for(int i = a.size()-1 ; i >= 0 ; i--) {
            if(a[i] >= check) {
                while(!st.empty() and a[i] > st.top()) {
                    check = st.top();
                    st.pop();
                }
                st.push(a[i]);
            }
            else if(a[i] < check) {
                return true;
            }
        }
        return false;
    }
};
