class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        set<int> first, second;
        
        for(int x : a) {
            first.insert(x);
        }
        
        for(int x : b) {
            second.insert(x);
        }

        for(int x : first) {
            if(second.count(x)) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
