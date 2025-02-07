class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int nearestExit(vector<vector<char>>& a, vector<int>& point) {
        int n = a.size() , m = a[0].size();
        a[point[0]][point[1]] = '#';
        queue<pair<int,int>> q;
        q.push({point[0],point[1]});
        int level = 0;

        while(!q.empty()) {
            int size = q.size();
            level++;

            while(size--) {
                auto p = q.front();
                q.pop();

                for(int i =0  ; i < 4 ; i++) {
                    int x = p.first + dir[i].first;
                    int y = p.second + dir[i].second;

                    if(x < 0 or y < 0 or x >= n or y >= m or a[x][y] != '.') continue;
                    if(x == 0 or y == 0 or x == n-1 or y == m-1) return level;

                    a[x][y] = '#';
                    q.push({x,y});
                }
            }
        }
        return -1;
    }
};
