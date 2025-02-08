class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size() , m = mat[0].size(), level = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        queue<pair<int,int>> q;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 0){
                    q.push({i , j});
                    vis[i][j] = 1;
                }
            }
        }

        while(!q.empty()){
            int size = q.size();
            level++;

            while(size--) {
                auto front = q.front();
                q.pop();

                for(int i = 0; i < 4; i++) {
                    int x = dir[i].first + front.first;
                    int y = dir[i].second + front.second;

                    if(x < 0 or y < 0 or x >= n or y >= m or vis[x][y] == 1) continue;

                    mat[x][y] = level;
                    vis[x][y] = 1;
                    q.push({x, y});
                }
            }
        }

        return mat;
    }
};
