class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> st;
        for(int i = 0 ; i < paths.size() ; i++) {
            st.insert(paths[i][0]);
        }
        string ans;
        for(int i = 0 ; i < paths.size() ; i++) {
            if(st.count(paths[i][0]) == 0) {
                ans = paths[i][0];
                break;
            }
            if(st.count(paths[i][1]) == 0) {
                ans = paths[i][1];
                break;
            }
        }

        return ans;
    }
};
