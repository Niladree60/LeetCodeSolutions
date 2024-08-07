class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<int, int>> stk;
        string res;
        
        for(int i = 0 ; i < s.size() ; i++) {
            if( !stk.empty() and stk.top().first == s[i]) {
                stk.top().second++;
            } else {
                stk.push(make_pair(s[i], 1));
            }

            if(stk.top().second == k) {
                stk.pop();
            }
        }

        while(!stk.empty()) {
            int freq = stk.top().second;
            char ch = stk.top().first;
            stk.pop();

            while(freq) {
                res += ch;
                freq--;
            }
            
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
