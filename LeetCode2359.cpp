class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int> dist1(edges.size(), -1), dist2(edges.size(), -1);
        queue<int> q;
        q.push(node1);
        dist1[node1] = 0;

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            if(edges[u] != -1) {
                if(dist1[edges[u]] == -1) { // it will not go in a cycle
                    dist1[edges[u]] = dist1[u] + 1;
                    q.push(edges[u]);
                }
            }
        }

        q.push(node2);
        dist2[node2] = 0;

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            if(edges[u] != -1) {
                if(dist2[edges[u]] == -1) {
                    dist2[edges[u]] = dist2[u] + 1;
                    q.push(edges[u]);
                }
            }
        }

        int minDist = INT_MAX, node = -1;
        
        for(int i = 0  ; i < edges.size() ; i++) {
            if(dist1[i] != -1 and dist2[i] != -1) {
                int maxDist = max(dist1[i], dist2[i]);

                if(maxDist < minDist) {
                    minDist = maxDist;
                    node = i;
                }
            }
        }

        return node;
    }
};
