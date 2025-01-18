class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int> &vis) {
        vis[node] = true;

        for(int i = 0 ; i < isConnected[node].size() ; i++) {
            if(isConnected[node][i] == 1 and !vis[i]) {
                dfs(i, isConnected, vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int ans = 0;

        for(int i = 0 ; i < n ; i++) {
            if(!vis[i]) {
                ans++;
                dfs(i, isConnected, vis);
            }
        }

        return ans;
    }
};
