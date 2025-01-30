class Solution {
public:

    int dfs(int headID, vector<vector<int>> &adj, vector<int>& informTime) {
        int mx = 0;

        for(auto child : adj[headID]) {
            mx = max(mx, dfs(child, adj, informTime));
        }

        return informTime[headID] + mx;
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);

        for(int i = 0 ; i < manager.size() ; i++) {
            if(manager[i] != -1) {
                adj[manager[i]].push_back(i);
            }
        }

        return dfs(headID, adj, informTime);
    }
    
};
