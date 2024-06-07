class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        pair<int,char> p[s.size()];
        int i = 0;

        for(int i =0 ; i < s.size() ; i++) {
            mp[s[i]]++;
        }

        for(auto x : mp) {
            p[i].first = x.second;
            p[i].second = x.first;
            i++;
        }

        sort(p,p+i);
        reverse(p,p+i);
        string ans = "";

        for(int j =0 ; j < i ; j++) {
            int x = p[j].first;

            for(int k = 0 ; k < x ; k++) {
                ans+=p[j].second;
            } 
        }
        return ans;
    }
};
