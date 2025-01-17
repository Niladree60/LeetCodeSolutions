class Solution {
public:
    bool isPossible(int n, vector<vector<int>>& edges) {
        vector<unordered_set<int>> adj(n+1);
        vector<int> odd;

        for(auto it : edges) {
            adj[it[0]].insert(it[1]);
            adj[it[1]].insert(it[0]);
        }

        for(int i=1;i<=n;i++) {
            if(adj[i].size() % 2 == 1) odd.push_back(i);
        }

        if(odd.size()==2) {
            for(int i = 1 ; i <= n ; i++) {
                if(!adj[odd[0]].count(i) && !adj[odd[1]].count(i)) return true;
            }
        }

        if(odd.size()==4) {
            return (!adj[odd[0]].count(odd[1]) && !adj[odd[2]].count(odd[3])) 
                || (!adj[odd[0]].count(odd[2]) && !adj[odd[1]].count(odd[3])) 
                || (!adj[odd[0]].count(odd[3]) && !adj[odd[1]].count(odd[2]));
        }

        return odd.size()==0;
    }
};
