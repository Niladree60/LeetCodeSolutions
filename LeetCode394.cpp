class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        int n = s.size();
        for(int i =0 ; i < n ; i++)
        {
            if(s[i] != ']')
            {
                st.push(s[i]);
            }
            else if(s[i] == ']')
            {
                string cur = "";
                while(st.top() != '[')
                {
                    cur = st.top() + cur;
                    st.pop();
                }
                // for popping '['
                st.pop();
                // now detect number
                string num = "";
                while(!st.empty() and isdigit(st.top()) )
                {
                    num = st.top() + num;
                    st.pop();
                }
                int times = stoi(num);
                while(times--)
                {
                    for(int j = 0 ; j < cur.size() ; j++)
                    {
                        st.push(cur[j]);
                    }
                }
            }
        }
        string ans = "";
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
