class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        vector<int> vc;
        set<int> st;
        for(int  i = 0 ; i < a.size() ; i++)
        {
            st.insert(a[i]);
        }
        for(int i = 1 ; i <= a.size() ; i++)
        {
            if(st.count(i) == 0)
            {
                vc.push_back(i);
            }
        }
        return vc;
    }
};
