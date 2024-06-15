class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) {
        stack<int> st;
        int j = 0;
        for(int i =0  ; i< push.size() ; i++)
        {
            st.push(push[i]);
            while(!st.empty() and st.top() == pop[j])
            {
                st.pop();
                j++;
            }
            
                
        }
        return st.empty();
    }
};
