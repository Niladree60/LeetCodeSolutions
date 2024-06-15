class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        stack<int> st;

        for(int i =0  ; i< n ; i++) {
            if(a[i] > 0 or st.empty()) {
                st.push(a[i]);
            }
            else {
                while(!st.empty() and st.top() > 0 and st.top() < abs(a[i])) {
                    st.pop();
                }
                if(!st.empty() and st.top() == abs(a[i])) {
                    st.pop();
                } else if(st.empty() or st.top() < 0) {
                    st.push(a[i]);
                }
            }
        }

        vector<int> res(st.size());

        for(int i = st.size()-1 ; i >= 0 ; i--){
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};
