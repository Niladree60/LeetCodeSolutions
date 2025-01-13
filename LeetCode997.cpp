class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 and n == 1) return 1;

        vector<int> in(n+1,0);
        vector<int> out(n+1,0);

        for(auto it : trust) {
            out[it[0]]++;
            in[it[1]]++;
        }

        for(int i = 1 ; i <= n ; i++) {
            if(in[i] == n-1 and out[i] == 0) return i;
        }

        return -1;
    }
};
