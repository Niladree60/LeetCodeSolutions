class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        string start = "0000";
        unordered_set<string> st(deadends.begin(),deadends.end()) , seen;
        queue<string> q;
        q.push(start);
        int level = 0;

        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                string word = q.front();
                q.pop();

                if(word == target) {
                    return level;
                }

                if(st.count(word) == 1) continue;
                
                for(int i = 0 ; i <4 ; i++) {
                    string t = word, u = word;
                    t[i] < '9' ? t[i]++ : t[i] = '0';

                    if(seen.count(t) == 0) {
                        q.push(t);
                        seen.insert(t);
                    }

                    u[i] > '0' ? u[i]-- : u[i] = '9';
                    
                    if(seen.count(u) == 0) {
                        q.push(u);
                        seen.insert(u);
                    }
                }
            } 

            level++;
        }

        return -1;
    }
};
