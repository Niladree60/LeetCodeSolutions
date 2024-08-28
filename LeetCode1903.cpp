class Solution {
public:
    string largestOddNumber(string s) {
        string ans = "";
        int indx = -1;
        for(int i = s.size()-1 ; i >= 0 ; i--)
        {
            int x = (s[i]-'0');
            if(x%2)
            {
                indx = i;
                break;
            }
        }
        if(indx != -1) return s.substr(0,indx+1);
        else return "";
    }
};
