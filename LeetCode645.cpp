class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        map<int, int> mp;
        set<int> st;
        vector<int> ans;

        for(int x : a) {
            mp[x]++;
            st.insert(x);
        }

        for(auto it : mp) {
            if(it.second == 2) {
                ans.push_back(it.first);
                break;
            }
        }

        for(int i = 1 ; i <= a.size() ; i++) {
            if(!st.count(i)) {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};
