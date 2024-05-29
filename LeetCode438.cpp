class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> window(26,0);
       vector<int> freq(26,0);
       if(p.size() > s.size())
       {
           return {};
       } 
       for(int i = 0 ; i < p.size() ; i++)
       {
           window[s[i]-'a']++;
           freq[p[i]-'a']++;
       }
       vector<int> ans;
       if(window == freq)
       {
           ans.push_back(0);
       }
       for(int i = p.size() ; i < s.size() ; i++)
       {
           window[s[i-p.size()]-'a']--;
           window[s[i]-'a']++;
           if(window == freq)
           {
               ans.push_back(i-p.size()+1);
           }
       }
       return ans;
    }
};
