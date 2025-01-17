class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
    int n = vals.size(), ans = INT_MIN;
    vector<vector<int>> adj(n);

    for (auto& it : edges) {
        adj[it[0]].push_back(vals[it[1]]);
        adj[it[1]].push_back(vals[it[0]]);
    }

    for (int i = 0; i < n; i++) {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    for (int i = 0; i < n; i++) {
        int sum = vals[i];
        for (int j = 0; j < k && j < adj[i].size(); j++) {
            if (adj[i][j] > 0) {
                sum += adj[i][j];
            } else {
                break;
            }
        }
        ans = max(ans, sum);
    }

    return ans;
}
};
