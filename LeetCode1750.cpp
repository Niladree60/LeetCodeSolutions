class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size()-1;

        while(i < j and s[i] == s[j]) {
            auto temp = s[i];
            while(i <= j and s[i] == temp) {
                i++;
            }
            while(i <= j and  s[j] == temp) {
                j--;
            }
        }

        return j-i+1;
    }
};
