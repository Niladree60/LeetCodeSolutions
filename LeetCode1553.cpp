class Solution {
public:
    int minDays(int n) {
        queue<int> q;
        set<int> st;
        int level = 0;
        q.push(n);

        while(!q.empty()) {
            int size = q.size();
            level++;

            while(size--) {
                int u = q.front();
                q.pop();

                if(u == 0) {
                    return level - 1;
                }

                if(st.count(u)) {
                    continue;
                } else {
                    st.insert(u);
                }

                q.push(u-1);
                
                if(u % 2 == 0) q.push(u / 2);
                if(u % 3 == 0) q.push(u / 3);
            }
        }

        return 0;

    }
};
