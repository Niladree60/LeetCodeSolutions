class Solution {
public:
    bool isPrintable(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<int> xmax(61, -1), ymax(61, -1), xmin(61, n), ymin(61, m), in(61);;
        vector<vector<int>> adj(61);

        for(int i =0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                int color = a[i][j];
                xmax[color] = max(i, xmax[color]);
                xmin[color] = min(i, xmin[color]);
                ymax[color] = max(j, ymax[color]);
                ymin[color] = min(j, ymin[color]);
            }
        }

        for(int color = 1 ; color <= 60 ; color++) {
            for(int i = xmin[color] ; i <= xmax[color] ; i++) {
                for(int j = ymin[color] ; j <= ymax[color] ; j++) {
                    if(a[i][j] != color) {
                        adj[color].push_back(a[i][j]);
                        in[a[i][j]]++;
                    }
                }
            }
        }

        int vis = 0;
        queue<int> q;

        for(int i = 1 ; i <= 60 ; i++) {
            if(in[i] == 0) q.push(i);
        }

        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            vis++;

            for(int child : adj[cur]) {
                in[child]--;

                if(in[child] == 0) q.push(child);
            }
        }

        return vis == 60;
    }
};
