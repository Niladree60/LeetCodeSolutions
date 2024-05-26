class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for(auto x : emails)
        {
            string temp = "";
            for(int i =0  ; i < x.size() ; i++)
            {
                if(x[i] == '.') {
                    continue;
                }
                if(x[i] == '+' or x[i] == '@') {
                    break;
                }
                temp += x[i];
            }
            temp += x.substr(x.find('@'));
            st.insert(temp);
        }
        return st.size();
    }
};
