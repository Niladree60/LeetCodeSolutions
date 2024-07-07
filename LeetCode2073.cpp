class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        queue<pair<int,int>> q;
        int time = 0, n = a.size();

        for(int i = 0  ; i < n ; i++) {
            q.push(make_pair(a[i], i));
        }

        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int need = it.first;
            int index = it.second;
            time++;
            need--;

            if(index == k and need == 0) {
                return time;
            }
            if(need > 0) q.push(make_pair(need, index));
        }

        return -1;
        
    }
};
