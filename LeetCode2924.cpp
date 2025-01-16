class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> in(n, 0);
        int no_of_cham = 0, ans = 0;

        for(auto it : edges) {
            in[it[1]]++;
        }

        for(int i = 0 ; i < n ; i++) {
            if(in[i] == 0) {
                ans = i;
                no_of_cham++;
            }
        }

        return no_of_cham > 1 ? -1 : ans;
    }
};
