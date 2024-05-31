class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> first, second;
        for(char x : s) {
            if(x == '#') {
                if(first.size()) first.pop();
            } else {
                first.push(x);
            }
        }
        for(char x : t) {
            if(x == '#') {
                if(second.size()) second.pop();
            } else {
                second.push(x);
            }
        }

        return first == second;
    }
};
