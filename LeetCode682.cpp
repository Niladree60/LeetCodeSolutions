class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> st;
        for(string x : operations)
        {
            if(x == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(x == "D")
            {
                st.push(st.top()*2);
            }
            else if(x == "C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(x));
            }
        }
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
