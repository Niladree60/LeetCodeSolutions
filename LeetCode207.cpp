class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> in(n, 0), completed_course;
        vector<vector<int>> adj(n);
        queue<int> q;

        for(auto it : prerequisites) {
            in[it[0]]++;
            adj[it[1]].push_back(it[0]);
        }

        for(int i = 0 ; i < n ; i++) {
            if(in[i] == 0) q.push(i);
        }

        while(!q.empty()) {
            int cur = q.front();
            completed_course.push_back(cur);
            q.pop();

            for(auto child : adj[cur]) {
                in[child]--;
                if(in[child] == 0) q.push(child); 
            }
        }

        return completed_course.size() == n;
    }
};
