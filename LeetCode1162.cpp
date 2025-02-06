class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
        int n = a.size() , m = a[0].size();
        queue<pair<int,int>>q;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(a[i][j] == 1) {
                    q.push({i,j});
                }
            }
        }

        if(q.size() == 0 or q.size() == n*m) {
            return -1;
        }

        int dis = 0;
        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                pair<int,int> cur = q.front();
                q.pop();
                
                for(int i = 0 ; i < 4 ; i++) {
                    int newX = cur.first + dir[i].first;
                    int newY = cur.second + dir[i].second;
                    
                    if(newX < 0 or newX >= n or newY < 0 or newY >= m or a[newX][newY]) continue;

                    q.push({newX,newY});
                    a[newX][newY] = 1;
                }
            }

            dis++;
        }

        return dis-1;
    }
};
