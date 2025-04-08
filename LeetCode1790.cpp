class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string t1 = s1 , t2 = s2;
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        
        if(t1 == t2) {
            int cnt = 0;

            for(int i = 0 ; i < s1.size() ; i++) {
                if(s1[i] != s2[i]) {
                    cnt++;
                }
            }

            if(cnt == 2 or cnt == 0) {
                return true;
            }
            
            return false;
        }

        return false;
    }
};
