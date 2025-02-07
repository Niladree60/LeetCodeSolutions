class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> st(bank.begin(), bank.end());
        if (!st.count(end)) return -1;
        
        queue<string> q;
        q.push(start);
        int steps = 0;
        string cur, t;

        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                cur = q.front();
                q.pop();
                st.erase(cur);

                if (cur == end) return steps;

                for (int i = 0; i < 8; i++) {
                    for (char c : {'A', 'C', 'G', 'T'}) {
                        t = cur;
                        t[i] = c;
                        
                        if (st.count(t)) q.push(t);
                    }
                }
            }
            steps++;
        }

        return -1;
    }
};
