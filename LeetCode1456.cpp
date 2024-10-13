class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size(), cnt = 0, ans = 0, sum = 0;
        vector<int> vc(n+1,0);
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');

        for(int i = 0 ; i < n ; i++) {
            if(st.count(s[i])) {
                ans++;
            }
            vc[i] = ans;
        }

        if(n == k) {
            return ans;
        }

        for(int i = 0 ; i <= n - k; i++)
        {
            int end = i+k-1;
            
            if(i == 0) {
                sum = max(sum,vc[end]);
            } else {
                sum = max(sum,vc[end]-vc[i-1]);
            }
        }
        
        return sum;
    }
};
