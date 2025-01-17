class Solution {
public:
    int edgeScore(vector<int>& edges) {
        long long n = edges.size(), max_score = -1, ans = -1;
        vector<long long> vc(n, 0);

        for(long long i = 0 ; i < edges.size() ; i++) {
            vc[edges[i]] += i;
        }

        for(long long i = 0 ; i < n ; i++) {
            if(vc[i] > max_score) {
                max_score = vc[i];
                ans = i;
            }
        }

        return ans;
    }
};
