class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> st;
        int x = 0 , y = 0;
        st.insert({0,0});
        
        for(char s : path) {
            if(s == 'N') {
                y++;
            } else if (s == 'S') {
                y--;
            } else if (s == 'E') {
                x++;
            } else {
                x--;
            }
            if(st.count({x,y})) {
                return true;
            }
            st.insert(make_pair(x,y));
        }

        return false;
    }
};
