class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> in(n, 0), ans;

        for(auto x : edges) {
            in[x[1]]++;
        }

        for(int i = 0 ; i < n ; i++) {
            if(in[i] == 0) ans.push_back(i);
        }

        return ans;
    }
};
