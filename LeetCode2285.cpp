class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans = 0;
        vector<long long> in(n, 0), degree;

        for(auto it : roads) {
            long long x = it[0], y = it[1];
            in[x]++;
            in[y]++;
        }

        for(long long i = 0 ; i < n ; i++) {
            degree.push_back(in[i]);
        }

        sort(degree.begin(), degree.end());

        for(long long i = 1 ; i <= n ; i++) {
            ans += (long long) (i * degree[i-1]);
        }

        return ans;
    }
};
