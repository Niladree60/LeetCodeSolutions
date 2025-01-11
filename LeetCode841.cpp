class Solution {
public:
    void dfs(vector<vector<int>>&a, vector<bool> &vis, int node) {
        if(vis[node]) return;
        
        vis[node] = true;

        for(int child : a[node]) {
            dfs(a, vis, child);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& a) {
        vector<bool> vis(a.size(), false);
        dfs(a, vis, 0);

        for(int i = 0 ; i < a.size() ; i++) {
            if(!vis[i]) {
                return false;
            }
        }

        return true;
    }
};
