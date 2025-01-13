class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<int> in(n+1, 0), out(n + 1, 0);

        for(auto x : edges) {
            int a = x[0], b = x[1];
            in[a]++;
            out[a]++;
            in[b]++;
            out[b]++;
        }

        for(int i = 1 ; i <= n ; i++) {
            if(in[i] == n - 1 and out[i] == n - 1) {
                return i;
            }
        }
        
        return -1;
    }
};
