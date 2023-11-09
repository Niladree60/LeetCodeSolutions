class Solution {
public:
    int missingNumber(vector<int>& a) {
        set<int> st;
        int ans;

        for(int x : a) {
            st.insert(x);
        }
        
        for(int i =0  ; i <= a.size() ; i++) {
            if(!st.count(i)) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};
