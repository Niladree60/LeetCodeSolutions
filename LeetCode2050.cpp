class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> adj(n);
        vector<int> in(n), cost(n);
        queue<int> q;

        for(auto it : relations) {
            int x = it[0] - 1;
            int y = it[1] - 1;
            adj[x].push_back(y);
            in[y]++;
        }

        for(int i = 0 ; i < n ; i++) {
            if(in[i] == 0) q.push(i);
        }

        while(!q.empty()) {
            int cur = q.front();
            cost[cur] += time[cur];
            q.pop();

            for(int child : adj[cur]) {
                in[child]--;
                cost[child] = max(cost[child], cost[cur]);

                if(in[child] == 0) q.push(child);
            }
        }

        int ans = 0;

        for(int x : cost) ans = max(ans, x);

        return ans;
    }
};
