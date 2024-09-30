class Solution {
public:
    string convertToTitle(int c) {
        string s = "";

        while(c) {
            c = c - 1;
            char ch = 'A' + c % 26;
            s = ch + s;
            c /= 26;
        }

        return s;
    }
};
