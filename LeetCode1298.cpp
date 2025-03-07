class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        queue<int> q;
        int ans = 0;
        vector<bool> reachableClosedBoxes(status.size(), false);

        for(int i : initialBoxes) {
            if(status[i] == 1) {
                q.push(i);
            } else {
                reachableClosedBoxes[i] = true;
            }
        }
            
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            ans += candies[cur];

            for(int i : keys[cur]) {
                if(status[i] == 0 and reachableClosedBoxes[i]) {
                    q.push(i);
                }

                status[i] = 1;
            }

            for(int i : containedBoxes[cur]) {
                if(status[i] == 1) {
                    q.push(i);
                } else {
                    reachableClosedBoxes[i] = true;
                }
            }
        }
        
        return ans;
    }
};
